//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef TRANSPORTS_NOPTILUS_HPP_INCLUDED_
#define TRANSPORTS_NOPTILUS_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace Noptilus
  {
    using DUNE_NAMESPACES;

    struct CodedEstimatedState
    {
      static const uint8_t c_id = 0xfe;
      double lat;
      double lon;
      int16_t depth;
      int16_t alt;
      int16_t yaw;

      static size_t
      getSize(void)
      {
        return sizeof(c_id) + sizeof(lat) + sizeof(lon) + sizeof(depth)
        + sizeof(alt) + sizeof(yaw);
      }

      static void
      encode(const IMC::EstimatedState* msg, IMC::UamTxFrame* frame)
      {
        CodedEstimatedState coded;
        frame->data.resize(coded.getSize());
        uint8_t* ptr = (uint8_t*)&frame->data[0];

        coded.depth = msg->depth * 100.0;
        coded.yaw = msg->psi * 100.0;
        coded.alt = msg->alt * 100.0;
        Coordinates::toWGS84(*msg, coded.lat, coded.lon);

        ptr += IMC::serialize(coded.c_id, ptr);
        ptr += IMC::serialize(coded.lat, ptr);
        ptr += IMC::serialize(coded.lon, ptr);
        ptr += IMC::serialize(coded.alt, ptr);
        ptr += IMC::serialize(coded.depth, ptr);
        ptr += IMC::serialize(coded.yaw, ptr);
      }

      static IMC::Message*
      decode(const IMC::UamRxFrame* frame)
      {
        IMC::EstimatedState* estate = new IMC::EstimatedState;
        CodedEstimatedState coded;
        if (frame->data.size() != coded.getSize())
          throw std::runtime_error("invalid size");

        uint8_t* ptr = (uint8_t*)&frame->data[1];

        uint16_t length = frame->data.size() - 1;
        ptr += IMC::deserialize(coded.lat, ptr, length);
        ptr += IMC::deserialize(coded.lon, ptr, length);
        ptr += IMC::deserialize(coded.alt, ptr, length);
        ptr += IMC::deserialize(coded.depth, ptr, length);
        ptr += IMC::deserialize(coded.yaw, ptr, length);

        estate->lat = coded.lat;
        estate->lon = coded.lon;
        estate->alt = coded.alt / 100.0;
        estate->depth = coded.depth / 100.0;
        estate->psi = coded.yaw / 100.0;

        return estate;
      }
    };
  }
}

#endif
