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
// Author: Jose Pinto                                                       *
//***************************************************************************


#ifndef IRIDIUMMESSAGEDEFINITIONS_HPP_
#define IRIDIUMMESSAGEDEFINITIONS_HPP_

# include <DUNE/Config.hpp>
# include <DUNE/IMC/Serialization.hpp>
# include <DUNE/IMC/Definitions.hpp>
# include <DUNE/IMC/Message.hpp>
# include <DUNE/IMC/Factory.hpp>
# include <DUNE/Math.hpp>
# include <DUNE/Math/Angles.hpp>

namespace Transports
{
  namespace Iridium
  {

    static const uint16_t ID_DEVICEUPDATE = 2001;
    static const uint16_t ID_ACTIVATESUB = 2003;
    static const uint16_t ID_DEACTIVATESUB = 2004;
    static const uint16_t ID_IRIDIUMCMD = 2005;

    typedef struct {
      uint16_t id;
      double time;
      double lat, lon;
    } DevicePosition;

    //! All Iridium messages subclass this type
    class IridiumMessage
    {
    public:
      //! The source id for this message (IMC id)
      uint16_t source;
      //! The destination of this message (IMC id)
      uint16_t destination;
      //! The message id (can either be an IMC id or an Iridium extension)
      uint16_t msg_id;

      //! Parse a received message received into an Iridium message
      static IridiumMessage * deserialize(const DUNE::IMC::IridiumMsgRx * msg);

      //! Serialize this message into a data buffer (to be sent via Iridium)
      virtual int serialize(uint8_t * buffer) = 0;

      //! Deserialize an Iridium data buffer
      virtual int deserialize(uint8_t* data, uint16_t len) = 0;

      virtual ~IridiumMessage() {}
    };

    //! An Iridium message that encapsulates an IMC message
    class GenericIridiumMessage : public IridiumMessage
    {
    public:
      GenericIridiumMessage();
      GenericIridiumMessage(DUNE::IMC::Message * msg);
      int serialize(uint8_t * buffer);
      int deserialize(uint8_t* data, uint16_t len);
      ~GenericIridiumMessage();
      DUNE::IMC::Message * msg;
    };

    //! Extension to the IMC protocol used to report a set of device positions
    class DeviceUpdate : public IridiumMessage
    {
    public:
      std::vector<DevicePosition> positions;
      int serialize(uint8_t * buffer);
      int deserialize(uint8_t* data, uint16_t len);
      DeviceUpdate();
      ~DeviceUpdate(){};
    };

    //! Extension to the IMC protocol used request reception of device position updates
    class ActivateSpotSubscription : public IridiumMessage
    {
    public:
      uint16_t imc_id;
      int serialize(uint8_t * buffer);
      int deserialize(uint8_t* data, uint16_t len);
      ActivateSpotSubscription();
      ~ActivateSpotSubscription(){};
    };

    //! Extension to the IMC protocol used to stop receiving device position updates
    class DeactivateSpotSubscription : public IridiumMessage
    {
    public:
      DeactivateSpotSubscription();
      int serialize(uint8_t * buffer);
      int deserialize(uint8_t* data, uint16_t len);
      uint16_t imc_id;
      ~DeactivateSpotSubscription(){};
    };

    //! Extension to the IMC protocol used to send text commands to DUNE vehicles (these messages are reported as received SMS)
    class IridiumCommand : public IridiumMessage
    {
    public:
      IridiumCommand();
      int serialize(uint8_t * buffer);
      int deserialize(uint8_t* data, uint16_t len);
      std::string command;
      ~IridiumCommand(){};
    };

  } /* namespace Iridium */
} /* namespace Transports */
#endif /* IRIDIUMMESSAGEDEFINITIONS_HPP_ */
