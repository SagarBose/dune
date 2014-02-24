//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// Automatically generated.                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.38079011501);
    msg.setSource(29849U);
    msg.setSourceEntity(19U);
    msg.setDestination(12108U);
    msg.setDestinationEntity(104U);
    msg.state = 79U;
    msg.flags = 61U;
    msg.description.assign("MDYAPGKYAWQPYZOVXUIKWXCSNJCLVQMBVEBEWKMXNXULUONGVSDKYNMLQJTPUIIOYFHRVCPBMEJRPCCYKDAVATWSMVXBGOFHIDLUAHZLFNDSNMKWLZXFXWDSSQZYHJQUICHQHUFTKJHKBFYLJHIAGPZZWEPOLRFON");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.769926690926);
    msg.setSource(54335U);
    msg.setSourceEntity(33U);
    msg.setDestination(45001U);
    msg.setDestinationEntity(67U);
    msg.state = 127U;
    msg.flags = 1U;
    msg.description.assign("ERMYUQKFBSCKZAPHWMHYGCBUUIOWTQQZLAYTZAUNLKAEPIFEZEXPVVOPSELHOMJOGASQZFZFDISUUCONHJQVLPSKDG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.550432754112);
    msg.setSource(41444U);
    msg.setSourceEntity(57U);
    msg.setDestination(61610U);
    msg.setDestinationEntity(103U);
    msg.state = 78U;
    msg.flags = 37U;
    msg.description.assign("VTXFOOLEVQUDWPCTJEYGZURALBLUEHOKORYWPNLWJSGZQWXAADMZDXMC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.781295499884);
    msg.setSource(63640U);
    msg.setSourceEntity(187U);
    msg.setDestination(50398U);
    msg.setDestinationEntity(244U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.568792511089);
    msg.setSource(9208U);
    msg.setSourceEntity(229U);
    msg.setDestination(39964U);
    msg.setDestinationEntity(117U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.875311794308);
    msg.setSource(47590U);
    msg.setSourceEntity(88U);
    msg.setDestination(7128U);
    msg.setDestinationEntity(72U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.858688389483);
    msg.setSource(7202U);
    msg.setSourceEntity(200U);
    msg.setDestination(16812U);
    msg.setDestinationEntity(142U);
    msg.id = 79U;
    msg.label.assign("NNMWCMLPKXLPSTXUYJFEFBPDNKLGBRPAGVBZCSMYEZZXQBSLGDDHICDGMXRPAONUQVVESRUJCADOWJVWITTIKXYKIKWQMQFVEEBXUFHAILYUXRFCMBOJGZYPVALEQZQULPYONCKGYLYEPXSRHMBDCTHNHWZOIDEZNTDTHWXGYOSATUBX");
    msg.component.assign("SRBCHRJWEOAVHAWKULJRNSTGUHRJYIUFWQVBTBQZTPXATJMJRQDOMQYEOWZNCPTCEBCECESZGUDFSZEPKVHGPGDLMCMMEUEPBSHWILNXVIUSUGIZDMHJVIMKNOHDDTQWKLTLBADOAFBBFLXXLUOGFGQNIVGQAZWIJCTYNVFKEPDNURYTDWQRITHMZKZJJBNOEXXYFKYHPKASLMVJRAFNWXAYNCIYXPZAY");
    msg.act_time = 31054U;
    msg.deact_time = 47180U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.832157499897);
    msg.setSource(8477U);
    msg.setSourceEntity(45U);
    msg.setDestination(54396U);
    msg.setDestinationEntity(11U);
    msg.id = 196U;
    msg.label.assign("QAYHJBURKOMMAEIGVPWWJYNAMYVMPGPMVRHOAGDVBDWQSULECMHMNRILNJCWCQZVLUKELHTNWIUZQUOASARJWBJUDTHGAQTQTXWMHNEFBWSDLYFTTSAYCYDXGTNXBPOFEKIVKRIGFXHTEKSDXQUOHXGOKCHAYVOZSZYYJSFLUGJZSVNQBLRPGRBBTORADWEESLTUBDINFWPPXCDQHZPUJX");
    msg.component.assign("TIWNPZCVEHAKRFAMOYPLIUQGPDZFKCPBBJBHOOATCXYOVPNURZYNQPRVDIFJIGEWWEIZPZASQIUCWHRCO");
    msg.act_time = 64444U;
    msg.deact_time = 28253U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.876309536539);
    msg.setSource(4828U);
    msg.setSourceEntity(49U);
    msg.setDestination(5086U);
    msg.setDestinationEntity(218U);
    msg.id = 225U;
    msg.label.assign("IKSENCQIEZNUCPUJA");
    msg.component.assign("SNRXLVLNSVEOJWKWOCBMKNLMVEWLTTTKIGOYKFX");
    msg.act_time = 7666U;
    msg.deact_time = 13232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.0635071656427);
    msg.setSource(54279U);
    msg.setSourceEntity(227U);
    msg.setDestination(23866U);
    msg.setDestinationEntity(78U);
    msg.id = 185U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.619154252229);
    msg.setSource(61578U);
    msg.setSourceEntity(120U);
    msg.setDestination(13840U);
    msg.setDestinationEntity(7U);
    msg.id = 37U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.44025888106);
    msg.setSource(30561U);
    msg.setSourceEntity(241U);
    msg.setDestination(12971U);
    msg.setDestinationEntity(105U);
    msg.id = 50U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.498644687788);
    msg.setSource(31940U);
    msg.setSourceEntity(90U);
    msg.setDestination(31278U);
    msg.setDestinationEntity(222U);
    msg.op = 152U;
    msg.list.assign("AMWNEZEPHVIQNUBXGPNDPQULVYAXZIEMOHNUFXHSQOLHBHRV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.431646806536);
    msg.setSource(31939U);
    msg.setSourceEntity(122U);
    msg.setDestination(17109U);
    msg.setDestinationEntity(167U);
    msg.op = 15U;
    msg.list.assign("PPGJCZSOUVJRAOHWOBRFLSVEXMYDMLXM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.0546208654856);
    msg.setSource(50197U);
    msg.setSourceEntity(49U);
    msg.setDestination(39835U);
    msg.setDestinationEntity(208U);
    msg.op = 161U;
    msg.list.assign("MDWACWFEROQRYOONSRXTIHAJEQULQCOPSFDXMWCWTHNGBZEPCIEKGDLLUEWMJFWHDGEQLBFCXXWNUHDFRNXZKQTRPIXOAKGBSZJHDPUCHCNNITSKVVQTVJILOQGIZDHEBMXZYHRVRCOMMJBSJIALWSSJUUGZBMBZAULVQSV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityControl msg;
    msg.setTimeStamp(0.309637755169);
    msg.setSource(31382U);
    msg.setSourceEntity(144U);
    msg.setDestination(1840U);
    msg.setDestinationEntity(118U);
    msg.op = 47U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityControl msg;
    msg.setTimeStamp(0.353085688295);
    msg.setSource(7937U);
    msg.setSourceEntity(162U);
    msg.setDestination(31544U);
    msg.setDestinationEntity(5U);
    msg.op = 201U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityControl msg;
    msg.setTimeStamp(0.760641556542);
    msg.setSource(24750U);
    msg.setSourceEntity(105U);
    msg.setDestination(54737U);
    msg.setDestinationEntity(130U);
    msg.op = 108U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.788168573039);
    msg.setSource(65371U);
    msg.setSourceEntity(188U);
    msg.setDestination(40559U);
    msg.setDestinationEntity(158U);
    msg.value = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.634977234043);
    msg.setSource(56282U);
    msg.setSourceEntity(90U);
    msg.setDestination(44738U);
    msg.setDestinationEntity(40U);
    msg.value = 196U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.392879657711);
    msg.setSource(63525U);
    msg.setSourceEntity(236U);
    msg.setDestination(54666U);
    msg.setDestinationEntity(123U);
    msg.value = 27U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.961364892981);
    msg.setSource(33004U);
    msg.setSourceEntity(135U);
    msg.setDestination(8677U);
    msg.setDestinationEntity(222U);
    msg.consumer.assign("KRXHLADRLMVZUDTLCETGHZAMATXZIQKQUGROTZGHTONCPQPXRWPWMAHGRSBCDULJQTUYXVSXGFVTYFKOELKNWAXCEVFFKCOFTIOPXVKOFGYZXRJINCNEBTNDSIVKNYFKEHVILSJFUIXKZAEMCYNLBBOHMXPYVZYIRMTZSWAJRRPEM");
    msg.message_id = 59086U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.153082015086);
    msg.setSource(23849U);
    msg.setSourceEntity(46U);
    msg.setDestination(44207U);
    msg.setDestinationEntity(127U);
    msg.consumer.assign("AEVXFYKRDEUYXZVSZXTDBZHCTURYWKKTYOJMEXBRONKNJDMFGWTLOWLMSHLFZKLLFKOEUEPCBPYSIRTNBZDDSUQAMFDHKTFQGLLWUVO");
    msg.message_id = 29412U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.103631364364);
    msg.setSource(40116U);
    msg.setSourceEntity(179U);
    msg.setDestination(31267U);
    msg.setDestinationEntity(116U);
    msg.consumer.assign("KEKTOVQRWMRRZLNUPOKSTEERTGABJVTEQTHWUXWGPMTNXQKLNFNKOJDIFABOFNSOTLMZQFRSZYSNWFUIQGRZSEHPNSMRAMJUFCBJKCPSDAKIXJMYMZUSFFUBERLYUGQKMIYJXCZOGTKVDLIOAWDIGGSDAVXSVGCXZMWQLWRFHUIVVAUHPBGOABONTBIHXNYHPDEMHLEVZIJAJCQWGVCPXBUAQYYKNCYJP");
    msg.message_id = 29968U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.412118350001);
    msg.setSource(4851U);
    msg.setSourceEntity(249U);
    msg.setDestination(45607U);
    msg.setDestinationEntity(80U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.338959612867);
    msg.setSource(57448U);
    msg.setSourceEntity(99U);
    msg.setDestination(52637U);
    msg.setDestinationEntity(200U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.589042111906);
    msg.setSource(46262U);
    msg.setSourceEntity(249U);
    msg.setDestination(65259U);
    msg.setDestinationEntity(17U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Parameter msg;
    msg.setTimeStamp(0.271878124754);
    msg.setSource(18422U);
    msg.setSourceEntity(130U);
    msg.setDestination(32389U);
    msg.setDestinationEntity(133U);
    msg.section.assign("TJLPGVUCXIHXNGOHOUKIRNYYDZQTBPDMNSPUWZMEDSKQKZCMBJNFRZOKPFWQEPPOSIZRHKSZXYBRTDDTDRARQJHKOCVWGVEJDQVYSORWSYNSGNTLXHTWXCAWUNCHTXUOTCYADUIBGEIYLXPMCGBCLFXXYEXPQSAFJJVEUGEUH");
    msg.param.assign("QRJSWRLYCPIGUGZPPXOXXIKRDHMWOJKMUZNEFNHKJXMJIYTCZYSTTERCJBRUHCULVJVAPXDABGAANVWRPLZYDWEHZAIQRHZRDBSCDZNTVPFBWKXDOGWWESOPENWQCZMMOALBFTQVQNYBDULOIHLMDKFXYFTYDMFWUEEOLMHZHSPLQUONXZHTFGVYXDCVJARLGECMPIXKQSNISFTBECJIKEGLSMTVQVYFUOUNAQJABTOBHSI");
    msg.value.assign("LPZBWHETZPQFNPNNSTPHRBDUUOCYYUHIJXYFNXYUGXSLADCPVWZREKLKHFWCFRDJJMMYDPMSWYLNUZFMKKDVSQRSGZOSTHGORUZLWGEOIXPXEETLJIEIINCCLGBJGXLNOAEONCJFQDDTJSFEMVEKBYQVBOQCCVBLKJAZXCAMMKVUTZTMAFKWQQWHVBEIAQAHWJBHTYUVDUIVZGXNBRG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Parameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Parameter msg;
    msg.setTimeStamp(0.833319452076);
    msg.setSource(35676U);
    msg.setSourceEntity(59U);
    msg.setDestination(26479U);
    msg.setDestinationEntity(106U);
    msg.section.assign("HCSQLMHENPOIXSYNXLJXBBXMZNNAMHMXHQDDVHENAWQTPFAAGIPSFACTAVVA");
    msg.param.assign("EJRMRIETYRAGUZJASVMVYEIQHWJFFHJRNCXYUANBEQZZDSDSTCBJRGV");
    msg.value.assign("UJODUNJOAXVPJGUCFHCNVHIWLTBBUCUTPEODNSUPQEJPAXNZIMSZVARHBZMVOHBFLTDGENSRLGYPRLANFIXH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Parameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Parameter msg;
    msg.setTimeStamp(0.62476961295);
    msg.setSource(22496U);
    msg.setSourceEntity(151U);
    msg.setDestination(38530U);
    msg.setDestinationEntity(216U);
    msg.section.assign("LNDFKMNATAVTBXBYSTWVSVMSQZNFOETRFZQVGKWJIGHUKGJLPAAWYBEKH");
    msg.param.assign("YLOMBQFUCWEGJOXPIAQYHOLWGYDLCSIUIENIHYGVQYKZWZCCFSXHZYXLIMSVIGARDDFLYTVWCMSFNRESVTTEELGNPSKDLNAASJKIZJTQCUOOXTQDDHJXZWVPVUKZHFDWHSBBIZMRUNGERMGXAUTNNCCOWDOTGCZZ");
    msg.value.assign("GGDXHRNEYJCOWEULOGPIIYVHSKDVVWWKULKDCBDHACDVBBYXSRNLBJZLWUZMRUAFREVXCDTMTSUDFQIJWZFLADYXFLOU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Parameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParameterControl msg;
    msg.setTimeStamp(0.0799378442605);
    msg.setSource(3889U);
    msg.setSourceEntity(212U);
    msg.setDestination(9996U);
    msg.setDestinationEntity(173U);
    msg.op = 129U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParameterControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParameterControl msg;
    msg.setTimeStamp(0.5850723137);
    msg.setSource(65064U);
    msg.setSourceEntity(145U);
    msg.setDestination(41916U);
    msg.setDestinationEntity(238U);
    msg.op = 35U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParameterControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParameterControl msg;
    msg.setTimeStamp(0.0172502592215);
    msg.setSource(50778U);
    msg.setSourceEntity(80U);
    msg.setDestination(55652U);
    msg.setDestinationEntity(144U);
    msg.op = 25U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParameterControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.0804436768928);
    msg.setSource(28467U);
    msg.setSourceEntity(52U);
    msg.setDestination(30438U);
    msg.setDestinationEntity(26U);
    msg.op = 254U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.506258540879);
    msg.setSource(25534U);
    msg.setSourceEntity(156U);
    msg.setDestination(17520U);
    msg.setDestinationEntity(59U);
    msg.op = 21U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.896733176911);
    msg.setSource(29260U);
    msg.setSourceEntity(98U);
    msg.setDestination(28461U);
    msg.setDestinationEntity(119U);
    msg.op = 141U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.746174688233);
    msg.setSource(54993U);
    msg.setSourceEntity(22U);
    msg.setDestination(2680U);
    msg.setDestinationEntity(103U);
    msg.total_steps = 107U;
    msg.step_number = 229U;
    msg.step.assign("FVTESUHEGSLDYBBMPVNQXDAUAGURIJNNWKOLGJGPIQJUBKRZNJILLNYXFAYDIUOGVEFPTBEFVQCPVNVQFDOIDLNGOBPHOPORNRHFNXRYEKDKFLTVCSHDKASOQZFSQCQQICCHVFHHCHPQWPZATEWRTRZABUISXJKLYMCBMWC");
    msg.flags = 168U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.343434474568);
    msg.setSource(5640U);
    msg.setSourceEntity(34U);
    msg.setDestination(10375U);
    msg.setDestinationEntity(240U);
    msg.total_steps = 102U;
    msg.step_number = 190U;
    msg.step.assign("JZEYMQLZBFRKAZKBWXUEMYCESXQVZOQOKJPYWHDUIHKKUPJTURYLTHFDMXCITAUSZQMITLFBDTECXHMMAIBEKZFBXWIFUVPDWGKTGHAOVJTPOYIHXLNSJENZAUYMQGGATWGVGHVLYLSBCFHINDKRCQAAZDXPUJEHWPVNCPUNVRRPVDJI");
    msg.flags = 39U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.944891388906);
    msg.setSource(54676U);
    msg.setSourceEntity(163U);
    msg.setDestination(58688U);
    msg.setDestinationEntity(172U);
    msg.total_steps = 52U;
    msg.step_number = 34U;
    msg.step.assign("NEZIVQDIJOFXADKRTYELYSBFSKERKSSFDQUWVJLWDFQHGCJUUJTAUGPNGZWYBNNIXPHCZSROTQXLXLGMNENWORKIKTIJZJUJWFHAUPSTKVVGMQRCABRHRTTKVBACVVEXGVCKNZYPAIHRIZPNDRDQPHZCBCKGEHEOWMJFCSADIAXYDVXAQZLXYTFFBBWLVIOMDEPJYNZDYMOOSMSSQBPWRCAHBTMPJK");
    msg.flags = 63U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.401478086834);
    msg.setSource(21867U);
    msg.setSourceEntity(202U);
    msg.setDestination(51175U);
    msg.setDestinationEntity(30U);
    msg.state = 141U;
    msg.error.assign("VLYOXVHYGKFOLMQDWFTYIZWUZRZFDZSYXUQUGZTGAFDOSJURORPGECSETMLVRXZSNJYDYAMIMUKTOBMZPQGVIHSBLAFSGUJWWBNZGPCVNPULCDBVDUNZQQTJAHFNP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.877896169588);
    msg.setSource(34582U);
    msg.setSourceEntity(31U);
    msg.setDestination(27510U);
    msg.setDestinationEntity(84U);
    msg.state = 155U;
    msg.error.assign("EHHSUQMCIYKSTTONPOAXQGNVMUYOQBJARKPDAIQXUJLNMYVCVGUXXJKHWHDTUGRLUECLWHZERPUTGQKQYFGXGHMWEYFULAGAHOOSWXKPDUOIVCCSWZNJCWMEJRPFTBZFGKRBFPZQPMHFBQWWDVSO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.302433196676);
    msg.setSource(25753U);
    msg.setSourceEntity(89U);
    msg.setDestination(58299U);
    msg.setDestinationEntity(106U);
    msg.state = 212U;
    msg.error.assign("DPYBMBAQZJPOWJEXFZCHEVMVHKXMKTYEIOLJENVKMKODOCCVPZLQEAJGAUXQMCPATUQTSYPMZEKGRVQTQOYUPNDZHHGKRDTSXDBDAWZJNZFBLNGNICXIRURVURJOAMDTLFEXZASSXXPKLMZNJBUBISNCDGEWTFGROYSEISNHHWQKZWWNQCTIPSGLPFIIKHSVJLWVTWHFIXDFGHOCPMWUXLBGKOUDHRCUYEFYRVB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.932408398485);
    msg.setSource(50132U);
    msg.setSourceEntity(99U);
    msg.setDestination(19091U);
    msg.setDestinationEntity(196U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.380946872193);
    msg.setSource(26149U);
    msg.setSourceEntity(42U);
    msg.setDestination(32373U);
    msg.setDestinationEntity(226U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.468072759696);
    msg.setSource(33450U);
    msg.setSourceEntity(1U);
    msg.setDestination(42738U);
    msg.setDestinationEntity(5U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.246230414624);
    msg.setSource(10522U);
    msg.setSourceEntity(220U);
    msg.setDestination(42640U);
    msg.setDestinationEntity(109U);
    msg.op = 3U;
    msg.speed_min = 0.817158690198;
    msg.speed_max = 0.190052237925;
    msg.long_accel = 0.805077630641;
    msg.alt_max_msl = 0.54070209623;
    msg.dive_fraction_max = 0.451101898835;
    msg.climb_fraction_max = 0.595934977979;
    msg.bank_max = 0.251309708526;
    msg.p_max = 0.062935342119;
    msg.pitch_min = 0.628531218542;
    msg.pitch_max = 0.937255486647;
    msg.q_max = 0.366382785134;
    msg.g_min = 0.854004011029;
    msg.g_max = 0.0589457015279;
    msg.g_lat_max = 0.355504571025;
    msg.rpm_min = 0.42262594551;
    msg.rpm_max = 0.801570104674;
    msg.rpm_rate_max = 0.193159282542;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.22997231855);
    msg.setSource(39622U);
    msg.setSourceEntity(252U);
    msg.setDestination(45497U);
    msg.setDestinationEntity(79U);
    msg.op = 160U;
    msg.speed_min = 0.0380789032423;
    msg.speed_max = 0.12018057802;
    msg.long_accel = 0.973465460111;
    msg.alt_max_msl = 0.856143969129;
    msg.dive_fraction_max = 0.352766726811;
    msg.climb_fraction_max = 0.792835262025;
    msg.bank_max = 0.260381588491;
    msg.p_max = 0.191317009132;
    msg.pitch_min = 0.229408292556;
    msg.pitch_max = 0.387063649221;
    msg.q_max = 0.0564306568153;
    msg.g_min = 0.345867189604;
    msg.g_max = 0.608352275753;
    msg.g_lat_max = 0.439644652005;
    msg.rpm_min = 0.832166929709;
    msg.rpm_max = 0.654997483461;
    msg.rpm_rate_max = 0.762663014436;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.687910020191);
    msg.setSource(2899U);
    msg.setSourceEntity(179U);
    msg.setDestination(30789U);
    msg.setDestinationEntity(117U);
    msg.op = 105U;
    msg.speed_min = 0.640543629523;
    msg.speed_max = 0.504816513279;
    msg.long_accel = 0.117803584268;
    msg.alt_max_msl = 0.74016121196;
    msg.dive_fraction_max = 0.601432765799;
    msg.climb_fraction_max = 0.696066410603;
    msg.bank_max = 0.145726800599;
    msg.p_max = 0.855843800684;
    msg.pitch_min = 0.13683592246;
    msg.pitch_max = 0.48840663658;
    msg.q_max = 0.578144184908;
    msg.g_min = 0.0723171182813;
    msg.g_max = 0.888196704848;
    msg.g_lat_max = 0.744679700322;
    msg.rpm_min = 0.0763066725619;
    msg.rpm_max = 0.225179454577;
    msg.rpm_rate_max = 0.284388343219;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.269602471397);
    msg.setSource(36497U);
    msg.setSourceEntity(193U);
    msg.setDestination(21455U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.790271282384;
    msg.lon = 0.783448502307;
    msg.height = 0.432236784406;
    msg.x = 0.529139803666;
    msg.y = 0.0387209047303;
    msg.z = 0.540304928;
    msg.phi = 0.0990004491851;
    msg.theta = 0.00160950902912;
    msg.psi = 0.238621255386;
    msg.u = 0.938788131578;
    msg.v = 0.216767120821;
    msg.w = 0.524585779694;
    msg.p = 0.951659639677;
    msg.q = 0.503729447682;
    msg.r = 0.3394037195;
    msg.svx = 0.0657253901381;
    msg.svy = 0.703286908686;
    msg.svz = 0.60090584368;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.337856210181);
    msg.setSource(11162U);
    msg.setSourceEntity(160U);
    msg.setDestination(51381U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.719502945048;
    msg.lon = 0.112073654476;
    msg.height = 0.634033408742;
    msg.x = 0.458904777185;
    msg.y = 0.8416621997;
    msg.z = 0.231440909077;
    msg.phi = 0.217704082325;
    msg.theta = 0.143243020925;
    msg.psi = 0.197165674323;
    msg.u = 0.462549453099;
    msg.v = 0.10134612097;
    msg.w = 0.331602952119;
    msg.p = 0.400024447871;
    msg.q = 0.0497189414993;
    msg.r = 0.984775961191;
    msg.svx = 0.989266637378;
    msg.svy = 0.0687816590476;
    msg.svz = 0.384355817713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.914468462917);
    msg.setSource(39242U);
    msg.setSourceEntity(43U);
    msg.setDestination(32077U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.843178001301;
    msg.lon = 0.077112530483;
    msg.height = 0.696088861886;
    msg.x = 0.65369321282;
    msg.y = 0.100173725089;
    msg.z = 0.878865430685;
    msg.phi = 0.821863589972;
    msg.theta = 0.393533003696;
    msg.psi = 0.933802926126;
    msg.u = 0.24509106301;
    msg.v = 0.333712470018;
    msg.w = 0.41824519468;
    msg.p = 0.535775870329;
    msg.q = 0.616043733461;
    msg.r = 0.483952073882;
    msg.svx = 0.689231741549;
    msg.svy = 0.820002404959;
    msg.svz = 0.093904901624;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.25697589575);
    msg.setSource(19823U);
    msg.setSourceEntity(190U);
    msg.setDestination(12919U);
    msg.setDestinationEntity(202U);
    msg.op = 232U;
    msg.entities.assign("SSMJOPLWRUAXGDZYFJZAIRWENZGDOCYXYQEKLVQVIBBVCSMDPAVDGDTTMZEHUZPQVDXOJKETYZFZSTLXGBXQLNNALSECJGWUOXVHKGYKIVJBTJQGGEQQCBGPECKZURFEDPNBRVPYWIXIGKFWTDFARKJHOXXYRFSHKURCHBWRWNIAOUTVPSKAKFNESVLUQBWOMFEHLCCHOOURCMPJIFNPP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.732164320324);
    msg.setSource(53414U);
    msg.setSourceEntity(180U);
    msg.setDestination(42393U);
    msg.setDestinationEntity(95U);
    msg.op = 121U;
    msg.entities.assign("WFFHFWBDWQVCHJVYSVCIZNUHTTAUWOBIZQDXXPPBNPJDWOSKOIOIRIFQHRNUMZXERDXUFNMLTZRGLSYCMLXFIPLEQAWMEMPECHJEDJSNBLR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.612449253212);
    msg.setSource(15256U);
    msg.setSourceEntity(203U);
    msg.setDestination(13193U);
    msg.setDestinationEntity(208U);
    msg.op = 198U;
    msg.entities.assign("KRUWSRSVZQLWSCUBISWXOPTYSYSQHLPTTUPZBIQXXLKMOETBLAXSUZOJGYFDQDNOUBALGTMVJZYFTBANAJRFIFWYPRWZYNYPIEFZBRSOWXEPTQEXPRQKIHZWABRRFJXYJFVKCJMYVOIQVZNHRXHVTASQLCFNDDGGNCCMBHGGCUMKHMVUAYOTADVIKEDKLKSMEAQWDUCNJVT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.315247739752);
    msg.setSource(41321U);
    msg.setSourceEntity(110U);
    msg.setDestination(18294U);
    msg.setDestinationEntity(34U);
    msg.type = 44U;
    msg.speed = 26893U;
    const char tmp_msg_0[] = {-123, -28, -98, 63, -52, -99, -13, -59, -104, 43, 115, -81, 12, 96, -34, 85, -73, -52, 114, 11, -23, 30, 24, -90};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.351594219368);
    msg.setSource(52069U);
    msg.setSourceEntity(183U);
    msg.setDestination(33115U);
    msg.setDestinationEntity(6U);
    msg.type = 172U;
    msg.speed = 40224U;
    const char tmp_msg_0[] = {68, 52, -23, -24, -56, 41, -93, 18, 74, 68, 98, -63, 104, -12, 99, -112, -55, -46, -52, 43, 124, 32, -100, 95, 19, -124, -85, 22, 96, -30, 10, -88, 65, -12, -56, 25, -53, -79, 94, 23, -103, 121, -119, -59, -80, 103, 71, -1, -118, 9, 83, 26, -55, -18, 32, -7, 96, 83, 112, 55, -76, -71, -86, -56, 99, 80, -56, 71, 10, -79, 121, 79, 7, -80, 67, 89, -59, 113, 61, -78, 16, 94, -89, -30, -89, 6, -97, 116, -8, 63, -56, -128, 94, -37, 10, 77, -94, -48, -32, -121, -19, 36, -52, -115, 111, -4, 30, 9, 1, 3, -95, 64, 28, 18, -90, -110, 91, 28, 100, -110, -45, 27, -97, 18, -94, -68, -4, 89, -88, -1, -28, 7, -17, -88, -19, -81, -107, 72, -18, 2, -104, -97, 1, -50, 61, 85, -8, 109, -126, -60, 29, 47, -94, 30, -100, -52, 17, 22, -2, -37, 13, 111, 98, 16, -94, 18, 103, 45, 76, 64, 26, -24, 25, 82, 6, 10};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.299405508934);
    msg.setSource(8573U);
    msg.setSourceEntity(47U);
    msg.setDestination(64614U);
    msg.setDestinationEntity(229U);
    msg.type = 206U;
    msg.speed = 6440U;
    const char tmp_msg_0[] = {-127, -16, 90, -80, -128, 95, 74, -22, -65, 120, 70, -86, 73, 114, -59, -127, 78, -61, -104, 2, -5, -113, 23, -48, -62, 10, 112, -94, 20, 83, -23, 65, -55, 22, 121, -35, 85, -121, 3, 21, -127, -106, -81, 120, -94, 77, -87, 15, -100, -77, -110, -94, 25, 117, -30, -72, 33, -90, 110, -111, 27, 25, 74, 46, 35, 66, -102, 74, -27, 88, 62, 24, 96, 88, 24, -32, 45, 54, -13, -1, -27, 47, 123, 19, 63, 90, -70, 92, -125, -30, -84, 85, -99, -6, -72, -86, -40, -27, 78, 112, -15, -49, -88, -67, -117, 88, 103, 80, -86, 122, -42, 94, -83, -74, -33, 93, 23, -55, -14, 2, 42, 28, -87, -55, -107, -90, 103, 124, -33, 71, 101, -97, 68, 25, -42, -126, -66, 79, -65, 19, 74, -69, -79, 6, -65, -108, -97, -41, -66, -92, -127, -56, -26, -67, -47, 32, 12, -55, 39, 33, -13, -126, -89, 79, 58, 60, 111, 62, -58, -67, 75, -16, -113, -120, -84, 31, -17, 29, -74, -95, 85, 90, 106, 117, -46, 28, 104, -111, -75, -3, -50};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.0197981858771);
    msg.setSource(23817U);
    msg.setSourceEntity(206U);
    msg.setDestination(28379U);
    msg.setDestinationEntity(182U);
    msg.op = 72U;
    msg.tas2acc_pgain = 0.114711093656;
    msg.bank2p_pgain = 0.601044682363;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.772645680511);
    msg.setSource(47537U);
    msg.setSourceEntity(30U);
    msg.setDestination(58894U);
    msg.setDestinationEntity(25U);
    msg.op = 120U;
    msg.tas2acc_pgain = 0.553520902303;
    msg.bank2p_pgain = 0.709648884371;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.0141404021267);
    msg.setSource(5168U);
    msg.setSourceEntity(51U);
    msg.setDestination(51661U);
    msg.setDestinationEntity(127U);
    msg.op = 70U;
    msg.tas2acc_pgain = 0.518877707238;
    msg.bank2p_pgain = 0.409831644148;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.77473899916);
    msg.setSource(10705U);
    msg.setSourceEntity(223U);
    msg.setDestination(59749U);
    msg.setDestinationEntity(143U);
    msg.available = 1529543863U;
    msg.value = 134U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.0994909498662);
    msg.setSource(10602U);
    msg.setSourceEntity(49U);
    msg.setDestination(2614U);
    msg.setDestinationEntity(241U);
    msg.available = 2798523217U;
    msg.value = 177U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.701325412882);
    msg.setSource(62330U);
    msg.setSourceEntity(129U);
    msg.setDestination(51007U);
    msg.setDestinationEntity(34U);
    msg.available = 2041640670U;
    msg.value = 173U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.0302877070133);
    msg.setSource(28144U);
    msg.setSourceEntity(158U);
    msg.setDestination(4473U);
    msg.setDestinationEntity(139U);
    msg.op = 232U;
    msg.snapshot.assign("OHNZZKQJPJYJBLEYLYNANUTBMHXDAAWCMDOHZCEYSXPWQLAYRSNKVCFTMVSWDUBFFCEDIBIHAZGRXKLYKPVDCBIYIKIVOUBWVGKRIHLUORXHQTRNSLYKCENTMUNCGOFEVURDEZZLPAOCQQBPZUKNDWGPEPJJVMYOZKGGGUFGQQWJHMRZHZQAFJMFRBEGDTQFXVEXFOKSPEAVRMICATXMV");
    IMC::VideoData tmp_msg_0;
    tmp_msg_0.id = 49U;
    tmp_msg_0.width = 8773U;
    tmp_msg_0.height = 38453U;
    tmp_msg_0.widthstep = 12211U;
    tmp_msg_0.channels = 236U;
    tmp_msg_0.depth = 202U;
    tmp_msg_0.finaldata = 125U;
    const char tmp_tmp_msg_0_0[] = {-73, -8, -47, -103, 4, -76, 95, 29, -32, 9, 0, 81, 86, 21, 24, -72, -36, 32, -60, 14, -115, 52, 123, 62, -23, -123, -16, -55, -108, 84, -48, 8, -93, 96, -123, -43, -116, 8, -50, -20, -20, -127, 38, -29, 74, 65, -67, -40, -19, -55, 101, 66, 37, 54, 96, -73, -51, 23, -36, 83, -27, 9, 17, -13, 16, -105, -30, 119, 15, 86, 95, 77, -60, -114, 29, 123, -80, 5, -81, 33, -98, -6, 23, -118, 76, -14, -85, 126, 113, -20, -112, -27, -83, 11, -56, -106, 104, 76, -110, -86, -116, 57, -109, 105, -49, -7, -77, 12, -23, -61, -124, 117, 25, 83, 94, -36, -59, -27, -87, -60, 122, -65, 28, -54, 91, 100, -4, 24, -110, -30, 26, -116, -43, -52, -110, -55, 125, 91, -111, -113, -2, 80, 108, -29, -60, -37, -36, -41, 56, -119, -64, 32, 116, -103, -83, 84, -64, -85, -111, 56, -101, -119, -67, 105, -126, 33, -89, -18, -100, -117, 77, 48, -33, 23, -106, -85, -68, 91, 22, -26, 83, 2, 45, -83, -91, 52, 103, 80, 14, -20, -12, 65, -50, -98, -71, 27, -89, -26, 78, -60, -113, -25, 2, -42, 67, 66, 19, 61, -39, -59, 22, 13, -101, -56, 21, -89, 52, -125, 73, 57, 84, -31, 18};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.697945997851);
    msg.setSource(45965U);
    msg.setSourceEntity(45U);
    msg.setDestination(49914U);
    msg.setDestinationEntity(197U);
    msg.op = 172U;
    msg.snapshot.assign("MEKYZIRHYZJKJNYELZZMTYXL");
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("BVBBFVPFWTTERNZNUBZYNMLZIUJXNOZMXFMWHGJVTHPCSNNPZVESKFSYUXBPLMGAJHHMRSXPBUYQGEFIOMESWJKAXHHWDCWOKAMRSGATVCIWV");
    tmp_msg_0.reference_frame = 73U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 8083U;
    tmp_tmp_msg_0_0.off_x = 0.75455685197;
    tmp_tmp_msg_0_0.off_y = 0.567935929443;
    tmp_tmp_msg_0_0.off_z = 0.873422397085;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("NDUZFTDQXSQSMQWILNUYOIVPEABWYKAJGJMQQOLPCZXYSFDDCEOSJDASKDPOEVGGNFEZHRHVSERLBKGUB");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.333797782036);
    msg.setSource(3263U);
    msg.setSourceEntity(145U);
    msg.setDestination(15833U);
    msg.setDestinationEntity(173U);
    msg.op = 210U;
    msg.snapshot.assign("RYIMVCSEBKLQWSDCDVVZPOLKUECNWGAETOZOBADHUWOODXICCMYAJXOVVJALRNJYDPULWCYQOXEMGZPPVUSJDADHTQNIUINLISFHPSNLMWXXEKAC");
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.153077433714;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.886606224554);
    msg.setSource(50541U);
    msg.setSourceEntity(105U);
    msg.setDestination(35408U);
    msg.setDestinationEntity(208U);
    msg.op = 48U;
    msg.name.assign("HNJCRTHDZWEEBDIOYKACJLBUPQXZKMMIWRHCCSTKLVRIHUXDXESCQTGWOVVBHFCGIXUHOOYALCPUZNTYKITUNPWMZLEQDZPZGFJJOGXRBVHMVAXSDAT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.835714425824);
    msg.setSource(49992U);
    msg.setSourceEntity(188U);
    msg.setDestination(49320U);
    msg.setDestinationEntity(87U);
    msg.op = 3U;
    msg.name.assign("YSYNJPUPGSPZVQRVMMSJRWETUHXETIZHCQYQWVACZZKYTVOSRBAVHWSIPGMKFQBMNPYZNDUDZVZXTWBEIBTLISNR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.630198931159);
    msg.setSource(9391U);
    msg.setSourceEntity(152U);
    msg.setDestination(14426U);
    msg.setDestinationEntity(242U);
    msg.op = 236U;
    msg.name.assign("YRLZRROQZFWCQCZZIMIKTODLZFGFSQHIQJCMNTHFXABUWKEJXPZFXSHZJOMWRLYYSGUNIXANVCNURSBDPTGDRJHLKMHVVYALRYAOYJZNQSVIHUDCOTHPPGJNJOBDWKESMVYLYROKVSTJMJXMALTGAD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.0227414802042);
    msg.setSource(44234U);
    msg.setSourceEntity(175U);
    msg.setDestination(1017U);
    msg.setDestinationEntity(86U);
    msg.type = 49U;
    msg.htime = 0.621084202277;
    msg.context.assign("HLOTPROROQHDRUFMODTFBWXUNTLLGBANRDLGINWKXGGNATEIYDCWPOAUVGFISBSKOCZYGZYNEFAKMNMTRZEFXFUFJKIYQZOBJLKHXVSIBEVCZOEHMRNUQTOTVAZFXSXWUSMKUOPZJVMCISCTDSIWADWUQPKVCQWJXAGYRZYGRKXQIPDXMJLQMYBJPCLSZNVCGDDEITVSELFTAJGYHWQZVEXUQPCEH");
    msg.text.assign("EPXNJSLBRVWUCQSZUMEPTGEWMZQQYCCGXRDPAZNNSTRAYPKSPXFBFOYETCBLXKRELHANPTLIFAIZUGNWOXUCTTKOIBO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.430677967286);
    msg.setSource(27999U);
    msg.setSourceEntity(92U);
    msg.setDestination(30555U);
    msg.setDestinationEntity(139U);
    msg.type = 189U;
    msg.htime = 0.811535000305;
    msg.context.assign("LTKQSGFQRFVMXLSQUPMXZJBYNGEMWRWNDDXNCQPOSOSJGADOCKHTZEOCRLHNVHOIRJBWKAVLOODTYKMGYOWBFUSQBABJIBWPOKRZWXAHYGPMGFHZPTRDQEVJXWWICERKXFIBZNVTTPNUVZZJPYATRCLIJEJLMSYTWIDMQDDFIHQBIGSUEFMKLFCHUUXVSUTJKENLCAHBCGXUIICAYAHZNTEVSJLBUKAGYOKXPDDZZMYLYUSQMXCVPR");
    msg.text.assign("KSSMZXTLEJFDNHYRVAVXSAINTVKGFNGIOZRZYCPKTSPKZPJDVTCDMYJLVGVIWAPHWAMLJAZCJJXMRFNCYQLUGBLVCELEONIDCRUEVGTGQBNRBUUFFYFOZSNJOLFXOMSEHCNCBGXOKOHWVIEBQQAJSXGWBESLUMRADAEHQDCWQPWUDTUKHQSMTRTDPDQWKZTXIABIWOPU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.888311637483);
    msg.setSource(31769U);
    msg.setSourceEntity(2U);
    msg.setDestination(34662U);
    msg.setDestinationEntity(87U);
    msg.type = 195U;
    msg.htime = 0.539713140566;
    msg.context.assign("MLYEDGQGFRQBWNPZQKQBYFWVSJCKOFCEJNEHSNQKBNNADDLOATGMNQZYEOPCHFBZVPMJLWARMGMBDWAHXYTXMPWWFDJDAOSIQXCNINUGMWETAXIOBTFSHWCJUMPEXPXZXPZOSUGUSHKPMEPXVBKZUOQHRJEM");
    msg.text.assign("HMDVIGFQWJRVKGSVUEQCXISVTDJNTBFOHFOUPYDJCDERZUIYGFNJRHGKGZTZEKUYJGDHSVQNPRULOBHCIHLEIKXOKQOYMOPBPMVWNDQKZRKLFLZVYZALSIEXNNKSTHZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.377659125314);
    msg.setSource(33206U);
    msg.setSourceEntity(243U);
    msg.setDestination(53746U);
    msg.setDestinationEntity(200U);
    msg.command = 68U;
    msg.htime = 0.453696463269;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 33U;
    tmp_msg_0.htime = 0.178107534861;
    tmp_msg_0.context.assign("DUEYTKJAFVVGCGBTGCGSBYXUTIQEAYDVRR");
    tmp_msg_0.text.assign("DCQIKJKFHZZWHRDNXTISVBOKBUOIIHETDOFDLUCGITSTRMMWLWEINMLCYAOJGQXOAPLDQNMIGZUUSFBRSMKXVVJXIAAZNKLJNUOGVSCWQDYGMBYEZ");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.823309109068);
    msg.setSource(24444U);
    msg.setSourceEntity(177U);
    msg.setDestination(49775U);
    msg.setDestinationEntity(176U);
    msg.command = 8U;
    msg.htime = 0.006547261305;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.876517014302);
    msg.setSource(4271U);
    msg.setSourceEntity(76U);
    msg.setDestination(34278U);
    msg.setDestinationEntity(32U);
    msg.command = 38U;
    msg.htime = 0.629777913356;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 3U;
    tmp_msg_0.htime = 0.989752763622;
    tmp_msg_0.context.assign("LRBTNKMKSMLAKCDNIZBYBUMCOUOQC");
    tmp_msg_0.text.assign("HSWGBEYJNIILXIZNKNUCKVLXBDFGFQZWVYRKBRJBGGIEOCZYOFOHTVSBFBMCXDWRQBEUFPMRJONAFJ");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.77750597117);
    msg.setSource(13682U);
    msg.setSourceEntity(177U);
    msg.setDestination(35262U);
    msg.setDestinationEntity(79U);
    msg.op = 18U;
    msg.file.assign("WJIRSRFTJVQLAXPLMOKKGQVEFVJZGPILDRAVISADFZCKUQSDWXKVYZHKBHNMPVFXMGCASHMJIEEHOAZDWIPUZUNIBYBKFFSLTSEDABHINGUHOPCAUQRVCDKAJQYNYYMNCPGQXPKONYFGGMELWMLRSKCFLRHGJTOLMSCWXWZXOUNZNV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.320879352735);
    msg.setSource(55363U);
    msg.setSourceEntity(244U);
    msg.setDestination(23242U);
    msg.setDestinationEntity(99U);
    msg.op = 26U;
    msg.file.assign("QFLLMTEOKVMXWMNSXWAQWMOUZKNTZZGFYIQTUHTNHRUSEJFGEZLGDODADJSBYPPVATSXXWQZTNIDGYSAGUWNYFXDKEZOEJWUDYIVEGOCKYDSSW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.282584081183);
    msg.setSource(42771U);
    msg.setSourceEntity(13U);
    msg.setDestination(263U);
    msg.setDestinationEntity(19U);
    msg.op = 239U;
    msg.file.assign("ARSERJRWFQKOGNYPWZLERDAFETUIMBIONMWCFUPNNXOVLBPVFTTVKMGWPOTAVOVLCQHDYRDLHLWDHGGULZHVVCYJOIJYJFPSPCMBMZDTAJOGQKRTWZKBZHKKPENSJAEXICHBXFLYCUIAINFYGPBATCIGYWT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.958421832873);
    msg.setSource(40634U);
    msg.setSourceEntity(179U);
    msg.setDestination(12625U);
    msg.setDestinationEntity(173U);
    msg.op = 6U;
    msg.clock = 0.417017589702;
    msg.tz = -23;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.26052488728);
    msg.setSource(39744U);
    msg.setSourceEntity(247U);
    msg.setDestination(20600U);
    msg.setDestinationEntity(96U);
    msg.op = 68U;
    msg.clock = 0.428590555618;
    msg.tz = 104;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.0761404726984);
    msg.setSource(51818U);
    msg.setSourceEntity(95U);
    msg.setDestination(64889U);
    msg.setDestinationEntity(112U);
    msg.op = 238U;
    msg.clock = 0.030689638082;
    msg.tz = -35;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.717990132829);
    msg.setSource(11966U);
    msg.setSourceEntity(171U);
    msg.setDestination(7028U);
    msg.setDestinationEntity(88U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.970547723352);
    msg.setSource(53486U);
    msg.setSourceEntity(126U);
    msg.setDestination(60930U);
    msg.setDestinationEntity(224U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.0170538130432);
    msg.setSource(52050U);
    msg.setSourceEntity(190U);
    msg.setDestination(2944U);
    msg.setDestinationEntity(105U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.387921284807);
    msg.setSource(59639U);
    msg.setSourceEntity(8U);
    msg.setDestination(12949U);
    msg.setDestinationEntity(52U);
    msg.sys_name.assign("ODSOXULXEVKYBPXTYIIFPLUJIYGQAAPBDLEUTOENHRXGPRBNNSNYHTTIHEINAYVZMQGWQLKNXIBQJWJDDAJ");
    msg.sys_type = 106U;
    msg.owner = 28738U;
    msg.lat = 0.00918005304299;
    msg.lon = 0.267036011924;
    msg.height = 0.669508266733;
    msg.services.assign("GGNRMYCYRWNKWLFRXJYJZACVRHFKCBNKWOZMTDBWALFWHIYRQDPMJXASSTNQWGBRILUEEECQUKCZSFTGITYZXXZMTAVOYGVUKR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.0703825047048);
    msg.setSource(878U);
    msg.setSourceEntity(188U);
    msg.setDestination(7426U);
    msg.setDestinationEntity(207U);
    msg.sys_name.assign("GNBGEAPHIXHZVGNYZLLXSRRVFOFFAIFXHJPJRMYRGBJWMSCRJRJXFSFTKDUOPDZTXKEEKUUQEZUUDYJVYLQCTEYPLECXGFVRWBAMSGPTCIKOANPQAOFVOOQYDZMIPUNHLDEJHURMWHBSGBKITRBDHVDTOD");
    msg.sys_type = 102U;
    msg.owner = 19692U;
    msg.lat = 0.225896183182;
    msg.lon = 0.624378916544;
    msg.height = 0.433258414563;
    msg.services.assign("LTGSXVFTGFAKEWYVXKYMHVLUDKESWKMBZRVTTNTVZBIDZULNABUBNVJYBAEGELFNQMMLWFPXSOCIVXHOEVNEFRDPPHRODUXRYTGQIPYVWTCJORLJIVPSIAMTYFCBBWJEJCOHJUSYAEMONHSHAMCZHPWXOJOURNJGITAFRZDQUGIIPKMQUQQLKCGPFYZDSKHWZQGJLBTXRBKULZPCCDWJIXNXMI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.225642382699);
    msg.setSource(7114U);
    msg.setSourceEntity(120U);
    msg.setDestination(37036U);
    msg.setDestinationEntity(111U);
    msg.sys_name.assign("QXUQRIKWLAXSXXYVZAOBGVLJPYRARGJBTKAFZMBMFRSNGRTSKLLKRMB");
    msg.sys_type = 138U;
    msg.owner = 10126U;
    msg.lat = 0.927337409952;
    msg.lon = 0.942171212546;
    msg.height = 0.158239890115;
    msg.services.assign("EFVUARMGLTVEHVTWKGVWBPAABCKJDEBNOBXTGWAIGCWJGNNEUYOFQHQQWEYHYFHLGSKRUULFXFQAWRUUMKFWTVSBMPKCRVL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.114555343047);
    msg.setSource(12864U);
    msg.setSourceEntity(64U);
    msg.setDestination(33622U);
    msg.setDestinationEntity(232U);
    msg.service.assign("QATACTZKQRFMZQOHYCQPKFKLAMBSOBFUMBQIVTOJUEKPDJJKAZGCHKLTGNHXRWPHWVNJPWTXOXZPXIWYVRXIMUSDBPOEVJDYZ");
    msg.service_type = 108U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.0305497936263);
    msg.setSource(62883U);
    msg.setSourceEntity(246U);
    msg.setDestination(37699U);
    msg.setDestinationEntity(115U);
    msg.service.assign("IRODDKVJZSSRFFLGASORSAZXTJYTLGHOPPKEBMNXWQZIYFBXMKKLVUQQCNEHAJJEPMTBNQERHZEICLLXOSW");
    msg.service_type = 45U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.775924899678);
    msg.setSource(472U);
    msg.setSourceEntity(190U);
    msg.setDestination(42330U);
    msg.setDestinationEntity(134U);
    msg.service.assign("WEKTNJKHOHMOXSZRVWMYEXCJARNVHVQOVRYCPISVRIUZPRSTSAYZGLMNRCODJLNMSJBFUVGOLJPIOEBZEMMRYYTDNFXUIQRDPNVHNSEWTKPBXKOXZSEUAZNCNLUMANBBQOCFQVZWQQEKVLWPHFQAJFGTCUUUVL");
    msg.service_type = 105U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.386841067992);
    msg.setSource(37380U);
    msg.setSourceEntity(252U);
    msg.setDestination(24519U);
    msg.setDestinationEntity(60U);
    msg.value = 0.806653070931;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.391182364351);
    msg.setSource(15825U);
    msg.setSourceEntity(9U);
    msg.setDestination(59078U);
    msg.setDestinationEntity(205U);
    msg.value = 0.301765676255;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.88227072751);
    msg.setSource(360U);
    msg.setSourceEntity(142U);
    msg.setDestination(33606U);
    msg.setDestinationEntity(80U);
    msg.value = 0.444963525219;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.0931032741212);
    msg.setSource(21072U);
    msg.setSourceEntity(135U);
    msg.setDestination(1098U);
    msg.setDestinationEntity(55U);
    msg.value = 0.420906001583;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.827144619153);
    msg.setSource(10796U);
    msg.setSourceEntity(114U);
    msg.setDestination(64112U);
    msg.setDestinationEntity(6U);
    msg.value = 0.791547733052;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.848865788256);
    msg.setSource(9205U);
    msg.setSourceEntity(150U);
    msg.setDestination(56649U);
    msg.setDestinationEntity(240U);
    msg.value = 0.748047695727;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.975287754923);
    msg.setSource(20082U);
    msg.setSourceEntity(89U);
    msg.setDestination(48265U);
    msg.setDestinationEntity(204U);
    msg.value = 0.555413487193;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.0866561067444);
    msg.setSource(65176U);
    msg.setSourceEntity(31U);
    msg.setDestination(6950U);
    msg.setDestinationEntity(113U);
    msg.value = 0.400123483767;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.545034632775);
    msg.setSource(63285U);
    msg.setSourceEntity(115U);
    msg.setDestination(8592U);
    msg.setDestinationEntity(161U);
    msg.value = 0.566528274611;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.860464755983);
    msg.setSource(32414U);
    msg.setSourceEntity(48U);
    msg.setDestination(45804U);
    msg.setDestinationEntity(51U);
    msg.number.assign("URQRLZREAJAPKARMBIWISJHXFSMCTQMWGBG");
    msg.timeout = 25150U;
    msg.contents.assign("MNGQSZQVQMHSERNNLERPZQHOLOYUVKAFGUTCYRIXKLTIZCXQDFEPXXBRYTHHGOMANRCWZGGDJRYEFVITSTPJO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.2277895177);
    msg.setSource(51614U);
    msg.setSourceEntity(168U);
    msg.setDestination(12673U);
    msg.setDestinationEntity(78U);
    msg.number.assign("OKMCNOETPCJOZRQBLRGAKETORNMXPBEJXYLOBCEMLFDHQOIMNDUUMDSJGGJLUPXUITDLGMWKZUJBQNVVWCQWHSFIFVAMGDGUYSNSXEFLNQAEOSVFVRRIRKPQQEMZUVKDGCIADEVSAOWHVYHXLGLTNFSTTYQTXAPOPZPEYUGKACYCFUHFW");
    msg.timeout = 51620U;
    msg.contents.assign("MNXFAUQCZTDSPSZWPAWIZEOXIGKLMBWQUXEPACUFOIFDRSNWQDEBGKRXKHPSXCMTKDLWKOUJFGMEKDCOIHNYXSCVJXVTIDRGBRBPIHBBNYASQOMSCGHYGDZRLCLTVZLTVMFCOSMVBZDFTQKMHDUPJRQHIIMVBLRRFYKYMWNOGWSLOAIZJAJQFJUFJQNWAZVDCBRYNOXHJYGJUEVEIPZYHHKPTTEYRUXENGLSJVTCYPTWKNNGELXAHVW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.448305185057);
    msg.setSource(24792U);
    msg.setSourceEntity(165U);
    msg.setDestination(16186U);
    msg.setDestinationEntity(119U);
    msg.number.assign("UGMMRRKECYBFRAPSDERNSHUGRSDYQXQONLHEEKMDCYIVTRKVAOWZSBBMPXWCRQWSXPUQDMJHJBOGNKLIKZIEAIEPHMGTOUJAAGFAXDWZWVTKSFNVDJKVQZLRCWIGHCPTYTFRUZKVHQSJKFCOCAGNDLCYBZJFXUIFITPWQXYBXFPSWBUHXUYEAXMVOTZTKVPYQWFYHOJHLLFNDOPUINP");
    msg.timeout = 14395U;
    msg.contents.assign("JAEDESCLNNUGDZLJAFEKSHJMHYWTKINROWQPVCFDYSXBHZPRA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.686114136104);
    msg.setSource(44104U);
    msg.setSourceEntity(200U);
    msg.setDestination(14525U);
    msg.setDestinationEntity(1U);
    msg.seq = 3616446755U;
    msg.destination.assign("KNVBKIFAVDFQSOHQIPJW");
    msg.timeout = 46346U;
    const char tmp_msg_0[] = {-120, 12, 22, -128, 63, 118, -123, -60, 47, -29, -69, 19, -99, 91, 104, -74, 38, -20, 116, 82, -49, 63, -119, -65, -63, 119, 19, -14, -57, -99, 104, -126, -77, -118, -97, -118, -123, -60, 41, 44, -73, 1, 18, -23, 126, -92, 7, -75, -41, -22, -94, -5, -11, 49, 36, -23, 116, 10, 50, 39, 124, 30, -58, 83, 16, -33, 109, 67, -112, -120, -73, 14, -83, -30, 98, 122, -65, -43, -6, -9, 49, 101, 31, 62, 16, -121, -77, -91, 41, 11, -105, -75, 91, 101, -35, -58, -121, -27, -34, -29, 45, 52, -113, -16, -82, -16, -91, -123, 1, -117, -13, -75, -28, -75, -93, -122, -12, 12, -45, -20, 81, -43};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.700006243016);
    msg.setSource(54727U);
    msg.setSourceEntity(241U);
    msg.setDestination(33332U);
    msg.setDestinationEntity(243U);
    msg.seq = 3175679178U;
    msg.destination.assign("VCXSFPJWSEXEHUDZVKSVNWUAFSACXYHESQPLRSNDOBMINCTNGYIOGJCETMPQUJEXTDVIXJOYGKUCAMFVHAESPANTWKKTQAORXNJFANOKLSFGMJKYTXZYTGDUQRQBPVZFBVDDRUQLEBVVALGLPLAWJWWAZKBZBJRDRPJNYKNFMJIYIMFOHOMPTDSCHUBMU");
    msg.timeout = 44980U;
    const char tmp_msg_0[] = {-43, -21, -83, -58, -81, 70, 83, 31, -17, 27, 59, 54, -117, 107, 56, 104, 117, -57, 36, 54, 20, -97, -38, 103, -33, -61, 83, -6, 108, 69, 70, -17, -54, 24, 59, 65, 41, -64, 46, 33, -90, -63, -22, -27, 95, 32, 25, 5, -110, 20, -89, 31, -65, 50, 45, -78, -41, -68, 4, 71, 76, 13, -15, 84, 50, 52, -117, 81, 54, 13, 109, -124, -117, -61, 94, -116, -117, -121, 51, -51, 28, 41, 16, 56, -93, 120, -26, -32, -93, -118, 83, -106, 77, -25, -113, 96, 86, 89, 30, -28, -61, 51, 12, -65, -118, -62, 32, -98, 112, -102, 56, 118, -55, 124, -98, 52, -80, -101, -19, 63, 1, 120, -2, 89, 16, -44, 114, -71, -91, -5, -62, -48, 20, -9, -116, 20, -118, -100, -116, -126, 12, 86, -50, 95, 6, -62, -126, 65, 28, -113, 56, 85, 53, 102, 64, -20, 85, -108, 0, 19, 32, 114, 78, -110, 66, 37, -81, 29, -65, 108, -112, 35, 85, 109, 65, -17, 4, 126, -19, -46, 58, -62, -105, 79, 7, -93, 71, -40, -10, -17, -124, -111, 33, 63, -79, 29, 29, 56};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.488801136442);
    msg.setSource(64222U);
    msg.setSourceEntity(109U);
    msg.setDestination(21109U);
    msg.setDestinationEntity(106U);
    msg.seq = 483304104U;
    msg.destination.assign("RAYHPTGOYJNQOZEJZZBTMFTRGBOUPHDVMJOKERNXGQNFHUVJHYKOMINQDSTQYXGAZEDKJLLSZQFNXJZFLPKFRCOKNLLCSREPWWKSVKYMUXUEUEHRAISAGBAPXQRNQWQVAAGMIMTYNBFCVSSDEWEFIRHLFNSBDZUIKCCIVOITUPVBAVILCMMIMELRYUZDTXDXYJDCWHSAOHXKOBHL");
    msg.timeout = 45664U;
    const char tmp_msg_0[] = {56, -14, -40, -100, 34, 5, -17, 123, -106, 34, 18, -126, -76, 89, 87, -100, 117, -36, 65, 61, -124, -42, -59, 121, 93, -125, 79, 5, 43, -104, 63, -3, 107, -99, 32, -51, -127, 9, -42, 119, -28, -39, 71, -37, -123, 65, 52, 48, 77, -100, -92, -58, 60, 16, -32, -61, -79, -46, -102, 6, -29, 36, 17, -73, -106, 108, -111, 70, -127, 62, 6, -61, 86, -110, 3, 107, -2, 0, 48, 107, -49, 111, -104, -72, -101, -59, -104, 7, -11, -84, 80, 103, 37, -23, -34, -106, 52, -34, -73, 7, -16, 73, -108, 119, -70, -80, -98, -4, -121, 106, 69, 23, -56, -6, -36, -15, -118, -80, -43, -128, -21, -115, 12, -65, 66, -105, 104, -8, 22, -62, -112, 115, 31, 58, -10, 21, 118, 13, 103, -64, -105, 118, -74, 46, 86, 0, -31, 35, 73, 63, -125, -36, 88, -5, 87, -92, 71, 30, -86, -97, -123, 11, -40, -44, 106, -75, -8, 11, 108, -53, 93, 57, 105, 100, -41, 79, 65, 78, 125, 91, -41, -92, -126, -84, -122, 39, 6, 0, 71, 53, 101, -3, 79, 34, 9, -16, 91, 108, 74, -75, -5, -4, -120, 87, 57, -53, 63, 106, 24, -103, 78, -6, 90};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.575418823915);
    msg.setSource(21289U);
    msg.setSourceEntity(79U);
    msg.setDestination(25513U);
    msg.setDestinationEntity(110U);
    msg.source.assign("NQZNKITUEDZZRQIPEGPCKJLTWIBUBICSYESNCONTJSRJBVKKCHCCYLCKVHDVJRXHQQPXMEEIAPABUGIGLWVIOIAEOYJXDURTSJXKLDNOVKXQGDFSURMDZVQYHIBBVHXONHBTYDCFFTTYUNBMLGFGMQAXRBEGWFEUFPAASMYKYMNPOHRZIDOZYSEFALTRPDWMOPZAWLRMACGXANQKJYGNCQUTWBFKJ");
    const char tmp_msg_0[] = {-100, -94, -108, -83, 119, 69, -85, 36, -95, 62, 43, 13, 47, 16, -11, 75, -96, -106, 67, 28, 76, 65, 1, -97, -6, -93, -123, -86, -14, -59, -113, 25, 91, -28, 123, -68, 27, 126, -12, -120, -17, -47, 108, -89, 119};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.0111146705559);
    msg.setSource(17161U);
    msg.setSourceEntity(156U);
    msg.setDestination(41981U);
    msg.setDestinationEntity(184U);
    msg.source.assign("MQVIITLXIRNKLUACGUVDHPCWOPNJQAIMCOQXQXIZSTERESVWSBNGEEGWBM");
    const char tmp_msg_0[] = {-86, 29, -77, 119, 27, -7, 112, 20, 20, 55, -22, 87, -23, 86, -28, -45, -114, -122, 87, -122, 56, -46, -15, -30, 23, -110, 55, -26, -49, 44, -60, 16, 8, -72, -94, 33, 113, -56, 9, 95, -14, 104, -72, 62, 27, 42, -10, 46, -88, 120, -12, 55, 100, 119, -105, -74, 115, -126, 106, 71, -113, -121, -5, 62, 98, 33, -6, 125, 32, 108, 35, 40, -58, 69, 68, -111, 109, 80, 73, -5, -103, -101, 60, -118, 42, -19, 109, -48, 37, 70, 47, 27, 52, 9, -1, 61, -41, -18, 107, 48, 49, 48, 115, -19, 113, 46, -43, -35, 90, 108, -116, 61, -109, 98, 45, 120, -110, 22, 104, 71, -84, 41, 9, 64, -21, -127, 85, 123, 75, -108, 31, 58, -111, 30, 13, -25, 93, 69, 66, -31, -94, -51, 18, 63, 0, 110, -26, -58, -101, 75, 12, 78, -124, 72, 95, -82, -83, -81, 49, 5, 45, -49, 63, 65, 12, 13, 80, -85, -27, -23, -101, 62, 6, -121, -67, -57, -127, 112, 16, -97, 73, 26, 33, -105, -84, -7, 53, 126, 122, 55, -70, -54, -94, -7, 96, 57, 27, 15, -21, -92};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.090287464481);
    msg.setSource(5339U);
    msg.setSourceEntity(37U);
    msg.setDestination(35823U);
    msg.setDestinationEntity(133U);
    msg.source.assign("DXQFUSARMXYBDROWAHPBAAHEDNRNUGJXFDQLPXQLYFTWMAYVOUMLIIRENLVYSKUZCPSSTGKCJWPQXBHODJ");
    const char tmp_msg_0[] = {68, 65, -93, 54, 35, -49, 114, 49, 118, 93, 95, -86, -124, 0, 38, -126, -52, 11, 115, -20, 15, -18, -89, -92, 44, 5, -87, -49, 78, -43, -94, -23, -75, 47, 80, 28, 121, 3, 77, 106, -89, -87, 25, -51, 90, -98, -124, 48, -8, -61, -37, -118, -44, 1, -71, -77, 94, 9, 117, 3, 10, 57, 2, 72, 95, 96, 80, 103, -46, -96, -39, -122, -115, 51, 56, 10, -93, 117, -78, 75, -93, 66, -101, -40, 36, 8, 116, 65, 111, -29, 13, 39, 82, -120, -59, -60, 102, -29, -44, 98, -50, 67, -128, -121, 32, -24, -36, -41, 77, -69, -124, 42, 37, -95, -8, 0, -81, 90, -35, -116, 113, -73, 104, 65, -87, -28, 120, -13, 8, 105, 102, -52, -80, -64, 119, 49, -61, -41, -13, 84, -126, -71, -72, -28, 123, -67, 21, -70, -15, 55};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.875627048122);
    msg.setSource(57877U);
    msg.setSourceEntity(217U);
    msg.setDestination(3295U);
    msg.setDestinationEntity(64U);
    msg.seq = 4192558306U;
    msg.state = 215U;
    msg.error.assign("CIVXBXBRATTDBGYIBKZRDHRWHILRJMTZJWOAUMMHMXNTHCPTSJCYFZOKRXSIVKDJQIOONQPVYSCDVZKNKXPFRGLRKEQQCMDATGQYXCFXNXVZUFEMBTNHURSKWQOLITSXBVQUEEZJUGMAPLLOHJOWJKLADBWAKUPPWCTNFJGLEOZPQIBVEMPYKCYFSGUCSLJBUIWAGFPQDWRSEHF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.514324695075);
    msg.setSource(41221U);
    msg.setSourceEntity(135U);
    msg.setDestination(33331U);
    msg.setDestinationEntity(70U);
    msg.seq = 2439270862U;
    msg.state = 216U;
    msg.error.assign("UXJTOQXMZBGFPNTIIS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.525980542336);
    msg.setSource(14942U);
    msg.setSourceEntity(186U);
    msg.setDestination(5131U);
    msg.setDestinationEntity(170U);
    msg.seq = 4108874864U;
    msg.state = 25U;
    msg.error.assign("BYBDSVCMADSPOKLWYHRUNQPUQQYDKYEUPAZGTQKVDPGXKSSLMIIZFJOUOMDZCOEWAFEHIBVTIBVJWAMPWHNHVHWBRYLSTYNHEANBJOZCJWTKESTXJLLXXQFJAKGPXYFSCSIOVRDFZUHQTIHVMNEEGRHVHKRINIRUAZEBLGEOFRIAKVN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.256190486482);
    msg.setSource(48650U);
    msg.setSourceEntity(41U);
    msg.setDestination(55188U);
    msg.setDestinationEntity(58U);
    msg.origin.assign("SXCYGQKAYNOLCJBPMIUABPFSNPGPEOHZCATMXWTKZUQYLUPYIBOCCGGPHBOCDZFATGWLKH");
    msg.text.assign("OAZYFCFBLVUDVRFZCQQGRRUHUAURFLVBWJQRQWKDECSBFSJDDSUWLQGCKPZGGY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.536848065997);
    msg.setSource(28193U);
    msg.setSourceEntity(201U);
    msg.setDestination(37477U);
    msg.setDestinationEntity(165U);
    msg.origin.assign("VHPAETUQWFBGNGTNTKLVYVNENSRKKLOCLLAGRUIDORRFOSZYMLENOJKNBXPILELVXJYDMDBMGSKWIXHAXLNKAGFBXHHLZCVYVE");
    msg.text.assign("KGUFTRBVXRKGZIBAEQLXVWMHGWQKWBWPYBNABOGJEZMFNSRSUCNNQEHGPOAUYBIUOQIYZJOSVFDWDUVWATLNWJMRAAUTXMLIMFACIPCOYVNETQNEUZFMWQSGVLXGWXHLPPJBHKDEHEAQUTETOFMHNIRMAORHPIWMTGYKJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.662134901563);
    msg.setSource(39892U);
    msg.setSourceEntity(142U);
    msg.setDestination(7321U);
    msg.setDestinationEntity(140U);
    msg.origin.assign("NRSDTFGTJQYCIKHQHIYRFFFQPZWGJTOWTANTEVPUJIOWLQDJUAENFZQWWJDUNEDZVARWXEAGAEQSLUYVLIOBGSKYENDHNROKCMLOS");
    msg.text.assign("TCHYXVZUTXXDWZBPOTNFZJHRTADYAMIWUGWILJKMVACWPMLHANMRVEOIUUFXGADCTDGXWSPQECYKODYKRQLGBNIQLYIYOFPNKUCUDSTMXUIDJRUWUIVOBZWMNJBVZQQTLXJJNSZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.360293942454);
    msg.setSource(24910U);
    msg.setSourceEntity(10U);
    msg.setDestination(5440U);
    msg.setDestinationEntity(242U);
    msg.origin.assign("MVTCHWEJXKDIJKJHQSFVMUFMWDDWICUSAKBWVPZGJUPOTLDRJKLCKSCDDZFMQGFRLBAHHFAZMQSYVXIOMXONHBOLDJUXZNQNEWPZBAMQYGBGLQVVAYHMONWHQERLIHDPERCCJPGYUSNQXVNBUYYMWIOTEUFTGCQTSYCXJIXGRTANJWYXYILPSODKFJBEEVMWAWVCUUHAQAZGS");
    msg.htime = 0.854967765865;
    msg.lat = 0.811236971017;
    msg.lon = 0.0242278579613;
    const char tmp_msg_0[] = {105, 104, -94, 1, 92, 81, 29, -106, 15, -9, -58, -36, -102, 45, 78, 12, -65, 103, 71, -97, 63, 0, -43, -76, -60, 37, 90, 63, 36, 23, 45, -6, 57, -69, -58};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.646818778759);
    msg.setSource(32833U);
    msg.setSourceEntity(20U);
    msg.setDestination(14627U);
    msg.setDestinationEntity(224U);
    msg.origin.assign("VMISZEHFQJQBRSFRKHWWRZGVXELWNCSQXYDHT");
    msg.htime = 0.197953658063;
    msg.lat = 0.911884480716;
    msg.lon = 0.583745089618;
    const char tmp_msg_0[] = {7, -83, -126, 50, 89, -19, -78, -18, -32, 71, 57, 18, -121, -65, -8, -34, -72, -7, 93, 62, 17, -16, 74, 47, 50, 16, -50, 13, -59, -125, -76, 52, 26, 41, 21, -64, -40, 13, -121, -10, -127, -41, 46, -113, 60, 100, 98, 71, 27, -1, -70, 87, 70, 125, -44, -22, 26, 42, 105, 90, 56, 122, -121, -115, -57, 100, -52, -27, -49, 76, -46, -12, 118, -110, 0, -51, -101, 21, 25, 97, 77, 80, -4, -67, 20, 104, 95, 119, 109, 80, -88, 67, 28, -73, -126, -46, 6, -80, -125, -15, 107, 38, 14, 95, -100, 111, -18, -3, -124, 24, 33, -3, 75, 94, -89, 73, -17, 16, -33, -30, -32, 77};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.509761066371);
    msg.setSource(49155U);
    msg.setSourceEntity(28U);
    msg.setDestination(34584U);
    msg.setDestinationEntity(199U);
    msg.origin.assign("LTSJGJVXZJWNQTAREPGMPQRBLMDZPCCSOATCQKALDACMCQGUXITHVFUWTCFMCNPBPIFAFZYEVBXLKCHYSNAVQOXTVKRGLGHDOOYNPEEKLSJRXFKBNBNUYVIZIOWFKFKJVBZOGNLWAARHDZSVYTMWUFXYYUSQPQGEAHXCWAVBIHQWIKXSDXPNHDWBYBJXWTUZJDIEZQZJGYTDHHHS");
    msg.htime = 0.225409167983;
    msg.lat = 0.263647436908;
    msg.lon = 0.0663911549008;
    const char tmp_msg_0[] = {74, -21, -20, 94, -109, -122, -124, -67, -120, 19, 22, -117, -52, -127, 7, 103, -30, 21, 35, -95, -17, 105, 105, 120, 2, -110, -62, 122, 14, -65, -6, 41, -90, 17, 111, -37, -92, -85, 77, -109, -116, 109, 46, -118, -126, -60, 31, 69, 73, -98, 107, -95, -63, 84, -109, 50, 6, -4, 74, 39, 117, 58, 55, 7, -86, 73, 28, -29, -119, -114, -27, 46, -105, 11, 54, 111, -47, 0, 13, -58, 114, 36, 87, -88, 98, 69, -86, -92, -94, -65, 126, 22, 81, -46, 71, -23, 38, 47, 26, -114, -14, -22, -7, -45, 33, -70, 73, -61, 67, -108, 41, 87, -99, 114, 6, -126, -95, 80, -74, 84, -88, 44, -65, -119, -7, 31, -112, -121, -47, 61, -2, -109, -3, 39, 78, -8, -30, 98, 99, 1, -65, -128, -74, 66, -100, 72, 34, -96, -128, -61, -113, -65, -101, -112, -128, -54, -58, -19, 92, 101, -7, -5, -83, 93, 119, -22, -65, 95, 62, 14, 30, -44, -45, 55, 116, -87, 123, -114};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.934433658423);
    msg.setSource(599U);
    msg.setSourceEntity(135U);
    msg.setDestination(6080U);
    msg.setDestinationEntity(185U);
    msg.req_id = 36970U;
    msg.ttl = 30381U;
    msg.destination.assign("JOYLUPUZWQCKGOHW");
    const char tmp_msg_0[] = {-62, -96, 38, -123, -110, -80, 34, 99, -121, -46, 123, -96, -24, 77, 74, -17, -14, 63, 62, -55, 76, -29, -35, -74, -105, 100, -37, -39, -36, -57, -50, 54, 90, 53, -118, 71, 72, -47, 119, 11, -4, 119, 27, 53, 9, -82, 0, 118, 66, 58, -117, 23, -27, -73, 63, -20, 27, 34, -81, -100, 9, -104, -67, 96, -24, 111, 58, -116, -70, 27, -42, 29, -76, -91, 77, 117, 60, -109, -59, -22, 85, 47, 0, -49, 29, -69, -78, 91, -52, -1, -118, -118, 100, -101, 42, 95, 1, -123, -48, -58, 88, 81, -103, -32, 35, 66, 107, 69, 36, -118, -30, -47, 98, -63, -125, -91, 22, 93, 30, 51, 9, -16};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.025135366639);
    msg.setSource(20525U);
    msg.setSourceEntity(249U);
    msg.setDestination(28800U);
    msg.setDestinationEntity(120U);
    msg.req_id = 9711U;
    msg.ttl = 15083U;
    msg.destination.assign("VSIUHUIJOFMBUYICEJETZAAXXRJLODUBOMLGIWQPVLDKAVICUAQJMYKKYQGEABFQLVBNDTWMRUZQUUAMYWGOGOYNSAOKCVEUHYSCTTSXHHXUMHWFZXBBWCXSWQRFERKPZQNZHVVLFZFNKORPGKRYJFDGOQDPMFVIJJOFCQRLISHGRKYJWSITSZBPTEHYPSCMMTNAAYLKCGEINLWDEDHGCBDVPXELNSPTDHDB");
    const char tmp_msg_0[] = {-117, -21, 23, 25, -118, 94, -68, 71, -116, -25, 29, -97, 22, 72, -10, -30, 62, -108, 116, -61, 103, -58, -128, 33, 32, 38, 55, 69, 119, -120, -68, -107, -127, -74, -7, -32, -107, -105, 114, 50};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.243925768094);
    msg.setSource(33286U);
    msg.setSourceEntity(136U);
    msg.setDestination(16875U);
    msg.setDestinationEntity(214U);
    msg.req_id = 50033U;
    msg.ttl = 3744U;
    msg.destination.assign("CMAXXAXIBDOGFYCBZXDATQOVXGIRUFLOOIYCZGVKJGECBKPEFQZCBHDBNHHKKSMPIZIJSDFOAOZAWENGWZKRDDALQVDPNZBGYDNYUNVIVLMPTIGJWONTKTQQYNLMRELOWDGYYRWAFUFUJPRURQNHKSVHCSUMJAXINQCHTGFCPLMBZOQPQQJAWC");
    const char tmp_msg_0[] = {11, -42, -100, 14, 118, -21, 115, 93, 123, -34, 32, -5, -25, -91, 48, -49, 82, 2, 16, 59, 102, 89, 73, -6};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.031217893363);
    msg.setSource(16563U);
    msg.setSourceEntity(57U);
    msg.setDestination(56736U);
    msg.setDestinationEntity(145U);
    msg.req_id = 62684U;
    msg.status = 183U;
    msg.text.assign("DDGAHXICEKMPSBJRPVYDHEIRCZKWFAMYPAFVUGSORONAAJNHSISFLQQLKIVXXS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.490783764981);
    msg.setSource(51927U);
    msg.setSourceEntity(21U);
    msg.setDestination(3522U);
    msg.setDestinationEntity(49U);
    msg.req_id = 19320U;
    msg.status = 246U;
    msg.text.assign("ZNNGURJUAMNQXHYBDEZOOMFHINMYZRTCTZJRWJPXPWGIOXVKWEQUJUGRGCFVLBDUGRBQWKCMTZCMPPUOHDKCWXEIMKHFMBPCBECQOTAGTNLDSSYIBQCULKQZIVJBJXLXSXXSNATOLZFQAICKWIVOTSZENBHIIDBPATLYWKYWGYFGQAZFGEVZQUHKYKRARJPPSFFJNLQDFSBVXHYWOVTEXACAEKFSPMSLDMHOHDMYVPWIERLRYLAOVNDJSURHD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.937988800846);
    msg.setSource(33099U);
    msg.setSourceEntity(6U);
    msg.setDestination(2144U);
    msg.setDestinationEntity(138U);
    msg.req_id = 29115U;
    msg.status = 238U;
    msg.text.assign("YOXHCSGBNADPKMCNMGYADANPMIOYEMETOAFJJMNFBVACTVIZNPCUEYLTGIIRKRNKBEIVVZWSDZOWOHNLPJUIQTUCXCWMEKRAQHCEKYWJOHUGZIVHBBUXERITQPVLLDXVSGZHRZYTQVSHDDZSVJYQFICHMBYHKKAHWZDRZGQUCNRMPJRGPBWGSNTOZOUJXBWJSWFGDJKURXQFXLWQCPLFBDEQSABLKLUXLKYYMTAXLFFTVEXAFPTP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.351411568832);
    msg.setSource(30424U);
    msg.setSourceEntity(59U);
    msg.setDestination(57103U);
    msg.setDestinationEntity(242U);
    msg.group_name.assign("NQITKLIYQAADNEJMLLRBTDMFTICIPVWHFWRGCIPUHSRZCPMSOZXOBKNWWAMPCJAFFLZNQNKHWKGAFHLODEQQIUVKNDXAXWHOIXRCLYVJXXXFVIEGXJLYCZQJYVVPZPCTHYSMMYNUSZTFRMEREC");
    msg.links = 577804273U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.154868056588);
    msg.setSource(22829U);
    msg.setSourceEntity(203U);
    msg.setDestination(51308U);
    msg.setDestinationEntity(22U);
    msg.group_name.assign("BPIUDKRJIBBNHQFMFXYPUGWNXZQJWCPTYLGJJIOJSVJYZHLWMGBWQPKKQASGHCQPTFXSYCEMUZIHGWIBDSHHSRKQXWHUXEZVAMTDTFVNXVTNVRSNLYPTYQZEOXKOAKACRLPICZTYOLXAZHDXUDDGQOPSIOQOSZOWMGIJYORVNGDTCELFPHUNGKELEJKECLXWFBCMDVCBVJOGWYWVBDAIZRSUZATPMKRLCEBFFTNNAFNAHUAUFDMEBMS");
    msg.links = 2654714895U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.528146143798);
    msg.setSource(24979U);
    msg.setSourceEntity(137U);
    msg.setDestination(32368U);
    msg.setDestinationEntity(210U);
    msg.group_name.assign("TJAJQCCHURKKROCKVIKFTCRNMASXSDOEHYFGZXUHGCZLICYNUBJHKMCLXARGZSFFFDGZVYCZKMNIVKODSMLBQAMNBYIJSJLFVIQPFVJNUPUQLHIGVWWEAWWOMWGRBMFM");
    msg.links = 985185987U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.626181991682);
    msg.setSource(20993U);
    msg.setSourceEntity(90U);
    msg.setDestination(26305U);
    msg.setDestinationEntity(116U);
    msg.groupname.assign("FNITMBUSDMSVXZWJSCSHQZEZBMJRTBTVKQLXNHQGEUVHGPNCMICWILJECRXJYYSHFNXCSLSPPUKOEXCORCZUVAYDYYWHYYTRDIZJIKKJWPXRGUAVXZRGTOIXP");
    msg.action = 206U;
    msg.grouplist.assign("GOGCXSKJUYNPXACPDVAPZWRZKMHXKLBGYWRZJVVVAJHCOTEVTZULGPJMTLDZQJQFKJBIKPYRIDRNMQBHSTAONERNJEZKJHCQGKFYNFFOPLDQLDFHYUPGCMSMBXNKYSLBUSBOPUATDOGPMNWJADFGBMNIEYN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.570473929763);
    msg.setSource(64303U);
    msg.setSourceEntity(211U);
    msg.setDestination(57238U);
    msg.setDestinationEntity(166U);
    msg.groupname.assign("KDWQMPECMXXMCYHRKFOXFYPMWQBSIWLPHRGVJBSLYFWRXLWEJUUVHKIOZZERTSGLTVLFXYYNVSSNAKAZCXQQLITPBCFQCHPUNJBICAACVTJZQKHODRUNEATGWTIITHDVSLZWQFJPKLSRNEYQMUAUZEMIHODBLDLSHSAGXZFYYWPUIVKJNNGUCNRHMGFJCGRDDOVEKZEGWWOXGPGMZMOVDBMEKRTFEAIXJ");
    msg.action = 250U;
    msg.grouplist.assign("NRZTGLXIZAQFXAHLZNEGFGDHLMWKVNTEKPTMGNKQITDGWWBHFMCTZUCAKNFZAWFPIQWBQPBWCYNXVUOVUZPG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.0903596946402);
    msg.setSource(39558U);
    msg.setSourceEntity(100U);
    msg.setDestination(36204U);
    msg.setDestinationEntity(136U);
    msg.groupname.assign("ZHBXUNDYESHBAKRIYOGIAMXIYN");
    msg.action = 199U;
    msg.grouplist.assign("ZMPGQWDJEXYXECSAKORGMPIAMECBMCVBRKPRFBHICGKYKDYPLJFJRZKSVELSNIAPOTLCPXEOYXWSYTJSVRPUDZUIUAUKLBDEGKNWHWUVJXWDGILKMEZJF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.272509148539);
    msg.setSource(9516U);
    msg.setSourceEntity(249U);
    msg.setDestination(26961U);
    msg.setDestinationEntity(62U);
    msg.id = 54U;
    msg.range = 0.506605040223;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.461058243907);
    msg.setSource(63110U);
    msg.setSourceEntity(69U);
    msg.setDestination(50877U);
    msg.setDestinationEntity(96U);
    msg.id = 183U;
    msg.range = 0.888837467461;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.354932998812);
    msg.setSource(10811U);
    msg.setSourceEntity(237U);
    msg.setDestination(22283U);
    msg.setDestinationEntity(36U);
    msg.id = 23U;
    msg.range = 0.207473815068;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblDetection msg;
    msg.setTimeStamp(0.931017463989);
    msg.setSource(29193U);
    msg.setSourceEntity(173U);
    msg.setDestination(64606U);
    msg.setDestinationEntity(104U);
    msg.tx = 247U;
    msg.channel = 214U;
    msg.timer = 17556U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblDetection msg;
    msg.setTimeStamp(0.931548460033);
    msg.setSource(57949U);
    msg.setSourceEntity(203U);
    msg.setDestination(56717U);
    msg.setDestinationEntity(90U);
    msg.tx = 122U;
    msg.channel = 155U;
    msg.timer = 1090U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblDetection msg;
    msg.setTimeStamp(0.701001252927);
    msg.setSource(65373U);
    msg.setSourceEntity(157U);
    msg.setDestination(19615U);
    msg.setDestinationEntity(199U);
    msg.tx = 151U;
    msg.channel = 241U;
    msg.timer = 1130U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.252317163847);
    msg.setSource(9068U);
    msg.setSourceEntity(93U);
    msg.setDestination(14358U);
    msg.setDestinationEntity(15U);
    msg.beacon.assign("EJQWZMDXSTCUHDMYTKFPEZOSXNCFDEIRNIRBFPUHZNFQQIJPSAOQBEWWJIGSESTKNLLJRYPHXNTITCFZVDPYDXIDTMYSIAPIXLUZGOLFCCLGJTNKOBWWHCRYYHCNOAVBYBXSPVARYPZFXGZMRBMBKGOFKQGGYVVCUGVETKCAFLOPQMIASRUGHNBVVUUYHKBKEJAOW");
    msg.lat = 0.363061621277;
    msg.lon = 0.725564886967;
    msg.depth = 0.757109103925;
    msg.query_channel = 159U;
    msg.reply_channel = 9U;
    msg.transponder_delay = 205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.275915098272);
    msg.setSource(28601U);
    msg.setSourceEntity(200U);
    msg.setDestination(9659U);
    msg.setDestinationEntity(170U);
    msg.beacon.assign("FHUIPMUSIXFMCKKPYMPIBZHCXSJYOARDNMIZPAQNVJBTVEUGQQNZBAENEVHGWDSQXJMCVVOGCFSNMRTGVCKTERCKSHADJRFGGLKPHWPYDTYEPCUGOEFUFAADHVHQXJNJYFKTYOVAKWJZRQWRDGFTMPMCWNVXOAMLRZBINBUTUQXIUBXCESUHVXNZLEWLHOZOKRTMOLZYSQLPSUXDYXPRZILKJGBFIWHABTZI");
    msg.lat = 0.695828548286;
    msg.lon = 0.405967944578;
    msg.depth = 0.80973349751;
    msg.query_channel = 97U;
    msg.reply_channel = 173U;
    msg.transponder_delay = 198U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.576710028436);
    msg.setSource(24489U);
    msg.setSourceEntity(112U);
    msg.setDestination(18609U);
    msg.setDestinationEntity(95U);
    msg.beacon.assign("MHKUQOSVFNJCGIQAVHOTJCGQZODMAAFGZRSJTJVEXGWLDIMPFKOEKSYXKXFGZBTBVEYYGNUWNOTJRQQHTAUUNXBFKSLNCEBFKVIFOVJRFBQJDYIRPBIXZTVZWLLUKDNZSPQPVPATCDUMRELRHRHRYJUCIFDBLHCXSPLVMZKPHZIBARNGGVXRUZAWDXYPNEINPMSDWUYQGQLCLMKIAWLSEETWWHZJYXGOJOFDOW");
    msg.lat = 0.186164456447;
    msg.lon = 0.127388656163;
    msg.depth = 0.805622152231;
    msg.query_channel = 72U;
    msg.reply_channel = 111U;
    msg.transponder_delay = 246U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.372662289099);
    msg.setSource(41817U);
    msg.setSourceEntity(129U);
    msg.setDestination(22378U);
    msg.setDestinationEntity(188U);
    msg.op = 116U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.77919101923);
    msg.setSource(24005U);
    msg.setSourceEntity(210U);
    msg.setDestination(23650U);
    msg.setDestinationEntity(79U);
    msg.op = 9U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QHPWHXLPADFXLELGAJSHYBINSHVIJPGVRTMZWEVDMLWMBUVQBIBVJGKKUEHRNXNFFGMYQGGJZGUTSXBXIBCFWSIFWQZTPXBRUIYFV");
    tmp_msg_0.lat = 0.542455684633;
    tmp_msg_0.lon = 0.376046815136;
    tmp_msg_0.depth = 0.523872162611;
    tmp_msg_0.query_channel = 8U;
    tmp_msg_0.reply_channel = 82U;
    tmp_msg_0.transponder_delay = 53U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.691550073573);
    msg.setSource(42656U);
    msg.setSourceEntity(127U);
    msg.setDestination(58750U);
    msg.setDestinationEntity(180U);
    msg.op = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRange msg;
    msg.setTimeStamp(0.453206577753);
    msg.setSource(3891U);
    msg.setSourceEntity(172U);
    msg.setDestination(8346U);
    msg.setDestinationEntity(244U);
    msg.address = 98U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRange msg;
    msg.setTimeStamp(0.15697640253);
    msg.setSource(48653U);
    msg.setSourceEntity(117U);
    msg.setDestination(64451U);
    msg.setDestinationEntity(27U);
    msg.address = 81U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRange msg;
    msg.setTimeStamp(0.965059073753);
    msg.setSource(12256U);
    msg.setSourceEntity(120U);
    msg.setDestination(31249U);
    msg.setDestinationEntity(201U);
    msg.address = 141U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRangeReply msg;
    msg.setTimeStamp(0.0107944489355);
    msg.setSource(9355U);
    msg.setSourceEntity(104U);
    msg.setDestination(31775U);
    msg.setDestinationEntity(194U);
    msg.address = 109U;
    msg.status = 132U;
    msg.range = 0.587257834261;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRangeReply #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRangeReply msg;
    msg.setTimeStamp(0.912016002421);
    msg.setSource(38763U);
    msg.setSourceEntity(155U);
    msg.setDestination(49060U);
    msg.setDestinationEntity(29U);
    msg.address = 117U;
    msg.status = 57U;
    msg.range = 0.835912437054;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRangeReply #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRangeReply msg;
    msg.setTimeStamp(0.250212343878);
    msg.setSource(35702U);
    msg.setSourceEntity(67U);
    msg.setDestination(51578U);
    msg.setDestinationEntity(108U);
    msg.address = 8U;
    msg.status = 214U;
    msg.range = 0.179756658998;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRangeReply #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.0474345373425);
    msg.setSource(40524U);
    msg.setSourceEntity(143U);
    msg.setDestination(39365U);
    msg.setDestinationEntity(128U);
    IMC::AcousticMessage tmp_msg_0;
    IMC::DesiredHeadingRate tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.912936815196;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.785259303032);
    msg.setSource(51893U);
    msg.setSourceEntity(64U);
    msg.setDestination(45478U);
    msg.setDestinationEntity(74U);
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.755479979516;
    tmp_tmp_msg_0_0.speed_units = 87U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 51160U;
    tmp_msg_0.custom.assign("NMBIINYOQVFGIGNHFSOXVTVGBUOQSVEEBGKQFXHJXYG");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.923423224318);
    msg.setSource(29840U);
    msg.setSourceEntity(131U);
    msg.setDestination(16731U);
    msg.setDestinationEntity(132U);
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.584530945531;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticDiagnostic msg;
    msg.setTimeStamp(0.721107482485);
    msg.setSource(13156U);
    msg.setSourceEntity(206U);
    msg.setDestination(9401U);
    msg.setDestinationEntity(187U);
    msg.enable = 128U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticDiagnostic #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticDiagnostic msg;
    msg.setTimeStamp(0.222048314224);
    msg.setSource(23297U);
    msg.setSourceEntity(15U);
    msg.setDestination(64364U);
    msg.setDestinationEntity(10U);
    msg.enable = 20U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticDiagnostic #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticDiagnostic msg;
    msg.setTimeStamp(0.377045903913);
    msg.setSource(12747U);
    msg.setSourceEntity(84U);
    msg.setDestination(47985U);
    msg.setDestinationEntity(8U);
    msg.enable = 122U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticDiagnostic #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticNoise msg;
    msg.setTimeStamp(0.169428695332);
    msg.setSource(37811U);
    msg.setSourceEntity(130U);
    msg.setDestination(18156U);
    msg.setDestinationEntity(230U);
    msg.summary = 206U;
    msg.level = 77U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticNoise #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticNoise msg;
    msg.setTimeStamp(0.746676138759);
    msg.setSource(14030U);
    msg.setSourceEntity(56U);
    msg.setDestination(64584U);
    msg.setDestinationEntity(234U);
    msg.summary = 100U;
    msg.level = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticNoise #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticNoise msg;
    msg.setTimeStamp(0.35815640251);
    msg.setSource(685U);
    msg.setSourceEntity(83U);
    msg.setDestination(42415U);
    msg.setDestinationEntity(151U);
    msg.summary = 220U;
    msg.level = 58U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticNoise #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPing msg;
    msg.setTimeStamp(0.135854012024);
    msg.setSource(9671U);
    msg.setSourceEntity(124U);
    msg.setDestination(58833U);
    msg.setDestinationEntity(83U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPing #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPing msg;
    msg.setTimeStamp(0.897778275334);
    msg.setSource(27914U);
    msg.setSourceEntity(34U);
    msg.setDestination(16778U);
    msg.setDestinationEntity(192U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPing #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPing msg;
    msg.setTimeStamp(0.991049330442);
    msg.setSource(12197U);
    msg.setSourceEntity(47U);
    msg.setDestination(12044U);
    msg.setDestinationEntity(72U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPing #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPingReply msg;
    msg.setTimeStamp(0.182456902643);
    msg.setSource(28324U);
    msg.setSourceEntity(84U);
    msg.setDestination(28053U);
    msg.setDestinationEntity(47U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPingReply #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPingReply msg;
    msg.setTimeStamp(0.7315691569);
    msg.setSource(36671U);
    msg.setSourceEntity(101U);
    msg.setDestination(36435U);
    msg.setDestinationEntity(88U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPingReply #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPingReply msg;
    msg.setTimeStamp(0.166746182323);
    msg.setSource(38605U);
    msg.setSourceEntity(61U);
    msg.setDestination(1713U);
    msg.setDestinationEntity(185U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPingReply #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.557604845227);
    msg.setSource(63147U);
    msg.setSourceEntity(158U);
    msg.setDestination(43935U);
    msg.setDestinationEntity(12U);
    msg.op = 9U;
    msg.system.assign("TGTQIQCXAAFKJYSMPTHOINZVXDKQNGRFABLDQVOOUZNTAODKMHUGDXHEUCNYXLPCRWYHI");
    msg.range = 0.430428096145;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 61478U;
    tmp_msg_0.lat = 0.251456812568;
    tmp_msg_0.lon = 0.675861380511;
    tmp_msg_0.z = 0.0628224414322;
    tmp_msg_0.z_units = 226U;
    tmp_msg_0.speed = 0.929484701524;
    tmp_msg_0.speed_units = 245U;
    tmp_msg_0.roll = 0.82956548671;
    tmp_msg_0.pitch = 0.795340277954;
    tmp_msg_0.yaw = 0.710533673614;
    tmp_msg_0.custom.assign("YAKQZPQDFUEMSZVGWTGJGFHKKGWFDURXSXUSBECBEGNTERUOZMHLJSDBPVOMZNPMZKMMWWLXMYAYMSAFKCUJKZHAWSXGQDCIEIIYQWLGGAIJSPPBLTZBHBSFRJBVJHXPMDXAOLHWEUEYNHFDICLTHYXJRTIOVSHZQOVRKOWAWNAJRDOLMQSTLYRFLOYDAHQBNRPORKVQYINNVUUCEZVDCNUVTRYFNGWAXQCDTPPCELQJVOPBCFI");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.0953178965648);
    msg.setSource(45012U);
    msg.setSourceEntity(186U);
    msg.setDestination(58489U);
    msg.setDestinationEntity(222U);
    msg.op = 253U;
    msg.system.assign("XBPOCNJEGYMCIQVQDPWLFNDTZKXXAASMJKEALHSSALOLJWKOQYAWBPMYHIAIEIGDAHGUFDNPWMMWXOVSLWFYSAJZICRIRPOWMB");
    msg.range = 0.0986513472509;
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 212U;
    tmp_msg_0.mnames.assign("BNSJGGFNXFSJMRMXHSDJGESXWLLVFBGFATETUWOULNYCAZRSBQVCBNBKOYWOTRPKUQDPQMLCJCAKXIKYHSLJGPIASSETHVZCU");
    tmp_msg_0.ecount = 62U;
    tmp_msg_0.enames.assign("HEYIACEJWQWXQIVUQ");
    tmp_msg_0.ccount = 44U;
    tmp_msg_0.cnames.assign("WVHSVQRZZDKPLBSPCMGHYIVRZFDCBOXBIEGVVKTEJIRAURBAQAHSOBSQLDUJMFQMYDTMDKYXIKJDPALNTVADNULWQSMJIYPRQJPKSEPUUOKXNTINZNKCJPXMZQUZEGOAGAHGOZXRFIOFZSUPZZNQSFTIYBACCQWJKIFFJSTXEYUGLCICTLWFTXMNWMWKBPNDCNRWYYHHELWCDGQFRCAOXOJAGPV");
    tmp_msg_0.last_error.assign("NEXHFOULAECD");
    tmp_msg_0.last_error_time = 0.396438961992;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.711957913302);
    msg.setSource(47262U);
    msg.setSourceEntity(169U);
    msg.setDestination(38620U);
    msg.setDestinationEntity(105U);
    msg.op = 250U;
    msg.system.assign("KIGXBWBMZMIYXOLGKSUBLKMKJKZA");
    msg.range = 0.679190005261;
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.0233376631199;
    tmp_msg_0.x = 0.00748591557162;
    tmp_msg_0.y = 0.223992417087;
    tmp_msg_0.z = 0.0537140139828;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.0413762522465);
    msg.setSource(7629U);
    msg.setSourceEntity(215U);
    msg.setDestination(19196U);
    msg.setDestinationEntity(165U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.348179477572);
    msg.setSource(64543U);
    msg.setSourceEntity(35U);
    msg.setDestination(41842U);
    msg.setDestinationEntity(206U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.890671450708);
    msg.setSource(11480U);
    msg.setSourceEntity(136U);
    msg.setDestination(341U);
    msg.setDestinationEntity(78U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.371725656692);
    msg.setSource(14758U);
    msg.setSourceEntity(116U);
    msg.setDestination(8777U);
    msg.setDestinationEntity(99U);
    msg.list.assign("XIUGDJPRHUPTPTOBSKJLROBHYPTBMFHVYDEAUHWSMWWMCHQCENFIQZXQAXNNDQXROROHSVAMJJUWBNHFKCLBCTXYAOXMGAFLVMSPQMEDZLVJCSFSTNNVCBRPIYINAUZKEEERFNQWZBGZQZLUTLPPSFDVUFAJSGJGAJLCKKXCLSCMFIWIGXYOEUVQYJTMRXNDCRTWESFMOQYIREYGHPDQGAYODRKVWJBNAUZKVHDWKIBOLKUYTBIXVDIZTZGK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.254267437563);
    msg.setSource(35204U);
    msg.setSourceEntity(182U);
    msg.setDestination(51928U);
    msg.setDestinationEntity(33U);
    msg.list.assign("UJYKZYGZRLXTZEBVLHQAQQSDDJVSDSDEIVPRBJLTLKPFWMAKMIGOJXPHHB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.795068270587);
    msg.setSource(32972U);
    msg.setSourceEntity(142U);
    msg.setDestination(2380U);
    msg.setDestinationEntity(25U);
    msg.list.assign("UJZZSVIINJAGYWMGABUYVLMAOZPOMIFBPFROWIHISQNKLKYOBFFRVLUFYRKQDAUZMHJDLVCZHPADTAMEALJEQWVDLRRZWCPBFLONOPCEFZCDEGTKEGEUVTWNCNBCWRXSSGVPSQYXTJFXBLNHNBRXBWOHGHYSEPIMPNXPGURBIJWKAYZXMOTXYNBRIWZTEUJLNJQDEKQTQVSKMJTHCQXTDKGUDCIQHRLFFYAIVGSMHZOPXXYUHVKWUDSOGCQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.598391755505);
    msg.setSource(49907U);
    msg.setSourceEntity(24U);
    msg.setDestination(53363U);
    msg.setDestinationEntity(224U);
    msg.value = -4691;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.669650185353);
    msg.setSource(57953U);
    msg.setSourceEntity(126U);
    msg.setDestination(44250U);
    msg.setDestinationEntity(193U);
    msg.value = 31415;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.544303599701);
    msg.setSource(36766U);
    msg.setSourceEntity(238U);
    msg.setDestination(62900U);
    msg.setDestinationEntity(202U);
    msg.value = 14961;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.422569808929);
    msg.setSource(28720U);
    msg.setSourceEntity(125U);
    msg.setDestination(38924U);
    msg.setDestinationEntity(24U);
    msg.value = 0.252896062103;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.462047206424);
    msg.setSource(58975U);
    msg.setSourceEntity(125U);
    msg.setDestination(53630U);
    msg.setDestinationEntity(86U);
    msg.value = 0.541666794233;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.359793388365);
    msg.setSource(40093U);
    msg.setSourceEntity(214U);
    msg.setDestination(49714U);
    msg.setDestinationEntity(221U);
    msg.value = 0.0502777833453;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.990273405958);
    msg.setSource(19509U);
    msg.setSourceEntity(137U);
    msg.setDestination(9488U);
    msg.setDestinationEntity(133U);
    msg.value = 0.951688347831;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.488574572601);
    msg.setSource(15750U);
    msg.setSourceEntity(161U);
    msg.setDestination(56097U);
    msg.setDestinationEntity(180U);
    msg.value = 0.0457799096638;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.29716129258);
    msg.setSource(21981U);
    msg.setSourceEntity(180U);
    msg.setDestination(59344U);
    msg.setDestinationEntity(190U);
    msg.value = 0.518980602171;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.586489096779);
    msg.setSource(16512U);
    msg.setSourceEntity(226U);
    msg.setDestination(33215U);
    msg.setDestinationEntity(125U);
    msg.validity = 19761U;
    msg.type = 133U;
    msg.utc_year = 16831U;
    msg.utc_month = 65U;
    msg.utc_day = 71U;
    msg.utc_time = 0.455189400999;
    msg.lat = 0.261092052915;
    msg.lon = 0.158948066927;
    msg.height = 0.571828189075;
    msg.satellites = 235U;
    msg.cog = 0.0672955471693;
    msg.sog = 0.159570542688;
    msg.hdop = 0.0491391292464;
    msg.vdop = 0.908623530973;
    msg.hacc = 0.788805023961;
    msg.vacc = 0.169339700484;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.38648217156);
    msg.setSource(40218U);
    msg.setSourceEntity(36U);
    msg.setDestination(31304U);
    msg.setDestinationEntity(14U);
    msg.validity = 62226U;
    msg.type = 248U;
    msg.utc_year = 63562U;
    msg.utc_month = 9U;
    msg.utc_day = 132U;
    msg.utc_time = 0.949077899442;
    msg.lat = 0.682656810053;
    msg.lon = 0.644568899069;
    msg.height = 0.011111527699;
    msg.satellites = 109U;
    msg.cog = 0.100817236363;
    msg.sog = 0.405660510113;
    msg.hdop = 0.858603297527;
    msg.vdop = 0.230786407504;
    msg.hacc = 0.455497915574;
    msg.vacc = 0.413148984913;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.299721063369);
    msg.setSource(57864U);
    msg.setSourceEntity(182U);
    msg.setDestination(24382U);
    msg.setDestinationEntity(85U);
    msg.validity = 44418U;
    msg.type = 122U;
    msg.utc_year = 35947U;
    msg.utc_month = 148U;
    msg.utc_day = 116U;
    msg.utc_time = 0.502174553549;
    msg.lat = 0.961576015369;
    msg.lon = 0.655052127443;
    msg.height = 0.819239379467;
    msg.satellites = 158U;
    msg.cog = 0.573087124182;
    msg.sog = 0.562853535812;
    msg.hdop = 0.122380318609;
    msg.vdop = 0.818123684279;
    msg.hacc = 0.108180370513;
    msg.vacc = 0.224752002963;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.381570729595);
    msg.setSource(17495U);
    msg.setSourceEntity(78U);
    msg.setDestination(17175U);
    msg.setDestinationEntity(231U);
    msg.time = 0.738571086607;
    msg.phi = 0.82542197743;
    msg.theta = 0.840972662888;
    msg.psi = 0.135296156735;
    msg.psi_magnetic = 0.183316708765;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.988177767526);
    msg.setSource(38590U);
    msg.setSourceEntity(2U);
    msg.setDestination(56882U);
    msg.setDestinationEntity(161U);
    msg.time = 0.144327089682;
    msg.phi = 0.0423063696553;
    msg.theta = 0.095753770174;
    msg.psi = 0.689393166927;
    msg.psi_magnetic = 0.896283185925;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.426390260266);
    msg.setSource(61433U);
    msg.setSourceEntity(108U);
    msg.setDestination(3257U);
    msg.setDestinationEntity(70U);
    msg.time = 0.0816362341587;
    msg.phi = 0.641793064393;
    msg.theta = 0.992706818149;
    msg.psi = 0.296916277557;
    msg.psi_magnetic = 0.812036541381;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.411468888114);
    msg.setSource(1174U);
    msg.setSourceEntity(183U);
    msg.setDestination(44682U);
    msg.setDestinationEntity(73U);
    msg.time = 0.18232703081;
    msg.x = 0.21720787806;
    msg.y = 0.243819893322;
    msg.z = 0.000554150979612;
    msg.timestep = 0.0658991930704;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.0683389429739);
    msg.setSource(19905U);
    msg.setSourceEntity(175U);
    msg.setDestination(15302U);
    msg.setDestinationEntity(105U);
    msg.time = 0.117687592704;
    msg.x = 0.821703706247;
    msg.y = 0.718193406244;
    msg.z = 0.527332589459;
    msg.timestep = 0.802534553763;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.626450050072);
    msg.setSource(22687U);
    msg.setSourceEntity(134U);
    msg.setDestination(36908U);
    msg.setDestinationEntity(154U);
    msg.time = 0.174908620984;
    msg.x = 0.048704406893;
    msg.y = 0.737947786826;
    msg.z = 0.826912444107;
    msg.timestep = 0.99253661104;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.993582785771);
    msg.setSource(50397U);
    msg.setSourceEntity(22U);
    msg.setDestination(41621U);
    msg.setDestinationEntity(129U);
    msg.time = 0.666590177;
    msg.x = 0.569055972318;
    msg.y = 0.499068643118;
    msg.z = 0.700075041047;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.439074547365);
    msg.setSource(7823U);
    msg.setSourceEntity(236U);
    msg.setDestination(35173U);
    msg.setDestinationEntity(207U);
    msg.time = 0.502539665615;
    msg.x = 0.0378420461256;
    msg.y = 0.566211538508;
    msg.z = 0.484751413871;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.168309705792);
    msg.setSource(11688U);
    msg.setSourceEntity(6U);
    msg.setDestination(6994U);
    msg.setDestinationEntity(219U);
    msg.time = 0.12691478037;
    msg.x = 0.55075249305;
    msg.y = 0.595069878203;
    msg.z = 0.351130668416;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.731978471916);
    msg.setSource(65425U);
    msg.setSourceEntity(215U);
    msg.setDestination(60893U);
    msg.setDestinationEntity(123U);
    msg.time = 0.901677442237;
    msg.x = 0.214343336548;
    msg.y = 0.50084951367;
    msg.z = 0.721146810876;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.708789379967);
    msg.setSource(16063U);
    msg.setSourceEntity(50U);
    msg.setDestination(56941U);
    msg.setDestinationEntity(134U);
    msg.time = 0.355625643551;
    msg.x = 0.797503134508;
    msg.y = 0.0081221500418;
    msg.z = 0.459422720491;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.538355013061);
    msg.setSource(59692U);
    msg.setSourceEntity(62U);
    msg.setDestination(59690U);
    msg.setDestinationEntity(21U);
    msg.time = 0.0207530708566;
    msg.x = 0.799571662671;
    msg.y = 0.23937338539;
    msg.z = 0.974523694271;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.237287905642);
    msg.setSource(22192U);
    msg.setSourceEntity(98U);
    msg.setDestination(33636U);
    msg.setDestinationEntity(70U);
    msg.time = 0.974488957299;
    msg.x = 0.29087534298;
    msg.y = 0.160785833519;
    msg.z = 0.353633259556;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.27777555172);
    msg.setSource(36894U);
    msg.setSourceEntity(237U);
    msg.setDestination(42699U);
    msg.setDestinationEntity(236U);
    msg.time = 0.229210049128;
    msg.x = 0.529997057845;
    msg.y = 0.84971854939;
    msg.z = 0.10660628192;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.470863183941);
    msg.setSource(28377U);
    msg.setSourceEntity(218U);
    msg.setDestination(34177U);
    msg.setDestinationEntity(182U);
    msg.time = 0.408272778378;
    msg.x = 0.875823983328;
    msg.y = 0.221420034615;
    msg.z = 0.401493055308;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.179333473203);
    msg.setSource(24296U);
    msg.setSourceEntity(118U);
    msg.setDestination(43582U);
    msg.setDestinationEntity(200U);
    msg.validity = 228U;
    msg.x = 0.25789364471;
    msg.y = 0.996314789143;
    msg.z = 0.764708501079;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.751325481326);
    msg.setSource(25130U);
    msg.setSourceEntity(221U);
    msg.setDestination(53572U);
    msg.setDestinationEntity(115U);
    msg.validity = 57U;
    msg.x = 0.941265264824;
    msg.y = 0.618005013563;
    msg.z = 0.81785718493;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.268511369854);
    msg.setSource(18239U);
    msg.setSourceEntity(171U);
    msg.setDestination(3206U);
    msg.setDestinationEntity(110U);
    msg.validity = 238U;
    msg.x = 0.0278074134451;
    msg.y = 0.49833487758;
    msg.z = 0.128918501296;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.699149642808);
    msg.setSource(57577U);
    msg.setSourceEntity(140U);
    msg.setDestination(21904U);
    msg.setDestinationEntity(39U);
    msg.validity = 204U;
    msg.x = 0.341192722213;
    msg.y = 0.465764567761;
    msg.z = 0.654432439136;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.0792443925111);
    msg.setSource(40182U);
    msg.setSourceEntity(90U);
    msg.setDestination(45572U);
    msg.setDestinationEntity(247U);
    msg.validity = 200U;
    msg.x = 0.943889778815;
    msg.y = 0.548820638811;
    msg.z = 0.76150777425;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.549781137538);
    msg.setSource(21104U);
    msg.setSourceEntity(16U);
    msg.setDestination(6747U);
    msg.setDestinationEntity(171U);
    msg.validity = 144U;
    msg.x = 0.937611949798;
    msg.y = 0.873100920965;
    msg.z = 0.771385769699;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.853681042012);
    msg.setSource(65389U);
    msg.setSourceEntity(89U);
    msg.setDestination(63434U);
    msg.setDestinationEntity(150U);
    msg.time = 0.776804867246;
    msg.x = 0.952228804978;
    msg.y = 0.74238287859;
    msg.z = 0.493240127791;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.0833425164128);
    msg.setSource(15880U);
    msg.setSourceEntity(46U);
    msg.setDestination(22513U);
    msg.setDestinationEntity(102U);
    msg.time = 0.535960624343;
    msg.x = 0.415647884935;
    msg.y = 0.898715033857;
    msg.z = 0.311942888983;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.293455395615);
    msg.setSource(52438U);
    msg.setSourceEntity(99U);
    msg.setDestination(7732U);
    msg.setDestinationEntity(233U);
    msg.time = 0.310624784645;
    msg.x = 0.304796563219;
    msg.y = 0.285615934183;
    msg.z = 0.249902086908;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.736817598905);
    msg.setSource(50621U);
    msg.setSourceEntity(190U);
    msg.setDestination(30671U);
    msg.setDestinationEntity(218U);
    msg.validity = 108U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0915740467294;
    tmp_msg_0.y = 0.195039884263;
    tmp_msg_0.z = 0.0266517643774;
    tmp_msg_0.phi = 0.75802591827;
    tmp_msg_0.theta = 0.818710194439;
    tmp_msg_0.psi = 0.390594732159;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.870650753851;
    tmp_msg_1.beam_height = 0.771381910226;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.278112570712;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.829816399048);
    msg.setSource(32809U);
    msg.setSourceEntity(34U);
    msg.setDestination(65519U);
    msg.setDestinationEntity(1U);
    msg.validity = 109U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0679199711004;
    tmp_msg_0.beam_height = 0.589912960749;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.589047748466;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.261314506527);
    msg.setSource(46668U);
    msg.setSourceEntity(69U);
    msg.setDestination(40890U);
    msg.setDestinationEntity(157U);
    msg.validity = 238U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.339154317588;
    tmp_msg_0.beam_height = 0.846894499546;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.457268692793;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.531925930413);
    msg.setSource(57370U);
    msg.setSourceEntity(0U);
    msg.setDestination(28914U);
    msg.setDestinationEntity(6U);
    msg.value = 0.662183441638;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.532268194221);
    msg.setSource(61574U);
    msg.setSourceEntity(131U);
    msg.setDestination(5192U);
    msg.setDestinationEntity(30U);
    msg.value = 0.338424035146;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.741411139208);
    msg.setSource(32521U);
    msg.setSourceEntity(116U);
    msg.setDestination(2503U);
    msg.setDestinationEntity(141U);
    msg.value = 0.816742840997;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.496806551716);
    msg.setSource(36592U);
    msg.setSourceEntity(110U);
    msg.setDestination(40797U);
    msg.setDestinationEntity(165U);
    msg.value = 0.657615496258;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.338339345581);
    msg.setSource(45209U);
    msg.setSourceEntity(130U);
    msg.setDestination(50241U);
    msg.setDestinationEntity(74U);
    msg.value = 0.636040699582;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.432863821432);
    msg.setSource(30677U);
    msg.setSourceEntity(80U);
    msg.setDestination(55693U);
    msg.setDestinationEntity(3U);
    msg.value = 0.356576485515;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.393295607765);
    msg.setSource(5085U);
    msg.setSourceEntity(101U);
    msg.setDestination(65322U);
    msg.setDestinationEntity(97U);
    msg.value = 0.372506059512;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.84276612717);
    msg.setSource(58140U);
    msg.setSourceEntity(146U);
    msg.setDestination(22830U);
    msg.setDestinationEntity(138U);
    msg.value = 0.653855021807;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.574347872187);
    msg.setSource(20047U);
    msg.setSourceEntity(54U);
    msg.setDestination(40959U);
    msg.setDestinationEntity(59U);
    msg.value = 0.447728875559;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.468756309662);
    msg.setSource(26912U);
    msg.setSourceEntity(211U);
    msg.setDestination(247U);
    msg.setDestinationEntity(207U);
    msg.value = 0.143044185533;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.776178201586);
    msg.setSource(17500U);
    msg.setSourceEntity(96U);
    msg.setDestination(48741U);
    msg.setDestinationEntity(106U);
    msg.value = 0.0612023087834;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.0408615350589);
    msg.setSource(8812U);
    msg.setSourceEntity(189U);
    msg.setDestination(21794U);
    msg.setDestinationEntity(252U);
    msg.value = 0.0237430786849;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.316846349926);
    msg.setSource(22708U);
    msg.setSourceEntity(249U);
    msg.setDestination(34005U);
    msg.setDestinationEntity(125U);
    msg.value = 0.890101311436;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.688584805132);
    msg.setSource(65048U);
    msg.setSourceEntity(94U);
    msg.setDestination(21975U);
    msg.setDestinationEntity(92U);
    msg.value = 0.102325470115;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.268700312673);
    msg.setSource(13431U);
    msg.setSourceEntity(54U);
    msg.setDestination(18577U);
    msg.setDestinationEntity(47U);
    msg.value = 0.527504902075;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.209326473129);
    msg.setSource(44677U);
    msg.setSourceEntity(128U);
    msg.setDestination(35865U);
    msg.setDestinationEntity(129U);
    msg.value = 0.261261815328;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.136595385405);
    msg.setSource(57774U);
    msg.setSourceEntity(233U);
    msg.setDestination(62760U);
    msg.setDestinationEntity(102U);
    msg.value = 0.125387087639;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.288151926029);
    msg.setSource(59108U);
    msg.setSourceEntity(122U);
    msg.setDestination(45005U);
    msg.setDestinationEntity(69U);
    msg.value = 0.0359159029042;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.249558399867);
    msg.setSource(35126U);
    msg.setSourceEntity(234U);
    msg.setDestination(35413U);
    msg.setDestinationEntity(198U);
    msg.value = 0.899014488157;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.161638845344);
    msg.setSource(10212U);
    msg.setSourceEntity(245U);
    msg.setDestination(30920U);
    msg.setDestinationEntity(71U);
    msg.value = 0.770829529008;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.455615923214);
    msg.setSource(24891U);
    msg.setSourceEntity(205U);
    msg.setDestination(40183U);
    msg.setDestinationEntity(65U);
    msg.value = 0.828850443315;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.196296763318);
    msg.setSource(52690U);
    msg.setSourceEntity(119U);
    msg.setDestination(13953U);
    msg.setDestinationEntity(14U);
    msg.value = 0.632754673934;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.580253393832);
    msg.setSource(5205U);
    msg.setSourceEntity(125U);
    msg.setDestination(5157U);
    msg.setDestinationEntity(46U);
    msg.value = 0.09139338356;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.795484118943);
    msg.setSource(17236U);
    msg.setSourceEntity(147U);
    msg.setDestination(42155U);
    msg.setDestinationEntity(95U);
    msg.value = 0.819767100434;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.115731123015);
    msg.setSource(2283U);
    msg.setSourceEntity(214U);
    msg.setDestination(54641U);
    msg.setDestinationEntity(4U);
    msg.direction = 0.906919175673;
    msg.speed = 0.726873791259;
    msg.turbulence = 0.583340784887;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.108820551691);
    msg.setSource(36554U);
    msg.setSourceEntity(63U);
    msg.setDestination(46181U);
    msg.setDestinationEntity(236U);
    msg.direction = 0.404710157663;
    msg.speed = 0.0456675914331;
    msg.turbulence = 0.136258898859;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.0939007416415);
    msg.setSource(62680U);
    msg.setSourceEntity(99U);
    msg.setDestination(14161U);
    msg.setDestinationEntity(133U);
    msg.direction = 0.640764751636;
    msg.speed = 0.111504167681;
    msg.turbulence = 0.547713815189;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.283396401814);
    msg.setSource(2763U);
    msg.setSourceEntity(118U);
    msg.setDestination(62110U);
    msg.setDestinationEntity(80U);
    msg.value = 0.86028814472;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.527058253922);
    msg.setSource(56076U);
    msg.setSourceEntity(67U);
    msg.setDestination(21523U);
    msg.setDestinationEntity(85U);
    msg.value = 0.833914393722;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.596011261558);
    msg.setSource(21798U);
    msg.setSourceEntity(163U);
    msg.setDestination(9014U);
    msg.setDestinationEntity(40U);
    msg.value = 0.866251505179;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.0882166564052);
    msg.setSource(41602U);
    msg.setSourceEntity(172U);
    msg.setDestination(14215U);
    msg.setDestinationEntity(115U);
    msg.value.assign("OBYPQUONPVJSQNBRUGGBJUAGGLKTXJTQHOMJOVILMNQMIZCOXHNEJQWSZPZJECXUWLCVUUFLAZLTBXCAGZSNRUYUMZBESFPDMWMBFYBYRYJMYGPZHSTZBFOKEFIWILHFPJTFODLYFTRXDHKSICAJLKAIRGRWYATYGWDZCODNSLDH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.370931949891);
    msg.setSource(7846U);
    msg.setSourceEntity(15U);
    msg.setDestination(37236U);
    msg.setDestinationEntity(213U);
    msg.value.assign("VZEQEYFRBCKNTXSRHBAOHAPQOPUWMAAOVSNTNBUDJKWIPGERLSMADOBIZCNKDGIXQHXQZGRYBTZNEYIGRTRWJWIGGUIXSMYINLAKTRHKODGMQZDJYIHVEFOFBOLIYFMDESODMWOCRPJCKTVSWYKHJXWPKTUYNQAZNCPFWZZDEENQOBKJDXTMSCWVCZVKJVXYZBGUQSPHRBMGMPUNIFHCEVFJQAUXFGUTLLDTPVRLAFVJXECWBYL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.484723080182);
    msg.setSource(32987U);
    msg.setSourceEntity(160U);
    msg.setDestination(5232U);
    msg.setDestinationEntity(217U);
    msg.value.assign("SIBBBLHYJKGQDOZISQWGFCRVRTNDEJNTTLONXFIUEVYKVDKSMBFCVLBGHSLZPKLNWOWFGPZJISXYAZWA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.819971221427);
    msg.setSource(5071U);
    msg.setSourceEntity(61U);
    msg.setDestination(21030U);
    msg.setDestinationEntity(71U);
    const char tmp_msg_0[] = {5, -97, -78, 40, 15, 36, -1, -114, -77, 104, -86, 91, 33, -62, -30, -75, 1, 68, -44, -40, -122, 47, -91, -34, -30, -27, 0, 36, -94, 97, 8, -13, -112, -50, -10, -27, 63, -49, -71, -9, -120, -91, 30, 79, 30, -125, 19, 120, 2, 28, 17, 106, 110, -29, 110, 50, -53, 76, -112, -91, -51, -20, -109, 1, 16, -95, -5, 87, 60, 112, 116, -106, 23, -22, -82, 119, 41, 95, -53, 52, 17, -6, 94, 24, -84, 58, -124, 5, -103, 84, 3, -53, -127, 100, -6, 56, -64, 115, -63, 85, -33, -125, 39, 17, 114, -37, -6, -109, 41, -93, 126, 87, 63, -120, -58, -14, -37, -24, -15, -123, -85, 5, 102, 59, 93, 122, -102, 25, 93, 37, -62, 119, -29, -71, -48, 9, 1, 18, -21, 123, -7, 73, 126, -77, 25, -50, 47, 12, 25, 48, -117, -86, -11, 15, 58, 63, -46, -128, 15, -11, -100, 39, 10, -10, 76, 118, -64, -66, 122, -24, 12, -98, -123, 75, -26, 33, -67, -36, -82, -116, 71, 5, 53, -49, -90, -63, 79, -93, -2, 18, -31, -17, -62, 41, 49, -86, 71, 72, 58, 36, 57, -94, -121, -95, -46, 83, -94, -111, -83, 90, -119, -28, 87, -73, 33, 68, 21, -2, -1, 4, -114, -90, 103, 101, 57, -61, 125, 80, 13, -60, 23, 114, -102, -118, -20, 4, -29, 24};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.377039909049);
    msg.setSource(60459U);
    msg.setSourceEntity(147U);
    msg.setDestination(11155U);
    msg.setDestinationEntity(40U);
    const char tmp_msg_0[] = {48, -90, 72, -48, 79, 2, 65, 37, 51, 105, 88, -125, 124, -87, 19, 89, -121, 73, 78, -124, 106, -26, 10, -44, 62, 29, -81, -49, -120, -96, -118, -7, 95, -1, -46, 23, -43, 17, 44, 72, -65, 104, -92, -37, -68, -96, 31, -23, 43, 46, 117, 119, -6, 22, 119, 125, -128, 62, 94, 10, 27, -99, 32, -12, 21, -59, -41, 84, 31, -78, -77, -125, -19, 104, -91, 31, -86, 89, 71, -122, 69, 22, 19, -7, 44, 38, -85, -79, -21, -113, 84, 25, 37, 85, 116, -26, 38, -76, -56, 60, -35, 23, -115, -63, -61, 47, -35, -98, -93, 126, 108, -10, 1, -72, 27, 103, 49, 77, -2, -123, 81, 58, 59, 25, 16, 102, -11, 100, -92, 39, 57, -58, 21, 87, 64, -12, 46, -35, -9, 106, 4, -99, -78, 23, 22, -50, 66, 101, 7, 22, 120, -31, 5, 45, 33, -86, 40, 66, 14, 75, 17, 69, 37, 6, -88, 125, 46, -12, 59, -123, -65, -42, 56, 110, 32, 104, 117, -58, 96, -97, -61, -9, 9, -124, -71, 77, 30, 63, 46, 0, -43, 86, -6, 4, -11, 14, 33, 59, 45, 80, -55, -26, -30, 80, 37, 110, -46, 105, 24, -110, 124, -81, -12, -125, 20, -5, -17};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.66769764847);
    msg.setSource(56399U);
    msg.setSourceEntity(210U);
    msg.setDestination(54379U);
    msg.setDestinationEntity(24U);
    const char tmp_msg_0[] = {80, -26, 34, 14, -23, 64, 60, 26, -115, -103, -70, -82, 22, 58, -67, -55, -80, 61, -111, -50, -62, 118, 10, 17, -120, 3, 120, -54, 10, 50, 39, -79, 39, 62, -104, -125, 107, -72, 46, -92, -71, 10, -60, 111, 41, -60, 66, -63, -68, 0, -87, 108, -89, -97, -44, 124, 57, 24, 58, 37, 105, -63, -51, -28, -123, -108, -38, -99, -79, 73, 106, 84, 94, -17, 62, -22, -38, 83, 112, -70, -128, 49, -92, 105, 73, 61, -1, -37, -22, 29, -68, 17, -61, 57, 25, 124, 87, 39, 114, 51, 15, 40, -116, -57, -98, 87, 92, -9, 35, -105, 77, 121, 64, -91, -105, 38, -112, 62, -107, 19, -59, -97, 16, 7, 61, 32, 92, -6, 99, 103, 29};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarConfig msg;
    msg.setTimeStamp(0.115664839313);
    msg.setSource(36876U);
    msg.setSourceEntity(214U);
    msg.setDestination(1044U);
    msg.setDestinationEntity(129U);
    msg.frequency = 1765640241U;
    msg.min_range = 19782U;
    msg.max_range = 47831U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarConfig msg;
    msg.setTimeStamp(0.651345653221);
    msg.setSource(10043U);
    msg.setSourceEntity(245U);
    msg.setDestination(46770U);
    msg.setDestinationEntity(56U);
    msg.frequency = 1569733710U;
    msg.min_range = 28886U;
    msg.max_range = 7808U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarConfig msg;
    msg.setTimeStamp(0.225106076877);
    msg.setSource(27843U);
    msg.setSourceEntity(2U);
    msg.setDestination(7977U);
    msg.setDestinationEntity(28U);
    msg.frequency = 1293089119U;
    msg.min_range = 44315U;
    msg.max_range = 51017U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.773574523896);
    msg.setSource(40930U);
    msg.setSourceEntity(133U);
    msg.setDestination(37700U);
    msg.setDestinationEntity(109U);
    msg.type = 139U;
    msg.frequency = 2509245487U;
    msg.min_range = 65264U;
    msg.max_range = 10445U;
    msg.bits_per_point = 19U;
    msg.scale_factor = 0.0545461117253;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.196726819985;
    tmp_msg_0.beam_height = 0.723928873237;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {56, 11, 40, 29, -63, -78, -122, -87, -101, 46, -57, 29, -75, 7, 13, 79, 40, -47, -105, -100, 78, -31, 93, 50, -40, -116, -4, -119, -52, 62, 42, -58, -17, -81, 73, 89, 78, -125, -14, 16, -82, -88, 33, 7, -126, -35, 30, 93, 103, 112, 0, 82, 109, 62, -68, 10, 102, -123, 40, 96, -21, -50, 36, 42, -10, 106, 33, -58, -125, -36, 26, 10, 126, -69, 27, 4, -84, -22, -83, 75, -95, 89, 70, -40, 91, -30, -96, -38, 11, -65, -20, 38, -44, 78, 107, -89, -49, -109, -87, -88, 30, 46, -14, 27, 102, 63, 82, 109, -127, -67, -102, -23, 63, -110, 78, 124, -68, 95, 6, 117, 85, -124, 49, -61, -20, -35, -54, 41, 115, 38, 20, 71, -3, 14, -1, 126, 70, 2, 101, 95, -119, -102, 19, 118, -36, -89, -74, -127, 86, -42, -127, -18, -5, 45, -63, 82, 125, 101, 122, -93, 122, -84, -37, -51, 50, -23, -126, 113, 12, 77, 3, -3, -68, 77, 54, -112, 6, 78, -112, -11, 114, 66, 82, 66, 22, 75, 24, 114, -103};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.0841364096576);
    msg.setSource(52543U);
    msg.setSourceEntity(46U);
    msg.setDestination(61137U);
    msg.setDestinationEntity(246U);
    msg.type = 233U;
    msg.frequency = 622100485U;
    msg.min_range = 43028U;
    msg.max_range = 3959U;
    msg.bits_per_point = 185U;
    msg.scale_factor = 0.364564474045;
    const char tmp_msg_0[] = {105, 8, -65, 113, 55, 69, 113, 116, -78, 96, -74, -77, -127, 53, 6, -72, -107, -8, 119, 35, -111, 43, 118, -98, 15, 97, 64, 35, 10, 100, 64, -23, 93, 49, 105, 23, 79, 77, 87, 101, 95, 70, 42, -74, 67, -119, -52, 12, -66, -29, -74, 74, 105};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.387476167853);
    msg.setSource(52990U);
    msg.setSourceEntity(209U);
    msg.setDestination(54953U);
    msg.setDestinationEntity(251U);
    msg.type = 91U;
    msg.frequency = 2084936910U;
    msg.min_range = 26853U;
    msg.max_range = 48861U;
    msg.bits_per_point = 51U;
    msg.scale_factor = 0.969271367098;
    const char tmp_msg_0[] = {103, 81, 58, 53, -84, -110, -7, -52, 27, 17, 25, 111, 104, 109, 31, -97, 49, -56, -23, 105, -15, -51, 38, 13, 123, 38, -125, -50, 105, 73, -66, -107, -105, 73, -118, -65, 80, 77, 72, 109, 126, 105, -114, 77, 113, 51, 33, -115, -21, -40, 103, 44, -48, -124, -65, 85, -126, 82, 98, -59, -81, -60, 27, -31, -11, 54, -95, -101, 14, -87, 114, 20, -53, -36, -30, -8, 84, 68, 23, 75, 14, 116, -73, -82, -121, -96, 71, 14, 39, 81, 36, 23, 106, 75, -93, 94, -39, -31, -12, -51, -124, -20, -50, -21, -5, 105, -99, -87, -109, 80, 18, 36, -7, -105, -34, 4, -74, -9, 76, -121, -43, -111, 62, -17, -7, -52, 3, -75, 65, -47, -102, 88, 0, 105, 68, -109, 38, 86, -78, 108, 72, 63, -109, 42, -54, 123, 63, 50, 73, 81, -46, -38, 126, -76, -31, -76, -49, -10, 116, 29, 48, 8, -106, 77, -72, -97, -70, -12};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.958580776741);
    msg.setSource(34409U);
    msg.setSourceEntity(210U);
    msg.setDestination(58222U);
    msg.setDestinationEntity(8U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.353608475564);
    msg.setSource(30729U);
    msg.setSourceEntity(177U);
    msg.setDestination(22251U);
    msg.setDestinationEntity(6U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.630694906057);
    msg.setSource(62318U);
    msg.setSourceEntity(164U);
    msg.setDestination(48297U);
    msg.setDestinationEntity(152U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.980972146435);
    msg.setSource(42948U);
    msg.setSourceEntity(101U);
    msg.setDestination(42163U);
    msg.setDestinationEntity(6U);
    msg.op = 209U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.334140016304);
    msg.setSource(25629U);
    msg.setSourceEntity(16U);
    msg.setDestination(25525U);
    msg.setDestinationEntity(249U);
    msg.op = 170U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.171606998371);
    msg.setSource(31621U);
    msg.setSourceEntity(101U);
    msg.setDestination(2752U);
    msg.setDestinationEntity(35U);
    msg.op = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.0997698039645);
    msg.setSource(15954U);
    msg.setSourceEntity(30U);
    msg.setDestination(19912U);
    msg.setDestinationEntity(132U);
    msg.value = 0.796630124937;
    msg.confidence = 0.490025640194;
    msg.opmodes.assign("ZZPPZCNZRDOVBWATVSLQEQXTNUREWUQZDMMGRPIBUMILUNRVBDCSSDXVQIBGULANMKMCDVGWITTIPRKESBLLUFCLXJRXLYKDVWKJNHMLNXFNEHXAVQYGPJJENIFFWHJGAPKCSKUVMCDDAOOYOOTCSWCGKVHUDOJKOFZHYBJEUNFYOZTSBTARJITRRFCWOQIBBZMIRTDSXAYEXKXYHMSJGHGFBLHVHWQYPHWLFAZEXEYMQAGP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.167815425927);
    msg.setSource(54108U);
    msg.setSourceEntity(61U);
    msg.setDestination(19625U);
    msg.setDestinationEntity(69U);
    msg.value = 0.115624459823;
    msg.confidence = 0.1399584742;
    msg.opmodes.assign("DHPVODDRRNHXBYNXUUJNULUJGTABBJTAMQQPQTGEAAKMHIKJMVGCMWNIBITKFZTYLXXPUKROCFPKEDSHRPHKVRCBQVCKMUCNFEONJQALMWIEQZLPCVEBRSSJSJTRCFMIHOJFMMCZLHGZPDZOSUZVGWDSMXQSGYUPZBGAO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.758882356565);
    msg.setSource(44560U);
    msg.setSourceEntity(236U);
    msg.setDestination(12237U);
    msg.setDestinationEntity(159U);
    msg.value = 0.0147516130447;
    msg.confidence = 0.758296579243;
    msg.opmodes.assign("QEMGZEIRCGLMOBUMCBKQVR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.280617631043);
    msg.setSource(1121U);
    msg.setSourceEntity(85U);
    msg.setDestination(61452U);
    msg.setDestinationEntity(170U);
    msg.itow = 148879465U;
    msg.lat = 0.905717518995;
    msg.lon = 0.14357977472;
    msg.height_ell = 0.56315083672;
    msg.height_sea = 0.682522850862;
    msg.hacc = 0.493621203665;
    msg.vacc = 0.625102006789;
    msg.vel_n = 0.83999310884;
    msg.vel_e = 0.499885993094;
    msg.vel_d = 0.748805474519;
    msg.speed = 0.41128786845;
    msg.gspeed = 0.143221305332;
    msg.heading = 0.967486237872;
    msg.sacc = 0.735051112473;
    msg.cacc = 0.115705187509;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.735693967032);
    msg.setSource(42892U);
    msg.setSourceEntity(125U);
    msg.setDestination(61105U);
    msg.setDestinationEntity(137U);
    msg.itow = 3225619269U;
    msg.lat = 0.268775535988;
    msg.lon = 0.732616135876;
    msg.height_ell = 0.87034690872;
    msg.height_sea = 0.547912781367;
    msg.hacc = 0.198213781215;
    msg.vacc = 0.0489111166451;
    msg.vel_n = 0.662184514143;
    msg.vel_e = 0.271923125718;
    msg.vel_d = 0.71713150581;
    msg.speed = 0.597947245583;
    msg.gspeed = 0.229483335349;
    msg.heading = 0.443721784097;
    msg.sacc = 0.95321859228;
    msg.cacc = 0.00926965596835;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.669988647466);
    msg.setSource(3238U);
    msg.setSourceEntity(153U);
    msg.setDestination(13474U);
    msg.setDestinationEntity(79U);
    msg.itow = 201910757U;
    msg.lat = 0.266954100042;
    msg.lon = 0.317987137438;
    msg.height_ell = 0.955290746833;
    msg.height_sea = 0.46264186227;
    msg.hacc = 0.584545743598;
    msg.vacc = 0.746180505293;
    msg.vel_n = 0.82536038033;
    msg.vel_e = 0.359828274703;
    msg.vel_d = 0.982135227104;
    msg.speed = 0.272720894809;
    msg.gspeed = 0.513095270698;
    msg.heading = 0.954079858004;
    msg.sacc = 0.673864665343;
    msg.cacc = 0.215367916714;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.265414822658);
    msg.setSource(10469U);
    msg.setSourceEntity(140U);
    msg.setDestination(21204U);
    msg.setDestinationEntity(221U);
    msg.id = 53U;
    msg.value = 0.275522514429;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.713493354162);
    msg.setSource(46780U);
    msg.setSourceEntity(133U);
    msg.setDestination(2681U);
    msg.setDestinationEntity(162U);
    msg.id = 219U;
    msg.value = 0.306138578437;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.2692330323);
    msg.setSource(31364U);
    msg.setSourceEntity(107U);
    msg.setDestination(22495U);
    msg.setDestinationEntity(154U);
    msg.id = 14U;
    msg.value = 0.358544415133;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.194744169608);
    msg.setSource(50654U);
    msg.setSourceEntity(5U);
    msg.setDestination(16621U);
    msg.setDestinationEntity(174U);
    msg.x = 0.0767409253304;
    msg.y = 0.325225845198;
    msg.z = 0.969436432923;
    msg.phi = 0.362039744356;
    msg.theta = 0.667136625367;
    msg.psi = 0.948605696536;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.386560870697);
    msg.setSource(40930U);
    msg.setSourceEntity(229U);
    msg.setDestination(19774U);
    msg.setDestinationEntity(24U);
    msg.x = 0.707669067372;
    msg.y = 0.615481212127;
    msg.z = 0.536097813295;
    msg.phi = 0.244055444842;
    msg.theta = 0.0918768128482;
    msg.psi = 0.837681032821;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.436450706325);
    msg.setSource(51780U);
    msg.setSourceEntity(60U);
    msg.setDestination(54276U);
    msg.setDestinationEntity(78U);
    msg.x = 0.54209761338;
    msg.y = 0.974582841436;
    msg.z = 0.546139378163;
    msg.phi = 0.287029864594;
    msg.theta = 0.809388739888;
    msg.psi = 0.208045814639;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.94379435461);
    msg.setSource(59924U);
    msg.setSourceEntity(181U);
    msg.setDestination(53069U);
    msg.setDestinationEntity(18U);
    msg.beam_width = 0.558657782163;
    msg.beam_height = 0.453398357456;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.727239948028);
    msg.setSource(24563U);
    msg.setSourceEntity(233U);
    msg.setDestination(32207U);
    msg.setDestinationEntity(74U);
    msg.beam_width = 0.773340172065;
    msg.beam_height = 0.173817478122;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.0837053855103);
    msg.setSource(52410U);
    msg.setSourceEntity(61U);
    msg.setDestination(40616U);
    msg.setDestinationEntity(58U);
    msg.beam_width = 0.227450092102;
    msg.beam_height = 0.84894035626;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.290171235907);
    msg.setSource(59340U);
    msg.setSourceEntity(130U);
    msg.setDestination(38677U);
    msg.setDestinationEntity(235U);
    msg.sane = 55U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.86693686956);
    msg.setSource(34281U);
    msg.setSourceEntity(0U);
    msg.setDestination(54995U);
    msg.setDestinationEntity(205U);
    msg.sane = 82U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.381075615692);
    msg.setSource(56428U);
    msg.setSourceEntity(234U);
    msg.setDestination(32098U);
    msg.setDestinationEntity(130U);
    msg.sane = 163U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.755912984596);
    msg.setSource(28778U);
    msg.setSourceEntity(204U);
    msg.setDestination(61938U);
    msg.setDestinationEntity(220U);
    msg.id = 16U;
    msg.zoom = 25U;
    msg.action = 198U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.452037711192);
    msg.setSource(56310U);
    msg.setSourceEntity(184U);
    msg.setDestination(9100U);
    msg.setDestinationEntity(150U);
    msg.id = 119U;
    msg.zoom = 107U;
    msg.action = 123U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.871066363298);
    msg.setSource(37767U);
    msg.setSourceEntity(120U);
    msg.setDestination(8286U);
    msg.setDestinationEntity(92U);
    msg.id = 12U;
    msg.zoom = 106U;
    msg.action = 218U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.477976332131);
    msg.setSource(3452U);
    msg.setSourceEntity(162U);
    msg.setDestination(697U);
    msg.setDestinationEntity(61U);
    msg.id = 187U;
    msg.value = 0.908063107158;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.0338321842303);
    msg.setSource(34841U);
    msg.setSourceEntity(67U);
    msg.setDestination(26240U);
    msg.setDestinationEntity(79U);
    msg.id = 176U;
    msg.value = 0.211476690438;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.207414533013);
    msg.setSource(43178U);
    msg.setSourceEntity(73U);
    msg.setDestination(60952U);
    msg.setDestinationEntity(227U);
    msg.id = 99U;
    msg.value = 0.453439476843;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.673845044224);
    msg.setSource(22688U);
    msg.setSourceEntity(149U);
    msg.setDestination(57864U);
    msg.setDestinationEntity(52U);
    msg.id = 201U;
    msg.value = 0.662874658991;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.080451471755);
    msg.setSource(53196U);
    msg.setSourceEntity(42U);
    msg.setDestination(13935U);
    msg.setDestinationEntity(107U);
    msg.id = 99U;
    msg.value = 0.187514608021;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.0490873383313);
    msg.setSource(38627U);
    msg.setSourceEntity(193U);
    msg.setDestination(25682U);
    msg.setDestinationEntity(184U);
    msg.id = 121U;
    msg.value = 0.711591794712;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.0811959094265);
    msg.setSource(57555U);
    msg.setSourceEntity(98U);
    msg.setDestination(23888U);
    msg.setDestinationEntity(217U);
    msg.id = 115U;
    msg.angle = 0.793478967541;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.39055968173);
    msg.setSource(18214U);
    msg.setSourceEntity(22U);
    msg.setDestination(61902U);
    msg.setDestinationEntity(202U);
    msg.id = 93U;
    msg.angle = 0.870772662041;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.497347286118);
    msg.setSource(5121U);
    msg.setSourceEntity(74U);
    msg.setDestination(7172U);
    msg.setDestinationEntity(167U);
    msg.id = 20U;
    msg.angle = 0.433817016189;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.857788917995);
    msg.setSource(32506U);
    msg.setSourceEntity(52U);
    msg.setDestination(43653U);
    msg.setDestinationEntity(129U);
    msg.op = 174U;
    msg.actions.assign("RWUGGBVVHIVGCJYOCUVTAZHYO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.806033280565);
    msg.setSource(39878U);
    msg.setSourceEntity(25U);
    msg.setDestination(362U);
    msg.setDestinationEntity(246U);
    msg.op = 133U;
    msg.actions.assign("JPUDXDGSFJLUKWKNEUBUPFRZORISRZGROSHUPEMSBCKFIPOPANBOCWJHAYY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.935967495022);
    msg.setSource(27345U);
    msg.setSourceEntity(134U);
    msg.setDestination(44004U);
    msg.setDestinationEntity(61U);
    msg.op = 179U;
    msg.actions.assign("LNSHTBGRWCXTTNKYHMFHRUPHVDLBKAUBRXHPTIQTVABQMFLEFJRXDCWIGNLQQDEZCWQSVKULYRARDUZOPTJONZMVBQFNSJZLBLSGOXIMMBFIRJWXVNIIDLIEUFOWIYJUSWRYSGKLZGZZKPVDQORAEQHEOG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.759755364838);
    msg.setSource(9874U);
    msg.setSourceEntity(227U);
    msg.setDestination(59483U);
    msg.setDestinationEntity(31U);
    msg.actions.assign("FIANQOBMVRYIYNQGTYLQJXFQBBOBROYNNOJMEVJONKFTZJJOWSFGUBNKSPJEYLVHAVDFJEFZKTUUVWEPZJYLIWADXWIOBOMPNCQRCMXMXNAACGTICTRCIVBFHWDTADAXCSDXELAXIKMVRJCHZIPCWYUDMKTXLLRSRLDUEBSGEHCQRAPZSGH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.116440682741);
    msg.setSource(19249U);
    msg.setSourceEntity(195U);
    msg.setDestination(36354U);
    msg.setDestinationEntity(103U);
    msg.actions.assign("KXTUTEPKVJETAYJUYWQHDGPRFYLJYRYQVQECSWLGPDNAZRDGNMBSVTTJLAULSMJOMOMENMLZVDZXULLGNEXBSGIBDZAOIQNXAQFZMIRIFPNKMCPZRYCCTUBPLQODHENNUCFAGDQXCEFKJKEWYSYFLHGWRVUONEISZKZPFDHQBTQWDILFHAGIEKQGRHXJYVCKANGUBX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.69341362336);
    msg.setSource(63495U);
    msg.setSourceEntity(209U);
    msg.setDestination(16291U);
    msg.setDestinationEntity(156U);
    msg.actions.assign("ZCMNPOUBRNMCYOCUUJNTISSUWKNIDIIZLWYOLVQDRQJDZHPXKLNXDAGGXAOYUKAKPEGYRAHUMLLEVQNIVAUMKSPLXIMISLKFDWAGWZSQCPPSOCNYBROAVIRNZZDIBFSVHZSZRDYOWGKFQVPVGTDXHQQFMTRAQNOOFMLYBYJCLLKPHWWHEOQMFTTJD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.571903436578);
    msg.setSource(41081U);
    msg.setSourceEntity(87U);
    msg.setDestination(24252U);
    msg.setDestinationEntity(183U);
    msg.button = 47U;
    msg.value = 82U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.48427136102);
    msg.setSource(49013U);
    msg.setSourceEntity(177U);
    msg.setDestination(13408U);
    msg.setDestinationEntity(157U);
    msg.button = 115U;
    msg.value = 22U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.157464011638);
    msg.setSource(29428U);
    msg.setSourceEntity(99U);
    msg.setDestination(34931U);
    msg.setDestinationEntity(61U);
    msg.button = 26U;
    msg.value = 1U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.130659345801);
    msg.setSource(50657U);
    msg.setSourceEntity(183U);
    msg.setDestination(17501U);
    msg.setDestinationEntity(5U);
    msg.op = 248U;
    msg.text.assign("XWYPWNRUADBJYDBTCYQFAKOZKSNSCDMXNSYZEVRBRRWVCDLZMKYJVZDIRGSZGCVOYMUBZRFTEMAGUPOSTCXFUUVALXDHZHYSEFNTNRHUAMXGEIOJAWKUHELXPQQTKEMLFVVCLWIHOQBLMLDQRGQK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.727290232364);
    msg.setSource(13583U);
    msg.setSourceEntity(144U);
    msg.setDestination(57616U);
    msg.setDestinationEntity(204U);
    msg.op = 119U;
    msg.text.assign("YSDWCJMJBDMTCUEUOAZXXMKPCCDIGDWJFDYWMFYNIHTZGQSVZKWDHOKHGJTYCPCPOQYPLKYGBNYTQEELTOFSHTMRGJNLSYXXBFGFQBXAEEWHCEHXSZMTERKBUWVLMKAVIKQPMLDUUWWXGXKLUAVDARJNRUGMBQKZRCMKNBEIOYPVDREOCNRZQVZRDESZAQOYLPQBXJHPFJJFXWUII");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.554505413595);
    msg.setSource(63777U);
    msg.setSourceEntity(158U);
    msg.setDestination(50629U);
    msg.setDestinationEntity(4U);
    msg.op = 124U;
    msg.text.assign("TJEXZNBYLLCALTDCMLRAHQDOPMBTZVUQMAJPOIDSWCFNAGFFWVNAYLQCBPFDVEFTNHGQKDIZES");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.309455107461);
    msg.setSource(12559U);
    msg.setSourceEntity(15U);
    msg.setDestination(39012U);
    msg.setDestinationEntity(62U);
    msg.op = 111U;
    msg.time_remain = 0.457561479726;
    msg.sched_time = 0.0566166353702;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.198450414507);
    msg.setSource(31032U);
    msg.setSourceEntity(115U);
    msg.setDestination(33655U);
    msg.setDestinationEntity(12U);
    msg.op = 55U;
    msg.time_remain = 0.797026614531;
    msg.sched_time = 0.842981423188;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.294636246535);
    msg.setSource(464U);
    msg.setSourceEntity(172U);
    msg.setDestination(45466U);
    msg.setDestinationEntity(208U);
    msg.op = 38U;
    msg.time_remain = 0.602778875148;
    msg.sched_time = 0.511661907839;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.895288068881);
    msg.setSource(57254U);
    msg.setSourceEntity(192U);
    msg.setDestination(49770U);
    msg.setDestinationEntity(165U);
    msg.name.assign("FCWTDTLWBWIHAXKYHPPGMYXYYV");
    msg.op = 33U;
    msg.sched_time = 0.484928102338;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.79847501466);
    msg.setSource(24301U);
    msg.setSourceEntity(95U);
    msg.setDestination(41555U);
    msg.setDestinationEntity(103U);
    msg.name.assign("IPZEULCZIABYRDDJTKOEIQSLTBZQWQPAVVDIIOWYFNRVGWCKPRFHIAYNVTXRRJLNYJHGJNCKFKTUOQHUPNMEMFSHDGFWDYVAANLXLAWIUMLHJSTVXVXHGJECL");
    msg.op = 173U;
    msg.sched_time = 0.710951463445;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.30353558465);
    msg.setSource(19263U);
    msg.setSourceEntity(151U);
    msg.setDestination(60615U);
    msg.setDestinationEntity(110U);
    msg.name.assign("NUBWTDEKWZXGYLTOCXQVMIRFBFG");
    msg.op = 57U;
    msg.sched_time = 0.940364383744;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.561895329973);
    msg.setSource(29181U);
    msg.setSourceEntity(130U);
    msg.setDestination(25644U);
    msg.setDestinationEntity(33U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.372151566972);
    msg.setSource(25017U);
    msg.setSourceEntity(209U);
    msg.setDestination(11603U);
    msg.setDestinationEntity(38U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.829472786094);
    msg.setSource(60701U);
    msg.setSourceEntity(226U);
    msg.setDestination(33394U);
    msg.setDestinationEntity(242U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.536213175926);
    msg.setSource(52145U);
    msg.setSourceEntity(32U);
    msg.setDestination(54294U);
    msg.setDestinationEntity(33U);
    msg.name.assign("OJHHMBIBROBFAFJOZCEBJGAGNKMJJIFUCIDDRPREDMVDAQKMRGTVBLXUMMSSCWY");
    msg.state = 115U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.650102802825);
    msg.setSource(35059U);
    msg.setSourceEntity(135U);
    msg.setDestination(54069U);
    msg.setDestinationEntity(115U);
    msg.name.assign("XWWECAZPNSGLYMUVRZGJOUXLYWTROHFNIVIY");
    msg.state = 240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.703310761174);
    msg.setSource(34928U);
    msg.setSourceEntity(22U);
    msg.setDestination(21465U);
    msg.setDestinationEntity(31U);
    msg.name.assign("KGZMIONLAGHBOHHTTZRVXQVFGMUZXENWZPDTTPUDPCRBIYFFTWFNUWAGSHGF");
    msg.state = 190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.80273144939);
    msg.setSource(6232U);
    msg.setSourceEntity(118U);
    msg.setDestination(3434U);
    msg.setDestinationEntity(210U);
    msg.name.assign("GZZJRSWPIHVOHFXBLNFFFYSKAYHLSZRTPCXESEGDQUCAZVAVYOQHKGJEMKCQGJHUXIYBYNBOACESJANJPPNCNOOXREMIMRSJFATUZNLW");
    msg.value = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.439868623973);
    msg.setSource(37559U);
    msg.setSourceEntity(226U);
    msg.setDestination(25789U);
    msg.setDestinationEntity(120U);
    msg.name.assign("FAZKFHHUDLEXPBFGTHHH");
    msg.value = 234U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.262527220672);
    msg.setSource(23749U);
    msg.setSourceEntity(26U);
    msg.setDestination(7928U);
    msg.setDestinationEntity(247U);
    msg.name.assign("LVFBLHTXJIFMFWKVESOHYAVMNKFGIHJVMFGQU");
    msg.value = 246U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.16342774773);
    msg.setSource(16866U);
    msg.setSourceEntity(40U);
    msg.setDestination(22416U);
    msg.setDestinationEntity(206U);
    msg.name.assign("UMFGKWKUPAEXJPCPHZFXJUGERARDIUOMXYZYKYFCWECLZHRDMNVJWHTPBKRPGUIVMDTXUMDFN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.43109082539);
    msg.setSource(4434U);
    msg.setSourceEntity(112U);
    msg.setDestination(65086U);
    msg.setDestinationEntity(121U);
    msg.name.assign("EWJAUSWGYLOVBWHJSINHSQAJMNVRPVKULLIQGJASNMGSIWHRRPEJIFFKROGQBXVCTKYXOKHVUEFACTCKKDLQXNPPKMMZIHYZCXHZZSIEGHWWVCMLXQNKCZVENMYQBOEJTJHXDIDCVCCBLINDFZGVTYAPKBLMQRHWOJDUOTPRWOFUTPMJOSTYGULTDHQBRAOBBAXYAETCMLZNQXYGUXTBFSZFZSPN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.0613927843849);
    msg.setSource(51776U);
    msg.setSourceEntity(231U);
    msg.setDestination(12246U);
    msg.setDestinationEntity(175U);
    msg.name.assign("RRWJLEPAEKOWOGZXPMMIQQBYGYJAYWOPNLOCJIQPKWTGAWHBUCVOCASNRCAVRGVPZNOAUMIQHXZSPFWTILZYBOFUJOUEFBYGMRFMGDMVISJXXK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.575805116137);
    msg.setSource(55042U);
    msg.setSourceEntity(226U);
    msg.setDestination(53005U);
    msg.setDestinationEntity(53U);
    msg.name.assign("GPHOFPFXRJYUJJQVRNELKUSUDLQYGJCUNXUBSFCZKQXAUJYTGYQTGHYYDGSWYMTWGEUTFACSWVKZQUHRWZACIFXSPTEUKCEBJGXOABFIHZNOLLPPSQXZIAHJNJKMIMGPWDTWDDMTBPGEJYPFVHIQRKYOTNECOTSTNRDWDBCXABVVCCKQDIB");
    msg.value = 230U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.581690545594);
    msg.setSource(56549U);
    msg.setSourceEntity(82U);
    msg.setDestination(56972U);
    msg.setDestinationEntity(124U);
    msg.name.assign("IRCPKPRARFOFVPIS");
    msg.value = 25U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.110160211528);
    msg.setSource(8826U);
    msg.setSourceEntity(193U);
    msg.setDestination(832U);
    msg.setDestinationEntity(22U);
    msg.name.assign("SVYOPIHYEPTT");
    msg.value = 142U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.702454584021);
    msg.setSource(62134U);
    msg.setSourceEntity(84U);
    msg.setDestination(5804U);
    msg.setDestinationEntity(206U);
    msg.id = 249U;
    msg.period = 1117498118U;
    msg.duty_cycle = 3954684718U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.820602770073);
    msg.setSource(61040U);
    msg.setSourceEntity(46U);
    msg.setDestination(16462U);
    msg.setDestinationEntity(220U);
    msg.id = 151U;
    msg.period = 2000089056U;
    msg.duty_cycle = 3601800849U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.0658213921101);
    msg.setSource(60839U);
    msg.setSourceEntity(35U);
    msg.setDestination(31012U);
    msg.setDestinationEntity(186U);
    msg.id = 168U;
    msg.period = 3175546762U;
    msg.duty_cycle = 3446670868U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.175549915615);
    msg.setSource(15639U);
    msg.setSourceEntity(66U);
    msg.setDestination(33166U);
    msg.setDestinationEntity(211U);
    msg.id = 101U;
    msg.period = 3347722209U;
    msg.duty_cycle = 358589220U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.213334455419);
    msg.setSource(791U);
    msg.setSourceEntity(196U);
    msg.setDestination(30336U);
    msg.setDestinationEntity(57U);
    msg.id = 209U;
    msg.period = 2529154385U;
    msg.duty_cycle = 2773358757U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.779777961304);
    msg.setSource(62264U);
    msg.setSourceEntity(230U);
    msg.setDestination(29577U);
    msg.setDestinationEntity(201U);
    msg.id = 44U;
    msg.period = 2262122254U;
    msg.duty_cycle = 1456660583U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.401860244771);
    msg.setSource(57336U);
    msg.setSourceEntity(159U);
    msg.setDestination(952U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.824935090261;
    msg.lon = 0.624730485007;
    msg.height = 0.22621190246;
    msg.x = 0.372187755619;
    msg.y = 0.460944081659;
    msg.z = 0.643633432527;
    msg.phi = 0.783699808527;
    msg.theta = 0.0393205373145;
    msg.psi = 0.345771154348;
    msg.u = 0.229800204298;
    msg.v = 0.285166611828;
    msg.w = 0.692935311629;
    msg.vx = 0.833297593683;
    msg.vy = 0.0898150496867;
    msg.vz = 0.00289727798597;
    msg.p = 0.789319236927;
    msg.q = 0.0373761531241;
    msg.r = 0.00297465601869;
    msg.depth = 0.64531860409;
    msg.alt = 0.637290588585;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.877726034236);
    msg.setSource(36149U);
    msg.setSourceEntity(53U);
    msg.setDestination(9216U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.754690460176;
    msg.lon = 0.734706040069;
    msg.height = 0.669217335832;
    msg.x = 0.405192666295;
    msg.y = 0.0121904854715;
    msg.z = 0.135958052923;
    msg.phi = 0.525132438786;
    msg.theta = 0.953650245414;
    msg.psi = 0.651584551986;
    msg.u = 0.0133543504531;
    msg.v = 0.681008214289;
    msg.w = 0.568870982052;
    msg.vx = 0.765013511381;
    msg.vy = 0.556211737344;
    msg.vz = 0.955792916042;
    msg.p = 0.00678073042731;
    msg.q = 0.412134308792;
    msg.r = 0.353741925764;
    msg.depth = 0.88106306448;
    msg.alt = 0.0554176713626;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.142047120502);
    msg.setSource(28937U);
    msg.setSourceEntity(59U);
    msg.setDestination(43322U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.216097079693;
    msg.lon = 0.767902561757;
    msg.height = 0.664196646277;
    msg.x = 0.780154630147;
    msg.y = 0.482721170718;
    msg.z = 0.853380777296;
    msg.phi = 0.324186512346;
    msg.theta = 0.982637649239;
    msg.psi = 0.274912859784;
    msg.u = 0.614333776737;
    msg.v = 0.469454171218;
    msg.w = 0.06890692836;
    msg.vx = 0.578405218923;
    msg.vy = 0.45981484395;
    msg.vz = 0.386073696834;
    msg.p = 0.294762044021;
    msg.q = 0.545484688264;
    msg.r = 0.590392506859;
    msg.depth = 0.171772179553;
    msg.alt = 0.443368404089;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.0216208413562);
    msg.setSource(38420U);
    msg.setSourceEntity(246U);
    msg.setDestination(13187U);
    msg.setDestinationEntity(132U);
    msg.x = 0.870941493216;
    msg.y = 0.00694758978537;
    msg.z = 0.455108875517;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.765473531954);
    msg.setSource(33961U);
    msg.setSourceEntity(213U);
    msg.setDestination(26839U);
    msg.setDestinationEntity(52U);
    msg.x = 0.600925314387;
    msg.y = 0.970969864797;
    msg.z = 0.971772675337;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.758875076427);
    msg.setSource(63163U);
    msg.setSourceEntity(161U);
    msg.setDestination(30935U);
    msg.setDestinationEntity(171U);
    msg.x = 0.376838332918;
    msg.y = 0.344164219334;
    msg.z = 0.0444897464124;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.0281825731492);
    msg.setSource(58442U);
    msg.setSourceEntity(69U);
    msg.setDestination(36080U);
    msg.setDestinationEntity(110U);
    msg.value = 0.497930935766;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.737739984451);
    msg.setSource(7979U);
    msg.setSourceEntity(177U);
    msg.setDestination(58346U);
    msg.setDestinationEntity(216U);
    msg.value = 0.115807095085;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(5.49897618132e-05);
    msg.setSource(14084U);
    msg.setSourceEntity(178U);
    msg.setDestination(7657U);
    msg.setDestinationEntity(38U);
    msg.value = 0.427770140754;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.945180493462);
    msg.setSource(29814U);
    msg.setSourceEntity(218U);
    msg.setDestination(32936U);
    msg.setDestinationEntity(168U);
    msg.value = 0.331572789224;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.150598351031);
    msg.setSource(53358U);
    msg.setSourceEntity(39U);
    msg.setDestination(38682U);
    msg.setDestinationEntity(83U);
    msg.value = 0.792299385803;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.092721251616);
    msg.setSource(42534U);
    msg.setSourceEntity(253U);
    msg.setDestination(12454U);
    msg.setDestinationEntity(101U);
    msg.value = 0.492865215723;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.9046528721);
    msg.setSource(20206U);
    msg.setSourceEntity(174U);
    msg.setDestination(6245U);
    msg.setDestinationEntity(90U);
    msg.x = 0.641460151942;
    msg.y = 0.693809523829;
    msg.z = 0.266856424751;
    msg.phi = 0.456031439898;
    msg.theta = 0.303831900797;
    msg.psi = 0.109826582003;
    msg.p = 0.266808450431;
    msg.q = 0.457935075545;
    msg.r = 0.743085867347;
    msg.u = 0.365799019003;
    msg.v = 0.516445509148;
    msg.w = 0.395885741822;
    msg.bias_psi = 0.402476677029;
    msg.bias_r = 0.0205456842713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.177063131785);
    msg.setSource(41075U);
    msg.setSourceEntity(199U);
    msg.setDestination(44052U);
    msg.setDestinationEntity(0U);
    msg.x = 0.773151311759;
    msg.y = 0.456972084295;
    msg.z = 0.879458472349;
    msg.phi = 0.542593779899;
    msg.theta = 0.460318025746;
    msg.psi = 0.0318268252605;
    msg.p = 0.141801139074;
    msg.q = 0.466012755318;
    msg.r = 0.190765387095;
    msg.u = 0.434367267897;
    msg.v = 0.202299375252;
    msg.w = 0.926506501336;
    msg.bias_psi = 0.0682932942258;
    msg.bias_r = 0.518056637561;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.671771711812);
    msg.setSource(37142U);
    msg.setSourceEntity(104U);
    msg.setDestination(36514U);
    msg.setDestinationEntity(9U);
    msg.x = 0.810999331424;
    msg.y = 0.86244267161;
    msg.z = 0.571420811861;
    msg.phi = 0.208446488812;
    msg.theta = 0.264798288234;
    msg.psi = 0.814158412049;
    msg.p = 0.384075254318;
    msg.q = 0.756922123218;
    msg.r = 0.841398936194;
    msg.u = 0.859816429231;
    msg.v = 0.188142112089;
    msg.w = 0.648949338472;
    msg.bias_psi = 0.0835480866322;
    msg.bias_r = 0.456599796617;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.151919177841);
    msg.setSource(63898U);
    msg.setSourceEntity(39U);
    msg.setDestination(6841U);
    msg.setDestinationEntity(94U);
    msg.bias_psi = 0.154490325488;
    msg.bias_r = 0.274921491535;
    msg.cog = 0.658539502714;
    msg.cyaw = 0.12194508257;
    msg.lbl_rej_level = 0.436004897104;
    msg.gps_rej_level = 0.331949409119;
    msg.custom_x = 0.993124717909;
    msg.custom_y = 0.212462806069;
    msg.custom_z = 0.457136272587;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.240255355472);
    msg.setSource(29110U);
    msg.setSourceEntity(243U);
    msg.setDestination(23394U);
    msg.setDestinationEntity(89U);
    msg.bias_psi = 0.809498103918;
    msg.bias_r = 0.314308992378;
    msg.cog = 0.66130853332;
    msg.cyaw = 0.170863337714;
    msg.lbl_rej_level = 0.774891815127;
    msg.gps_rej_level = 0.383738718544;
    msg.custom_x = 0.0390178311754;
    msg.custom_y = 0.98612216472;
    msg.custom_z = 0.57105551628;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.0432586847636);
    msg.setSource(63841U);
    msg.setSourceEntity(115U);
    msg.setDestination(59624U);
    msg.setDestinationEntity(186U);
    msg.bias_psi = 0.314389703427;
    msg.bias_r = 0.218224419614;
    msg.cog = 0.16080591337;
    msg.cyaw = 0.945813470828;
    msg.lbl_rej_level = 0.213388329514;
    msg.gps_rej_level = 0.758363138668;
    msg.custom_x = 0.173181933406;
    msg.custom_y = 0.0827711764343;
    msg.custom_z = 0.340540076933;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.349668056028);
    msg.setSource(53428U);
    msg.setSourceEntity(129U);
    msg.setDestination(34206U);
    msg.setDestinationEntity(137U);
    msg.utc_time = 0.0811072059046;
    msg.reason = 209U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.175000154993);
    msg.setSource(26757U);
    msg.setSourceEntity(243U);
    msg.setDestination(31539U);
    msg.setDestinationEntity(83U);
    msg.utc_time = 0.524476594369;
    msg.reason = 74U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.325900928787);
    msg.setSource(51147U);
    msg.setSourceEntity(229U);
    msg.setDestination(23116U);
    msg.setDestinationEntity(21U);
    msg.utc_time = 0.171529333494;
    msg.reason = 118U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.249916191832);
    msg.setSource(11156U);
    msg.setSourceEntity(73U);
    msg.setDestination(32469U);
    msg.setDestinationEntity(220U);
    msg.id = 155U;
    msg.range = 0.739124170158;
    msg.acceptance = 76U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.346732001212);
    msg.setSource(63533U);
    msg.setSourceEntity(129U);
    msg.setDestination(26820U);
    msg.setDestinationEntity(125U);
    msg.id = 166U;
    msg.range = 0.595276090694;
    msg.acceptance = 246U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.825198612726);
    msg.setSource(8289U);
    msg.setSourceEntity(69U);
    msg.setDestination(49717U);
    msg.setDestinationEntity(166U);
    msg.id = 118U;
    msg.range = 0.16663880145;
    msg.acceptance = 58U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.946032718294);
    msg.setSource(4564U);
    msg.setSourceEntity(73U);
    msg.setDestination(36820U);
    msg.setDestinationEntity(23U);
    msg.type = 210U;
    msg.reason = 111U;
    msg.value = 0.81018067543;
    msg.timestep = 0.269153621075;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.920110983512);
    msg.setSource(52006U);
    msg.setSourceEntity(79U);
    msg.setDestination(30620U);
    msg.setDestinationEntity(184U);
    msg.type = 74U;
    msg.reason = 129U;
    msg.value = 0.634859330486;
    msg.timestep = 0.42572701544;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.843509339395);
    msg.setSource(48401U);
    msg.setSourceEntity(88U);
    msg.setDestination(54356U);
    msg.setDestinationEntity(229U);
    msg.type = 199U;
    msg.reason = 15U;
    msg.value = 0.502160148708;
    msg.timestep = 0.515116809375;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationReset msg;
    msg.setTimeStamp(0.135229272193);
    msg.setSource(21406U);
    msg.setSourceEntity(100U);
    msg.setDestination(39678U);
    msg.setDestinationEntity(234U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationReset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationReset msg;
    msg.setTimeStamp(0.515229008936);
    msg.setSource(53422U);
    msg.setSourceEntity(165U);
    msg.setDestination(25834U);
    msg.setDestinationEntity(81U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationReset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationReset msg;
    msg.setTimeStamp(0.658437741163);
    msg.setSource(42048U);
    msg.setSourceEntity(162U);
    msg.setDestination(26928U);
    msg.setDestinationEntity(209U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationReset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.467713214169);
    msg.setSource(62114U);
    msg.setSourceEntity(135U);
    msg.setDestination(19971U);
    msg.setDestinationEntity(176U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FUZLGIFCMDNIVQEYF");
    tmp_msg_0.lat = 0.433902846607;
    tmp_msg_0.lon = 0.368118352963;
    tmp_msg_0.depth = 0.716449226339;
    tmp_msg_0.query_channel = 39U;
    tmp_msg_0.reply_channel = 209U;
    tmp_msg_0.transponder_delay = 134U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.960778996638;
    msg.y = 0.823489899053;
    msg.var_x = 0.707142385224;
    msg.var_y = 0.284572872637;
    msg.distance = 0.645481242831;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.707430910545);
    msg.setSource(20586U);
    msg.setSourceEntity(199U);
    msg.setDestination(50714U);
    msg.setDestinationEntity(156U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HNUZFLOFVJZDOUSWUVUDGXJXXQJMLSEVMJRMBKRGZCBFKIWAJWOIPMAZTYVRRIFXOGORVPBYHBTFPSZJKIUCSQIKYKFPSIZTSDLLWCDPZVOGHLZZPEMBGGBIBQKWVNQFNRCOYJGHPQUELDRNCCQUKHJTYSWUKGWLIEBARWHARDENPXKCBHENUQYDACWTQNEAUYDICXVGLMQYZLPXLEJTOHAXTRTGAFNMEMVNHEJ");
    tmp_msg_0.lat = 0.0308575879637;
    tmp_msg_0.lon = 0.791207549845;
    tmp_msg_0.depth = 0.924517078353;
    tmp_msg_0.query_channel = 114U;
    tmp_msg_0.reply_channel = 198U;
    tmp_msg_0.transponder_delay = 160U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.560813374992;
    msg.y = 0.236448326743;
    msg.var_x = 0.0429315163551;
    msg.var_y = 0.175425754702;
    msg.distance = 0.450036926491;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.396245760717);
    msg.setSource(53868U);
    msg.setSourceEntity(200U);
    msg.setDestination(46351U);
    msg.setDestinationEntity(72U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IYZETHCXQZFZQOWUOTDMCNUYANVGFTBGYANFOOXDXPQOMFJIBLJRDHVONCWBGGMJAGMEJLGTPUQXHMQDPQYZAWFNSIKHUCLQMSDOYQP");
    tmp_msg_0.lat = 0.960088396635;
    tmp_msg_0.lon = 0.759805309193;
    tmp_msg_0.depth = 0.0249181870012;
    tmp_msg_0.query_channel = 164U;
    tmp_msg_0.reply_channel = 161U;
    tmp_msg_0.transponder_delay = 226U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.635259766562;
    msg.y = 0.0866632336289;
    msg.var_x = 0.531653002138;
    msg.var_y = 0.372296354667;
    msg.distance = 0.129190761111;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.800461282792);
    msg.setSource(18081U);
    msg.setSourceEntity(16U);
    msg.setDestination(9130U);
    msg.setDestinationEntity(206U);
    msg.state = 54U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.92495279707);
    msg.setSource(36034U);
    msg.setSourceEntity(10U);
    msg.setDestination(32409U);
    msg.setDestinationEntity(9U);
    msg.state = 159U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.0118575111395);
    msg.setSource(23341U);
    msg.setSourceEntity(117U);
    msg.setDestination(8656U);
    msg.setDestinationEntity(59U);
    msg.state = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.773882332851);
    msg.setSource(4423U);
    msg.setSourceEntity(232U);
    msg.setDestination(38144U);
    msg.setDestinationEntity(251U);
    msg.x = 0.748064716458;
    msg.y = 0.811497887543;
    msg.z = 0.185235989279;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.830014532523);
    msg.setSource(33337U);
    msg.setSourceEntity(63U);
    msg.setDestination(63400U);
    msg.setDestinationEntity(200U);
    msg.x = 0.530132766197;
    msg.y = 0.860578746102;
    msg.z = 0.262730918836;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.404847164897);
    msg.setSource(29332U);
    msg.setSourceEntity(218U);
    msg.setDestination(55943U);
    msg.setDestinationEntity(146U);
    msg.x = 0.846923124656;
    msg.y = 0.760548856338;
    msg.z = 0.259184465852;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.826269798943);
    msg.setSource(18423U);
    msg.setSourceEntity(254U);
    msg.setDestination(34044U);
    msg.setDestinationEntity(131U);
    msg.value = 0.0248024826183;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.929593967418);
    msg.setSource(24140U);
    msg.setSourceEntity(164U);
    msg.setDestination(36994U);
    msg.setDestinationEntity(79U);
    msg.value = 0.321868315;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.931114711295);
    msg.setSource(27725U);
    msg.setSourceEntity(161U);
    msg.setDestination(13564U);
    msg.setDestinationEntity(131U);
    msg.value = 0.600714719273;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.283190536356);
    msg.setSource(64505U);
    msg.setSourceEntity(139U);
    msg.setDestination(6847U);
    msg.setDestinationEntity(107U);
    msg.value = 0.683079831323;
    msg.z_units = 170U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.883906460492);
    msg.setSource(29273U);
    msg.setSourceEntity(53U);
    msg.setDestination(57401U);
    msg.setDestinationEntity(44U);
    msg.value = 0.865864435455;
    msg.z_units = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.65435286457);
    msg.setSource(91U);
    msg.setSourceEntity(101U);
    msg.setDestination(47671U);
    msg.setDestinationEntity(202U);
    msg.value = 0.914090926341;
    msg.z_units = 172U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.891700746615);
    msg.setSource(14919U);
    msg.setSourceEntity(173U);
    msg.setDestination(38904U);
    msg.setDestinationEntity(164U);
    msg.value = 0.734087910934;
    msg.speed_units = 39U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.451305014722);
    msg.setSource(4126U);
    msg.setSourceEntity(168U);
    msg.setDestination(22845U);
    msg.setDestinationEntity(91U);
    msg.value = 0.0883719360912;
    msg.speed_units = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.811758752658);
    msg.setSource(36742U);
    msg.setSourceEntity(163U);
    msg.setDestination(46207U);
    msg.setDestinationEntity(3U);
    msg.value = 0.781923708651;
    msg.speed_units = 174U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.171168413596);
    msg.setSource(52969U);
    msg.setSourceEntity(196U);
    msg.setDestination(30579U);
    msg.setDestinationEntity(226U);
    msg.value = 0.0501970792185;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.643979859438);
    msg.setSource(63895U);
    msg.setSourceEntity(6U);
    msg.setDestination(63685U);
    msg.setDestinationEntity(246U);
    msg.value = 0.334357645398;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.0844714603674);
    msg.setSource(63953U);
    msg.setSourceEntity(9U);
    msg.setDestination(12543U);
    msg.setDestinationEntity(60U);
    msg.value = 0.748675527189;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.474269175024);
    msg.setSource(51207U);
    msg.setSourceEntity(32U);
    msg.setDestination(62247U);
    msg.setDestinationEntity(183U);
    msg.value = 0.922154841499;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.636810795082);
    msg.setSource(13511U);
    msg.setSourceEntity(19U);
    msg.setDestination(28778U);
    msg.setDestinationEntity(52U);
    msg.value = 0.91203747066;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.107617108405);
    msg.setSource(14467U);
    msg.setSourceEntity(68U);
    msg.setDestination(62605U);
    msg.setDestinationEntity(54U);
    msg.value = 0.394583041752;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.986121294804);
    msg.setSource(28715U);
    msg.setSourceEntity(18U);
    msg.setDestination(56376U);
    msg.setDestinationEntity(182U);
    msg.value = 0.535704678299;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.325107505328);
    msg.setSource(64035U);
    msg.setSourceEntity(197U);
    msg.setDestination(44107U);
    msg.setDestinationEntity(150U);
    msg.value = 0.223400307869;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.271630163575);
    msg.setSource(65432U);
    msg.setSourceEntity(151U);
    msg.setDestination(5191U);
    msg.setDestinationEntity(27U);
    msg.value = 0.893519278142;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.497224096881);
    msg.setSource(11670U);
    msg.setSourceEntity(4U);
    msg.setDestination(26392U);
    msg.setDestinationEntity(17U);
    msg.start_lat = 0.279650379147;
    msg.start_lon = 0.123069483804;
    msg.start_z = 0.65363106332;
    msg.start_z_units = 118U;
    msg.end_lat = 0.414368981292;
    msg.end_lon = 0.679117847776;
    msg.end_z = 0.988953681215;
    msg.end_z_units = 203U;
    msg.speed = 0.758943107611;
    msg.speed_units = 73U;
    msg.lradius = 0.346506307985;
    msg.flags = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.970721532252);
    msg.setSource(26833U);
    msg.setSourceEntity(14U);
    msg.setDestination(34196U);
    msg.setDestinationEntity(98U);
    msg.start_lat = 0.930294354896;
    msg.start_lon = 0.813420041562;
    msg.start_z = 0.669887660789;
    msg.start_z_units = 175U;
    msg.end_lat = 0.980383062682;
    msg.end_lon = 0.417826116633;
    msg.end_z = 0.866772290903;
    msg.end_z_units = 49U;
    msg.speed = 0.141273736416;
    msg.speed_units = 246U;
    msg.lradius = 0.172796507648;
    msg.flags = 239U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.328349707383);
    msg.setSource(49266U);
    msg.setSourceEntity(195U);
    msg.setDestination(13835U);
    msg.setDestinationEntity(226U);
    msg.start_lat = 0.247659696802;
    msg.start_lon = 0.587945943558;
    msg.start_z = 0.518513466407;
    msg.start_z_units = 209U;
    msg.end_lat = 0.913843263841;
    msg.end_lon = 0.230122196518;
    msg.end_z = 0.81177408776;
    msg.end_z_units = 44U;
    msg.speed = 0.71818791893;
    msg.speed_units = 234U;
    msg.lradius = 0.926962740005;
    msg.flags = 152U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.0725740016607);
    msg.setSource(53042U);
    msg.setSourceEntity(142U);
    msg.setDestination(34587U);
    msg.setDestinationEntity(7U);
    msg.x = 0.785488280565;
    msg.y = 0.754827571516;
    msg.z = 0.202222917281;
    msg.k = 0.351314678748;
    msg.m = 0.497477246437;
    msg.n = 0.964113134875;
    msg.flags = 36U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.133260270875);
    msg.setSource(38338U);
    msg.setSourceEntity(195U);
    msg.setDestination(7711U);
    msg.setDestinationEntity(111U);
    msg.x = 0.756519222975;
    msg.y = 0.172607161578;
    msg.z = 0.659517718374;
    msg.k = 0.713053132976;
    msg.m = 0.272874357676;
    msg.n = 0.611447867729;
    msg.flags = 182U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.538811957992);
    msg.setSource(37908U);
    msg.setSourceEntity(134U);
    msg.setDestination(37276U);
    msg.setDestinationEntity(79U);
    msg.x = 0.242529831142;
    msg.y = 0.87391051793;
    msg.z = 0.942471207151;
    msg.k = 0.624610382839;
    msg.m = 0.695277586232;
    msg.n = 0.334765322581;
    msg.flags = 216U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.365743369041);
    msg.setSource(39361U);
    msg.setSourceEntity(91U);
    msg.setDestination(40996U);
    msg.setDestinationEntity(187U);
    msg.value = 0.492842810737;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.637512669718);
    msg.setSource(13419U);
    msg.setSourceEntity(192U);
    msg.setDestination(20247U);
    msg.setDestinationEntity(90U);
    msg.value = 0.0819045347864;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.31536625683);
    msg.setSource(17260U);
    msg.setSourceEntity(187U);
    msg.setDestination(42953U);
    msg.setDestinationEntity(18U);
    msg.value = 0.0579667284619;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.934889583186);
    msg.setSource(64273U);
    msg.setSourceEntity(207U);
    msg.setDestination(57024U);
    msg.setDestinationEntity(37U);
    msg.u = 0.140318638145;
    msg.v = 0.097855292159;
    msg.w = 0.372215069234;
    msg.p = 0.220145490064;
    msg.q = 0.0114487513149;
    msg.r = 0.592397248436;
    msg.flags = 6U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.0563849694263);
    msg.setSource(26920U);
    msg.setSourceEntity(137U);
    msg.setDestination(45250U);
    msg.setDestinationEntity(247U);
    msg.u = 0.11415173759;
    msg.v = 0.678046054282;
    msg.w = 0.885464391145;
    msg.p = 0.525266408404;
    msg.q = 0.707762317381;
    msg.r = 0.926215358196;
    msg.flags = 181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.716653050935);
    msg.setSource(34155U);
    msg.setSourceEntity(246U);
    msg.setDestination(21757U);
    msg.setDestinationEntity(154U);
    msg.u = 0.415094422514;
    msg.v = 0.31001143567;
    msg.w = 0.505174228217;
    msg.p = 0.545255138505;
    msg.q = 0.362781312013;
    msg.r = 0.265257497765;
    msg.flags = 206U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.696968808901);
    msg.setSource(28788U);
    msg.setSourceEntity(76U);
    msg.setDestination(47866U);
    msg.setDestinationEntity(232U);
    msg.start_lat = 0.546451524371;
    msg.start_lon = 0.326522263748;
    msg.start_z = 0.56936942778;
    msg.start_z_units = 82U;
    msg.end_lat = 0.0821941135933;
    msg.end_lon = 0.103319897212;
    msg.end_z = 0.669572178045;
    msg.end_z_units = 73U;
    msg.lradius = 0.601438922801;
    msg.flags = 78U;
    msg.x = 0.594815551165;
    msg.y = 0.0159641150179;
    msg.z = 0.113311759267;
    msg.vx = 0.170406856529;
    msg.vy = 0.469873121389;
    msg.vz = 0.403278377267;
    msg.course_error = 0.921001811496;
    msg.eta = 36337U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.273323338947);
    msg.setSource(39122U);
    msg.setSourceEntity(44U);
    msg.setDestination(22781U);
    msg.setDestinationEntity(243U);
    msg.start_lat = 0.244194238159;
    msg.start_lon = 0.47428607247;
    msg.start_z = 0.740830768644;
    msg.start_z_units = 51U;
    msg.end_lat = 0.597957760429;
    msg.end_lon = 0.360361914424;
    msg.end_z = 0.775292254356;
    msg.end_z_units = 43U;
    msg.lradius = 0.79097305746;
    msg.flags = 29U;
    msg.x = 0.478108914911;
    msg.y = 0.976179306572;
    msg.z = 0.0657114562632;
    msg.vx = 0.467044507363;
    msg.vy = 0.613611876554;
    msg.vz = 0.709402629491;
    msg.course_error = 0.638149919701;
    msg.eta = 28042U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.246386135241);
    msg.setSource(10195U);
    msg.setSourceEntity(149U);
    msg.setDestination(26132U);
    msg.setDestinationEntity(128U);
    msg.start_lat = 0.619606116815;
    msg.start_lon = 0.736849673096;
    msg.start_z = 0.0829293657441;
    msg.start_z_units = 109U;
    msg.end_lat = 0.910963092784;
    msg.end_lon = 0.59822525113;
    msg.end_z = 0.14234873767;
    msg.end_z_units = 85U;
    msg.lradius = 0.193782496347;
    msg.flags = 241U;
    msg.x = 0.90991309331;
    msg.y = 0.070797426091;
    msg.z = 0.220873816473;
    msg.vx = 0.268446768209;
    msg.vy = 0.961207210702;
    msg.vz = 0.888494597511;
    msg.course_error = 0.281691236046;
    msg.eta = 33942U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.611945291022);
    msg.setSource(51000U);
    msg.setSourceEntity(123U);
    msg.setDestination(400U);
    msg.setDestinationEntity(4U);
    msg.k = 0.534348662953;
    msg.m = 0.197472224261;
    msg.n = 0.611325096415;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.388249114379);
    msg.setSource(43827U);
    msg.setSourceEntity(253U);
    msg.setDestination(44016U);
    msg.setDestinationEntity(67U);
    msg.k = 0.981992741367;
    msg.m = 0.740512793941;
    msg.n = 0.69896214425;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.842264294216);
    msg.setSource(21659U);
    msg.setSourceEntity(25U);
    msg.setDestination(44991U);
    msg.setDestinationEntity(186U);
    msg.k = 0.226824360669;
    msg.m = 0.703414831918;
    msg.n = 0.184439059123;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.606424155627);
    msg.setSource(47044U);
    msg.setSourceEntity(119U);
    msg.setDestination(40846U);
    msg.setDestinationEntity(157U);
    msg.p = 0.556759809578;
    msg.i = 0.717944474629;
    msg.d = 0.0074202639047;
    msg.a = 0.796433563551;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.427937640845);
    msg.setSource(16358U);
    msg.setSourceEntity(126U);
    msg.setDestination(50054U);
    msg.setDestinationEntity(216U);
    msg.p = 0.781077596629;
    msg.i = 0.575299754588;
    msg.d = 0.906017349557;
    msg.a = 0.0113477526264;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.236926872985);
    msg.setSource(52699U);
    msg.setSourceEntity(71U);
    msg.setDestination(6U);
    msg.setDestinationEntity(109U);
    msg.p = 0.894974038153;
    msg.i = 0.987909219068;
    msg.d = 0.100233945479;
    msg.a = 0.282638088734;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.460953911596);
    msg.setSource(56798U);
    msg.setSourceEntity(91U);
    msg.setDestination(49447U);
    msg.setDestinationEntity(245U);
    msg.op = 80U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.273903574378);
    msg.setSource(37171U);
    msg.setSourceEntity(31U);
    msg.setDestination(31041U);
    msg.setDestinationEntity(14U);
    msg.op = 181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.638483195723);
    msg.setSource(65278U);
    msg.setSourceEntity(246U);
    msg.setDestination(61612U);
    msg.setDestinationEntity(194U);
    msg.op = 228U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.123298930433);
    msg.setSource(42032U);
    msg.setSourceEntity(113U);
    msg.setDestination(15308U);
    msg.setDestinationEntity(73U);
    msg.timeout = 55589U;
    msg.lat = 0.0693005524629;
    msg.lon = 0.528220218579;
    msg.z = 0.281349967861;
    msg.z_units = 180U;
    msg.speed = 0.791719188444;
    msg.speed_units = 20U;
    msg.roll = 0.0975081355712;
    msg.pitch = 0.455775893294;
    msg.yaw = 0.844326290503;
    msg.custom.assign("OZJDIDEOQMRKMQXUCUHWXBLJYTQIGUJSFUOSCLVGDAPJLEKYSXDZLKLTSFZRWEHXKPVTRFOHOJPIKNXHCMFOLZYRDWWPRGAQJSTDNTKOTEERFNXGOIGHGQKMYNLFWIXCIRTMVMPYHKEMCSIAGWBSPIUXYJVZRLQAPFQEQFABUZTUTNLMYAQZHJZKDAPBHNPDCBIWHGAEWJWLBFXY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.336532916674);
    msg.setSource(6143U);
    msg.setSourceEntity(15U);
    msg.setDestination(1515U);
    msg.setDestinationEntity(48U);
    msg.timeout = 36833U;
    msg.lat = 0.392368328336;
    msg.lon = 0.309062157875;
    msg.z = 0.679932868579;
    msg.z_units = 99U;
    msg.speed = 0.548372218134;
    msg.speed_units = 51U;
    msg.roll = 0.615654415363;
    msg.pitch = 0.357983824369;
    msg.yaw = 0.176077845069;
    msg.custom.assign("TEJJTOQPUFJBZJGRFHBUZFMNAUFWDNXRVXHWHCSQZDGSADQOHLAANLAOOIJOPCVGMTGNZMPUIEYEKQNDXDMKGWFSAYOQKUKPEGQKIHBSEZENMXRCVVVJLVTXUTKJAOBRONETCVZMDXWLQFCGZKWIPHXHGNDLOMAPPNWYBWJPISFIVDVEMCSLFKYCRKRYUGVTBKZSXUFICOYHLTMFBEGNPARRXCAHITCYMRSQHRBDQIYDTXJQLEZPIZYSWB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.202201083355);
    msg.setSource(35616U);
    msg.setSourceEntity(180U);
    msg.setDestination(883U);
    msg.setDestinationEntity(15U);
    msg.timeout = 41476U;
    msg.lat = 0.0954858474939;
    msg.lon = 0.158663189554;
    msg.z = 0.461978072904;
    msg.z_units = 3U;
    msg.speed = 0.346100504801;
    msg.speed_units = 94U;
    msg.roll = 0.104675248698;
    msg.pitch = 0.324632923342;
    msg.yaw = 0.0477212423544;
    msg.custom.assign("NWHWVKNAVCJZKTYRUPQRSQKDABARYLNUPXFHRPHUNC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.746065127341);
    msg.setSource(10230U);
    msg.setSourceEntity(225U);
    msg.setDestination(15744U);
    msg.setDestinationEntity(80U);
    msg.timeout = 12222U;
    msg.lat = 0.511780490551;
    msg.lon = 0.198305177887;
    msg.z = 0.811005203065;
    msg.z_units = 230U;
    msg.speed = 0.424006303698;
    msg.speed_units = 152U;
    msg.duration = 40296U;
    msg.radius = 0.202553149728;
    msg.flags = 89U;
    msg.custom.assign("HNBCYUCPAXSPOTMXWGWXOKSFDFRTFGWQBDQDMHBGMCVNTHIZTNZKURVLNDWLHPEMIHRYCAKMERPVOAHFHKXPKDLYXLRTCAIKRNGRWBQXDJAGWJJJTIMLEIYMQQBVRLVZFTNZJEOKBFSBGVOFVCDSUGDSLZFXBSXDAHRUQLCRENXOBUPDQFGZWEJTOATSJYWJGNQZYJEAINKAOPOCYEWPZHGYSWZYIPQMIVVBUUCIKSLJUUQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.184586875935);
    msg.setSource(5982U);
    msg.setSourceEntity(157U);
    msg.setDestination(11988U);
    msg.setDestinationEntity(192U);
    msg.timeout = 23415U;
    msg.lat = 0.909727162432;
    msg.lon = 0.751068819032;
    msg.z = 0.518867073295;
    msg.z_units = 73U;
    msg.speed = 0.851424241584;
    msg.speed_units = 246U;
    msg.duration = 46354U;
    msg.radius = 0.926993419297;
    msg.flags = 91U;
    msg.custom.assign("HXTFRJQXJAWVVAKBWHFZJFBYSGETVFYKOXXNJBIOLEHBMRJWUWZAUECMLKYVNHSUWHDDNJURODLNIDBLSXXLTJGPBNGWZQXSYRMULJNIWCKBVXEDILCQIIAZOKISZGPOHHHKCAFNBQVYSWRQTGQMATGPYZRPTMVXFMEKFJUDQYS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.242630993932);
    msg.setSource(47783U);
    msg.setSourceEntity(200U);
    msg.setDestination(50369U);
    msg.setDestinationEntity(154U);
    msg.timeout = 60120U;
    msg.lat = 0.598376549481;
    msg.lon = 0.804143269757;
    msg.z = 0.187682090103;
    msg.z_units = 171U;
    msg.speed = 0.437793932368;
    msg.speed_units = 223U;
    msg.duration = 28482U;
    msg.radius = 0.487841673585;
    msg.flags = 83U;
    msg.custom.assign("AKYGBEURGFPIYYAK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.366108288759);
    msg.setSource(45993U);
    msg.setSourceEntity(81U);
    msg.setDestination(46349U);
    msg.setDestinationEntity(77U);
    msg.custom.assign("IVQXZDPEBBTNDRVYGFYLPBLLLBHDWAYUJCOULRXTBKKJOSLBKQGTWAHZLONCXIIVZCVQYRQJITHWBCCZWEFYLBWUVFIEHKMAEBCCCMSXGJYXMHLFAWUXDORWOYMAIGIRGXXRSNWATJHMMKSPCIOMDDHVLGNGFAJNNMEQYHSQQEUPVHGREJYMDRUQGTSKCMZNGOZRIQPKSUPJZEUTKBNATFKYWOJVXDFWSAPVFFFUIXOA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.791793081593);
    msg.setSource(21054U);
    msg.setSourceEntity(117U);
    msg.setDestination(26052U);
    msg.setDestinationEntity(87U);
    msg.custom.assign("ZYIWXXDBXRNHPVPOBDTQZMUHOCKLB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.0361521374356);
    msg.setSource(11486U);
    msg.setSourceEntity(176U);
    msg.setDestination(46437U);
    msg.setDestinationEntity(150U);
    msg.custom.assign("LWGRNMIZCXLPEOPUKQHHNAONYUSLEQINMXSAAXZJQQJZJYWQMGTBJXRIOBJVVESQKDHILWUPYBVZZYRSWLHMXWPGA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.351746591634);
    msg.setSource(61286U);
    msg.setSourceEntity(222U);
    msg.setDestination(45180U);
    msg.setDestinationEntity(71U);
    msg.timeout = 29535U;
    msg.lat = 0.378578505431;
    msg.lon = 0.143229376242;
    msg.z = 0.171485918237;
    msg.z_units = 228U;
    msg.duration = 59967U;
    msg.speed = 0.854539460928;
    msg.speed_units = 223U;
    msg.type = 4U;
    msg.radius = 0.569157784299;
    msg.length = 0.628403193045;
    msg.bearing = 0.344081597814;
    msg.direction = 107U;
    msg.custom.assign("GYOMJXHMPNRRCQALONAPKBLQVIQCDDELTHANARULQJNEQKCMVYRYPYWZYWSTYFXKWUIRACGCPEPNZOZLYJTJZNQFIAEBOHAMTHSNGGVPKJLGPWOYROGHDOXQSAVDBVSMWIGQPBFKBUVWZATSCMBTVUWEPTEIWLBSHMZGCKPMNAWRDNCCJQCOXXVKRHTNIJEZXJDKWXSUHFJEGTJMXBDSDHRBY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.618919589781);
    msg.setSource(26640U);
    msg.setSourceEntity(185U);
    msg.setDestination(38174U);
    msg.setDestinationEntity(44U);
    msg.timeout = 48882U;
    msg.lat = 0.523688089418;
    msg.lon = 0.919626208635;
    msg.z = 0.861526545003;
    msg.z_units = 121U;
    msg.duration = 27325U;
    msg.speed = 0.904899571358;
    msg.speed_units = 199U;
    msg.type = 107U;
    msg.radius = 0.0456237464831;
    msg.length = 0.769759729238;
    msg.bearing = 0.490537730221;
    msg.direction = 42U;
    msg.custom.assign("VSGQJMVXNRYZJYLIETMJCUHBDZBKFMZIVITKOBHMUCUWFRSRTBYTINOGQRVSQHVVFMAS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.921625837359);
    msg.setSource(45913U);
    msg.setSourceEntity(67U);
    msg.setDestination(31148U);
    msg.setDestinationEntity(228U);
    msg.timeout = 6828U;
    msg.lat = 0.285872279009;
    msg.lon = 0.376269069188;
    msg.z = 0.632704415154;
    msg.z_units = 23U;
    msg.duration = 31970U;
    msg.speed = 0.596851267005;
    msg.speed_units = 24U;
    msg.type = 131U;
    msg.radius = 0.133373215181;
    msg.length = 0.354932576597;
    msg.bearing = 0.780399300723;
    msg.direction = 160U;
    msg.custom.assign("JRJUJSAMTEGWDUCRDEMOSOAGZAFIDXWJTLMDSKOMQLIYZGNHUEXYLSHFCFQTADAQVXOHOXBDYEBFBHTSIFLFJGILTZAGSTDPPUVWEYEHTTCKVC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.671505881594);
    msg.setSource(48167U);
    msg.setSourceEntity(93U);
    msg.setDestination(16798U);
    msg.setDestinationEntity(133U);
    msg.duration = 17815U;
    msg.custom.assign("ROLARKKDVMSFOTERLBAICFHJEHRYBOPQM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.113679664664);
    msg.setSource(61517U);
    msg.setSourceEntity(180U);
    msg.setDestination(41640U);
    msg.setDestinationEntity(32U);
    msg.duration = 21050U;
    msg.custom.assign("JFTELKJSWUTFOOTOGVJYURQTCSIXEEFBXNIRMZANGZAXGDFXCOTVSLPHY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.00892606764844);
    msg.setSource(36973U);
    msg.setSourceEntity(41U);
    msg.setDestination(11631U);
    msg.setDestinationEntity(177U);
    msg.duration = 63840U;
    msg.custom.assign("SSXSRDFNVAIFDECGUVCUPRFQCOLEWSDHUGABOHOPCNLZVMSDXZUBSDIDGXLYTTEOWNPABBHIHCCEJMJDGFTFOZGQXUBHNJORENKBQYRPCKHRYUMJZWPYIPMKVZLLRZAJSXYEQERHMTZFMBRKNUXHFZWVEUSWQBCAOTGVDTWGAQNILNVRVJOTXYPZLVYALQHGMOYIBFPTDWQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.916250046796);
    msg.setSource(20744U);
    msg.setSourceEntity(113U);
    msg.setDestination(48499U);
    msg.setDestinationEntity(226U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.984970246053;
    tmp_msg_0.speed_units = 222U;
    msg.control.set(tmp_msg_0);
    msg.duration = 2480U;
    msg.custom.assign("WSPBWNXFZIRMZKNFDHCZIMKHPISJTWBGVCZOFMATJRNSJPREYWAMDQJLJQAVCCGHKUFCFDERMZSGQCYHBANKJPXXSLHQITUTWXJEPUVETIURIIRLGOELZCGALATYZQDYHATXQJQV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.773994325078);
    msg.setSource(59436U);
    msg.setSourceEntity(97U);
    msg.setDestination(47284U);
    msg.setDestinationEntity(226U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.359921638329;
    msg.control.set(tmp_msg_0);
    msg.duration = 24296U;
    msg.custom.assign("KLBFZHGUFYHSQBTSXRMQJSHWAEXINDRPBCDZVNDECXICVQNEQDIDYKVRAUWFYWKPIVFTQHACPZTEOMXABZMCHGLWCOBYXYTNSVTPEZAKLKLAHIYKNAVMNWIE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.223851622518);
    msg.setSource(24351U);
    msg.setSourceEntity(139U);
    msg.setDestination(61426U);
    msg.setDestinationEntity(199U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.294668450896;
    tmp_msg_0.speed_units = 67U;
    msg.control.set(tmp_msg_0);
    msg.duration = 20866U;
    msg.custom.assign("EWHWFQHEDOKXXYEPPJCMGAAVYSVGAEAWTALVDZFEDRLVNIPNIPGPFZFZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.973380866143);
    msg.setSource(27223U);
    msg.setSourceEntity(128U);
    msg.setDestination(14834U);
    msg.setDestinationEntity(1U);
    msg.timeout = 26615U;
    msg.lat = 0.374088389091;
    msg.lon = 0.74185366983;
    msg.z = 0.76417642967;
    msg.z_units = 180U;
    msg.speed = 0.93399187521;
    msg.speed_units = 7U;
    msg.bearing = 0.914180529828;
    msg.cross_angle = 0.849137698129;
    msg.width = 0.453313271142;
    msg.length = 0.162748611077;
    msg.hstep = 0.833036989707;
    msg.coff = 237U;
    msg.alternation = 88U;
    msg.flags = 227U;
    msg.custom.assign("CYFLKKVRTBOYUIKEHDVYXPJKQVLNGZRALRUGLINZXOQITBUFISBEGGAAZRMQYWDTNDMJWKDSSXJLZUUBZSSPFGKVCTWTDHMYNBHWNFMFZFPDXIPTOYCVSDACXJDEXVOHACOXJCMWISOWUXTCXFLCNNPFLIUYKJEUYYOGGSHJQUKNUHQHRRJKWHBQZZFPQOTYQNNARDRLEOIEEIG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.994653590455);
    msg.setSource(35161U);
    msg.setSourceEntity(34U);
    msg.setDestination(55258U);
    msg.setDestinationEntity(226U);
    msg.timeout = 28126U;
    msg.lat = 0.391186595475;
    msg.lon = 0.172487920945;
    msg.z = 0.0589906295206;
    msg.z_units = 203U;
    msg.speed = 0.576461729613;
    msg.speed_units = 238U;
    msg.bearing = 0.923789443564;
    msg.cross_angle = 0.995491872011;
    msg.width = 0.656402255347;
    msg.length = 0.522600296971;
    msg.hstep = 0.985391574905;
    msg.coff = 118U;
    msg.alternation = 62U;
    msg.flags = 181U;
    msg.custom.assign("WXRNAVXTUIHRKLHRGJR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.622657878269);
    msg.setSource(43506U);
    msg.setSourceEntity(47U);
    msg.setDestination(11445U);
    msg.setDestinationEntity(190U);
    msg.timeout = 24771U;
    msg.lat = 0.963583081564;
    msg.lon = 0.246053530972;
    msg.z = 0.415597060992;
    msg.z_units = 228U;
    msg.speed = 0.747806524647;
    msg.speed_units = 216U;
    msg.bearing = 0.376924877231;
    msg.cross_angle = 0.166439143448;
    msg.width = 0.274802709699;
    msg.length = 0.694819054146;
    msg.hstep = 0.217275881402;
    msg.coff = 41U;
    msg.alternation = 81U;
    msg.flags = 61U;
    msg.custom.assign("OCDSAXXLIBZCJZWLBBWEKSVBRMHYOZQRHGEVTDAESOSKXDNPIHKJHXSXMLDKAOTWMNOJCQATNPZYSLIWDZBPGKNXQMRWZUWVVGKPEWJTMITJFWADQLTAJFQRJLIIEPNJEULDUFWRTUR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.947434045569);
    msg.setSource(59904U);
    msg.setSourceEntity(106U);
    msg.setDestination(57527U);
    msg.setDestinationEntity(133U);
    msg.timeout = 27640U;
    msg.lat = 0.524042847263;
    msg.lon = 0.609834957956;
    msg.z = 0.307447920217;
    msg.z_units = 111U;
    msg.speed = 0.0340386690131;
    msg.speed_units = 117U;
    msg.custom.assign("JIBVIYQYODEKXISMJZBMRXIRNWNNKOTRYHFAOLDFEEULFXSLRLKVJKDSZAOPDHRQNZVMAJBGRGPCULTAXGMJQWYTJVGMNFYLEMVPTHTAUQQFDVWYCXFECIUZPKFVUJT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.254963627909);
    msg.setSource(29833U);
    msg.setSourceEntity(123U);
    msg.setDestination(46232U);
    msg.setDestinationEntity(210U);
    msg.timeout = 9150U;
    msg.lat = 0.651983555895;
    msg.lon = 0.731043757425;
    msg.z = 0.694909294575;
    msg.z_units = 180U;
    msg.speed = 0.420946660244;
    msg.speed_units = 11U;
    msg.custom.assign("YMVUFNCFEAJJXAQENFWABEWOHFOJJORIBLLMUDFHQWYXORSSWKPSNKPBTTHIWRASDYDKQFBMQOVUACEQUHAAZHUVDLUVOBCTGDA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.435824342176);
    msg.setSource(51764U);
    msg.setSourceEntity(143U);
    msg.setDestination(5959U);
    msg.setDestinationEntity(129U);
    msg.timeout = 60841U;
    msg.lat = 0.681058564755;
    msg.lon = 0.512021287359;
    msg.z = 0.948131602273;
    msg.z_units = 155U;
    msg.speed = 0.324551430137;
    msg.speed_units = 100U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.738199987478;
    tmp_msg_0.y = 0.818593725089;
    tmp_msg_0.z = 0.779133576235;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JBGMWHXDJDDKGMSSFRNEHACFMWDZOFRIIVTOXIIUWSCGETXARZAMWMJJEJRHQRUQKHCQYLVPYDVDYJBQNCWYNVZGUXSTWFOYKLKOKIEPZTBTSMJBPUUYHRSCVEASPOPVOGIADHRULHZODGHUOUTNNLX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.523925385968);
    msg.setSource(5602U);
    msg.setSourceEntity(219U);
    msg.setDestination(2395U);
    msg.setDestinationEntity(201U);
    msg.x = 0.984611313582;
    msg.y = 0.00373486659224;
    msg.z = 0.666327168401;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.810416602042);
    msg.setSource(40486U);
    msg.setSourceEntity(191U);
    msg.setDestination(17205U);
    msg.setDestinationEntity(113U);
    msg.x = 0.720662121673;
    msg.y = 0.353543120071;
    msg.z = 0.566314692898;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.145681386763);
    msg.setSource(62544U);
    msg.setSourceEntity(90U);
    msg.setDestination(45200U);
    msg.setDestinationEntity(176U);
    msg.x = 0.832549169074;
    msg.y = 0.926404731751;
    msg.z = 0.406696170505;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.0149930221249);
    msg.setSource(37633U);
    msg.setSourceEntity(188U);
    msg.setDestination(62591U);
    msg.setDestinationEntity(28U);
    msg.timeout = 31165U;
    msg.lat = 0.937906995651;
    msg.lon = 0.607026997758;
    msg.z = 0.453329134949;
    msg.z_units = 44U;
    msg.amplitude = 0.136420498191;
    msg.pitch = 0.126267190313;
    msg.speed = 0.135143734577;
    msg.speed_units = 62U;
    msg.custom.assign("FVJHUGUDZSOQFCKQHBISPDSZNPNVKVLEKMRROOJGRYIYXWRLNMWLMAIVMYXHONCFQCXLQOJECZKUAXPDAADGRDGOSVYGFVGIDUTUYLEVQAFBBWIMMMUUWKLROWUPFZTSYWNPTTJZVITPYJTDA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.895129427933);
    msg.setSource(24927U);
    msg.setSourceEntity(224U);
    msg.setDestination(22633U);
    msg.setDestinationEntity(183U);
    msg.timeout = 26279U;
    msg.lat = 0.350332588869;
    msg.lon = 0.981876987308;
    msg.z = 0.981261744666;
    msg.z_units = 18U;
    msg.amplitude = 0.17267671451;
    msg.pitch = 0.373224998463;
    msg.speed = 0.285124644778;
    msg.speed_units = 68U;
    msg.custom.assign("FAOHOULHVQTRTXONMQNCERMUYCFS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.401104203676);
    msg.setSource(32208U);
    msg.setSourceEntity(104U);
    msg.setDestination(12592U);
    msg.setDestinationEntity(44U);
    msg.timeout = 13752U;
    msg.lat = 0.740645862429;
    msg.lon = 0.109502589432;
    msg.z = 0.352655764625;
    msg.z_units = 86U;
    msg.amplitude = 0.403841541491;
    msg.pitch = 0.266703620501;
    msg.speed = 0.413119483598;
    msg.speed_units = 188U;
    msg.custom.assign("NEWFYLPWKRQGKPPXUJUCJXHUQSTZNYZYVYOIQDFXXXBLLJHRAXBJGSRQKNIKZLKFFOHCATBQHCJJOTWCGRDAVHCRSMPOEEJMFCRDAALKNHAJIVWTISUYFPJXGSWQLSMAZDXZIYUVNPWWMZOGHPAKEFLYBVQMTDBGVBHHQTALKFOSZETTUVDJNIWPPNPSCZDRFXCSFYIEMYEGIZHDDWBBN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.88634376577);
    msg.setSource(29126U);
    msg.setSourceEntity(211U);
    msg.setDestination(63820U);
    msg.setDestinationEntity(48U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.0312182897505);
    msg.setSource(31662U);
    msg.setSourceEntity(126U);
    msg.setDestination(24418U);
    msg.setDestinationEntity(165U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.652122812738);
    msg.setSource(60677U);
    msg.setSourceEntity(164U);
    msg.setDestination(51546U);
    msg.setDestinationEntity(70U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.898271574856);
    msg.setSource(46841U);
    msg.setSourceEntity(18U);
    msg.setDestination(56295U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.910871958264;
    msg.lon = 0.544353607092;
    msg.z = 0.514794888636;
    msg.z_units = 248U;
    msg.radius = 0.386092192833;
    msg.duration = 55646U;
    msg.speed = 0.341030154929;
    msg.speed_units = 83U;
    msg.custom.assign("HWTRYZPUCNXCCAPWLICDSRZFVTLXBGPDIYASVYMKSRNTMNOXXOEXUMNUYTWKLVEGJROBSMFKPUQWACMPPRBLDYRHKRRLGVNGJHVZYHOJEWLQDUZACVGQLKQFSHZDECEQBHGAKMOGBAPUFWJEIIWSNJOHWFNPQTITIUXENVNKWUTCTDIAJKDPQRBOAOJEOUFZASQHSLVPIMT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.669940117914);
    msg.setSource(37713U);
    msg.setSourceEntity(67U);
    msg.setDestination(21686U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.412418247783;
    msg.lon = 0.164534851651;
    msg.z = 0.139864438294;
    msg.z_units = 148U;
    msg.radius = 0.279605135102;
    msg.duration = 48959U;
    msg.speed = 0.632059926425;
    msg.speed_units = 107U;
    msg.custom.assign("SJWDLYTUSRQTAMJIHDHFYSWTJDUCMHQJVJAREVKNSALGAHUCRBIPXWVIEVZTE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.951958191398);
    msg.setSource(9842U);
    msg.setSourceEntity(132U);
    msg.setDestination(47770U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.488015595775;
    msg.lon = 0.214596921616;
    msg.z = 0.174750986764;
    msg.z_units = 206U;
    msg.radius = 0.640745732754;
    msg.duration = 26736U;
    msg.speed = 0.786729281028;
    msg.speed_units = 83U;
    msg.custom.assign("NSJPYAZSEXZRBLKZLWAPJBEAHXIVNFOEIVDRBJVTFHFFLQBRKMQJREARGJWCRQDJKSBCTFPLX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.125280236813);
    msg.setSource(31189U);
    msg.setSourceEntity(252U);
    msg.setDestination(64642U);
    msg.setDestinationEntity(48U);
    msg.timeout = 21656U;
    msg.flags = 61U;
    msg.lat = 0.874179631798;
    msg.lon = 0.754177438881;
    msg.start_z = 0.146883765812;
    msg.start_z_units = 160U;
    msg.end_z = 0.154021688042;
    msg.end_z_units = 180U;
    msg.radius = 0.787896580371;
    msg.speed = 0.334200603588;
    msg.speed_units = 74U;
    msg.custom.assign("LYNUTIFIMDXBPEGQYWSTUWOPASJMRTXKJCUYNOHMJUAAIAZDAFGYUQFUSIOTREHXLPYOVEUZPJPBKWESSMJDLCDWRVOYFPLQPWDRLKREFLQGOHTDFXICWZKZHEAASVXBLZUWZIS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.939828755248);
    msg.setSource(42221U);
    msg.setSourceEntity(219U);
    msg.setDestination(46307U);
    msg.setDestinationEntity(151U);
    msg.timeout = 57730U;
    msg.flags = 61U;
    msg.lat = 0.669274029659;
    msg.lon = 0.441985082089;
    msg.start_z = 0.263150804032;
    msg.start_z_units = 14U;
    msg.end_z = 0.83746362127;
    msg.end_z_units = 179U;
    msg.radius = 0.475800103379;
    msg.speed = 0.984426921382;
    msg.speed_units = 241U;
    msg.custom.assign("ELPDZTCUWMGM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.244462970988);
    msg.setSource(23815U);
    msg.setSourceEntity(95U);
    msg.setDestination(35351U);
    msg.setDestinationEntity(104U);
    msg.timeout = 52147U;
    msg.flags = 162U;
    msg.lat = 0.531716306741;
    msg.lon = 0.514798622378;
    msg.start_z = 0.848932099936;
    msg.start_z_units = 143U;
    msg.end_z = 0.0839663350259;
    msg.end_z_units = 153U;
    msg.radius = 0.862999368095;
    msg.speed = 0.916822141833;
    msg.speed_units = 242U;
    msg.custom.assign("JRVBJMYOYIXUHIZBJPLRWHJXDY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.0722553044399);
    msg.setSource(22729U);
    msg.setSourceEntity(17U);
    msg.setDestination(6402U);
    msg.setDestinationEntity(130U);
    msg.timeout = 25567U;
    msg.lat = 0.314034201903;
    msg.lon = 0.331188462632;
    msg.z = 0.014369550187;
    msg.z_units = 32U;
    msg.speed = 0.681698741031;
    msg.speed_units = 171U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.469852901307;
    tmp_msg_0.y = 0.998018206073;
    tmp_msg_0.z = 0.110417237047;
    tmp_msg_0.t = 0.156754131964;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HNPKGVVWZSJUAHUCBSOGJHTCDOFQOOWSGIXZVFRGMPEWHGDIFFZFALUUPAKJXKZXBYELTPAMEGZVDMCHERDRXCNTQBBXQMCOEPYSIQVTWHBPQWESJKUDHXCRZXTTDM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.30203283363);
    msg.setSource(19007U);
    msg.setSourceEntity(237U);
    msg.setDestination(56196U);
    msg.setDestinationEntity(105U);
    msg.timeout = 14773U;
    msg.lat = 0.651838102312;
    msg.lon = 0.77567907009;
    msg.z = 0.161598400159;
    msg.z_units = 198U;
    msg.speed = 0.55076964394;
    msg.speed_units = 100U;
    msg.custom.assign("TRAOUTVMYKHKVGPFCJPQBQXIWTIJHRHFYHHYQFKNNOESXFPXCMOYELTIYSTKXOXMFFZBCJTLGSUPOMVBUHQEKSJJVUEVSQDFZSKHTWELOYQDEWKVCB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.808294384993);
    msg.setSource(43464U);
    msg.setSourceEntity(102U);
    msg.setDestination(6625U);
    msg.setDestinationEntity(41U);
    msg.timeout = 63106U;
    msg.lat = 0.220593212105;
    msg.lon = 0.650205020535;
    msg.z = 0.724056188357;
    msg.z_units = 226U;
    msg.speed = 0.236358413101;
    msg.speed_units = 117U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.525150813898;
    tmp_msg_0.y = 0.222445211775;
    tmp_msg_0.z = 0.0655104769061;
    tmp_msg_0.t = 0.825947207759;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XDNRCIEMWWSZQWIZGYDVFVFHOCWEKELPLNAQIRUZKQBDPQREVDPSTTMIFDSOQMADCYJWYZXVMZZTMRBHGHJISWAUGYKXT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.60711444326);
    msg.setSource(25737U);
    msg.setSourceEntity(179U);
    msg.setDestination(62201U);
    msg.setDestinationEntity(8U);
    msg.x = 0.526890183275;
    msg.y = 0.245484339044;
    msg.z = 0.246527924723;
    msg.t = 0.548574889311;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.735787073051);
    msg.setSource(57617U);
    msg.setSourceEntity(146U);
    msg.setDestination(26904U);
    msg.setDestinationEntity(114U);
    msg.x = 0.314317604613;
    msg.y = 0.795515039666;
    msg.z = 0.815390163442;
    msg.t = 0.762866003648;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.073071397646);
    msg.setSource(39808U);
    msg.setSourceEntity(211U);
    msg.setDestination(26239U);
    msg.setDestinationEntity(103U);
    msg.x = 0.295861196804;
    msg.y = 0.441842907293;
    msg.z = 0.116194005216;
    msg.t = 0.285683605585;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.0554378369196);
    msg.setSource(51998U);
    msg.setSourceEntity(35U);
    msg.setDestination(45580U);
    msg.setDestinationEntity(239U);
    msg.timeout = 15646U;
    msg.name.assign("LYUABXCAEDYQPGORXJHLIBHSXQJOIDARYZIGAHLNGUGIJSNVKRSLDEPWFQKWVWAUPWUTJNQLHWY");
    msg.custom.assign("VPZTXBFDFWNASKIVMHDRUYSKRSKZVFNPTUEDPZILUJPDVNJALAEJGGLGVYAXAKZBFYRHBMGXOEVWOOGOJROUNCTWZTAVBLUNUBXCXENINEECFRPWJMWRCXPQMGBUWLTQIQTHJSUSBRODBMHYOMAXEB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.736709780477);
    msg.setSource(59615U);
    msg.setSourceEntity(187U);
    msg.setDestination(32636U);
    msg.setDestinationEntity(204U);
    msg.timeout = 16439U;
    msg.name.assign("NJECGGBUHEAKFONRQWDEMENFNLCALGQRPPJQSNNTSXKZPHYKXWJMTIVRWJPAZFIBBMUGOAZQMXCCNUYDRAIFSDBNADBDDZVHORGPUWE");
    msg.custom.assign("XSBPMQLUFTAOTZSCUURTNIKEZIYSNSKPISCMTLLHWNSYFFGXQDKMXUQSYOYUYGMGTKVDHBPXDIADRZZCWMZIBIJOQARJIFEBVMARHDNPFFJRUEDJONYZSHAULRFGBESBWBXWRKWDCZEKNYJNOHLZFEVCKXOPGYPWQJAEQGGWTMUDVOQCCTHMPKUUWEILHVPCLRXX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.726917480911);
    msg.setSource(33216U);
    msg.setSourceEntity(215U);
    msg.setDestination(26862U);
    msg.setDestinationEntity(65U);
    msg.timeout = 7676U;
    msg.name.assign("PKEFFHVYUILJCLMGHGHURTAFXLIRARYIGRRQJMMDOSVZSJBLZZNUOYVEHYPWZUWXVIVWKMKJAHGZGPGIFXQMSHQIORPYYJKJJUXOJVLEEVAHQSHKSHDSCDTXEGNNXCNZCPTFXOCFYIHBRFNCQNPIZZXQXTLJWODCQLWBACLWTWAKTMRTBWEMVSPGLOOUETGWZKDFENIQDYDYPTTYAUBXSKSOUVBIMKEPDVZBMDFWRBUBKNRJAMLA");
    msg.custom.assign("LVDNCCVIHJWPSQWKJBETPXKDXVGEWORXNCFSAQUISZFWKCIJHMXDFHQEZOTFVCRGXLKQUMQFNVGVUZKOREAPUHAHWYXDAEBCROSUHPITGYZWKZINTFVWXHDGLZZQRXDTROSDBIZFPSDNTAJJBWEFLAIRJMCVNRUYALTLPBALLAUIUCBTWEZDMVYONFQOIQSCUNONMRSUKYIJGBCMMBEZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.989428732572);
    msg.setSource(62351U);
    msg.setSourceEntity(240U);
    msg.setDestination(4500U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.963737616193;
    msg.lon = 0.197162988872;
    msg.z = 0.569796308126;
    msg.z_units = 13U;
    msg.speed = 0.334453139785;
    msg.speed_units = 145U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.32732085167;
    tmp_msg_0.y = 0.407033878293;
    tmp_msg_0.z = 0.187839190323;
    tmp_msg_0.t = 0.293186321206;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.251071871954;
    msg.custom.assign("ALEJMKZMWGSDYBQULHSLQPKWHOQTPAFNZPQFQFKCFDMYTPXWRVOCOBSIZLUOBLBVMQDRPSTXWAKGBJPNDHHYADSCGJAUUXJHWNKEVMLXIJJRHPWOCBZZTWXIPGTXTOSRAIIXYUWGZNQIARRDCSVLPMOSPZZQBHECYSLVOTHFVXDCDNNIWNKCEESUHYHJGBULFFEVNMFNOGYTWCKVARJETUQOXEZVRQMM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.49712691382);
    msg.setSource(41327U);
    msg.setSourceEntity(75U);
    msg.setDestination(11907U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.946680067778;
    msg.lon = 0.614404249583;
    msg.z = 0.52143334389;
    msg.z_units = 111U;
    msg.speed = 0.649621423582;
    msg.speed_units = 92U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 65191U;
    tmp_msg_0.off_x = 0.581901890651;
    tmp_msg_0.off_y = 0.639708913891;
    tmp_msg_0.off_z = 0.713533249533;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.247540782772;
    msg.custom.assign("AHVDYDEKXKWRAZEMRKCKQHQIZPLWUAZNYJOJDXPFVCWZCXPQLQZTOSPUNGUBHHOHXGTDLZWWIM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.337326714706);
    msg.setSource(2206U);
    msg.setSourceEntity(7U);
    msg.setDestination(18954U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.9211769999;
    msg.lon = 0.0394932976053;
    msg.z = 0.248106884599;
    msg.z_units = 188U;
    msg.speed = 0.420549568545;
    msg.speed_units = 204U;
    msg.start_time = 0.97001506708;
    msg.custom.assign("MLHRXFJEOZKCAHLIUECSWUVSMWNMFAAILVQCCHJUEVDGUPQIRXPUTROAFYYWPBSEEMCULJBCFTCKNZSJAHJHIYDPBWUBMMQOZGUDAHRRELFKOVDPZQFWOHQZQSPFEJTXCHFGEIAOKVRSFJNVGDWSTNSXTUWZYZNMRQAPONZTTNJKKIJLYLRNHVAGMDCVRYBWEKQKSXTEOXPDGWUXOHYXMPYDGZPQI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.439560042974);
    msg.setSource(13035U);
    msg.setSourceEntity(186U);
    msg.setDestination(27930U);
    msg.setDestinationEntity(98U);
    msg.vid = 8810U;
    msg.off_x = 0.373767309253;
    msg.off_y = 0.699118258706;
    msg.off_z = 0.734122616316;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.628397997302);
    msg.setSource(29078U);
    msg.setSourceEntity(118U);
    msg.setDestination(41173U);
    msg.setDestinationEntity(157U);
    msg.vid = 11334U;
    msg.off_x = 0.987444150988;
    msg.off_y = 0.229612873728;
    msg.off_z = 0.640012334107;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.29011963561);
    msg.setSource(64484U);
    msg.setSourceEntity(234U);
    msg.setDestination(112U);
    msg.setDestinationEntity(25U);
    msg.vid = 58215U;
    msg.off_x = 0.844408215005;
    msg.off_y = 0.518292128187;
    msg.off_z = 0.253227469404;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.288178104805);
    msg.setSource(41915U);
    msg.setSourceEntity(184U);
    msg.setDestination(39007U);
    msg.setDestinationEntity(217U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.0752741407127);
    msg.setSource(43746U);
    msg.setSourceEntity(178U);
    msg.setDestination(42228U);
    msg.setDestinationEntity(24U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.645021020326);
    msg.setSource(2468U);
    msg.setSourceEntity(235U);
    msg.setDestination(37157U);
    msg.setDestinationEntity(182U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.978710587019);
    msg.setSource(761U);
    msg.setSourceEntity(6U);
    msg.setDestination(47540U);
    msg.setDestinationEntity(151U);
    msg.mid = 47245U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.790423985609);
    msg.setSource(1064U);
    msg.setSourceEntity(197U);
    msg.setDestination(62009U);
    msg.setDestinationEntity(128U);
    msg.mid = 48524U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.816134845238);
    msg.setSource(38001U);
    msg.setSourceEntity(210U);
    msg.setDestination(36387U);
    msg.setDestinationEntity(88U);
    msg.mid = 34163U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.405795602336);
    msg.setSource(51921U);
    msg.setSourceEntity(190U);
    msg.setDestination(41574U);
    msg.setDestinationEntity(129U);
    msg.state = 87U;
    msg.eta = 62635U;
    msg.info.assign("KZSAPTHBREIZZUQCGGJUXLFNNSLSTIHAVUIMXUMQYXQDGVNULIAMRZXYXAWNMEXUDCCDGFCARJZKJGBWPTKREIUSFCCJTNYDLMBQHPJDOPVKHFJJCQLQNSBMMVIUTVEXYVAKSBZLZNOLYZOMDVUHORIQSXSAEFPRYWVCDAWWRNPNEKF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.34034932477);
    msg.setSource(63552U);
    msg.setSourceEntity(158U);
    msg.setDestination(10173U);
    msg.setDestinationEntity(39U);
    msg.state = 178U;
    msg.eta = 35066U;
    msg.info.assign("CPWYJUZBIKGLKGSSDDNTKMDDHFFVSYJCPIQGETNOKUOFBFNLXHTSGXWZMREUYMJXLQNTQBUHZMZPUCLDJZSZBQFFHQHDWVHIUZRUAPDFNQCG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.991358483307);
    msg.setSource(53187U);
    msg.setSourceEntity(236U);
    msg.setDestination(27147U);
    msg.setDestinationEntity(57U);
    msg.state = 114U;
    msg.eta = 48726U;
    msg.info.assign("TALPINHPZHEUWSXJYWEWNWVWGXQDTQQCTDSFLOSIBUYRAYNCODOFBLILCZXDWNVECEMMEZWMYTXDDMAMUMJPBIYSJEPJOXOVSZRPTVOZBG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.804486098302);
    msg.setSource(8919U);
    msg.setSourceEntity(20U);
    msg.setDestination(61765U);
    msg.setDestinationEntity(172U);
    msg.system = 57993U;
    msg.duration = 54083U;
    msg.speed = 0.83105817087;
    msg.speed_units = 131U;
    msg.x = 0.321774922812;
    msg.y = 0.149611192683;
    msg.z = 0.532496322664;
    msg.z_units = 56U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.25385940082);
    msg.setSource(23133U);
    msg.setSourceEntity(215U);
    msg.setDestination(63776U);
    msg.setDestinationEntity(22U);
    msg.system = 24344U;
    msg.duration = 44112U;
    msg.speed = 0.994948929861;
    msg.speed_units = 87U;
    msg.x = 0.457436483565;
    msg.y = 0.798981439178;
    msg.z = 0.825947391344;
    msg.z_units = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.730854744929);
    msg.setSource(53154U);
    msg.setSourceEntity(20U);
    msg.setDestination(53310U);
    msg.setDestinationEntity(152U);
    msg.system = 36935U;
    msg.duration = 25794U;
    msg.speed = 0.820337334539;
    msg.speed_units = 109U;
    msg.x = 0.0718652452536;
    msg.y = 0.517875526558;
    msg.z = 0.942945806547;
    msg.z_units = 106U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.275341481161);
    msg.setSource(4722U);
    msg.setSourceEntity(240U);
    msg.setDestination(8655U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.44332840155;
    msg.lon = 0.446202119949;
    msg.speed = 0.0705838032544;
    msg.speed_units = 8U;
    msg.duration = 51710U;
    msg.sys_a = 7438U;
    msg.sys_b = 21595U;
    msg.move_threshold = 0.159663956433;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.203419436208);
    msg.setSource(9845U);
    msg.setSourceEntity(21U);
    msg.setDestination(15737U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.0864427063296;
    msg.lon = 0.978163075831;
    msg.speed = 0.323760176229;
    msg.speed_units = 134U;
    msg.duration = 30950U;
    msg.sys_a = 35846U;
    msg.sys_b = 22395U;
    msg.move_threshold = 0.69670102529;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.400127780937);
    msg.setSource(42941U);
    msg.setSourceEntity(139U);
    msg.setDestination(28133U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.977066268788;
    msg.lon = 0.75226934616;
    msg.speed = 0.0670747819519;
    msg.speed_units = 237U;
    msg.duration = 43010U;
    msg.sys_a = 113U;
    msg.sys_b = 58093U;
    msg.move_threshold = 0.594008137655;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.0411561744943);
    msg.setSource(14497U);
    msg.setSourceEntity(134U);
    msg.setDestination(24217U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.237446961783;
    msg.lon = 0.437671080311;
    msg.z = 0.982692326023;
    msg.z_units = 237U;
    msg.speed = 0.0985757843041;
    msg.speed_units = 111U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.151525869871;
    tmp_msg_0.lon = 0.207982945442;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("IETXFHSLDEAAPDSNRUNORDPSGADBPHKWCEJLWBXRLYCXHRHNOSVETABNTXCQUOKCRDQBKSCZALDYMTYKRCULAMWXZPGTNULXDSJGJNFYWYQNIHVGJQFIWBTMTDKYGLHFSHGJQULXMVBENTGUSBPOTHZVVQYCNRMPBMIOFYZMWVFCMIVRQLVIHFFELWAWTRPZDCXRIOQAADEBSXZQKOUXZKUKYNOHJPGUBIEIEJMGZZUWIWCSJPKPA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.0364168938335);
    msg.setSource(45513U);
    msg.setSourceEntity(84U);
    msg.setDestination(28147U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.0496996194853;
    msg.lon = 0.379213346366;
    msg.z = 0.359102987067;
    msg.z_units = 151U;
    msg.speed = 0.184384016193;
    msg.speed_units = 122U;
    msg.custom.assign("YQPYZRXMGOTNHVEDZRLPXTLEVPBUWZNFGVAOVLILYWXLPANAIZIYGZFMEBFWHKIQNUNESCNOLZXHRGEYVAPEBEKEBBHYOAVQDPGISQHQMGRRNFRQMJUDUBTWGSCLPOJCCMIVKNZCRIWULXWGHNT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.967179474926);
    msg.setSource(7744U);
    msg.setSourceEntity(87U);
    msg.setDestination(53989U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.482102708131;
    msg.lon = 0.309411120419;
    msg.z = 0.547679040758;
    msg.z_units = 213U;
    msg.speed = 0.62268906506;
    msg.speed_units = 149U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.693148633289;
    tmp_msg_0.lon = 0.283677595039;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("QQHIOEDRRHRNZUGCJZHXRHYSVUAIAWCIGOQZFTBDTULJDOBPZMTNNXZKSNU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.396606055377);
    msg.setSource(32318U);
    msg.setSourceEntity(24U);
    msg.setDestination(50250U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.24687576285;
    msg.lon = 0.00917854974277;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.0462088058501);
    msg.setSource(21906U);
    msg.setSourceEntity(170U);
    msg.setDestination(680U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.0962753080804;
    msg.lon = 0.435389316452;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.621427236438);
    msg.setSource(37144U);
    msg.setSourceEntity(62U);
    msg.setDestination(22236U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.770033381053;
    msg.lon = 0.673982666218;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.386867048473);
    msg.setSource(30868U);
    msg.setSourceEntity(127U);
    msg.setDestination(20615U);
    msg.setDestinationEntity(124U);
    msg.timeout = 35189U;
    msg.lat = 0.231187359429;
    msg.lon = 0.872565004821;
    msg.z = 0.835679782202;
    msg.z_units = 92U;
    msg.pitch = 0.135427334943;
    msg.amplitude = 0.448899486689;
    msg.duration = 53912U;
    msg.speed = 0.573655172589;
    msg.speed_units = 73U;
    msg.radius = 0.654710157473;
    msg.direction = 1U;
    msg.custom.assign("ODMOZXUMGRAESVSKMQDPDSTHUKEUFNJRHO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.28992998087);
    msg.setSource(5137U);
    msg.setSourceEntity(34U);
    msg.setDestination(21713U);
    msg.setDestinationEntity(184U);
    msg.timeout = 48776U;
    msg.lat = 0.543042768375;
    msg.lon = 0.185188520901;
    msg.z = 0.693938827845;
    msg.z_units = 141U;
    msg.pitch = 0.814498535481;
    msg.amplitude = 0.0472110791165;
    msg.duration = 58081U;
    msg.speed = 0.149572027452;
    msg.speed_units = 166U;
    msg.radius = 0.889225069027;
    msg.direction = 93U;
    msg.custom.assign("XCAFLTZTHHTYAYADQIIQLRNUDLFXBBNZVJMEHZSESVDPINQSSRWLKEVZJGADXEMYNFMUKFFHBTIJSEBISDZBLIPCIGTNCPRMCRTZGWEURKYKCRPTGNKCOSRJPTXBSWVGSCMLCVZHNPJKAWKFLDRXWEAU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.0494042857723);
    msg.setSource(53024U);
    msg.setSourceEntity(236U);
    msg.setDestination(44423U);
    msg.setDestinationEntity(183U);
    msg.timeout = 64135U;
    msg.lat = 0.656097502238;
    msg.lon = 0.736277143291;
    msg.z = 0.0151056309824;
    msg.z_units = 134U;
    msg.pitch = 0.631896386873;
    msg.amplitude = 0.379264657842;
    msg.duration = 30383U;
    msg.speed = 0.828588250012;
    msg.speed_units = 114U;
    msg.radius = 0.533829473676;
    msg.direction = 156U;
    msg.custom.assign("OOMPXCUHSCIWBOJNUGUBIRXVZAFNQEEETXUPKUJEMMXLLPAQHDGPYQMXSWKWLAJCFUOGISXDUIMIJEWVJFYRNLHHDNAKDWNMWVQBIWRYABVZPBQOFFCMKEVLTOGTHWBMIJIYYHSFSSRCHUWTYJPQHSOTYGIGLZMZURMSAOEARNCTN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.706856995876);
    msg.setSource(40776U);
    msg.setSourceEntity(158U);
    msg.setDestination(7876U);
    msg.setDestinationEntity(29U);
    msg.formation_name.assign("OBNRZWQPVINANWHWJIUFTSIWKL");
    msg.reference_frame = 129U;
    msg.custom.assign("ZWSAYQNZXJFPZYTCGMGCNCJXKKEOJCATAQVXBDPBOXRUFPUHWOSLIJQMQDGHGJSWSHHRVGHLEIJYZLSPLHYYMPRXANCWFPVRSDIQBHNRQYLVWWRPTEBIEMKDODPMAXLYOXKOENKEUCNMIRRUNKDGTUEFVQKBBMMXBFWBKEZQGQVWUJIJZTUTLB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.66648628866);
    msg.setSource(17008U);
    msg.setSourceEntity(149U);
    msg.setDestination(44198U);
    msg.setDestinationEntity(159U);
    msg.formation_name.assign("GSRZFZYEFXYUPHPHVOLCIOMFLWXZNQEZ");
    msg.reference_frame = 205U;
    msg.custom.assign("RTPZOMNVEXNOSTWCTJHUVSCBVGBEKPRIWQYUUFQXASPJEKKXYSEDHKRTOAVDFJGUXYYQWMWENLQCRGLVFTJYJRHCEBHXOCYFOMBMKZNPABNEYOJXJVTIGHRECLLEWALGASLIGPOHQZYADTCUDDGBOSOHIYMRMQGUDIYHDLSXPQZLFBDXPNEHWMFNVTVRGKPZIWIRSZQSCAIAPUWMHDJZCUPDMLBVNZW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.619221495042);
    msg.setSource(42365U);
    msg.setSourceEntity(52U);
    msg.setDestination(63424U);
    msg.setDestinationEntity(170U);
    msg.formation_name.assign("QSAQFIABQKQYEVEDYNGGFFQPJQLMNUEGDSBPGJCWLBMHLZFFRAXIBYKFHORKRDPPCIHSAVGUEDVEUEOVYIRLZFWWTAKKKZBHUZJNYAYTGIPSBZCXNCXZSGJOMKZXMXBTEUTIYRJPACVLOZGRPLFUHNUAOLSIMHWXVJHNMGWLLDMMBYKUWAHODZIIEWSTJNSMVEVUXJNQXW");
    msg.reference_frame = 253U;
    msg.custom.assign("EIPOXZMAXKCAOMQXEYGDBQAIZFBGOFFEVZSWEFGSAHGOKUBVRT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.916496875231);
    msg.setSource(37126U);
    msg.setSourceEntity(210U);
    msg.setDestination(58309U);
    msg.setDestinationEntity(117U);
    msg.group_name.assign("EHRUHTXZRYVYDCSZDZLMJZEOUBKBCEPYHPCLKNAKSRLMQBWKXZHQAFQJVIGWHBOZMXLWXWBGVHMLOHXZTATHJQAAAGSMOYGGQZSSPONIWSJXVGWKNONWQBETYIUEMUPCFYRTPCYKXIIVFDSQTMJCPTMWPGVERFIEDSHUETQPRDUNDVAQNFICAFANPZBHKGGLLBBXCODRNMJFDFCJBLOZVJINMYWRLPKKQXUDN");
    msg.formation_name.assign("SLJSHZEXBZCXIKLABUMKOPRVTNUNDTGCWIKCOTJJRKBCAYGAJRKTZRQLDEXQRWRZEBSCLEDVQIVBJXDPOWWZGDQLOIIZUHQEXLWHITSVODYRRMMGCHATEHOGJWKEAVXNOJEGTBKMNFNQPDYKOYAPGKLRSEFTGBIDDNQYXISIYHLUOPGFAVMBVHFGFHFAYMSZSJIZJBRVPQUPQPENFXYUSULAXJDPLUWWMHCZC");
    msg.plan_id.assign("WLJQVHKKCUVPVGBECFNJRBXNKTADHKWUSJTCSDEHZAEMOSWCDCOTFWQPNNWUFJWTMLPIOMNLRMMIJVARMPCUZLBWGBMXTMXSDFTMOBQHLNAFITKPJKZGOLDWYNEIXQGZLBWIXXVCYQGHPHR");
    msg.description.assign("LCLSDNXWZBERIDVSZTBAANYHLZHFXSXYUQTPOJOUPEEKRPEWCQKKARFXLMXLVQOJDBOADRGFVVFWHRJJERTBGFEQHCEFRAYLOIDVMSUHBWTDKOGPWININUTQWGZQPS");
    msg.leader_speed = 0.204948564547;
    msg.leader_bank_lim = 0.454983259996;
    msg.pos_sim_err_lim = 0.641306271591;
    msg.pos_sim_err_wrn = 0.30576719053;
    msg.pos_sim_err_timeout = 59562U;
    msg.converg_max = 0.608165150778;
    msg.converg_timeout = 59805U;
    msg.comms_timeout = 39199U;
    msg.turb_lim = 0.10181063346;
    msg.custom.assign("JNQEZYJXOULVSMROJTGRBWYRNQFOCJIRGPSPKXHHXLIPWPLXSQCFMGVZLODKPNUMNQLADKZXHUDBJLHKEYYERBWTYAJEGUDMJHYZBXOZKUCDFASZWWQVMKXPCEPLUWTFPFNQBVYGBZVVLIYADTEOFPITASIXGRSLEDWHGOEICOJBUMVCNBAKEQGNTKWIWHZAN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.407654314873);
    msg.setSource(6783U);
    msg.setSourceEntity(70U);
    msg.setDestination(11805U);
    msg.setDestinationEntity(178U);
    msg.group_name.assign("OVVPBWSWUVEAYHDSPJGDJNFWDJUAMCWHFZLCIJHIQUPYDOPBRIBILGZRANMWZEUICLRVROPSTYGKKKXPHMFCCCCNEIWGPSRHTUKHZUESTFOFTQMXGBYEGNYPTOESIXTKNHLX");
    msg.formation_name.assign("UDTPQZOSOCQGSBYZNVZMPIWGQJWBHBZFWRBURPJKPBFTMRXXZWOE");
    msg.plan_id.assign("KBTPRLWDHIPFHHPDUQEZCPHQGSJIAKDGZJBLPPTPFACJWTMGNCUYDMAYBERBGWGODMOGBKKDQCESNSLLWIENYLJRLJKJHBLKAQQZMEVNAEEUMODSVKDOVWLNPNYCAOUYULSFXXVSXQSBURQSHFOHNDZRKFTZEWWUJFBRQRXQDNLIGGMOWIUUYVIVXVSYGGBTCQOSJOOMRATVIVCXMIKCZYTYAXNR");
    msg.description.assign("PCRJEMAPPIFLKCAEWDJXFXKCPESQTQBBWHNUBKRITMSVZ");
    msg.leader_speed = 0.984598762576;
    msg.leader_bank_lim = 0.542916428644;
    msg.pos_sim_err_lim = 0.824217511891;
    msg.pos_sim_err_wrn = 0.925922375629;
    msg.pos_sim_err_timeout = 35960U;
    msg.converg_max = 0.395704587496;
    msg.converg_timeout = 51429U;
    msg.comms_timeout = 59393U;
    msg.turb_lim = 0.564203408706;
    msg.custom.assign("SEUIQJQSPBOXYEJVIOSVEXXDKVRL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.332879527208);
    msg.setSource(31985U);
    msg.setSourceEntity(123U);
    msg.setDestination(52866U);
    msg.setDestinationEntity(120U);
    msg.group_name.assign("NJTOZEANCXWCEOKRTFEZDPICOWVYSUIHQPSTUDQIQANGBLMLENWUXDSYWHSJPYQFMUSBBNKIBXFYBKNNJEGRBKTDZUPJUVQKJAYXSIHYHWTCWOEVUGDSHMOSFVDQPKXMTIZXDWFHAHRAVYAQZCFZJEPOANLOYPTGCTRDVBHSEWGRMXOANTXRT");
    msg.formation_name.assign("KXCTSSIQKYXRVGPNUTBAHMXVFYFXAUWOKNKENKEYUGKSIFJGZDDTZBDEJRMOMFNSMXRSVPZFCOAZUBSRQCBFPMHYLHQLJQTLQJHORKBCLJXEKIBXEDDRAROOZERPTDLTNPUUGNTLELWYVEWPFHBAOJFHYUAWCPPLVHIYVYFJGWNEXVKOANZZOCWYBWZGQQHTPRMGMGCTAOFUVBVCISSXCHIZJMUQRJEB");
    msg.plan_id.assign("EOXQBRIYZVTMPKRDTLZAGRPCKQKUVNWVJARIGKMYGWTHQRIJCWPDJEEVOOVMFIGKAXSFBVJUUIXEBPKQAHQUPONXLYHTAWYCLVBGDOCOREMETWUHJBTLDRKIANHAZDFVDGVJKQXSBCQVBARYPEHTSFFSYILDOPTKEZSOAPSLUJUXFDMUELCJNYXBWZHHTWLNGFWHT");
    msg.description.assign("BDJNATOJPIQXUFDDTMHKNBOCLPHJVREZLCCTILLXTOGBHGXDHGAFYRVWBVONUKISOZSQ");
    msg.leader_speed = 0.801521578561;
    msg.leader_bank_lim = 0.418797104407;
    msg.pos_sim_err_lim = 0.520506375396;
    msg.pos_sim_err_wrn = 0.00448045711933;
    msg.pos_sim_err_timeout = 45616U;
    msg.converg_max = 0.513413656193;
    msg.converg_timeout = 10965U;
    msg.comms_timeout = 18975U;
    msg.turb_lim = 0.734966023233;
    msg.custom.assign("EVTFYGTONQJDHLDRJETQDKPQDNGQMXPFRMCHTZYQPRIJILBLVYVZZFZPRKMWECIAINFJQSJBCMTNPUGWOGTNDXVXVFKQAEDCFLAQHKSDTOYQIENRGWVUOWPQTSAKNBHWZONKBIGNHBIUDCBAEYXJDXJFGSRWHWEZNYCSAIOSOUUZUWMAKSWCRDGHTUGJLHOZPWYC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.92643583722);
    msg.setSource(34586U);
    msg.setSourceEntity(132U);
    msg.setDestination(6885U);
    msg.setDestinationEntity(219U);
    msg.control_src = 5806U;
    msg.control_ent = 65U;
    msg.timeout = 0.18273997726;
    msg.loiter_radius = 0.904426895856;
    msg.altitude_interval = 0.104279242615;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.642786376814);
    msg.setSource(47077U);
    msg.setSourceEntity(182U);
    msg.setDestination(37655U);
    msg.setDestinationEntity(75U);
    msg.control_src = 56542U;
    msg.control_ent = 253U;
    msg.timeout = 0.330004918714;
    msg.loiter_radius = 0.243234755273;
    msg.altitude_interval = 0.91765326498;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.393616033517);
    msg.setSource(16733U);
    msg.setSourceEntity(234U);
    msg.setDestination(20898U);
    msg.setDestinationEntity(182U);
    msg.control_src = 46110U;
    msg.control_ent = 128U;
    msg.timeout = 0.913668905093;
    msg.loiter_radius = 0.572928678458;
    msg.altitude_interval = 0.276961401374;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.0359399166285);
    msg.setSource(16340U);
    msg.setSourceEntity(204U);
    msg.setDestination(8139U);
    msg.setDestinationEntity(236U);
    msg.flags = 142U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.366341947849;
    tmp_msg_0.speed_units = 79U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.176065535647;
    tmp_msg_1.z_units = 212U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.859601201811;
    msg.lon = 0.712826294366;
    msg.radius = 0.227450360993;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.669125544025);
    msg.setSource(2613U);
    msg.setSourceEntity(20U);
    msg.setDestination(25149U);
    msg.setDestinationEntity(213U);
    msg.flags = 109U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0858654821841;
    tmp_msg_0.speed_units = 88U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.926313076085;
    tmp_msg_1.z_units = 209U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.132264756646;
    msg.lon = 0.673921980097;
    msg.radius = 0.669843005581;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.245823915412);
    msg.setSource(35796U);
    msg.setSourceEntity(163U);
    msg.setDestination(21464U);
    msg.setDestinationEntity(209U);
    msg.flags = 180U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.952500124253;
    tmp_msg_0.speed_units = 135U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.129090400618;
    tmp_msg_1.z_units = 215U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.872769418606;
    msg.lon = 0.975653179194;
    msg.radius = 0.239303457282;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.448536495485);
    msg.setSource(52154U);
    msg.setSourceEntity(30U);
    msg.setDestination(59131U);
    msg.setDestinationEntity(108U);
    msg.control_src = 31547U;
    msg.control_ent = 110U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 99U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.852400312349;
    tmp_tmp_msg_0_0.speed_units = 82U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.243785330992;
    tmp_tmp_msg_0_1.z_units = 19U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.822627097374;
    tmp_msg_0.lon = 0.222784472908;
    tmp_msg_0.radius = 0.813597134079;
    msg.reference.set(tmp_msg_0);
    msg.state = 67U;
    msg.proximity = 171U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.013340884154);
    msg.setSource(24750U);
    msg.setSourceEntity(9U);
    msg.setDestination(14496U);
    msg.setDestinationEntity(131U);
    msg.control_src = 17505U;
    msg.control_ent = 13U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 67U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.806488562327;
    tmp_tmp_msg_0_0.speed_units = 224U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.384277527622;
    tmp_tmp_msg_0_1.z_units = 37U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.852020060363;
    tmp_msg_0.lon = 0.642928803148;
    tmp_msg_0.radius = 0.875764874036;
    msg.reference.set(tmp_msg_0);
    msg.state = 27U;
    msg.proximity = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.0631595298649);
    msg.setSource(43755U);
    msg.setSourceEntity(203U);
    msg.setDestination(60666U);
    msg.setDestinationEntity(214U);
    msg.control_src = 20261U;
    msg.control_ent = 138U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 119U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.791914817508;
    tmp_tmp_msg_0_0.speed_units = 159U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7998198564;
    tmp_tmp_msg_0_1.z_units = 77U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.219011679747;
    tmp_msg_0.lon = 0.502308627086;
    tmp_msg_0.radius = 0.899464159852;
    msg.reference.set(tmp_msg_0);
    msg.state = 201U;
    msg.proximity = 160U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.740177032389);
    msg.setSource(56723U);
    msg.setSourceEntity(163U);
    msg.setDestination(57335U);
    msg.setDestinationEntity(112U);
    msg.ax = 0.0699810603489;
    msg.ay = 0.672308997192;
    msg.az = 0.868717052681;
    msg.virterrx = 0.65338559057;
    msg.virterry = 0.859751231389;
    msg.virterrz = 0.544995384314;
    msg.surffdbkx = 0.647902675042;
    msg.surffdbky = 0.92432180908;
    msg.surffdbkz = 0.59041740591;
    msg.surfunknx = 0.322271058924;
    msg.surfunkny = 0.433795696763;
    msg.surfunknz = 0.952092586116;
    msg.ssx = 0.245270367766;
    msg.ssy = 0.814073999753;
    msg.ssz = 0.6021870884;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.38358077149);
    msg.setSource(2175U);
    msg.setSourceEntity(110U);
    msg.setDestination(35373U);
    msg.setDestinationEntity(162U);
    msg.ax = 0.606660158941;
    msg.ay = 0.0760241268378;
    msg.az = 0.0234137575922;
    msg.virterrx = 0.896876620911;
    msg.virterry = 0.943153027171;
    msg.virterrz = 0.17308745085;
    msg.surffdbkx = 0.360551944068;
    msg.surffdbky = 0.190361675324;
    msg.surffdbkz = 0.794277324247;
    msg.surfunknx = 0.537430285448;
    msg.surfunkny = 0.0715047571036;
    msg.surfunknz = 0.937087083335;
    msg.ssx = 0.293094548944;
    msg.ssy = 0.431750277874;
    msg.ssz = 0.353342808674;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.sid.assign("ABOTYPNGKHFZBIANERYAMXGETYPUFLVFDSJFCOQFKLODRFFRISYPFEIEHAW");
    tmp_msg_0.dist = 0.299406630764;
    tmp_msg_0.err = 0.170672879344;
    tmp_msg_0.ctrlimp = 0.837377527332;
    tmp_msg_0.reldirx = 0.628194013462;
    tmp_msg_0.reldiry = 0.469665837187;
    tmp_msg_0.reldirz = 0.01940407821;
    tmp_msg_0.errx = 0.62722731781;
    tmp_msg_0.erry = 0.596826924686;
    tmp_msg_0.errz = 0.515287201209;
    tmp_msg_0.rferrx = 0.0592656247031;
    tmp_msg_0.rferry = 0.233265748257;
    tmp_msg_0.rferrz = 0.348325077612;
    tmp_msg_0.rferrvx = 0.534986500735;
    tmp_msg_0.rferrvy = 0.899577641616;
    tmp_msg_0.rferrvz = 0.148643604827;
    tmp_msg_0.ssx = 0.030601975622;
    tmp_msg_0.ssy = 0.118954757136;
    tmp_msg_0.ssz = 0.288724557757;
    tmp_msg_0.virterrx = 0.488221863866;
    tmp_msg_0.virterry = 0.16916554577;
    tmp_msg_0.virterrz = 0.144120346004;
    msg.relstate.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.599641096644);
    msg.setSource(54142U);
    msg.setSourceEntity(71U);
    msg.setDestination(57769U);
    msg.setDestinationEntity(252U);
    msg.ax = 0.840145528405;
    msg.ay = 0.373696679451;
    msg.az = 0.546131471472;
    msg.virterrx = 0.74934791015;
    msg.virterry = 0.0162574157215;
    msg.virterrz = 0.0244006476186;
    msg.surffdbkx = 0.944151559943;
    msg.surffdbky = 0.0019322151008;
    msg.surffdbkz = 0.978282585685;
    msg.surfunknx = 0.337288367212;
    msg.surfunkny = 0.579900109326;
    msg.surfunknz = 0.0757304717287;
    msg.ssx = 0.755520308583;
    msg.ssy = 0.824178537893;
    msg.ssz = 0.00667444789027;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.757276997927);
    msg.setSource(42231U);
    msg.setSourceEntity(137U);
    msg.setDestination(22494U);
    msg.setDestinationEntity(230U);
    msg.sid.assign("KZNPYAHELCJIYAQDYHRABGWBHTMYFBZTUSWGMSHVHFQAG");
    msg.dist = 0.682762982215;
    msg.err = 0.760290756133;
    msg.ctrlimp = 0.323205384091;
    msg.reldirx = 0.513374137224;
    msg.reldiry = 0.785914768844;
    msg.reldirz = 0.48708047901;
    msg.errx = 0.758428640004;
    msg.erry = 0.233325580483;
    msg.errz = 0.742642978641;
    msg.rferrx = 0.0929355763266;
    msg.rferry = 0.332827403169;
    msg.rferrz = 0.739274140289;
    msg.rferrvx = 0.0281601191158;
    msg.rferrvy = 0.288597237218;
    msg.rferrvz = 0.0106121523233;
    msg.ssx = 0.338427854919;
    msg.ssy = 0.39704027757;
    msg.ssz = 0.501909685148;
    msg.virterrx = 0.0366931853066;
    msg.virterry = 0.370486849762;
    msg.virterrz = 0.79313055214;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.125739683468);
    msg.setSource(6839U);
    msg.setSourceEntity(144U);
    msg.setDestination(43596U);
    msg.setDestinationEntity(91U);
    msg.sid.assign("QNFPVXZRDHSWFPRHBWXANPHWPISTFQBLHNOZABIYFIKVMTZCLOJQDPNAYJYUHSEWMXPSJUGETEFEMTECBCXMGUZSXMIJAYNOSQFGRUDXUJEKFSMOQDIIVYOLOBGL");
    msg.dist = 0.335908710807;
    msg.err = 0.81507896085;
    msg.ctrlimp = 0.736700775312;
    msg.reldirx = 0.131555534797;
    msg.reldiry = 0.88634314657;
    msg.reldirz = 0.322393518351;
    msg.errx = 0.66762482692;
    msg.erry = 0.940141866709;
    msg.errz = 0.674829270035;
    msg.rferrx = 0.518831286372;
    msg.rferry = 0.285565885915;
    msg.rferrz = 0.109036567872;
    msg.rferrvx = 0.00816412236584;
    msg.rferrvy = 0.458862048823;
    msg.rferrvz = 0.100721508083;
    msg.ssx = 0.850193592375;
    msg.ssy = 0.48253270908;
    msg.ssz = 0.292872720727;
    msg.virterrx = 0.20474106442;
    msg.virterry = 0.989022018045;
    msg.virterrz = 0.35685385473;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.0571196308457);
    msg.setSource(61803U);
    msg.setSourceEntity(129U);
    msg.setDestination(17609U);
    msg.setDestinationEntity(72U);
    msg.sid.assign("NDOWYSXQEHEMJDAZLXRC");
    msg.dist = 0.551596051341;
    msg.err = 0.694079133192;
    msg.ctrlimp = 0.650688406348;
    msg.reldirx = 0.67644814694;
    msg.reldiry = 0.234458551185;
    msg.reldirz = 0.909704900408;
    msg.errx = 0.859468998778;
    msg.erry = 0.823712785294;
    msg.errz = 0.163568075946;
    msg.rferrx = 0.232066097462;
    msg.rferry = 0.116608052069;
    msg.rferrz = 0.373494308659;
    msg.rferrvx = 0.848136307708;
    msg.rferrvy = 0.367307477875;
    msg.rferrvz = 0.93760675774;
    msg.ssx = 0.677390312419;
    msg.ssy = 0.616254886514;
    msg.ssz = 0.968309136053;
    msg.virterrx = 0.691893592827;
    msg.virterry = 0.904509866325;
    msg.virterrz = 0.796502895723;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.743704005877);
    msg.setSource(58571U);
    msg.setSourceEntity(74U);
    msg.setDestination(11553U);
    msg.setDestinationEntity(237U);
    msg.op_mode = 159U;
    msg.error_count = 206U;
    msg.error_ents.assign("UATRJPVXRQCNSAUDGLVQPLBPQTFCIGJGFKZWELBRYOTKZSPUPPJXDAJUXJXFLURTXKMLKZQDOZOPHWB");
    msg.maneuver_type = 3106U;
    msg.maneuver_stime = 0.497195997919;
    msg.maneuver_eta = 61855U;
    msg.control_loops = 3368400995U;
    msg.flags = 84U;
    msg.last_error.assign("OBWMQJRNXEOKZUZSNFXIJZZAWHNGYXSPNICYOTZPGBLWWTAMDALEXQYHNHFJSHFSWRAXMCTBBTDUGXEYRPGVTKPGJQZRVLZOKUX");
    msg.last_error_time = 0.789946288122;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.313457614015);
    msg.setSource(64454U);
    msg.setSourceEntity(84U);
    msg.setDestination(31737U);
    msg.setDestinationEntity(161U);
    msg.op_mode = 209U;
    msg.error_count = 72U;
    msg.error_ents.assign("PPRRVFEMNQBVMCXTIAIWOCTSLAKZ");
    msg.maneuver_type = 63439U;
    msg.maneuver_stime = 0.565619947642;
    msg.maneuver_eta = 60765U;
    msg.control_loops = 2804473400U;
    msg.flags = 133U;
    msg.last_error.assign("KJMTBOMSSZQOJKOFTBUYSTPVNUVAZEZVQBLMGCHQYVJUYWRYIFGXXVTEJRFWCPSXZGDSKTJGRKNTRBHVQGNVSUKMDMXLGIAQITGICKNHVR");
    msg.last_error_time = 0.0893056096821;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.801229937824);
    msg.setSource(15006U);
    msg.setSourceEntity(203U);
    msg.setDestination(23479U);
    msg.setDestinationEntity(22U);
    msg.op_mode = 208U;
    msg.error_count = 92U;
    msg.error_ents.assign("BRQTCSGZUPZUUAQINJMPNOBXBQZNDULDOUWXCIWYQVDGEKYOVZYKTEVPFXIOJKQCWGHTNYFAQCSHJUQOYEPAMRPNEFBDFJCRUJ");
    msg.maneuver_type = 18360U;
    msg.maneuver_stime = 0.965948816588;
    msg.maneuver_eta = 16465U;
    msg.control_loops = 2391654989U;
    msg.flags = 155U;
    msg.last_error.assign("ALCHBPSUKORYBETNSRHYMTXJDXTZMOZFTJSGBAYBUFDWPJJOZFOSMHDAAMMRLZGFTQXDEZDLPVPRVVAOSXHVYVTDGHKSWDLEZKCKCLWEQVUENVTIQLCORNGGMJRDCQQBMLSLHIHXFJMPJSWKBTGYPXLUSOYKUZYQPQAHLAKRUETCPFDAVRUPEMANRWGNIQWXBUEREIXDHZGEWQWJFCGIOIJ");
    msg.last_error_time = 0.0274423397751;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.725914686528);
    msg.setSource(18521U);
    msg.setSourceEntity(204U);
    msg.setDestination(33304U);
    msg.setDestinationEntity(53U);
    msg.type = 224U;
    msg.request_id = 50633U;
    msg.command = 89U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 21834U;
    tmp_msg_0.lat = 0.471765965923;
    tmp_msg_0.lon = 0.887476199471;
    tmp_msg_0.z = 0.319483697668;
    tmp_msg_0.z_units = 175U;
    tmp_msg_0.duration = 3473U;
    tmp_msg_0.speed = 0.758504847436;
    tmp_msg_0.speed_units = 80U;
    tmp_msg_0.type = 57U;
    tmp_msg_0.radius = 0.224002647901;
    tmp_msg_0.length = 0.744231283913;
    tmp_msg_0.bearing = 0.132548556627;
    tmp_msg_0.direction = 118U;
    tmp_msg_0.custom.assign("OHZZSGHBKGEKRRVUKZKKZZOMOCDWRFFVYOAPTHJRLOYSHBAMORRNYSZQXXTTXHNMANPQEJMHWOXAFVYJGWAQXRUALTYIHVMFUDIYEFPQDEBPWLYKHACGC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 21530U;
    msg.info.assign("TGCEQMZZVABYWQNCIMHNGXDBJTPCEERVFVGKVHRCXAVQLLURHYFBJXOZHMYPAOAAWVUCLPPOCVGJWUMCNOXPGDAZJFBUOMZFSKTIQJMICEPNLVNYZPWFXYCFLSSIKUKBSUCTQBDLWVWGETJMYBQXAFPDTXPZKUTIFIETJRGPIGFHSSOISQKSMUKERKZRGDDNJNDDRYNDUT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.876561054607);
    msg.setSource(52777U);
    msg.setSourceEntity(23U);
    msg.setDestination(57940U);
    msg.setDestinationEntity(85U);
    msg.type = 233U;
    msg.request_id = 56907U;
    msg.command = 82U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 14152U;
    tmp_msg_0.lat = 0.676540281535;
    tmp_msg_0.lon = 0.636372309993;
    tmp_msg_0.z = 0.662778340454;
    tmp_msg_0.z_units = 119U;
    tmp_msg_0.pitch = 0.40463007501;
    tmp_msg_0.amplitude = 0.550916564908;
    tmp_msg_0.duration = 33128U;
    tmp_msg_0.speed = 0.966663618478;
    tmp_msg_0.speed_units = 47U;
    tmp_msg_0.radius = 0.111684898873;
    tmp_msg_0.direction = 114U;
    tmp_msg_0.custom.assign("UDHMPDBJSSYHXGULODASBWEADNROHLABRIPZJRORCUHZMBQUGHNFRJBCOU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 12706U;
    msg.info.assign("WLMCDOIZKFSOHVDTZAXIFBSBYNJRZAWEIPNVVQDKKYDTGUJVUPLKMYFFXFEHBPOXHAQMTARCLIWCNQQPIEDYHSCAIZUOEQAWELQHWYRHJKNXCFKQOVEXRIYFCHSWQABEJNELSPJUXSUXZATLQTEWNFRGBQPOUKOKSOPPBZTGTNZZLMJIWHGRDVD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.844446719812);
    msg.setSource(55139U);
    msg.setSourceEntity(8U);
    msg.setDestination(29034U);
    msg.setDestinationEntity(72U);
    msg.type = 196U;
    msg.request_id = 56302U;
    msg.command = 225U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.560909102835;
    tmp_msg_0.lon = 0.0178982273953;
    tmp_msg_0.speed = 0.924853087582;
    tmp_msg_0.speed_units = 137U;
    tmp_msg_0.duration = 10933U;
    tmp_msg_0.sys_a = 54486U;
    tmp_msg_0.sys_b = 4428U;
    tmp_msg_0.move_threshold = 0.406078740901;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 58132U;
    msg.info.assign("HEWNGYBXNAMHFEBFIPBJIAUIRTXAOBPJMDOOXWCKJMLWKPMVZBIIRZCXQXQDQDWLUFDGDZHCSLQMCKBNASHOZJWQSOTOUFDJEYAFLUGCDKZXRPSYVSHKVZSLENTIGBJPLOEGPQIUSWCAWMBRHSWLBXPTLFVGWHTGUCXBRUKNTVCVZDCYGXVIOKK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.857717054226);
    msg.setSource(2388U);
    msg.setSourceEntity(26U);
    msg.setDestination(17308U);
    msg.setDestinationEntity(24U);
    msg.command = 218U;
    msg.entities.assign("LMISDGXNNDWJRUFZIYGFIZPRXMOQGQN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.3888754522);
    msg.setSource(43457U);
    msg.setSourceEntity(208U);
    msg.setDestination(54537U);
    msg.setDestinationEntity(93U);
    msg.command = 86U;
    msg.entities.assign("KHPHTITHGUHTXTOQPEWEMGSGFJXLMNSAHPKUAUMBOCYGRPBADDJHQDXZBIKBMRFFJJYSNSNGMMWFRVFRPVA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.88416731868);
    msg.setSource(46447U);
    msg.setSourceEntity(230U);
    msg.setDestination(54642U);
    msg.setDestinationEntity(14U);
    msg.command = 217U;
    msg.entities.assign("OCEOKZIZTXLCOTSRNEFBMAUVXKASXAGJCWRGRNNSPFFFVMYUANJWHTZXNSGGGUNMKOUIPUGDFWFVACCIIPULSNMYDYJTRQYIHHSLEZGZQAQUETSZYVSJSJEWDLWEECYLMYPPUF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.513932009729);
    msg.setSource(8971U);
    msg.setSourceEntity(147U);
    msg.setDestination(47854U);
    msg.setDestinationEntity(121U);
    msg.mcount = 246U;
    msg.mnames.assign("EHHUSPICSGGQPORGDZFBWKVCWGLRVRJBQHPDSALSJUPBTOKDYKYIXOWLCDZVXVIDFSPGIXLKNHTLCVKRXGQHMMVZEFEYCQHKNJMEHOHYZMOUBMEBFEPUSGOROOTUIAALYMSJGAWCIJMUIWTPZVKQNFRGKTFXNRWUFOBNBNTHZQDYWJMWZQEJKDXIEXXTDCAJT");
    msg.ecount = 244U;
    msg.enames.assign("WRFRGMYBIMLCIDSUAEDCWZDLVUBGKNHXPFWAJJSLZHANXCXJSNUKNZBOWHFKJYEFLBZNFSNPXQCZBDFEPMOMTYXYEQMQFXEIXQHVQIDJKYOAMWRUCNIVWWVGCFCMVAZPWAADVPDNGMPGJRTZXHUZTBSWUGOKJTIRJLEJIQRNHTLPTXRFYLRHAQLDEUTEQOFRKNGXVMUBOOPHSE");
    msg.ccount = 160U;
    msg.cnames.assign("MAJIBTVHWQDFAUNIKUGXWLJATYXPMWJGDVPEWLSTYTYZZZWCPRUODWXCMEDFHARZMNTLKFZTMWUKIZOPOEGLDVGKLZDGAHFPHSAAQOUTXYGSXVBIKRIKB");
    msg.last_error.assign("RQRBAYXHYMDJUWERTAVOXMCZDVVHG");
    msg.last_error_time = 0.608950471676;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.0398119514121);
    msg.setSource(38903U);
    msg.setSourceEntity(93U);
    msg.setDestination(41179U);
    msg.setDestinationEntity(101U);
    msg.mcount = 133U;
    msg.mnames.assign("BYTQUREYCVXYFALFIJXHVNMPZYEASIDCIBCWXCXBWTUQHOHHVPKSHETZMYGYFHQRSKGMTAOOXZQDZVNJDYJIRKRGIYSBFFHEREKNXZCOEPXZRFDYZDGCGUWQTVDMPNUJRWALIWNULYBWFRWCUAALAPONJHLSNLDUMCQBIPHIKCLASOVVOIZ");
    msg.ecount = 164U;
    msg.enames.assign("PWVBONNBTNZCMHFSREZOXLKOJOXGTDKOOXZJKWFIGXYVQFEGCDLYRKQZJFTIKAJMAYLZCAIECCJURKRZGVUDAHDVIVIAUGCXCFZIBTBMMWZCEMJQBW");
    msg.ccount = 0U;
    msg.cnames.assign("NKADOZMVOJGAGLBIYCKQXRBDUJUPPDMQZDQOEC");
    msg.last_error.assign("TTLFHOCDOLNNAZGRCVKHNAEMAQBDLTJSXVQMJXPLKRFVJECDKJJZEWSOWTLGLLFUGAYNRARTGYKZQEJCUVERDVPFG");
    msg.last_error_time = 0.531981066198;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.383411175446);
    msg.setSource(3032U);
    msg.setSourceEntity(206U);
    msg.setDestination(37755U);
    msg.setDestinationEntity(55U);
    msg.mcount = 54U;
    msg.mnames.assign("EBUTHSAWLDJRVHUOLFRXDUWWZEOXNNKXZIIKQBAIOAZCNHJSSPVYZJTGVYUNSLQQGHLZXMIQRLRAPCHPQOCNYYJWFAGQPGMNOIFKSAMOLIPJWMDQMRBELEQIKP");
    msg.ecount = 239U;
    msg.enames.assign("BRZGECKCJXTVJVSNBZLZTMUVMPKHHOMEGHJMWFVRJNCQAN");
    msg.ccount = 69U;
    msg.cnames.assign("YSJIGKXVUZQLTCPSBTPJFVCWLJBHECEMUHBHMSHDCNEHRTBVXATLRPTBFJRSVZJMUUNBSZRGLSKKLRZOMXJSUCIHANKMKZRYHDQRKYEFTIBOYFFWGCPBNJUEUFOYAKQZXLVGMPWKCMMKQNRPNZBOOJVDLNYQQWXAXQPWAWEVODHOWDAUVXIMLAEAGTUCRWDIICFOGWDPWGHZQLFPZHKQCJVSFRXYYIPZTOINYA");
    msg.last_error.assign("OEARMDYKRFCPUHAITOJHTCURPCGDPQIDQSSHKQLYVOXONM");
    msg.last_error_time = 0.466743300097;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.508049018191);
    msg.setSource(28752U);
    msg.setSourceEntity(249U);
    msg.setDestination(60563U);
    msg.setDestinationEntity(235U);
    msg.mask = 212U;
    msg.max_depth = 0.262424213936;
    msg.min_altitude = 0.805729867036;
    msg.max_altitude = 0.169316482171;
    msg.min_speed = 0.742158331472;
    msg.max_speed = 0.17964717153;
    msg.max_vrate = 0.328716928788;
    msg.lat = 0.682327020552;
    msg.lon = 0.92982117971;
    msg.orientation = 0.00908897255776;
    msg.width = 0.0869149986156;
    msg.length = 0.272733817125;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.511084002813);
    msg.setSource(47985U);
    msg.setSourceEntity(89U);
    msg.setDestination(19453U);
    msg.setDestinationEntity(22U);
    msg.mask = 194U;
    msg.max_depth = 0.927568547348;
    msg.min_altitude = 0.495455709914;
    msg.max_altitude = 0.884679192819;
    msg.min_speed = 0.493212062014;
    msg.max_speed = 0.0221089805123;
    msg.max_vrate = 0.607348555981;
    msg.lat = 0.456642161556;
    msg.lon = 0.172664114702;
    msg.orientation = 0.87445031027;
    msg.width = 0.750737800223;
    msg.length = 0.114993208122;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.532523726559);
    msg.setSource(42801U);
    msg.setSourceEntity(250U);
    msg.setDestination(11441U);
    msg.setDestinationEntity(118U);
    msg.mask = 196U;
    msg.max_depth = 0.0657912876331;
    msg.min_altitude = 0.490940183949;
    msg.max_altitude = 0.622800426717;
    msg.min_speed = 0.53994192663;
    msg.max_speed = 0.792587639412;
    msg.max_vrate = 0.164468313621;
    msg.lat = 0.292424198825;
    msg.lon = 0.496124665249;
    msg.orientation = 0.779273145039;
    msg.width = 0.742946025222;
    msg.length = 0.442397118938;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.635738147122);
    msg.setSource(14993U);
    msg.setSourceEntity(197U);
    msg.setDestination(10769U);
    msg.setDestinationEntity(227U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.846617236527);
    msg.setSource(43704U);
    msg.setSourceEntity(16U);
    msg.setDestination(39961U);
    msg.setDestinationEntity(213U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.630639398364);
    msg.setSource(36138U);
    msg.setSourceEntity(177U);
    msg.setDestination(37569U);
    msg.setDestinationEntity(182U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.665582858405);
    msg.setSource(51967U);
    msg.setSourceEntity(56U);
    msg.setDestination(61210U);
    msg.setDestinationEntity(111U);
    msg.duration = 51042U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.290786125811);
    msg.setSource(19062U);
    msg.setSourceEntity(187U);
    msg.setDestination(41446U);
    msg.setDestinationEntity(74U);
    msg.duration = 15164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.439655582689);
    msg.setSource(56008U);
    msg.setSourceEntity(79U);
    msg.setDestination(29926U);
    msg.setDestinationEntity(64U);
    msg.duration = 11116U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.496604496059);
    msg.setSource(61189U);
    msg.setSourceEntity(177U);
    msg.setDestination(772U);
    msg.setDestinationEntity(229U);
    msg.enable = 9U;
    msg.mask = 3482112834U;
    msg.scope_ref = 2696945599U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.889015863728);
    msg.setSource(22906U);
    msg.setSourceEntity(222U);
    msg.setDestination(54468U);
    msg.setDestinationEntity(40U);
    msg.enable = 116U;
    msg.mask = 1938821352U;
    msg.scope_ref = 2781251486U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.692314052765);
    msg.setSource(41930U);
    msg.setSourceEntity(96U);
    msg.setDestination(38306U);
    msg.setDestinationEntity(133U);
    msg.enable = 17U;
    msg.mask = 4022160684U;
    msg.scope_ref = 1708629276U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.718274202512);
    msg.setSource(10986U);
    msg.setSourceEntity(227U);
    msg.setDestination(2071U);
    msg.setDestinationEntity(9U);
    msg.medium = 71U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.782948383116);
    msg.setSource(5167U);
    msg.setSourceEntity(138U);
    msg.setDestination(8295U);
    msg.setDestinationEntity(157U);
    msg.medium = 129U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.157348425146);
    msg.setSource(14767U);
    msg.setSourceEntity(190U);
    msg.setDestination(5828U);
    msg.setDestinationEntity(211U);
    msg.medium = 228U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.791056942154);
    msg.setSource(11759U);
    msg.setSourceEntity(156U);
    msg.setDestination(50869U);
    msg.setDestinationEntity(169U);
    msg.value = 0.738751014248;
    msg.type = 162U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.553340848413);
    msg.setSource(7582U);
    msg.setSourceEntity(218U);
    msg.setDestination(22825U);
    msg.setDestinationEntity(156U);
    msg.value = 0.514818727315;
    msg.type = 51U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.0406253721011);
    msg.setSource(38694U);
    msg.setSourceEntity(185U);
    msg.setDestination(19812U);
    msg.setDestinationEntity(245U);
    msg.value = 0.807901746762;
    msg.type = 54U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.274103226687);
    msg.setSource(58399U);
    msg.setSourceEntity(215U);
    msg.setDestination(15577U);
    msg.setDestinationEntity(18U);
    msg.possimerr = 0.688697817228;
    msg.converg = 0.0647223729812;
    msg.turbulence = 0.415893517617;
    msg.possimmon = 13U;
    msg.commmon = 239U;
    msg.convergmon = 86U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.66432006505);
    msg.setSource(62654U);
    msg.setSourceEntity(35U);
    msg.setDestination(47026U);
    msg.setDestinationEntity(218U);
    msg.possimerr = 0.167532185504;
    msg.converg = 0.540165405817;
    msg.turbulence = 0.883992633121;
    msg.possimmon = 5U;
    msg.commmon = 140U;
    msg.convergmon = 19U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.305783096057);
    msg.setSource(25409U);
    msg.setSourceEntity(83U);
    msg.setDestination(31176U);
    msg.setDestinationEntity(221U);
    msg.possimerr = 0.0761632951529;
    msg.converg = 0.832659574288;
    msg.turbulence = 0.158547039555;
    msg.possimmon = 15U;
    msg.commmon = 52U;
    msg.convergmon = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.916383572739);
    msg.setSource(23257U);
    msg.setSourceEntity(182U);
    msg.setDestination(54545U);
    msg.setDestinationEntity(103U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.361476037243);
    msg.setSource(37470U);
    msg.setSourceEntity(170U);
    msg.setDestination(25270U);
    msg.setDestinationEntity(13U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.470641763037);
    msg.setSource(31066U);
    msg.setSourceEntity(223U);
    msg.setDestination(53409U);
    msg.setDestinationEntity(41U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.727950029464);
    msg.setSource(38657U);
    msg.setSourceEntity(61U);
    msg.setDestination(20245U);
    msg.setDestinationEntity(109U);
    msg.plan_id.assign("OHHMTMRYVZOZAEIKQXUAFBEXBZKKPJWFVHAZPQGLTJYKSMQKJSAUJSVCXIVKRNDOHB");
    msg.description.assign("HGHWMXPFCSQKYIUSXVYMMOVUZNHKCZTGCPZYBAKOJRQUJLXHNBOLSDHLAXATQCMWPZBHIVDBUWGXGYCNONLWSZFPLEBRAZGNYJFIJAIKIZTQUUITPPCJAJXRLSIQATYKFQHKNAEICWPUWNMCSFMIEGUOYMEOZVDMDBJWWDCNGLBCLGRAIRPTPXHQJVFUKAXVEKDKFSQEOFQUYMZXBO");
    msg.vnamespace.assign("RKITWYTZIWRBNTUYWEWSKODLBVAJKNVUQAQTPNHJYFUFPYGZIMKWMQRMSGBTOXSWPXJLBUDLRSGXKSQDRRIGKSIVXXNFBYHLVHNDOQVCLNDEEJZFXXGYUCPWFELFHNDUNMDASQOQOR");
    msg.start_man_id.assign("OHDEQIUSGELKAWFDSYHUJBTMANPNNRQINZOPPWPGXMOVIOHFTBTBEEYZREKIDIXSQWHLLVLPZSVECRGMGTEYEYFYLQBVJHSMWHPBURWURYGYZSJCNDDOMBGJVKMUFACRRZBJAZOWVJLODTVPCVRDKFNKATEHCHHCFIZAXOMQTAXCBWCSQJDEVXDRUPFABWKXQDKMZSZSMGGRGK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.771840625467);
    msg.setSource(39544U);
    msg.setSourceEntity(151U);
    msg.setDestination(24537U);
    msg.setDestinationEntity(55U);
    msg.plan_id.assign("ITUVNMFKHVWASJDZHOIRFBZTTKQYJXXMBOKGVXJMHQJUOENKVJCYAUNMACSALRRRGCDSNMAIYWKOMZYDGHBQGPQWWL");
    msg.description.assign("DCIUDMMGZWSP");
    msg.vnamespace.assign("SNNSFWZUHENAFVYKCURJCZARNZLHDKUHAOPRHYUGLMRXRDBQGSWMBQZFYYWYXQQSAOQNVGJCRQUTOIPTKMQKDCXPY");
    msg.start_man_id.assign("QXXCMMDGYBSVEJWNMCEYADVRHVOBSXGWVQTJFOFEBNWCTSJZAUBCLNTNZLXGLOSOKIRTZPJTAFQNKTELTIZZHZRKRXVYCAUPTNSGSDFHRSQMJKWRDNUDDRRRCFFJQUFL");
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.308098066843;
    msg.end_actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.771167980447);
    msg.setSource(35840U);
    msg.setSourceEntity(226U);
    msg.setDestination(26476U);
    msg.setDestinationEntity(153U);
    msg.plan_id.assign("WOFAPIPJAVVHQWKSZCWITSNOXANOOZPVKTKGURUWOUEFLZJFZM");
    msg.description.assign("NHXULIPUWEDFPDKSNBFNFLYCGJRSGOBUTJNSGZRQEJHEOWISQBDACPQEUGPQZXRKSWGGYHLJFXCGHUIHVYNIGVDPYHJENRWRNACYBFHVTOAKV");
    msg.vnamespace.assign("DVLDPNVMENRAGOIZPMJOIFECKACSZUWVLHWIQYGSPRNIPOYEPKQYHYLEXJFLJMXKFJOHJPATQVDKKDUETTXSWRUVZHCVZDSMOURGQSAYRUNYLDTUAGIWXJOSFZCPBNEKORKVAMMYCQLKYEVSIWGJNKVWHZBGTTFMEQUWFHLQBHQTRHMLQFPWIPXDWXABCBROSMNHNKYODI");
    msg.start_man_id.assign("OQHQCEONSMEKBKOAMYFWAPDVOSOZICBNR");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("GNKGDBVLIYGVRWTZJUBCCMRBUUAZATCZMQNJXNKUTACDSQEXKIGYSWPOXCIBXGCIQPALXEBWAWDWMXPFJQKRUGVHERYQPSZCZXNEBOAMVQMDLRE");
    IMC::Elevator tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 13307U;
    tmp_tmp_msg_0_0.flags = 141U;
    tmp_tmp_msg_0_0.lat = 0.361772513937;
    tmp_tmp_msg_0_0.lon = 0.232824845701;
    tmp_tmp_msg_0_0.start_z = 0.8023584623;
    tmp_tmp_msg_0_0.start_z_units = 156U;
    tmp_tmp_msg_0_0.end_z = 0.264782933673;
    tmp_tmp_msg_0_0.end_z_units = 201U;
    tmp_tmp_msg_0_0.radius = 0.109675611047;
    tmp_tmp_msg_0_0.speed = 0.500645097583;
    tmp_tmp_msg_0_0.speed_units = 245U;
    tmp_tmp_msg_0_0.custom.assign("HLAFEEBCFPJFRHEXOXVFNFMJEHTAUUHARSQCKSRBCKVQFEGHAZSYMXZCLEHDUVFZGNYXWBCXVWIVITJZRGPNGAFSBZQMJFLYIZPCMMBAEYIQKZECKJZODXKDBDUIANBBMGJGTQVGHMTSDAYOKNXSNRITDLNGYJGHISUKUHRWATOUJWSQQEWDLPKPUGCOVPRYLMBYUIRXTWCASLWOYKKNBOOPCTSOFUQLHMJLXMEVJZIYPNWOIVLNTZWVTRD");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("ZUOSNOMDXXATXNGATQXIPKWFYPVLCFRKPMANCKVBQAYLSJTYVFENZWIGYNVBWXBTORRAUDMHJVLLBCKRTMXDBJSEWWHYFUXEHKEFSXTJCOQVRSQTRGOFUECYDBPXYBGNIMFBPYPHDDKGPGZKUZTRTCCN");
    tmp_msg_1.dest_man.assign("VAESEFJLAURZMDXHTZBJYGFJQMRSLSWZAOOYTPCURRGSTFPEYVULZPBQKVMMEFTNGTGMXISUSVHDBTLEHILXUJAUIZXHQFAXFDZKCKGWOZXOOCFDXYIDGNMJRPYWIBKDOHJARRPNCWI");
    tmp_msg_1.conditions.assign("QQAFFCJXYVCRHUPNWLLCDDOYQSKIBZPGEYOYXHKNEXJHYMHNLECMBDNASTPYSJUHRPMOJTIUORVTHUWNKCGRKAFXWOWJECFHQBPAFTQQBWGQOGUYEBSAWMFEXIREXNAVITIBGZDGVFJONQNWVZTOLMFUAYCIQHSZRRVEONZTSQZBRUCKKAJDWJUTPZLGFBIULNDMIXVTMHHGLROXCPMKIPEWDSDVPJBSKXFVGZKVJLMPSKZAGLYABZM");
    IMC::Voltage tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.527431628835;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.374113851827);
    msg.setSource(28075U);
    msg.setSourceEntity(217U);
    msg.setDestination(48119U);
    msg.setDestinationEntity(121U);
    msg.maneuver_id.assign("VVBAUJQZGJNKEEZCUWDYADHDFMEBYIXHFVDVROMQPOFGNLLUZLFASFPHDHYBYUAJZFNIRXQELHBRUWCMUOXJSDAXUPJMRKMWCKUNVMGNFJPEWJKKTSZNHJOCLTKWOFDYXXVYOCIEDCGVDAYWNRKZZGBSLMMFSRLTHBBWQBXQLTQFHIUVPOYIYPKSEGTECQIUKRXLCTZWJTGTWRPPSAEBIBXQSMXOLPGDSPRRQTNAMIO");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 47499U;
    tmp_msg_0.lat = 0.843886606514;
    tmp_msg_0.lon = 0.29318737174;
    tmp_msg_0.z = 0.504848588316;
    tmp_msg_0.z_units = 35U;
    tmp_msg_0.pitch = 0.205849353305;
    tmp_msg_0.amplitude = 0.376497675423;
    tmp_msg_0.duration = 55525U;
    tmp_msg_0.speed = 0.672235178451;
    tmp_msg_0.speed_units = 62U;
    tmp_msg_0.radius = 0.458963255377;
    tmp_msg_0.direction = 45U;
    tmp_msg_0.custom.assign("MVAHTNOZMGDLZTWEBALQPASJLSFTXCCUBIDOQAQIQHYNORZZVLCLINPRTUDHQWUGGNXXXCVMRHRTEDGNBMKXXVQYTFJKIPASXVIUKSAYSMBS");
    msg.data.set(tmp_msg_0);
    IMC::NavigationUncertainty tmp_msg_1;
    tmp_msg_1.x = 0.884730379253;
    tmp_msg_1.y = 0.17514493213;
    tmp_msg_1.z = 0.574704518303;
    tmp_msg_1.phi = 0.0319812237386;
    tmp_msg_1.theta = 0.0103047160112;
    tmp_msg_1.psi = 0.828676824717;
    tmp_msg_1.p = 0.401619293255;
    tmp_msg_1.q = 0.573006157891;
    tmp_msg_1.r = 0.448792261169;
    tmp_msg_1.u = 0.935919836166;
    tmp_msg_1.v = 0.950092728227;
    tmp_msg_1.w = 0.977182974733;
    tmp_msg_1.bias_psi = 0.1269968141;
    tmp_msg_1.bias_r = 0.133623098243;
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.26537156795);
    msg.setSource(11687U);
    msg.setSourceEntity(82U);
    msg.setDestination(34724U);
    msg.setDestinationEntity(134U);
    msg.maneuver_id.assign("NKHBUADWHDMFTMTLHTORMBCFKOZJIBWFMDESUEGWLVDPOLAWNPCCNJLVYOMKHGYVFPPOOJTSAANZWPGCHTLYSFLEIEHUFFYZPVASGRUEIYEBOXPIQKNUYERZHSAVVKTFWWUJZBYNRZIBGMNPYWLQBDNTMBXESJCOMPTXKCLZAOORRNJKQWVQJYAGMVGSEQZDQXVESDBKUDNTGPTSBGXZQCQFRCQKRMRHXSLXJGUDCAVRHXCUX");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("LJESLZMADQXGVGDZHRVJWLMJDCRFVVCKHEZSBSJMFXIKVNLOPZCVDPRPWVUCYSIQWBBVOODZBRAJNUYAAHCBNTNQTCGYZDKJQACTZDETEDBEUMGGOYXWLQGBIJ");
    msg.data.set(tmp_msg_0);
    IMC::EmergencyControlState tmp_msg_1;
    tmp_msg_1.state = 33U;
    tmp_msg_1.plan_id.assign("TNMRGOPSXCUMEVDVRQFYDICBBJDNWBZIZQCGGANLSQPIMYGICWLKGLUVH");
    tmp_msg_1.comm_level = 199U;
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.709483433708);
    msg.setSource(1192U);
    msg.setSourceEntity(47U);
    msg.setDestination(720U);
    msg.setDestinationEntity(12U);
    msg.maneuver_id.assign("FJYPIGKJFCSUDKYQJMPRWQODKRWVOWIWEHSSWAHWEJMOFATJOURVXOILGCHUXVAFVQHSAVUNQAEJYLGZDXTIKEFDSGTLFYQKTYZBDUYEGFKRHJMVPEHLXDJANTZBMNNVRZUIDZAXNBXURZEUEIZPJGLXWSDQMKYPAMNWXTGMLVNFBIOHQHFOOSRTMGCSYTKPGQAJ");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 17345U;
    tmp_msg_0.name.assign("BRQDIKSUMMRFUCDRJCVHRLMRUTZHPXSSHKMMCXETAIGOGVGPTAMULQTZAUCRHYPLBDMLIJKYFUGTKBOJEGTAIIJENJBBBQUVRLPFOXYSEMJWDIFCVNQIEWWPKWXTZOFMGJLTUCJDFSGDJXQZCEXIDEPLKSFGXVNTQTWOIZQAYWRBNCNQDSODBZYWHNJWYOQZNCFAGKRPAUHAIBHZKBKPXKLEXLOEFPYNZNAROYYASVHVWPGUEZSSM");
    tmp_msg_0.custom.assign("SUEIODCLCFBIMTWTWHEPQNECQKGJDREIRPGFRXAEJILZQITDCIGQJNQXJPJYFZWDHEGUVVIHZVLQSUZUFLGCJUWQRYPKJQWAOFMKOUCJBLSVMFYEZDDRSQYAELTDJVXVQPYXNGESUWFUPSWKZBHXPBUOLV");
    msg.data.set(tmp_msg_0);
    IMC::FormCtrlParam tmp_msg_1;
    tmp_msg_1.action = 226U;
    tmp_msg_1.longain = 2568053377U;
    tmp_msg_1.latgain = 2689017011U;
    tmp_msg_1.bondthick = 4059991089U;
    tmp_msg_1.leadgain = 259302888U;
    tmp_msg_1.deconflgain = 3135987285U;
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.366572959555);
    msg.setSource(64884U);
    msg.setSourceEntity(134U);
    msg.setDestination(14822U);
    msg.setDestinationEntity(196U);
    msg.source_man.assign("SWDBBWHOGLYSZWVFUYJVOPRYLQUHGYGPIVLHNZCBLDZFRMHWTAMGJCVMSUGYLWKXEDWQTXINEKTAQVPUROAERJHPSCWXHLUIBSQBKUQADTXJZNUDATFHXAWCVNIQIIJMKESZRPLCKRZPJAZLJIERMKEHCFQYOIOSZOUNXYLNQHGFNPNFCKKRIYGBTFWDAERNDFZMMBTBDOGXCHJFCLAPFWSSVYTQXKAYEUBJPVTVOVEQZGPCXJD");
    msg.dest_man.assign("CHHJOGPEJKFJSBFRMNAQKUWEYTBZSVYTFYSSIEMDCNFWFCLDWETXLRQBVAWKCPWXNXAGOCDMLXOWRIQROSPACARATCKSIJMCPTYBBYWTANIWHNZDBUXFHBHAWFYYPMIDLDFDHKIKBVTTUXWGILZEVPOSCSXHGJVXTRAJHEGOGLNQRPX");
    msg.conditions.assign("KEGWWCAIAHYXCUEBTONSJYTTHIDGQGYLHZOLDLQVIFDDEZIRUJXTAVZWCEJNZCZUOEHMGPDMRPOTKLJHVXMQCMDKAZJWD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.211471614916);
    msg.setSource(51007U);
    msg.setSourceEntity(185U);
    msg.setDestination(55049U);
    msg.setDestinationEntity(66U);
    msg.source_man.assign("ZPCCVTOZVEAWGWXYDQRZHWPECYHWKERYNUNBXTKGRKFPKAHGJXEIBLPJIKQEJBIDIBFEDMPSGWGTGDQHUBXCMQBVMVNSRJMVMKIJYWDSDMNOJWGUYNKIZVOJXVFMGKPCNYTPQYQTLRSRULR");
    msg.dest_man.assign("TZHKGKDZUBCTCSZHYKFLRTXREOLABDAWHFWHFFBNQURTKACVAMEILVYZJWZGWMLTMJMADDWKSVQGHQHKIA");
    msg.conditions.assign("JDAUMASTTDSTKQTFKNREYAIGUWOHVKYVTFSIINRZBKGRHSFPLPNSJGCZUUGMPJQRWFTOQBWDBVZXNCNKHLRVNUJNKMVXHWQXOBCMOVO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.0246958214344);
    msg.setSource(50359U);
    msg.setSourceEntity(7U);
    msg.setDestination(6853U);
    msg.setDestinationEntity(2U);
    msg.source_man.assign("MCLIUMUZYBTVWFDFDUQHRKKZGERTJRGRNJLLUADXTONNLSVOVCCZKKHJUZLLBIAXSJIXSXMAPKLIYWWRYQIONAHHBGVPANVEOBYJWDFOFEZIUBICXHZZSPWQKDJQFBHEDMXGPNZWTVYEDBCMTMVGPGZSBKSSRLRYNJKTEOFCNQPKDPXMWQIFEBFWHNRLBVOSETYULVCCPGURMSKYCGEHXFYAHE");
    msg.dest_man.assign("HRRGEDNIMLWXVROBVAFYMKPCAGMSXZJSAHHEEHIIAQVYOMADJOHIKCNWYNHFWXIZJBQKFYDQLUCDEIVUCHBQTCCDUPBRVDYETWNLUQLODJTRVSBOMLFPEVUTDZQHQFTMKXNZQJHXKWCYGEJATXBROBDGXBSZILRGPMYOPMSZIATKKSFDBWJAWLBNUFXYVXTNGUOSJFGEZLKPURZCWPFCQZNSLS");
    msg.conditions.assign("SISHCYMGEPKPXYTXWIEMDCLFHBEARIINYZTSN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.185340144746);
    msg.setSource(39138U);
    msg.setSourceEntity(185U);
    msg.setDestination(27128U);
    msg.setDestinationEntity(201U);
    msg.command = 211U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XXOQRFSXPEQLDGJIEDWJPYDOFMBKILZVNQZNOACAPKLSYASHPTEAWHDOXMMAMKNCZGVXWWYTQOZIVBMWBMFUAJJPHORSHVPTZIYJLITDFSOIXGPMSICLDDITOVWGUKBHHGVRG");
    tmp_msg_0.description.assign("CTKQEKHJEPAEFSIOBQPPZXDUWPFMNEGRIVFDFGUPATTRWJZZYUKHYZHMMMVRGYDRU");
    tmp_msg_0.vnamespace.assign("SMGSLMSDKCPELDNUVCUHSCLFDHKHZSBIGLMZYKTDPOSDURNIA");
    tmp_msg_0.start_man_id.assign("FPYSHQNWAFOACKJDCXANKERSTLKLPILBKADPFUBMCONZGUYWIJCUCDPGTBSHVTNIWWKLMTNRIRNRWAQGDWSXZLNZZCF");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("GQVOHBAVKQWWAWHNVFCOOIRSKPBRGIFNFCLMXYSZFYITWDSYESXBULOGXIMNKUKPOJAKHMGINYRJGSEHJIWCBUHMGCL");
    IMC::Loiter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 15752U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.346347803239;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.545442676836;
    tmp_tmp_tmp_msg_0_0_0.z = 0.339054849269;
    tmp_tmp_tmp_msg_0_0_0.z_units = 167U;
    tmp_tmp_tmp_msg_0_0_0.duration = 56805U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.659901309659;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 48U;
    tmp_tmp_tmp_msg_0_0_0.type = 202U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.959322184348;
    tmp_tmp_tmp_msg_0_0_0.length = 0.921057969815;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.244182922258;
    tmp_tmp_tmp_msg_0_0_0.direction = 36U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("TXRQEZDCWUYETABQDGREUKMUIUESGAACLZETMSN");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("PBTCSRRURXEVKYGDEYFYPURZGHCCELOHEWBOGUTXKXMVVUQWFTNDAYKMSYSNNHMVSAXNLZRCSDLVVLDWAKNTDXMTWFCDDIPEVABHMZXZUNNHJPIPAMEIYGQARCJBGTUOCDZARJKBUUJWRQLWC");
    tmp_tmp_msg_0_1.dest_man.assign("RHSHUSGYMPXMKQSGYDDDAKWOVILZLLEKQTGSMJZAVFXZJQDH");
    tmp_tmp_msg_0_1.conditions.assign("APMHIMAPLUGXVKSTCOEIXDBWXMXQANMUERMXYZTBWWSKAMBEIFQGMCCZUUBUTLHPBPLYWVWGNJYKKFRABWGUOVGLBZJZONGH");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::PopUp tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeout = 5466U;
    tmp_tmp_msg_0_2.lat = 0.38810947436;
    tmp_tmp_msg_0_2.lon = 0.633767094887;
    tmp_tmp_msg_0_2.z = 0.00137823880277;
    tmp_tmp_msg_0_2.z_units = 250U;
    tmp_tmp_msg_0_2.speed = 0.637537479654;
    tmp_tmp_msg_0_2.speed_units = 110U;
    tmp_tmp_msg_0_2.duration = 14485U;
    tmp_tmp_msg_0_2.radius = 0.225391325932;
    tmp_tmp_msg_0_2.flags = 70U;
    tmp_tmp_msg_0_2.custom.assign("WWJBLZBAWZBQTQNUQWJEMHAVPHESLSEJFBIHSCDKKQLRUNNAMFIGXTRTMZWUPWEFFPFJCNCCJVYSBBNRPKYEXQSLXVNKDOFDNLWRROTZXPLMLYOOOBOISZISMVTXHHHKYAQBTFIASGMWTMYTQGRXYGUDFXBATCVVJUALJCNLKQZHHXPZUDGIIDDJMGCXOJRHGKQYZMGPROHBUVDXFEZUSEGDIKUIYAEKNVYNLUDEC");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.0170687461538);
    msg.setSource(30297U);
    msg.setSourceEntity(198U);
    msg.setDestination(10690U);
    msg.setDestinationEntity(115U);
    msg.command = 210U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ECHXCYNMNQVPOBFYIHYCRUTKXPIXGCLSXYDXMPPSLYLFLTZZZALUGJGSTKFFGHIZHVKKDBPFYBBXJXAIKNJAQOVWKTQGODDKP");
    tmp_msg_0.description.assign("MAVGRNJXOSKPLPQZZ");
    tmp_msg_0.vnamespace.assign("MDSYAREWSQIGOUQOVPDKBHCUFRCEVKJZBJMNHELRYTJAOYDEKPPSEZNVPRNEVADNTBAORYUGKPGFLXDGY");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QRBNNADLIMIXOJAYFKMAZQRUOENPXJGDVDOSPFVJGJVCVAFMOUHOFAGDSDESWNOWQFYKVRXPXUBVLZPMHKDUTTQFNZQDGBUPOOQKYKXMTWEYGL");
    tmp_tmp_msg_0_0.value.assign("TWFHOPEMNUWEDHTCQHCQKWBQRSZOEPVWWGIZFMLQOFTAZRNRBFNDGHEXHBHUQTFQWAGTVRCDSCQYIPXSVVRULAGJNVOGRPXTZMBZGIOJBONISAUZQCIMSFRAJISMSOAYRFKKUAIGMXOZJGMCOCLYLZXYMCAVJBDPBKCLEUFLJLLNNJTVXLKRAHYKNOMKSDPTEUVTJWPZYVIKEAWQPYJ");
    tmp_tmp_msg_0_0.type = 128U;
    tmp_tmp_msg_0_0.access = 17U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TZOLBLYVUQFSYIHZLWDMNFQUPXKUQ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ZJYHHVIWKILZCZUJUGONXGNGPUSPZWCKDNMWBRQZRVJETWGNEGWMFOLULVJEYPOIZPJSCFDTNBMMLDGRKIASMLWFHKHYNTESXWSJUQCYQOQJJEQLDLXYUPOXQZMIXTRCKBKOVBORPLRMHXFNATQDXXMSFBPDYFHECFEZYTTVOTJKAVACVGODZPGVGKBKBJCKAQAHXIYQYVNIAAUCHEFIIIBUWNTRFFRRNCDZ");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("CICGMAALNBSKOJWAC");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::PopUp tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.timeout = 48750U;
    tmp_tmp_tmp_msg_0_1_1.lat = 0.151732968813;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.0995083087652;
    tmp_tmp_tmp_msg_0_1_1.z = 0.824822936884;
    tmp_tmp_tmp_msg_0_1_1.z_units = 237U;
    tmp_tmp_tmp_msg_0_1_1.speed = 0.393799076638;
    tmp_tmp_tmp_msg_0_1_1.speed_units = 36U;
    tmp_tmp_tmp_msg_0_1_1.duration = 16766U;
    tmp_tmp_tmp_msg_0_1_1.radius = 0.573251953336;
    tmp_tmp_tmp_msg_0_1_1.flags = 101U;
    tmp_tmp_tmp_msg_0_1_1.custom.assign("OKFYTQWSJLOSREGBVMMPNGOPYLWAOSSZWUUVVAHMTBFTAOUOTLBAQEUBZXIZD");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::PlanTransition tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.source_man.assign("AIRJYWXBLWGHURSEJEZNHQNPUPSHKEXXATNBKEMOESIBFFXTCWFPBIBKHUQITPTCFVQIDMAYGWFUCLQUWDAPHSCSGGMDZJHROKTFQSKYCNEELJVROBWYMAFUNEVGPHRNTTGBBQIXLHYUDYDMOSVAORZYJLTVSFURZEPDALEKJXRJBTZIQUSDGXN");
    tmp_tmp_tmp_msg_0_1_2.dest_man.assign("AFWPDZEQBQPZZTIJTLJSGDHIWXT");
    tmp_tmp_tmp_msg_0_1_2.conditions.assign("AGEBGRQIYPZDOKYNFDLXSAOOBUFDEVWYZCNFZNTFZOWNBUWALTRCSAMJYCIXTPOMUZYFQORFPMUBWGZOGRHTKBRMRTXSSWHR");
    IMC::ControlLoops tmp_tmp_tmp_tmp_msg_0_1_2_0;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.enable = 87U;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.mask = 2990934945U;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.scope_ref = 245601922U;
    tmp_tmp_tmp_msg_0_1_2.actions.push_back(tmp_tmp_tmp_tmp_msg_0_1_2_0);
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::LblDetection tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.tx = 116U;
    tmp_tmp_msg_0_2.channel = 196U;
    tmp_tmp_msg_0_2.timer = 63050U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.516419269865);
    msg.setSource(23930U);
    msg.setSourceEntity(48U);
    msg.setDestination(2619U);
    msg.setDestinationEntity(55U);
    msg.command = 91U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UIKZACFPWCEXDNGCZKPFCFOJDUNXJWWGJCKSSMAPYLLUYLYWURVICEGROJDZTVXFNNSHIZKLUVMRDVUTGVXQIXMFFAMJYVQZEOSCAFHBZABXFREAHREEYBTVGKQQFRRPIUHQEBCNPTHEDDKSXPLZGVQDMDSIBYKOOFTGJTMQWSRHEPSLTOLIBNERATIJGBSAWGKRPONHWXQBCXDQMNJWYBNYOAOHDGMZMJUYPO");
    tmp_msg_0.description.assign("HXLQBMPSVZMMXSHLYPICGNQBSLIWECGWKJYHFTYJKJLOULHBVOSVTDPTMQMWPZBIOLJXKWSCNUDAOAKNGURDCBZJDWFDVSAHCFTNZETOFYJMACETKFXEBCWDFPFQNDJVDWXIWINBGROGDGVUMLRUXUAAWAADRNOOERPHHGIUKMXQYCKIHLKVLLHTGRUYRQVQSZQSQSTECEMGEIFYUXPIZKBOCMPJZNZBEWGROIJQFTNVYZNSXUAYRPEZHYRPXK");
    tmp_msg_0.vnamespace.assign("MPQWVABVIEFKCDQQCRBNXZVMIGDCXMKEQHBDGQNGOGJOCJDXTSFHKQSHNPTETFEZKXFVDFVJMGSZUHIKOAOOFGMELXIVVOBCLGHWQYFXJULALURQURYEGJZTTSUNHRYRHLTRCYJMPDIZIKTLCAPNSSPBLOLAHNRJPPIANUWEWCBCPEDRSMANYVPTCXGTROLWUKIKAQSJZXIGEVW");
    tmp_msg_0.start_man_id.assign("HNILHOADYGJGTFILBZPGMMYSKVUYBYVLFKJCGLTASLMWVXVKMNHPMCTGFDXUWEDEOQJSJLSFQGB");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("WQXAIXDORKZLBTGWNVPYWDJMZWMIMRBVOWNFRFCIGVYJAWEMAYKHANMLCXGYWCBHGVQFPEFZEOYKDIFNPPTFETQKEZFJIABRHCLLQEPEJGPJDISVTDSGJACYOOAMSXTJUQUGXFTXMAZBFQWILLURPIVUAZZUVDMNVBBNPKSYJYVDEHXXXCOCBBRLYNSTSMGDSQZRKINYTB");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.duration = 60924U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("DKGVPSQEXNILAIIQAUEGRJXKPDTALKVZMCJHHXSUOAHURUKTWQZWBDDQKFHOUXMOLWOTVWPINFXVRRYSFEDJIWXSYYCQNBMMWDFYCLOTEHNHBJGSHQZTLUNNOBLWQFFPCALAEYGPUFDGNZMCYXBGERZZCWTYVOIOGRERQGMOWVIBDJYLXQJIPPCYCUJBSMDJIDEKHMFRUVKJVPKKETHAZLEKCRGFN");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Acceleration tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.time = 0.385554002663;
    tmp_tmp_tmp_msg_0_0_1.x = 0.506361983786;
    tmp_tmp_tmp_msg_0_0_1.y = 0.575005437421;
    tmp_tmp_tmp_msg_0_0_1.z = 0.293944006841;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("MQTPBNPYVQACUGHYYESQABXXLQBFOJYYPWXNJCEJBUDQUHWBNKFSERPWVKGJNIPDVNQADOTGDHERFNSTTKUGNDMHGZSFPBRHMDNMDZLFREOPYISDRSQJQUGRKFRCBAUFAZLUPIIXHZHWEJJYDBMVFGZCLSWANVCTIWJVCTQEOZVNOKPYHFMGIM");
    tmp_tmp_msg_0_1.dest_man.assign("SBGBTVFOQRNTPXLDFHRPLLISQIZZKVGBPEADUIVXMLWYPYZZYVRRIUOWTWQIZYOTEEMAIALFXKGOGCEQKXNUUDSNDEEBMYIMLWWRFISOFYUAPYNGGZWJZRDKBMVSRPNPAGHGCCEXLUACZTNFSTNKTVWRCRHZFKAMOULDHNHTSJHEPZJOOPSCTMLFCVMTGDHUHQBBIIXQJBJXFDMVWQECOK");
    tmp_tmp_msg_0_1.conditions.assign("JSSQTNAMSKLXHWUIKFTULWVQBKTENTPKZTPNAILQXZHEZQOFQZRREEMJWJZVLNUBVRVIQGWQOYWKBDUBCWOSDYKXGOJLNDWCYMYLDEMAOBTSKRNLGYGEBZTZMEXWZAUQOCXVIBLFPVLZKPTIUJHVFRLRYPVPRKCGSHJONCMPMCRMCSXSKYFAYAGAIDFEMFHZOTHPOBFNDAUCJAUJY");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.262962574355);
    msg.setSource(50115U);
    msg.setSourceEntity(232U);
    msg.setDestination(26046U);
    msg.setDestinationEntity(44U);
    msg.state = 59U;
    msg.plan_id.assign("SYXCRPKWRIDUSMJRZKTZNXQFQMIAJBNGGKQEFDTKBVUPLRTGIXWIOBVAESHKIPZKJLYFPRLHCYADSWNURBPFSCZJGBAXGOFJPJEOKGLDRVZELXKTLYZBPTACSMLBWUMUAOWYOMHTNQYZJZEDEBZOPENRULTHQEWLHOGRNHKDDHAXVDUCWXGTJXMGVYSQIPMDVYWEHJANFQAVUSESQRBFC");
    msg.comm_level = 11U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.519306609508);
    msg.setSource(20328U);
    msg.setSourceEntity(5U);
    msg.setDestination(2574U);
    msg.setDestinationEntity(199U);
    msg.state = 75U;
    msg.plan_id.assign("GAXIYKGSMTWUHTPN");
    msg.comm_level = 37U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.131098108112);
    msg.setSource(20865U);
    msg.setSourceEntity(215U);
    msg.setDestination(33996U);
    msg.setDestinationEntity(140U);
    msg.state = 21U;
    msg.plan_id.assign("ALWAALJNZQGHOPOVSAGPUKXRJWBJZNRZKRBYFOGIXYMRHISMWTZHOXNNGCRNNHXJXUTUKHSCLJCEIVMDNHQDIXELTCYXFCJZFGMMVVBCQBYOROUDAKVNPCOXGHRYFP");
    msg.comm_level = 213U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.579198799888);
    msg.setSource(480U);
    msg.setSourceEntity(252U);
    msg.setDestination(51320U);
    msg.setDestinationEntity(63U);
    msg.type = 74U;
    msg.op = 158U;
    msg.request_id = 43464U;
    msg.plan_id.assign("TOUNRJKFAPGEWFXVPFRSJYQQXAHKCKKBX");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 60435U;
    tmp_msg_0.lat = 0.280015396634;
    tmp_msg_0.lon = 0.293380186565;
    tmp_msg_0.z = 0.325246192111;
    tmp_msg_0.z_units = 186U;
    tmp_msg_0.speed = 0.819748320541;
    tmp_msg_0.speed_units = 30U;
    tmp_msg_0.custom.assign("RCWTOPPJVTSYYDJLFKCIANBXBFZRLTWBFMEOMAMNWLUJPTIUTZATSXBBRVSEMECJHQNHKJRTWPIKUULFHLMIZGSOTRGEXOSSFDGZBEKXQCXHKUSNFWTQRAUARWVFZHJDMVAHCQWUYCFVGKDZHHVQFIQMYYYRRLBUQQXJVKUZDFNLSUYGHJAZGZEVEGOILHLADYPKSBDMBXVCVWNPQDDIXOLOAOEOIEMSPEXXYWKGPNCIQNCN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RSJBKGAXINABJFIOQBCMWYYFPDEMYZXL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.855364387584);
    msg.setSource(8366U);
    msg.setSourceEntity(198U);
    msg.setDestination(37089U);
    msg.setDestinationEntity(251U);
    msg.type = 165U;
    msg.op = 249U;
    msg.request_id = 60014U;
    msg.plan_id.assign("EDRXFKIPBAZYTRCXSGGVRUQAXKROWSMXGAVNPSOTPNZCCPVUHJPMJQKRTLEMLTONNKVJJCJZQRSMASEGFNWDUVKRZAHOCNHYMQU");
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("HAETBGINKYCAVZHBUQQDQKEXXFGKTQUKAXVCUGBPVZNSXUFELZINSSZWREQCDDJVXKWHOOUDEBILOAKVWDKBMSNWFMZWXXIVJGYVSMUNYZCYGIBDSUVMZFVEORHFNDPWHXCFCXGBLLFGEMKKTRYOQPBORWIULWCSQIZDYLANOEKPTNPHHATEJCNBUSPGRGJRFQPCPIMTFRYGJIDMQIDSTMQTABTYXSUMJOHWOZJJAVC");
    tmp_msg_0.param.assign("CQZNJMBTSJUGPKIKUDVXERTWDFOTQIXEUIZVBNMRO");
    tmp_msg_0.value.assign("PIMQTVFCCCTDMSNFLXVYPDBELUGDGODRGYZCVYMMZYTLAQYMFMHLTIRSSDOCE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XYIYCLLKERWNDXAWALNYZZQOLBHZSVZTHWTHYEPVVJLDJINFZQBNEQKYBWRIMKPJOWDNUWHSQKLUCQDFPEVEWV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.30591390222);
    msg.setSource(48592U);
    msg.setSourceEntity(122U);
    msg.setDestination(39009U);
    msg.setDestinationEntity(115U);
    msg.type = 247U;
    msg.op = 127U;
    msg.request_id = 38452U;
    msg.plan_id.assign("ORYKZSVYAFFBGXALSCCVYSGKNXEPETKYMQQSICNALVNIJAGPEQHICQVCTTQSGYWKMLCZGDPRFTXHNUZDFMWM");
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("TPKXXKDJVJQCALNEUZKBYIUHOAQRDMN");
    tmp_msg_0.plan_size = 60502U;
    tmp_msg_0.change_time = 0.162764363087;
    tmp_msg_0.change_sid = 17250U;
    tmp_msg_0.change_sname.assign("FDOMGCIKICTHZJNEEQBSQEGFXOOKIKDLAVRUXFVBYFYHKCBMNZLSPWCNZLRADJMSUJYIPSKLRJHKNMVSPJTDYUFRBYYTIPYVGECTVGAEQPQGYODKJFGJHHGNAUFSOWGM");
    const char tmp_tmp_msg_0_0[] = {-77, -81, -51, -34, -89, 11, 8, -2, -48, -76, -67, -65, -50, 26, 42, -68, -39, 63, -111, 75, -101, 119, -1, 50, 85, 10, -16, -81, -39, -48, -34, 104, -111, 88, -32, 102, -20, 115, 86, -44, -25, 124, 120, 112, -124, 11, -114, 51, 40, -105, -48, 111, 33, 52, -88, 126, -27, -38, 61, 44, -37, 15, -32, 122, -65, -2, -68, 119, 121, 95, -103, 38, -104, -27, -3, -56, 116, 49, 0, -107, -106, -91, -94, 126, 54, -7, 105, 45, 18, 16, -70, -44, 19, -78, 17, -101, -70, 75, -4, -128};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BGUZYEDOFFKRNWOLNBFERXYXCURTTZOZNGSBIZUTVBOPJPIZOYWSCGPFIFZOMLEMDETGXZDVUNSTZE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.0515292521504);
    msg.setSource(4474U);
    msg.setSourceEntity(200U);
    msg.setDestination(44513U);
    msg.setDestinationEntity(134U);
    msg.plan_count = 15017U;
    msg.plan_size = 620670390U;
    msg.change_time = 0.230136551292;
    msg.change_sid = 36138U;
    msg.change_sname.assign("GOSPKKXTLMNDHREBWHQGGQQTXJAXSDWYKFWLFQRUHQYEXDJADFVBZKPCWSSYVLHQEKRJFZGOAUQIUYYWZ");
    const char tmp_msg_0[] = {13, 43, 123, 7, -85, 9, -106, 46, -103, -128, 36, 95, -15, -83, 2, -14, -41, -45, -114, -44, 38, 73, 96, -24, 5, -95, -59, -4, 21, 16, -75, 56, -97, -94, -113};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PDBHHKCDLYPLOZTHFFGNHIQDJZYMTNEYOGNHGFFENQILADUBXPVQXTBSLYRBCVUPTSCROYWUDDKJSABENVWNIHBKQULCSLGZAJZHPCSAEIIAKVLGHMDQMAKPYWMNFBTPZSRUNDHTQAVOICMIUTRZGXFAECHOEIOMAFRWMPRTSGJGWJWWKCLYU");
    tmp_msg_1.plan_size = 30594U;
    tmp_msg_1.change_time = 0.0764914950041;
    tmp_msg_1.change_sid = 51732U;
    tmp_msg_1.change_sname.assign("PFYDWQVPRQPNOOQIJDEIVTYBOLZLMQRMQCHMIGPQKBSKWJBTROVESXFUHXGRCCBUZLKKSSFUAUQMIQKSFUJQNOFLXWMRYKXBEKGVSAAOYAZEMOFJHMCJZDFJLINNVVHECPYMALHZZIHVVSTZUCLSS");
    const char tmp_tmp_msg_1_0[] = {-55, -117, -33, 78, -43, -109, -56, -120, 85, -38, 65, 81, 121, 96, -53, -93, -127, -48, -117, 14, 67, -89, -113, -23, -38, 49, -64, -5, 76, 59, -65, -19, -46, 71, 27, -66, 87, -64, -57, -67, 76, 35, -120, -16, 51, -57, -12, -30, -7, 11, -69, -80, -101, -98, -105, 116, 44, 1, 66, -90, 62, 91, -15, -43, -95, -112, -25, 36, 90, 16, -25, -117, 14, 40, 27, 99, -13, -86, -3, -60, 17, 91, -13, 121, -3, 28, 89, 114, 94, -21, -70, -28, 85, -115, -94, -112, 20, -76, -34, -57, 38, -97, 27, 116, -60, 38, -64, -100};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.41406621361);
    msg.setSource(24518U);
    msg.setSourceEntity(204U);
    msg.setDestination(3382U);
    msg.setDestinationEntity(35U);
    msg.plan_count = 24484U;
    msg.plan_size = 361910214U;
    msg.change_time = 0.213648550076;
    msg.change_sid = 52279U;
    msg.change_sname.assign("DGGVPCJHWOTCEYGOLUWNQICOUQITSQQQJTHFSCRONEUSDJXBMYMNTDODLPJVAHUCYFNXIABJLEKXWGIBFINCWTNFZBBRRKWFSHKXAZAEXGWNJCDATSKMROHUJVYGBIIVTFXUYOBFYTKVWNZIBSPJULYTAHPZMNPYOPVGZAZPQVEHMZXHUVDXENFCZVACUDWGLUYMDSEKDZEALHRKEHLA");
    const char tmp_msg_0[] = {-53, 16, -58, 25, -45, 63, -77, 92, -41, -65, 6, -63, -10, -113, -123, -123, 10, -18, 110, -121, 54, -7, -35, -32, -64, -80, -82, 11, -57, 11, -30, 57, 66, -62, 107, 107, -14, 1, -89, 39, 9, -67, 87, 28, 84, 41, -110, -23, 72, -56, 103, -85, -35, 67, -30, -5, -45, -43, -26, 12, -108, -3, -31, 6, 110, 49, 65, -54, -120, 90, 37, 1, -123, -24, 85, -9, 96};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("DZONHCNLKVTJSDJFUKDHVTERMRPICXOA");
    tmp_msg_1.plan_size = 13521U;
    tmp_msg_1.change_time = 0.0563148982544;
    tmp_msg_1.change_sid = 26235U;
    tmp_msg_1.change_sname.assign("GHTGSVCEICJHTPCQLNHMZJLJCDJYBLZQAEZJFVWASKXIAHIRGISKDNKOPOWYOCFJMYMPIXQETAPUPSGQBTESKKGUEHPNSZQNGVVLNM");
    const char tmp_tmp_msg_1_0[] = {-111, 33, -11, -87, 40, -79, 38, -8, -104, 119, -84, -66, 80, -109, -80, 6, 2, 78, 51, 64, -11, -47, -77, 87, 59, -1, 40, 89, 37, 121, 30, -107, -70, 73, 18, 29, -37, 67, -128, 107, 95, -15, 61, -53, -8, 41, 88, -122, 59, 21, 9, -48, 51, 118, 90, -92, -84, 90, -67, -30, -34, -38, -94, -112, -46, 16, -34, -126, 47, -34, -94, 105, 10, 9, -21, 84, -88, -9, 45, -51, 20, -7};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.404285996596);
    msg.setSource(24956U);
    msg.setSourceEntity(62U);
    msg.setDestination(38135U);
    msg.setDestinationEntity(143U);
    msg.plan_count = 43019U;
    msg.plan_size = 496672583U;
    msg.change_time = 0.0348086949329;
    msg.change_sid = 15547U;
    msg.change_sname.assign("BLJBIOISQKLVKDFMJWVDKTRBUQQEFVPENURLSYXQHNWMJFHUCRXCDWJRJUPCHECBIBLPCGPMNAEHGNZOVWRRNJXCJUTOEDWMDVZZNMYTJMGFVSZS");
    const char tmp_msg_0[] = {-101, -38, -59, 109, 43, -12, -125, -4, 61, 97, -120, 52, 68, 82, -83, -15, 85, 54, -72, -10, 105, 75, 10, -39, -66, 27, -31, -45, -111, -75, 82, -19, 112, 122, 84, 77, -45, -58, 42, -128, 108, 56, -54, 19, 9, -45, -35, 8, 15, -91, -22, -48, 98, -20, 80, -125, -36, 35, -89, 25, 121, -32, 92, 73, -72, 59, 95, 18, -61, -68, 33, -122, 82, -9, -28, -3, 87, -60, 0, 50, -73, 111, 38, -126, 107, -90, -52, -127, 89, 79, -106, -59, -33, 48, -78, -19, 34, 15, -86, -29, 20, 44, 23, -20, -74, -90, -113, -111, -64, 111, -18, 97, 117, 77};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("DCTLMEIBKOAVPSGURXELVGFINRPQHTAEYXUIHVWSEGMFDZLOGUCQJRONGGJTPNNWAHLIKFQZBBUELHDWWPQLNJOHXHFGHTSDDMHVCSYSGJYVFNOBYGXPXLLZZJYUUAPXQAENKJBCAFJXLHMXFUDJMQJEFKKRWHPSURBVQRKRABNBECTZSVQLAIFNGPZYIOIQUORSKMZDQKWXUKWXDZBYMEYJTVZMOESTTCTCVIYIOW");
    tmp_msg_1.plan_size = 43679U;
    tmp_msg_1.change_time = 0.69224720448;
    tmp_msg_1.change_sid = 43288U;
    tmp_msg_1.change_sname.assign("UTRRFZMUYHDKJCZIQHKOXILBZFYXZJTSYKHORGCDRWLWVRRZ");
    const char tmp_tmp_msg_1_0[] = {60, -23, 40, -8, -97, -22, 27, 48, -39, 48, 120, -110, 96, 32, -63, -57, -117, -11, -62, 122, -74, 7, 104, 73, -92, -87, -73, 87, -98, 62, -32, -102, 68, -98, -75, -127, -114, 122, 63, 91, 8, -79, 19, 79, 20, 82, 90, -49, -15, 113, -5, -114, -4, -32, 63, 31, -108, 118, 66, -40, 56, -23, -68, 4, 28, 93, 29, 25, 84, 61, 52, -97, 11, 27, 86, -16, -85, 119, 8, -101, 57, 8, -93, 19, -116, 112, 109, 113, 41, 91, -12, 109, 81, -47, 67, -101, -35, 23, 1, -123, -1, 81, -73, 19, -110, 108, -9, 126, -122, -18, 11, -81, 69, -28, -16, -84, -120, 87, 85, -31, 31, 65, -113, 40, 64, 11, -45, -120, 113, 18, -68, -105, 60, -32, -68, -91, -94, -34, -82, 41, 68, 27, 42, 4, 61, -1, 93, -63, -71, 50, -1, 73, -57, -76, 75, 88, -97, -67, 100, -124, -106, 121, 81, -121, -17, 109, -83, 82, -44, 7, -29, 51, -5, -43, -111, -28, 53, -24, 18, 112, 124, -86, -16, -83, 78, 72, -7, -98, 86, -37, 38, -36, -89, -46, -46, 9, 118, 13, -21, -108, -111, -123, -75, -34, -86, 60, -1, -38, -78, 17, -34, -26, -115, -25, 27, 59, -95, 50, 92, 52, -108, 8, 112, -58, 94, -50, -53, 60, 111, -117, 77, 39, -122, -98, -121};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.546311540671);
    msg.setSource(9715U);
    msg.setSourceEntity(93U);
    msg.setDestination(5971U);
    msg.setDestinationEntity(164U);
    msg.plan_id.assign("DKQICDLOOOLCLTXFLWQHNEU");
    msg.plan_size = 25106U;
    msg.change_time = 0.139056816362;
    msg.change_sid = 29726U;
    msg.change_sname.assign("VRBRTDGQFWNVVAIJUHWIJHXDCSZFKEBAUNAOYFVXKNXOOATEWCCWSVXHMRCWXKFPRLQCXSYHHKWJZPKY");
    const char tmp_msg_0[] = {24, -70, 27, -3, -3, -116, -36, -10, 99, -74, -37, -54, -77, 63, -125, -27, 50, -126, -52, 55, 55, 82, 3, -13, -112, -91, -122, -72, 77, 14, 64, -95, 57, 33, 93, 87, -8, 105, 46, -105, 99, -98, 4, -71, -103, 73, -9, -31, 33, 74, 13, -104, -36, 24, 104, -14, 16, -76, -29, -112, -110, -71, -23, -37, 101, -55, 57, 72, 61, 47, 125, -53, 87, 92, 74, -49, 97, 92, 13, 24, -37, -60, 92, 44, -126, -46, 15, 107, 4, 95, 126, -13, 75, -76, 45, 105, -117, -128, -127, 17, -40, -125, -53, -32, 76, -36, 107, -91, 26, 75, -51, -39, -83, 54, 90, 0, -85, 53, -23, 84, -40, -13, 65, 45, 40, -81, -104, 29, -55, 67, 72, -95, 39, -28, -66, -12, 75, 111, 121, -64, 114, 17, 37, -54, -118};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.874543402565);
    msg.setSource(34483U);
    msg.setSourceEntity(107U);
    msg.setDestination(59730U);
    msg.setDestinationEntity(218U);
    msg.plan_id.assign("CCUWEALIVWGHWQWCJAJDTOQXQYBHQHQLMWXGEUVJROPWYQWIVIWIZKGKMBUEYGYCTPLDTMRDXDQEKKVGFCBTUDMMLXHNSOSJPSZDNKPDNKZBSVSTOQYYUFRAFMQEKCVPTIBTBJXWRFNAXLNLHRAFEJHOTVLMIXSHLCEXBHVETRHNSDINJCAOZDYNMNLKAGUSJOKMGPEZVARAQOVPFCBMRADIKUFY");
    msg.plan_size = 22551U;
    msg.change_time = 0.991294940717;
    msg.change_sid = 29719U;
    msg.change_sname.assign("WZBQQEOINAOMLKCFKMXKBAXWSLGNWZECWEXSSCPMURDFHZUVTXSVZJMUBTSLYXBUHEIWAYAQTHPSSWDVESAUYRTEFXXCCDTLGLLIKEJTYHMPKKOVIFAFSJVPPTORLKIGAHRQVTCOAZCLNHBWLMFCEJYTODQMLYQXYMHQXNNQGQNPTCJCOUPZUBGOGWIEHRKUKODFRJEVJDJRGUDZDDFHVFRPNBINY");
    const char tmp_msg_0[] = {-108, -58, 108, 92, 87, -63, -68, 103, 4, -23, -60, -62, -103, -71, -17, -18, 78, 123, 26, 98, -81, -81, -62, -90, -116, -109, 78, -112, -108, -93, 55, -45, 88, -110, 71, 124, 44, -68, 104, 110, -19, -74, -66, -71, -93, -79, 96, -91, -102, -103, -45, -69, 45, -83, -19, 12, -83, 4, -91, 58, 108, 44, 104, 52, 22, 6, 10, 90, 73, 17, -114, -70, -1, 59, 68, -99, -79, 12, -76, -30, 19, -49, -4, -44, 77, 124, 68, 88, 59, 118, 73, -42, -1, 94, -50, 92, 96, -68, 65, 32, -59, 15, 104, 105, 108, -35, 40, 113, 17, 43, -93, 64, 60};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.442225526889);
    msg.setSource(35618U);
    msg.setSourceEntity(39U);
    msg.setDestination(65468U);
    msg.setDestinationEntity(74U);
    msg.plan_id.assign("DDSOQRNGQYHMYMHCSUUVCWNKVFXCUVZAGSMNIFPTJCPILXKMCCPVDEELZQAYZPZZEFQQFWZETNAHBEQRSOSMGJQKPRTNJKTXDIAPLUOXOWRVNRSZIBADEGJUWNDIMOLMASNLTWVOVJZYBXLUTLVCMFRQPHKRDYHFJOYXWIGEYVBJCBFLBAXPYFLSSSGEKIZHOLRIJHBUXRJTDTNDZUGKUVXAHCCKWMFTGIBOGPNMEAKXDBBQWUHYHQ");
    msg.plan_size = 57913U;
    msg.change_time = 0.213901421712;
    msg.change_sid = 54998U;
    msg.change_sname.assign("AIYEKCDGZKFSMEHWXTGUWXIGTDKPQVBOAFQCPOZMJHKXPTUSUEOOFHBNDGJMVCPJFRXCJQCTLLCLNQYCDGWEEKOYIBUHKETQXJLFWHYYUGYIFLCKYXLMDETCWOZBMXDSMQTXYCQZMSJIHIVROBNPSVGWEYZBAKNGSAOMALVDBVPSBNENILFNWRBRAHUXRUPUTAZRWEQQUFBRT");
    const char tmp_msg_0[] = {59, -88, 55, 34, -114, 2, 31, 113, -31, 47, -82, -3, -5, -58, -15, 31, 45, 84, 9, -4, 115, 76, 42, -9, -91, 67, 3, 18, 2, 18, -126, -49, -121, -61, 124, 76, 117, 26, 102, 76, -6, 36, 102, -126, -31, -110, 52, 2, -47, -79, -62, 23, -125, 19, -97, -84, 43, -115, -52, 91, -69, -98, 116, 56, -3, -81, 83, -93, 103, -99, -77, 91, 102, 79, -87, -26, -11, 34, 98, 73, -98, -99, -39, -15, 35, 122, 119, 56, -103, -5, 74, -95, 87, 19, 50, 15, -95, -13, -114, 110, -108, -115, 23, 96, -31, -26, 23, 0, 48, -73, -12, 118, 125, -1, -46, -96, -38, -11, -107, 45, 87, -62, 95, -13, 102, 95, -90, -45, 92, 10, 70, -79, 56, 85, 8, -121, -97, -104};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.0162143281044);
    msg.setSource(31812U);
    msg.setSourceEntity(12U);
    msg.setDestination(55798U);
    msg.setDestinationEntity(219U);
    msg.type = 41U;
    msg.op = 97U;
    msg.request_id = 24562U;
    msg.plan_id.assign("SPVDZKXMGRBKVXTPMLMVCEMEKHRHQLKNZNQSJOQVAVUNDATFI");
    msg.flags = 63916U;
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 226U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AXFTEXSHFYUUJMFHJTXOCODZECLAWGOHVQMBOYRMS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.463354729302);
    msg.setSource(39116U);
    msg.setSourceEntity(219U);
    msg.setDestination(63439U);
    msg.setDestinationEntity(27U);
    msg.type = 235U;
    msg.op = 224U;
    msg.request_id = 49486U;
    msg.plan_id.assign("QAUDVCCHYSGAWDWAFQMIFYZIXHPGARNPLOZSMEKFIESELIBECNJWJVRUNCGSTDOZTKSBAMBBKMODRUOHCPBLWTBXKPRIVYUSRVEMXZNQWDZFDZNYXIGZBCTYLEBSUUJQOQKPVHGHMNNGTLBWASDTJWGKAGWCYQJYFQRKFDLSLNXOPZKIGZIVIZYUPQJLMHVJOOHKAQTRTEMECCMANXPUYWGXDUXRRU");
    msg.flags = 8581U;
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.302547460867;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VVZVWYOZJYIEWRBSVLFGWKACJHIQJSUGDIWGRKFWFZH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.216767750196);
    msg.setSource(30080U);
    msg.setSourceEntity(203U);
    msg.setDestination(8012U);
    msg.setDestinationEntity(155U);
    msg.type = 68U;
    msg.op = 37U;
    msg.request_id = 65126U;
    msg.plan_id.assign("NMDNSHQBVTMMVNLBWQSGRASALMDZCJOGIOBMUXHIQWZCWBUERXRNATRTFVCRDCSEXYDDTNPYLZXOXWEXCJMBGLUVLVLZERCWCARMSYQZTDOFOFQNSIIVNABIAPEMXJHJWTWUKBPROTBHLZCQHKJGSUHLIVAYGGAKPEUPZEAHNFFWDPRVIDVSQYVPUJHSETCNGGSYOUPYUGLQKFEGFWROXFPNJYKKHDBJKKTF");
    msg.flags = 10606U;
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.487766548023;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HFPVRHKDZBSHMTXVMOTLVNVSJASNTEDTNOSEABEGCZABMOUWAMGRJFXPNVXIBZHMUNHURJEALRFCHYQINSFCWXSSKDAOHJYDKLEVBEQCGFQXIJQJBILOBRDPWIQFWUCGCCLPVOFKDGYNWHPBNWZGUMQPUAMJFRUDKZRMILX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.94769354584);
    msg.setSource(32607U);
    msg.setSourceEntity(170U);
    msg.setDestination(55920U);
    msg.setDestinationEntity(246U);
    msg.state = 197U;
    msg.plan_id.assign("WNJASEJFLDDCZOBCNIQPNFKQZTLULVFBBAJOIEXYCBIOMWUOHIZITLAIAVHFJPBABCAWYLMCDFHCTGOTHVQOLZNWEHUQUVMSGCMEDSECXNKREGZU");
    msg.plan_eta = 1427660427;
    msg.plan_progress = 0.985147190058;
    msg.man_id.assign("AZLWNVSKWFDBOBQKKISNPNZTMLLJHTPOPGWNTKORGYPICPTCIMXGIEJZDYBFJBLHEVRCDMIQWBXEHJOLAFKEYQMPXHNKVIDUUTRXWDOWEOVEROVHXLWIDJLZAPPA");
    msg.man_type = 31993U;
    msg.man_eta = 1725110828;
    msg.last_outcome = 178U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.751359328515);
    msg.setSource(11177U);
    msg.setSourceEntity(188U);
    msg.setDestination(38209U);
    msg.setDestinationEntity(199U);
    msg.state = 149U;
    msg.plan_id.assign("BIMPSOAODAVFTALHTXMHWGLRVBHIDXQGJDRFHESFYLTSLHZQPGJXLIGUEUNYIJYPXEUWQENBJOGWZFZKHNNOGLOXDYBQZHRALTCUBQEMZKOWXQSJWELTWTZWHPZEUDNGAFWAORNOPRZRRDCSMTUQJWUJQPYAXTIIVBKSITRYNKKCIMFCZDJJGFOEYKZYNJSBSUQITCVXCUVNMAEREDMVASGLCFKKGPMHRVLQFVKPH");
    msg.plan_eta = 1370823304;
    msg.plan_progress = 0.767631931089;
    msg.man_id.assign("JPFHUWATMDBYVYORTLEUHBJNSUYTKGENXVOABCQBADPWIIUHVCOYWPXHKZGUKOVSGEUJUEVNTANSXLCKWBUPMKXALSRS");
    msg.man_type = 17163U;
    msg.man_eta = -155813459;
    msg.last_outcome = 193U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.958376133509);
    msg.setSource(21376U);
    msg.setSourceEntity(42U);
    msg.setDestination(30311U);
    msg.setDestinationEntity(57U);
    msg.state = 198U;
    msg.plan_id.assign("BOFUPFOKDCBKELSTRLZZLKRSYOVYVQFTQUAMEJMBMETZNBENMCTVAKGVGFDTEZHRSPSPSEAWUJTSQKVFSNSGAOMXRYXKURIDNTQMXWPVLFKROJ");
    msg.plan_eta = -2093880066;
    msg.plan_progress = 0.102776412651;
    msg.man_id.assign("HGEOTWOTLQAENPAHCKPPNNJIIMWDYAMYZAOTEARKZMOZBOWLTFTJCQKUUFECOPEJQEXMLMZWQHFGGXROVEDDOCLIUJMLXCUFOBUKBSMZGTQGIAKNRPVSHLKHPJJUDIUVPSSZRJTOXFVRSNSPBECNQNWBVGXSMIIWDHFUSHHYIWPLDTFRXVTZ");
    msg.man_type = 39063U;
    msg.man_eta = 701654338;
    msg.last_outcome = 180U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.137877752433);
    msg.setSource(20941U);
    msg.setSourceEntity(16U);
    msg.setDestination(42157U);
    msg.setDestinationEntity(156U);
    msg.name.assign("PLSXJJXZGXQKXAYCOFTMFVRYRXEBOSVKZHVGBNIYMCJIAUWIWEXIOCVNNW");
    msg.value.assign("YPQFCIYBCJLVTMKFLGWMADIFYFFVNZZPYKJMMPSFDQHNSFLRCFHGVCJIKRPEEGCNETUEKBNQUVQXJWNZRYIGJWQKBSKBEYOLJVPSXWAPZWHZADYJOTWLN");
    msg.type = 103U;
    msg.access = 171U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.607179770156);
    msg.setSource(44593U);
    msg.setSourceEntity(221U);
    msg.setDestination(2494U);
    msg.setDestinationEntity(127U);
    msg.name.assign("CTKISJSHBTVPWLUCWRMUETLGJKJIUZXPLRKZNXEQSVHAHWPVNJEZIDNTQZISKHIPXLU");
    msg.value.assign("BKIUGNSAPDJDHKECQOFDAZFSSUHAKELMWKJDNQAZZNGISBNGKTOAJPXICWGJBPYFIWCSEKTBPXWCMEKTLMLYHYVTFSWLMNBKVONYEVQAYASEEHWSRCXUDTRCIXRVIMLLAQPGNZXUJRPJBOZQHMQALVUKTYJIDTNWECDXIYRVNRFTMRWODZYGPZOXQFHVXOGOMWMRHXJUHQBTJVBDZUJZUYBLRMXGFILVAFVORGCSP");
    msg.type = 8U;
    msg.access = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.651085403451);
    msg.setSource(54753U);
    msg.setSourceEntity(246U);
    msg.setDestination(7941U);
    msg.setDestinationEntity(14U);
    msg.name.assign("THKTAYFZJWXEVXVSZGRHMFNWBEOOGSZNJVUTWPFRSYDZJPXAATMZFQECDXKLOABCIMCINBSSGDHGJWIVFMHDNAQPRKYLXVAENDPDBESAKYJXKPVFKITSI");
    msg.value.assign("DXYPGAAOFUUHZTFOKISFJEOFVTNZCCANROOBCTBNNLQZYQVPQHBXQLXAPLJKRRDGGUJBGMHHWGRIKWIBEGYNXGYRIADOAZPWDHWSTJSHWDHKOPPHLEIALUXSVUYSCFNMUTICERBJAVCRIHYMCZJMBCRJVJLMWKVLBTJQQYODNMXEDPSKBXIDGPKWKRBFQFORQFMZZMDCGSLNVUWXEFLPNUZEAIEQYATUZVLSEYM");
    msg.type = 76U;
    msg.access = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.285406375785);
    msg.setSource(18414U);
    msg.setSourceEntity(166U);
    msg.setDestination(30004U);
    msg.setDestinationEntity(224U);
    msg.cmd = 65U;
    msg.op = 223U;
    msg.plan_id.assign("BVQFGKVKRXDDFIIULBNQIUHBRDEJFHXSAIDVMHZLFFTGGGGLCOYTCMZXDPMOQRSCUURKLGDVOYTEOQO");
    msg.params.assign("BJPOBQLDQVLUIHVSMSFBFKFLOXBBKBXOJRZQZEZIDNCMPIYOMYUEDKWJVKRCVIVWIGDZMTECPJYKEZNCBTPUTZAHMFXIWDLCEDDMQUSRAAWYLQUVHIRJMSASUNHWTQNRFHQQRNJRAJPFMHUTIMQIAFULEYSFPAABZRCDYBSYGXOPDOZLJGNHH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.781420493521);
    msg.setSource(4769U);
    msg.setSourceEntity(55U);
    msg.setDestination(34518U);
    msg.setDestinationEntity(114U);
    msg.cmd = 48U;
    msg.op = 122U;
    msg.plan_id.assign("ONOGJMLACSKNWDXRGUNZJDBTKITCY");
    msg.params.assign("XKMKLSGXQTDFCGURFKDAZINCKDAJAHULTXINEMTMLYGDETVFRHSPCLJTCELHTJENYPXYOAXBQECFBLFJZJRHHYXIULMQAOKGQSSFZCSDALVBMKYIRYXMHIBNRZQFRAKDWYSONV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.970601241833);
    msg.setSource(57821U);
    msg.setSourceEntity(164U);
    msg.setDestination(61236U);
    msg.setDestinationEntity(194U);
    msg.cmd = 231U;
    msg.op = 207U;
    msg.plan_id.assign("DDPTXVYXXUENGUNJXXGHSVHIDULCQGHQKGBLEVJZGSAYPBVYQELRAAIETFKZOOJRHOPQQTBIUGYMERCKYMUNLBPXULJAARZOWIUCTEMOWVWBSVNXOFOKSZRDKQCVCADMLTVKIIGZBNWNKCFJXZMRIZPBASEZJKATHZURJUGZCLFYY");
    msg.params.assign("WVUTWGSGMQRJRKEAPDXNDGNGZIAXFIULBVZUCZXJIIWCYUQHVHWBQPSGMHXPVMTYRMWKLLCMKDMGPYOCZFQETLCNTDRKWBUTDKRPQXOBAHTIYVDYSFYJZYEJKFPCJZIOZBNJGOEXBLEZAZQUGJHXEHSSQFFWCEUPMAIDLIHDHATNQOMTNSOVCLBBJFCYKHXATIRSZDJWBQYONSXRPKTNODOLSAWSNVHKRAKMRRNCEPGLJUYQPLEO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.860678194157);
    msg.setSource(24027U);
    msg.setSourceEntity(3U);
    msg.setDestination(52355U);
    msg.setDestinationEntity(7U);
    msg.group_name.assign("UCGXDNQVSOJDDKKJOMLXYFLXEALJLBMFAKWKBAGMQXPWANYODEQNIYEQEZWUFTEYXVCMRVGUHWVIWUWQNLIFZRPITLSTRCHNGTCNQHFPJSUPYBGZTZZOREIINSXTDZRFB");
    msg.op = 226U;
    msg.lat = 0.114531198921;
    msg.lon = 0.347544982101;
    msg.height = 0.00187234486865;
    msg.x = 0.97639342739;
    msg.y = 0.47168120695;
    msg.z = 0.296912995596;
    msg.phi = 0.773877199294;
    msg.theta = 0.156908456635;
    msg.psi = 0.806533293308;
    msg.vx = 0.634305274443;
    msg.vy = 0.323811947231;
    msg.vz = 0.930282762488;
    msg.p = 0.936231886872;
    msg.q = 0.952560693089;
    msg.r = 0.0229926978158;
    msg.svx = 0.179899614559;
    msg.svy = 0.364841369506;
    msg.svz = 0.500196545599;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.388697183235);
    msg.setSource(63841U);
    msg.setSourceEntity(175U);
    msg.setDestination(53130U);
    msg.setDestinationEntity(163U);
    msg.group_name.assign("JTZRJUSTCBCWSMSGCXIRFXTACDLQBHCPNJUZYQPORMPPMWDIIODJHZYQWOOPTMKSODKYWTXVBFNQXQKOVWHHVMCSDCIQNNMGLHXYVSFDZZXFUFCIVUJELAJWEGQULLFRLAVSDIENCPTFNKOKPGCDUYQUKRMGUSIQIRLOFRVKNAEEBZZENLTEJTVAEZUTVA");
    msg.op = 160U;
    msg.lat = 0.265369271119;
    msg.lon = 0.484575016722;
    msg.height = 0.842115128068;
    msg.x = 0.761336120523;
    msg.y = 0.336952602453;
    msg.z = 0.564524704434;
    msg.phi = 0.948241684978;
    msg.theta = 0.328925123386;
    msg.psi = 0.738059211632;
    msg.vx = 0.708212914791;
    msg.vy = 0.467095656421;
    msg.vz = 0.304017611243;
    msg.p = 0.609426345443;
    msg.q = 0.437098370083;
    msg.r = 0.512474704808;
    msg.svx = 0.565125737185;
    msg.svy = 0.396163936912;
    msg.svz = 0.0561374083516;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.49719618771);
    msg.setSource(16946U);
    msg.setSourceEntity(34U);
    msg.setDestination(40693U);
    msg.setDestinationEntity(36U);
    msg.group_name.assign("YSPBINVKMELWACMRNAWQCCTNYXYFJLRRGSUYRZSPQCKHNDAGRPZLDKXMKQQINFAYTJWCSIODHYAQXKGVUUBOBFDGEYZVHACHKNIIBZWTQXSMSOKURCF");
    msg.op = 230U;
    msg.lat = 0.0439325591447;
    msg.lon = 0.9029392887;
    msg.height = 0.215637052893;
    msg.x = 0.0515887552953;
    msg.y = 0.0492821275222;
    msg.z = 0.853236007463;
    msg.phi = 0.812423693303;
    msg.theta = 0.22699141207;
    msg.psi = 0.192373409235;
    msg.vx = 0.611976259364;
    msg.vy = 0.757188916623;
    msg.vz = 0.685303039686;
    msg.p = 0.783950835161;
    msg.q = 0.506976323056;
    msg.r = 0.519277536242;
    msg.svx = 0.779493655189;
    msg.svy = 0.944400411344;
    msg.svz = 0.377777356123;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.48091609991);
    msg.setSource(25037U);
    msg.setSourceEntity(241U);
    msg.setDestination(60881U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.118562808516;
    msg.lon = 0.015193727966;
    msg.depth = 0.88863546665;
    msg.roll = 0.732636417318;
    msg.pitch = 0.073877659273;
    msg.yaw = 0.860744781697;
    msg.rcp_time = 0.847398122395;
    msg.sid.assign("CYZTQZAHKDSBZPLTIKNBNOGJXOUNKXGCBVSMONIMFCHTVIIFKAMSFDUOWLLOLMPAEYPEASOINHGXBGKWRKRWFLVFASDNOWERCXOZIRGBFMXUBMZVJCHCAPDMSBTDXWQYGXFUJEYGRQOQURVLRLPMQQXSWTJAIJUFHBJEYVXFQTZCDCLQOSZSTHNQANWGZMFVWUVPAYRWPREETJPDZNXLJPHUETMDNLHJZKRJEUVVQYEAIDCHSKY");
    msg.s_type = 98U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.421241514505);
    msg.setSource(2425U);
    msg.setSourceEntity(106U);
    msg.setDestination(12627U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.621415974375;
    msg.lon = 0.523877070576;
    msg.depth = 0.199543568301;
    msg.roll = 0.987062369259;
    msg.pitch = 0.991697923416;
    msg.yaw = 0.412724399949;
    msg.rcp_time = 0.959131655055;
    msg.sid.assign("UOYROERBGCTSQBEKYVGXDBXXZYMCIAOQLMDYWVGTDPYJLDKTWWUVJKVWORKTQDNVSSXFAPBFSGBQPXQCHAWOMELIUCCGQJHGXAGLEIPVXRTUQRZDGHMFOPFELAVBOIHJZKHFDMUSNCZCTNNXFBSJXFAIZQEDMTBPNMUCEIFZLALGTOYRYCJGNZEIUPEMYMLKWUTYIMHSJVLHSJBRFJONIQCNWRDBYPPKKULAHRIDUJVSQHNSZATVZRZ");
    msg.s_type = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.783602206815);
    msg.setSource(42194U);
    msg.setSourceEntity(146U);
    msg.setDestination(28529U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.0678693603167;
    msg.lon = 0.929659266204;
    msg.depth = 0.849824406848;
    msg.roll = 0.684972522724;
    msg.pitch = 0.398710981574;
    msg.yaw = 0.846725973093;
    msg.rcp_time = 0.0602796783894;
    msg.sid.assign("FBVMLXXNIBJEQWBPNFOJZGLKBARRXCSSSQZVMQVOIWCKUAJCRXDVOJYMNOBRUZYZYQTZKACXKASSXCGALZFHFUTBEKDFTYKYWIUHMIM");
    msg.s_type = 207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.0827768479307);
    msg.setSource(56848U);
    msg.setSourceEntity(38U);
    msg.setDestination(14421U);
    msg.setDestinationEntity(163U);
    msg.id.assign("DETLJUQKBBDZBPMAKIPPNXGEDHIMGUWLNCIFTZOZPICZOGWBSRRBXMFHJFQTYYVODKJZACAHTWHLJVKEWX");
    msg.sensor_class.assign("BXCHPTWLCQIQOFNMTTBERLMORVLJAXVDKKXSOIUJBKDAHPWKUVNZGAWWEQWVMQLWWPTJRPTAPRVFEXLCYNTBHUUHNOEQPOCALGMYOOMVCRCNVJTBNZUHMFQUSGXYHIRDKGPRAQFGUEBCNUFIHZHSYSROMXPWBFG");
    msg.lat = 0.682907580167;
    msg.lon = 0.531130180671;
    msg.alt = 0.985014617514;
    msg.heading = 0.982664307612;
    msg.data.assign("PUALYXCMJVXBKOYGFGRHLOCBQUMAHFVYRRMCBPA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.743046747417);
    msg.setSource(11877U);
    msg.setSourceEntity(83U);
    msg.setDestination(61888U);
    msg.setDestinationEntity(16U);
    msg.id.assign("RSCGWVGZJNCMHWDWFOTCZHXJPNFQTCKVINLIPXOCMZIFHRWNKDGODSDNYFFIXYLZKYMKPHTVSXYGDSUEA");
    msg.sensor_class.assign("KWGJRTELGCMBVFLTO");
    msg.lat = 0.340383473614;
    msg.lon = 0.296181092092;
    msg.alt = 0.603033373336;
    msg.heading = 0.529347719475;
    msg.data.assign("OTVDOBTVSKEXTAYQUWFDMHTRJZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.201910161924);
    msg.setSource(43668U);
    msg.setSourceEntity(240U);
    msg.setDestination(44072U);
    msg.setDestinationEntity(105U);
    msg.id.assign("JBDAVMWBZREZWJVLYAFXQPPAOMYAYTAPRYQYCYKWHLURBFJJHWWNGKQLHDLCMKGJNFPLFQAUUVRJHTNLMESJZKBCVEPNKSFZIOUTGEKSFCOUYW");
    msg.sensor_class.assign("ZWXDTFRPIDATFAEZULAMZQKQTNYNFPTLJYJPEZHFQEKOWHNCMDRJGJQKSYNGIJCRRTPGXMWHDUWMBJKKWDADPQEF");
    msg.lat = 0.703087365444;
    msg.lon = 0.988852084482;
    msg.alt = 0.447851988196;
    msg.heading = 0.596019469613;
    msg.data.assign("NTSYUREVUNBIDUFJSBJAAWTWRGTMSQVTUOQVZENYYYXJYEAHWDGFEZDMUIWICBZQYPYJBPXSVUDKJIYAAYSWRCLQXAJZQBNWOYOLKAEBACNHOFNDLSEPBCQKREVNBVFDZCDQGMRUELSGTPWOTWLKLKUNHCRRPVCIKGZIZKMMXMVUGTPROFCZLMOGFJOCBRHSZUAHFJLSXFCQD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.371818014012);
    msg.setSource(34097U);
    msg.setSourceEntity(145U);
    msg.setDestination(61780U);
    msg.setDestinationEntity(202U);
    msg.id.assign("SITTFGBJSCVILBPVOJDPNMQLIVMWNWMUEYQEGGSVVKNFOLKFVYAFLJXTXCZSHDNRBAHOKPJMUPHURBPXMLVINOIJRWCLCFSZYDYDFPKQQHTPUOSUDBREOWVHCDITYTANMNXXONGCBARTQSZUZHKMZYGYCCXDFQBGBJZOWBWXARQPGUOKFKIQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.742913746585);
    msg.setSource(47205U);
    msg.setSourceEntity(187U);
    msg.setDestination(50473U);
    msg.setDestinationEntity(113U);
    msg.id.assign("JDGIDRMIOAFPXCRBVRWRCWBPWDRPTQFNXABHZSAOKNSVBWZCMMHVUDHHKEZCXNZLYEALNDDRJWSPPAOYSNCUEGRGVTUZQRXJOETBJKMEMOVOWQLICMVQVGDAODRLYXSYWMNSHFHDGEPUFBUPBKAJZNLYLOFBJIMGJXIPGHKTNXATUYXTTLFVTKIMPICXPKGWQGKTSYZDXMEKWFWQU");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PXGDHQQSILZLHSZWFCHWACBMGNTWDFKTOIMDFFNAEOOPVWJIOEPFDMLKSGNSFDXNPMWXDGXTJBADASCXNXUMDZYIVHVHJILQYQOCTRFBDSRKNEBMQBHIYXPJYUHKXZMQIAKABWRCKOFTUVZUEVOSYKXVYISFBYQZWYNPIZJRLNKYRISRGTTBDQEAYTGUHGGRLUSJLHOXTUMEJAQEVRKPUUFOBNCVJGVTKPLMPCWAPURW");
    tmp_msg_0.feature_type = 232U;
    tmp_msg_0.rgb_red = 203U;
    tmp_msg_0.rgb_green = 165U;
    tmp_msg_0.rgb_blue = 161U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0167758226667;
    tmp_tmp_msg_0_0.lon = 0.212104701514;
    tmp_tmp_msg_0_0.alt = 0.220174920565;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.203505494724);
    msg.setSource(41706U);
    msg.setSourceEntity(105U);
    msg.setDestination(4528U);
    msg.setDestinationEntity(195U);
    msg.id.assign("YRCLNFVVCENXSMASWGOHZBSLSKVHMTZOGTRMTDQPHAHONRDBDSGUTQXYZIPRZWEPCJDVLNEQRCDOBATJLLGGWAUEHMKFFEZPSBQDQOXPCBWZKJVWCYKYKILUUDMLVFQJJNHGCJNEWIUBIUYXXITHKTNMBQTKULCADDHPPNFJKNWOERWKARLXMYOZTXYJUZXISRQGGPYIWCKEEMFSFMIVZAEJAFXSVFBWMAUIF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PJLAHXKHAFXRZKOMEURONEQUMUUVKJINEXZRKJWYTKMATHRAVLGHHOWSYSVBBWPXNUJRXU");
    tmp_msg_0.feature_type = 197U;
    tmp_msg_0.rgb_red = 142U;
    tmp_msg_0.rgb_green = 244U;
    tmp_msg_0.rgb_blue = 17U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.918318469064;
    tmp_tmp_msg_0_0.lon = 0.433225263041;
    tmp_tmp_msg_0_0.alt = 0.997679442881;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.453439201459);
    msg.setSource(51735U);
    msg.setSourceEntity(34U);
    msg.setDestination(43016U);
    msg.setDestinationEntity(227U);
    msg.id.assign("XRABWKIYHVPKBWCIPSKVSOXOMOXWXPPDXYTHHRXJKAFLBFONJPDDMJQSLCBGWAWHZQGNCGAPKEBCWJTRBIVFVZIEYMPTASZHDRUGIQYRMVUURJJGYCCWNAUUTGXKARZZYWPUVKNYZSTSLPUPEVLOKEOOQVZHOXQDQCFYFHOZJBTXFGEWEJFWUQMHJNCBQFRIMMRVYMNQKECHSLRYASFZNDKIDBOQNMDUATTLTSESIAELNEIBDLNGJLZDF");
    msg.feature_type = 27U;
    msg.rgb_red = 86U;
    msg.rgb_green = 45U;
    msg.rgb_blue = 243U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.727226111466);
    msg.setSource(48427U);
    msg.setSourceEntity(24U);
    msg.setDestination(15293U);
    msg.setDestinationEntity(55U);
    msg.id.assign("FGNLULKSTVCWOLABIJZHPMCNIONBRSUKRDRJKTDRONZGFEBQIRCYPFQVXUDETOAOUYAOUJVMAMKSUDBHYHKAEQQCIXXMGMDFCHJICSGSSVJNMKXQTIERAVQGDCKVUYHQMAAZYNWEANODBZPSEPLRIKYTEWEVET");
    msg.feature_type = 2U;
    msg.rgb_red = 147U;
    msg.rgb_green = 200U;
    msg.rgb_blue = 79U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.734239491975;
    tmp_msg_0.lon = 0.592672001887;
    tmp_msg_0.alt = 0.577210841081;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.191672213263);
    msg.setSource(20411U);
    msg.setSourceEntity(248U);
    msg.setDestination(59500U);
    msg.setDestinationEntity(199U);
    msg.id.assign("UKAWLFLKMWJZAZIGMMECHTJJTJRFQMDWZQXPKBKAOHGGUDGWGATVFMDNVSCBDEPXWBDWRCKQCZLN");
    msg.feature_type = 64U;
    msg.rgb_red = 152U;
    msg.rgb_green = 208U;
    msg.rgb_blue = 58U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.00655992993301;
    tmp_msg_0.lon = 0.455523088262;
    tmp_msg_0.alt = 0.186348225363;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.532971727644);
    msg.setSource(61901U);
    msg.setSourceEntity(107U);
    msg.setDestination(43892U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.0723683066512;
    msg.lon = 0.80185452427;
    msg.alt = 0.783651520879;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.169307631743);
    msg.setSource(20470U);
    msg.setSourceEntity(186U);
    msg.setDestination(42826U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.987329452524;
    msg.lon = 0.271089084538;
    msg.alt = 0.761109864629;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.831037345475);
    msg.setSource(7309U);
    msg.setSourceEntity(78U);
    msg.setDestination(20318U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.364841548648;
    msg.lon = 0.534227485633;
    msg.alt = 0.52295306094;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.347229699988);
    msg.setSource(7937U);
    msg.setSourceEntity(68U);
    msg.setDestination(2362U);
    msg.setDestinationEntity(88U);
    msg.type = 45U;
    msg.id.assign("AMWOXAHPEYLAQJCKXNJABWRUPDLRDYKRWYHEJETFKRJGTFWAKKEOPIUMQMVSHGDWVVZLPHPTUINCGBILDAMTLEAZGSVXDYUEWIUOCZAKNKJWARZSIGV");
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.318663213634;
    tmp_msg_0.x = 0.108378613353;
    tmp_msg_0.y = 0.545249400971;
    tmp_msg_0.z = 0.418131263093;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.882559302995);
    msg.setSource(63830U);
    msg.setSourceEntity(19U);
    msg.setDestination(39978U);
    msg.setDestinationEntity(141U);
    msg.type = 113U;
    msg.id.assign("XHLHWBDMCZCCVLOQYZNSDIHQNTUFTGUMGOZQTYRUFTOFUNKZWWJVKCYCLXYISRRFUNJTJXMKDUMBQKMEFPY");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("TMZSCPGCVOUSPLPKRTIVWTNNDTAEDGFSSNJMCQFRUXPVYD");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.621180829433);
    msg.setSource(47400U);
    msg.setSourceEntity(25U);
    msg.setDestination(24518U);
    msg.setDestinationEntity(166U);
    msg.type = 212U;
    msg.id.assign("RBDMCBWWWXUHZVYGBQAKJWYPMTIAUSIIPFLNYSZBYHMIWTFKTJGGWNFAVJEFXCKUGJKQVVZNMHZQQUJOURXWLBQRCTDSIVSHCPWEMDOULKEOYZTIUKAWFQWLUKTOLJNMISJVKGPGFEVQMASSOGLYXOXMDXRNEDFHPNHCYAPDJGFB");
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("CLYYJDAFLNOREKLESRJGWOIABGQXEFRLDFQRMMVTDGIPJIHBJUNAZDZEIPCCRYBLQHNSUTYNYPCMSMOYROKZCBOHGBSJNRXIAYARCEWWPQTVMNSAZPWLQGUEMYDANZVFGVHZTIBUSHINFXKJLGVSZXLEMHAOPAKYWHOJGDFUXTJHGHXVFBQSKCOUBVZCOW");
    tmp_msg_0.predicate.assign("KZOVKILCXXUTJZIVXYLGNHJRDUZOEULWWGETYKMNHXPLPYATJFIWTGAZZKPISXYRPLEZORMOWDMAQVHUNJPEQDZGEHLEGOBDGQJYSCAQABNMSBNXNHQ");
    tmp_msg_0.attributes.assign("NSUNJAVJDFFLICNIUMRLYXLAQYGUEACLBMPJGHLJEZZQBSVHZXHNJHUMCMMTUZOXGZWKILGYQHMMXDQWBBNMXJM");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.290771164356);
    msg.setSource(40956U);
    msg.setSourceEntity(217U);
    msg.setDestination(827U);
    msg.setDestinationEntity(230U);
    msg.localname.assign("SRUJKWZNGGMTMDWLLGEQTNFVFXNWVMHEPPNKBIDOTZYDKBMSYBYHCGFPUHJUWFYXTZCYKZKIAGTEREQOWZAZNRBDDMRAUCEQABFNJGIBCIAJVVYLXQGLEHZUKWWHPZURJNKXSXFQFICIXQDRIYGDASCYIQHGTQDTHROCMJOEPKASICYPFOKLOIUTOWQZQLMBMVXUSVR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.121969849197);
    msg.setSource(26419U);
    msg.setSourceEntity(160U);
    msg.setDestination(25734U);
    msg.setDestinationEntity(51U);
    msg.localname.assign("CSXGSBESIHLGLTPPNYIBTFIHLGGZOURFSRLE");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WOSPIGNHESZCZYGLXCZDHPJWASCRDLZVDNSQOCYHTITAPPFSDZECDFVHRL");
    tmp_msg_0.sys_type = 29U;
    tmp_msg_0.owner = 19757U;
    tmp_msg_0.lat = 0.569328241956;
    tmp_msg_0.lon = 0.916830318262;
    tmp_msg_0.height = 0.410708169137;
    tmp_msg_0.services.assign("KQXTYKCDFYYRXXENZVRBKSFBVMZIWKGVSUNVISKYDENOWMFWBHSJRKOKMLYRMNAGVDRULWSFXPUSZEGHPJKCEWZLGAWEUSLVQCLUCIJZQGOJGGUKMCFZHSIOJYTGQDURTYPYBFRDIECPVQINHYPJYBHQEBOWNXDRIIHMBATFPTAHFFVAWCWMALLTTJNMCDVXHOCTMIEXEPCLNLNOOGNRBUQZA");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.345491920312);
    msg.setSource(4717U);
    msg.setSourceEntity(16U);
    msg.setDestination(45266U);
    msg.setDestinationEntity(3U);
    msg.localname.assign("EGZCFCVIYNOQYUAZGKJSPUDBADBTJKENJKHQQBOFIWIXJPNEMOLHTRCHLVQHLXTTKJNRROGCASCQHZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.251284259381);
    msg.setSource(15597U);
    msg.setSourceEntity(49U);
    msg.setDestination(3260U);
    msg.setDestinationEntity(14U);
    msg.timeline.assign("WFWULWKWIPXUPGYTUGLTTGJLDZQKLSJXESEFYRVTZEPZVHFDBMWGCACRPCRVMBZPWIWZSZXMFOUDFNCCPQVUJCIEHLFVKTHYNJ");
    msg.predicate.assign("KIXQQWSLYHMVZF");
    msg.attributes.assign("MQKESMZCLCPETTDWWFAXJONBBDVHGAIUZAWSNUIQGLLERFAGMETPEPWUPVQQFKVMKAVFTOUOJMINSOIGHRDFAMFKLQRKXSMSBMIGWGSZHCERAIJOHWTHVCEGSYJONZLOXCSNZN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.381180983538);
    msg.setSource(41328U);
    msg.setSourceEntity(104U);
    msg.setDestination(3970U);
    msg.setDestinationEntity(204U);
    msg.timeline.assign("XBCQPRMQLZVCMSJKSPOMZQIBBRZGROOY");
    msg.predicate.assign("ATTYOMCFWSBOTNJ");
    msg.attributes.assign("SLRBPHOGWDIEKWZXAVPZLTBDLKIKAXZMJBRFXWHJSEVRNLSFOQJSJHDHIYOO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.470855151585);
    msg.setSource(5373U);
    msg.setSourceEntity(167U);
    msg.setDestination(32471U);
    msg.setDestinationEntity(1U);
    msg.timeline.assign("KBNATQWJYZFBSFVFTINBNHNOSFZYSQRZEMDRPAWIYPCIKEHPEYUATDNVXSQCLQZVIIZKCBQFLZAZTATHAEPKETDUGGFBO");
    msg.predicate.assign("DIUXROVATJYYPEJOGU");
    msg.attributes.assign("OQUBJVNTOXVUVHMABFLKAQWRXUIJUWLDIIPJHJP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.0834432987155);
    msg.setSource(12201U);
    msg.setSourceEntity(92U);
    msg.setDestination(45721U);
    msg.setDestinationEntity(195U);
    msg.command = 122U;
    msg.goal_id.assign("CWDTCKUIHUFGGVEMZKCQUXYNXKFRAPVBTOPWFXDDWQPLNJEKTUCFDQZEIVHNKSAMTQMSRRJQRKMFMDOVKDGTSBTTVSVFNWBLGGUJZQZXWJESPFDZRYQ");
    msg.goal_xml.assign("GBPWUFNBUEZJNENVWFSPVCUUTYPHRQSNUKMAQFLEZSOHFMPHIPLCKJPCMXALEFQJWMVUIVJHNJEBAUZRXQQHRXMRBKNIAYSAARJUEHTUKJOVDOGGBZKIDYGLFYYSLDEXZLCYVIOSQXXOGNVHCZIDWKMDDKVGLCAZGYWROTBMUAROGVFJYIHXFDTIHKQSHBAXLSWGPL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.340884744679);
    msg.setSource(22581U);
    msg.setSourceEntity(114U);
    msg.setDestination(24221U);
    msg.setDestinationEntity(246U);
    msg.command = 120U;
    msg.goal_id.assign("RAAFJPRDCKAJWTZBCJAIIDOBRAKNHZYHXGBUSSOVQFIMKBKZVVMHPKGWJKYSEOPCGRLYTSEVJXNDRLCXOKSXOVDWICHNOFUFALFDVFZGPWBCZEIUPGBMVAPXZDUNCSTXFQTYGAXEELXTVLZSBTUEIHQYNPMJQCYLRHPYDKZKLMPJCHWVZMGBHTJNWORUDYNWIQJFRMQMRGSQ");
    msg.goal_xml.assign("COFXHWPFSVGBERWIUISLOEOQCYMPYUKKINFASCMEDSMFPTNTPSVDZBOPGQAFXHWGKLIRVKMYRUATMTTJAZKUMRHBYQFPXKTJZJSVBGIMQVVEJNEJNVHQNSDOTXYBOUDYSIYNWGKBNUYEXMQPLLAWZZXDVBLGLHGNIQSRXWZIPRKCLQDEXUMCTOCWCVUIAUBJRUJHWFPHRAWARKVJCYMXZBGDEWZOGE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.458014591975);
    msg.setSource(8188U);
    msg.setSourceEntity(148U);
    msg.setDestination(43419U);
    msg.setDestinationEntity(196U);
    msg.command = 110U;
    msg.goal_id.assign("LSYECJJFVDXPRDSMOZDBWGRVFNLMEEMZCMCPOQLXZBGPIVNEQNJGQBOQTKETHZPOYGVWKQXQSXIOTCYXYOGUGFRUBAKUHZGFUXHBFXESWZHKMWJMHLLPNBCNCTGBQSCGCOVHEGHEKDZLJWJUDIMNRFRVAIJZPTQIRFQWAJQOULAEPTTRTUDAKYTFDMPVJYXDWWUFILAKAWYBSTSSBWXMCVLYVIACHKABVIKSRDUKDFPL");
    msg.goal_xml.assign("BMXSBZYJSZUQICVDIBWZBYIGNGZAUOTKFCRJTARYX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.598144822433);
    msg.setSource(47748U);
    msg.setSourceEntity(231U);
    msg.setDestination(1416U);
    msg.setDestinationEntity(157U);
    msg.op = 27U;
    msg.goal_id.assign("XLWSICXJELBEOSEMJFOSZQFJXBIGUWMIVXPUWNHMRRESZQYQGJGCWUAADYLQVKZBDZJYIIAOKGYDQASBNLRYZIGTNFGULGHQMDPWJCTVHBKAUKKOZGKEECUQHUBRMAOJSEYGRFDVZMFWAFLCVUNVFPDYBETNDAWXSHDTFKGXNCVQKUCMLXWRYEFPBHPOZMATIHCHPQHWODTZTPIPSJIOWZSHYTNYKTFORQRKUOMNXVLCIPDANL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AQGDUVFDYUAIJQIMDNWHILYZHUEMJKFZEXLTKKYEIUXIPEMAEGIVVYHUBDURHOGLCOYODXGZQYKVSZYZSEBSKMCLLLQNAIKXCWLIWOWQUJNBUXAHXRXTMOLRFPFPFKBUHBFPSHVMGBGCRULSCDNTPMMBFXJZNGFZINREKTYRODIJASSMEBJCLMPGGQVYFQZSWWKATHRRACEXODTTFDYTVERQZVPNTKHBZSAJWJCWDPCQPOSN");
    tmp_msg_0.predicate.assign("YTMDMBVJJGGFBSUNRIYHLJZBJGRWQZGSIPNUDNYHVPEGVTTXMVPOPWYQPIBTHHPOFPJADUKVOFDFHDCBREHIKQEQAMGXFQSMXNJWGOOLDYMAJNRZTTLDURDKOYCODURSBHMAWAKEUELJBUEARXZUQFITICLWKFPAZFAHZKULQJVFWSZTVPTZUATCKMKEMCLCXNPXYYFSIBZEKS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MMXWWHYNKWLGQHIJDDFJSCUCFANVXZPXQVLCOLGJSEAPRBYZWONAIFRTUHYIQDPHBDLCKCHMWCSXZEJZWIFBTMCLYVJRMZYOOOVFIARPXUDRLKEGNYPHJNGBRMRPIQFRJTUFOQPSMTWHNDECDSQ");
    tmp_tmp_msg_0_0.attr_type = 90U;
    tmp_tmp_msg_0_0.min.assign("CTQVIXIOMKNREFJDYAHAQHPXMNOUHGCQSZYCXJXBJEZBSMSHJBCFKUSUNHG");
    tmp_tmp_msg_0_0.max.assign("QSVSGAEHUSQQFLTJAPMYHTBIJPHGMENZVUDWXLRTXGUBZZERUOZYYWQXIIVZULKXPWDBIVHZYHKKKFWOFRHCBZXZANXIEDIKFXOVDCMNPNNQVJDSMJLIGMMDGWFSTY");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.647519497656);
    msg.setSource(14603U);
    msg.setSourceEntity(112U);
    msg.setDestination(44720U);
    msg.setDestinationEntity(254U);
    msg.op = 239U;
    msg.goal_id.assign("HDJHIBAPWDEVMWYHIOROCECSURPABTZNZVQMRPQWSKMJOTQCISOBMPLQMQMJEPOXGEEZGCTPOIARFVVBGJGUXNTOUUPDXYOMTKWLDJIC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("STWHZRHHOBYMOJWUVAWUAITRZUNLZNPEULDSINZVGSCNSILQHDEAQAECHCBFTMJXDIZVOVBGDQKTCRASZVWONPBDQ");
    tmp_msg_0.predicate.assign("WSKFODRPYXGU");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.0306439723611);
    msg.setSource(39035U);
    msg.setSourceEntity(57U);
    msg.setDestination(5U);
    msg.setDestinationEntity(11U);
    msg.op = 9U;
    msg.goal_id.assign("AHKGHIXEVOQDMFCHUJMHWDVLLRFYYCWJBKRCWQITNESCJYDAFQTZVGNLWBAGIEPWLBHLZVVDSIFOYHUSMNEBRBWJONWXBSTIKMFKNNSUTZDXGLIPOZUYKMSFEZDCMGIZQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OCLJSEOBJVZODEYYHIMGLTDPDWXHAUCROXRYICYBABZTLEGHBYPWXNIRZJUZKLDQFNXTNGYCDKYUBDAICCHHPGPFFQMVFUMGFZERLEIUWJWVEAFSVHMIOFLOHEDLZYFUKVKRQR");
    tmp_msg_0.predicate.assign("UPTJHOHSACIPLJIKBKBNRGWNOQHTKJXDKCOIZXDWBRPFTTGPQIQBNCVUAUEHOKPRRDSDJWSJEAUQLMQFTZOQYQQGICCFOVMREDNCUBZXHRSVWJARGTPQYAXVNLXVJGCIIFXFZEFUYMKTOYUJMYQPDNPURZLDISBZAHBBTTOHWXVYDISYAGGNLYNXRPAKWDMCJFHEHEVZLAFMF");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OBZFZQPCYHKOMSEVRJZYKQOFATBNUIKTSKPSETLLTWHLGVMJOZABSMWQGVPUGIQLRILCPXMSZWSXKJVDGCVIAGMXCAVLUFLGMWLMNXRJNIZYEOROSSRCYZOHCIEYHWJYUUBYEFPIKBNHKICJFQBAMQFOUUXJMXDSPTTRVRSGDHBEWCADDLRHXQCAWUWKJQGXBGTNREKMATNBJZPHQIJYNPTDYZAONVDOUIKCDDP");
    tmp_tmp_msg_0_0.attr_type = 127U;
    tmp_tmp_msg_0_0.min.assign("UCHWYVFOMMPQEBUZYTOSTASMFFQNBGNFTWDKEOMAKGASCNQYUAXRVSEPNXWWEHQDPTLGSYMKLKNSJITXZHREDHILZYFHEPLAMPAGNMKDNOORIEBHLUQQCCBJBPWJQIOCNNXDYHXEXGARDOFCUCYC");
    tmp_tmp_msg_0_0.max.assign("FMPPEOJKCHQYUKRBUSAWHGPSGKHQQOBDGYEDUTDOIXVVXUPGILZUZYCNJWRFHRUMFITBRTIYHATCGQRJQOJ");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.636138375798);
    msg.setSource(49085U);
    msg.setSourceEntity(215U);
    msg.setDestination(62027U);
    msg.setDestinationEntity(207U);
    msg.name.assign("LHVFAEJAQSHFYMUGHDWINVOYYLWWOTFRGPWNNVDXMPVVQFXUINHJEOBGQBNALCHOTPXGJZVQCDDCHTKIAMCWTFGUAYHPMFYCVGJGBQERY");
    msg.attr_type = 129U;
    msg.min.assign("DCTTRJIRNOSFIEQWLOGJFXTQCWLURGYVOBDZNSZZNECPMZKYBSIHOBAURRKEVTXBFLLAMYUTMPNRJWBCTUGXQOBGIBPTYFDWZTUTIEZYMF");
    msg.max.assign("XSZUSXFTZCPIEKMNNYTSXFWXCNABVEAPCMSBHMLFDBJIELWBMMLXADSRNDSZVJALEPLYVGYGOWUUTGQVYRZZKGAXEMBEKYZXGQGUFPONRJOCMVKHQOTIFBOVHHJZLJRDSNORHQIFHAPFPWSTTQCVLOARDWJSRRWDQXMYIJUHQBGAAWJFSYVTCYLKUHJGQPBWKKGNZMIOITXCUIBUEKPUOYEPFUQCYECNHPIGKVTQDFLLRRWMNZK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.837926980265);
    msg.setSource(57747U);
    msg.setSourceEntity(133U);
    msg.setDestination(1202U);
    msg.setDestinationEntity(220U);
    msg.name.assign("FDUTIWACPGQFKYCSPINMFOHBFGUVDCQVXWWOIVECBKZTLHRRDLWNBTMSXGABJQHNMXKWCIUMKZQMUHOFHQAATHZOLZDEDTTVRTWKCDPAOKLHYZVXEQRASVCMPPZFLUWDBLEUCGGLBAXNRLXKCWODUMKJDHAJJRBAVUOUEPHGEZNYJTINGPUVRSSYXOFZGJXWFPPYKZE");
    msg.attr_type = 25U;
    msg.min.assign("BVSOGJSGXUJQLNWMCKWLKKUKXEBBBUXSAVNEANLKWLYHX");
    msg.max.assign("RIWUOKSGMOJCEXHXDFBCEMRQLEIWCMUABGNEYR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.614221414955);
    msg.setSource(8017U);
    msg.setSourceEntity(179U);
    msg.setDestination(27108U);
    msg.setDestinationEntity(9U);
    msg.name.assign("QZFUVXDZRYANHFCPTJ");
    msg.attr_type = 163U;
    msg.min.assign("EIWTWQCUCUNZIYTTZJIDWCOTSBMOUBBNJVPEROXSULNKFCLOCCJVOWYUBNPQTYQWPNROPEDHTUOAZKMVEEHAYMNMULIBBHAAXCGHDDZGVYLXVEYGHKAMMTJHSDBDJXSVNHPWWSGIYKRFBDIKQDFNYVIZF");
    msg.max.assign("GULJSAVLBHNWNONPCAWQVAQYBEOKTYFTSVMVQRUGMBZISVPCJBIVUKENWZFOMDMOCDWQYSGHKKZXCTUERKVYQIYEGBFOXKDGZDQYXBZWHRMPFKUQLAGFAYLQINKPGYVULZSTHCKJRRZWXJXVHIXLLUASWJXSHUITIFBKEILTLMFFMQIDMSJHPOABETPF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.961020773619);
    msg.setSource(65440U);
    msg.setSourceEntity(174U);
    msg.setDestination(28952U);
    msg.setDestinationEntity(210U);
    msg.timeline.assign("LOHRPDAXPYLWNNWTKMMRSPWBZFVLHDZOIKNYSKRZRUJQNQWSQKPCGFAOIRHBWQIKTZIVRGYGLTVHIKOWFVVXRGSOECGZAJVVKEXZLJHTQMUPYDLCXZDPBCMVECOWTDZKXUHJXCOZNDPFDSYJUGPIFFBNMUEXYTEYBCNOASANYEUEFDIHFQQEVGFRFPXNKVBMACPYBBLUIBHSAMIEDNQM");
    msg.predicate.assign("BPJBGSQRHXEXTTPLOGNPCBJBAXAQSSGXFNBFFFEHIPWBTWRVINJROKDVUZULYLEYYYOMJBWSRURNQQICSKNFFGYZWBHSTWMZNSUZQIGLAMGKYSJB");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("BEQLRRQFUGXKJWJGENNAYBEXNBYBAYSSASHWTFZWFEDPXMEAVBYLVUFOOSZJLDAWJQKGZECHRSZKMOHFCXRTQVHFDNLPSGPMLGGEFNUMIZGYVXRYIICOCBKGQVPLPFCIDTZD");
    tmp_msg_0.attr_type = 237U;
    tmp_msg_0.min.assign("SKIMAGDZGADRJOJS");
    tmp_msg_0.max.assign("LCHYQYIHNDYBCWLRNGNANDMYGOJMFETBXUJVZKITKSAMKGHPFGMGUITSGNXVLBJZNLADFERRCUUIZJLSORPJCWYJBZOWZZHPVJATQRBMHFRNWDBHOLNLHAZUV");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.178143872674);
    msg.setSource(39410U);
    msg.setSourceEntity(140U);
    msg.setDestination(46507U);
    msg.setDestinationEntity(233U);
    msg.timeline.assign("MOCZOGOAEGTHXKTKSGDLPVHCPELTIRFFMTIEYSLLVXAMQONXVNXZWBCFAUHSNAMEIXHFLICZJUXBEXNMRPZBJUJEGCRGWIJENBNSYVCQZKDIBVUI");
    msg.predicate.assign("AHMFNRMZKYDWJABJGBSRVOUGBIPEZLGXFREENAJKGILSTOPLMLYHNRNUUFSEPDQFHOGLVEBSTPJOQULWPHMZZEGXNFVEVCUFXWLPXFHLMQXJJNWUSLUTBDMBHGZSDUILNEQIKGKMKIPSYTRPXPYVTDIXCWIZUMOZOYICHNTSXTVGAJFRBROHSCHPIQBZVQWQKTODMNCAYQVJCJUXDMRKBAYDATBHROFSWAYFTINCQDQWZRCAWKCEEYGJVKVWO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("CGNYFXKWEBBIMUKERWOKQDEXIHPJHBQXGVOGAZSUYMXRMPAMLHQQXDEVQVWYPENHUODJTIEXFVTSRFPFANUIDKNFNHWJCHJYZWCZZTPSTXOLONRJ");
    tmp_msg_0.attr_type = 218U;
    tmp_msg_0.min.assign("XDIBJEGTEBMDPSKMPWAQZDDIRIUPTHJCVKWNHYGNZHQHLXLLQTZTBPFSLSSXBULDVQCLVLAJAPLNQZONMUYVMFNPDXVYUVYKTXQNORIXZUWUU");
    tmp_msg_0.max.assign("JWAHNUXPMMZRAQZTCCNZGELVOBZXVYIHEQROGQEXOBNDPGLKSCJHYYOURKHINWADPFDRVDKJUPFZDULIFSFARSMKFTPEFGXIFIPWILENOCURNRAFBMNQFQJWVWIGYGZBHXYHEOAHWVHMCDRSTNHOCQXLKPUWZBTMYMMYGHOYKJLTALWESXTJLAALSCJKTUBPXUDZEPCUVMTVPRTGVSSMJQQ");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.600621505336);
    msg.setSource(18488U);
    msg.setSourceEntity(216U);
    msg.setDestination(64343U);
    msg.setDestinationEntity(182U);
    msg.timeline.assign("FAMLQLXIXALJVTLNDCQGVYYSUNIBYKUEXYNDWDDPHDNTVKMZBAOFCEQTVWKQXEFFFTIECKIOZMHCFXOLEWSQRSRVNOOHKX");
    msg.predicate.assign("FOTWDHRKNPCNFQRNTOHYUKMFVYMSWXEKSZURTWCFCAKLXAOPUVPTBGBMCPMSWAEGFTDBAIUJCPSBLGYJYHQIIJZARLETEBLVXEIADWQOARRAMGKWJWUSMKYUSWKQMBHEGHVYZEZDINHNOXODEPEJYDHKHFMTQLFIULRXOTLMCQRZNVSRJLQHEKYNRZPZQLGXCAGI");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("AYKOPKDXYBFJHTZBSEXPHDDLQLUENXSKMTLCVUIYEYNJQRTVQRTBZRUPCIBGWVIGZURMNIOIYUUPWXFKTEZNFDHSEGCSPOAIPNMWJKOQUJCZCHQRAJKKABDKVHEHJFTMEWYLIMGMWAPSGVNNJAUPFAZQAYTDDWZHFCXEZSRHLZOOCGROIFQVLCUTPLVXBKWBGGVVSUNGGJXQIJWHDWBZRRXHMEOFSOLRXOPJDEWTFQMTACVY");
    tmp_msg_0.attr_type = 5U;
    tmp_msg_0.min.assign("TXPJNWPORDRRHUJJPMGHNKIRLGXKCAUWXAIPYNIGHCOZZVKWFIEQLSETWCTPXRXBOSXWOZBSSFDLLGRCMKMNDZNWTHEZAXAUZUCVEZQKSSCQFKBYXHBEOMOOEYGZEAJYJJQUDFCDGMAFVUOZFVXQJDFSCTBNSBEPVRNUCIDKIIMJOTRABDAYKLMGJMGNIVALFQHXQVULLUPOWATGNMUYKTHBBIFTHZVCSDRLYWQQTJRMLYPGEESHQPDNKBVFHP");
    tmp_msg_0.max.assign("UJOTMIVUKETJIYSDUKWVPHBPNLDMCGALIMNWQZMNTRGMRBIZWDYOXGLUIFZBEZHPREDVTFEEVGHCOWP");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.67250349914);
    msg.setSource(868U);
    msg.setSourceEntity(250U);
    msg.setDestination(23490U);
    msg.setDestinationEntity(140U);
    msg.reactor.assign("DHFDDJAFGNTDNFYSLYEZZBEYZLHCSINQHSXLZJGHVTMWCPDMNAYJQVQKJFXGMBVWPWBWCQKERKLOFXHHPSVFDLIPNXOTXEIIMBKSQCULLGOOKIZQACKEWOWOJKBRQKKCTJXU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PFMKKDPGXYBBHZEDPCBRFLJDVNNWUYEBJHNEGWVMRKRTLZJFJMWGCPVLUHRYVTGXATLKUBUKASLUANVEISOZOSGZFZIDUQPVVFYALKHCPNYPGJDONQXGXPGQHSNRUYJNUEQOOWOWMQSTHJSKMRNFXRYKEEFJDEXZBZQSVQVXIKXZLGMJSANXSYZOWQIHJCQDLTCAIABFCUUOTWPBRMFDYTTVBAYAFEQIDLCWZCAORITIWRHMOLKCIDS");
    tmp_msg_0.predicate.assign("YYRAJEPGDIKJHSEQXEKDODVEEDOQGONJSCUBUKFWGLTIDXYWGROCLDVCDRSRIQWXMNUMPVDAFHFG");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TVJYXZMLZHCGBZHYWREMASA");
    tmp_tmp_msg_0_0.attr_type = 248U;
    tmp_tmp_msg_0_0.min.assign("NBIVYMQSAKGZPKHTPDXUVKUJDJIREPPLCRCLNZBRIHVLQHUTMYHQOIBBPRZFJWZHCEOBZJSGTGRISMZBGJUNNWGTAJEWSXOLZGKKYUQVUXZJYAFEXNVEKSCFVPVFZWATSPOWWQFJTATKDCGUDVLEOXQYONHCJX");
    tmp_tmp_msg_0_0.max.assign("MBYEUKHOEBAJLKYIMJVRSLBOJOGDAJWRZJXIHPGLKDFC");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.316698183356);
    msg.setSource(29731U);
    msg.setSourceEntity(231U);
    msg.setDestination(38522U);
    msg.setDestinationEntity(178U);
    msg.reactor.assign("ZUCWCGAQMFYNXHKCTBPXKIVZSIVFWTZCPCCYAAR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.854424007709);
    msg.setSource(23154U);
    msg.setSourceEntity(226U);
    msg.setDestination(38141U);
    msg.setDestinationEntity(122U);
    msg.reactor.assign("THQJUGHRJWYFZLCWTRXMOIAVVNYUDWYLXWYIGAUTRZZEPLAQROWMORLJOMBMOJMZLGUIXNNMVXGBPURDESFCCXQLBQISDOMSEATEUSZEOFKFQDCUVRNPMEHVRJINFKWTQGXRKQKWLKCEHWJZKLVBWSUHHYHQVXAEYJOFJYPSDZDQZTNKJENXVPPUBLVIUTTKHBJYNGQAPNA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MQOXNDZAWLBTMBEKPPKNVJJGRQYWJKXTPIMALQPTMNZOIGWWDSRLPBYGCKXAGYNACENVOVQRBMZJNQDXLLKFYLMMOBBIRHHDJCWUYFVYJDBKIEGCQEQBRHUIDBFNYQZHTIVYJUCDOKIZUCHFVIED");
    tmp_msg_0.predicate.assign("RLFCGFIDEQMOUBWMUEZSPGKVBPVXPEVQRTZVOSDAKSRRLRDVFQFXTBSYDEXXKOQOGINIJMHMXJYLRMKHJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QPSJFUMYHUEHEJSQZGBCKWNAZOQWAGLAKHYRLWDCCNSSZGMZRYFTEPHNMHMJQCKMBBFTLWIITWDNIZM");
    tmp_tmp_msg_0_0.attr_type = 64U;
    tmp_tmp_msg_0_0.min.assign("MWIQOJBNRLSXOGZNVJZKXZDUIVWTIQQEEOFGJUEOEBSXCGSBYUPRADPOIQCDFFVUZDLFAAOKBLYMUCZYLAURTZKHXKRHDQFNWFZWXIXCPEBKINSKFPCOIIBCVJEHQYCSUBXTAVTUKZTHPKRQFSYVGLLJMUOEONRVPSAEBMHJDMPGKKTHCXBLRDIGMDAYVNRHTPQYOYMUVESWTGNQCAHGYWZRJCL");
    tmp_tmp_msg_0_0.max.assign("TPUYNNDORYDVMSUOAYPUONOJFFYORFMADFKNDDBCDWKHERUNWDZVJKEGCXALPSXABSHOBHYJXTUXLVBALCIFEDPMLANBUFGETGKPQJHHZJEQNCQNSEREIZKRISVQWPCCVMGXVIQKRDPJAWMZXIHETKSITUOBNSXQLGZIRKRMFESUQZAJLQXUGYMFRCFLBYJFTQCH");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VideoData msg;
    msg.setTimeStamp(0.93977664685);
    msg.setSource(47333U);
    msg.setSourceEntity(22U);
    msg.setDestination(48081U);
    msg.setDestinationEntity(113U);
    msg.id = 102U;
    msg.width = 3688U;
    msg.height = 7057U;
    msg.widthstep = 63058U;
    msg.channels = 10U;
    msg.depth = 112U;
    msg.finaldata = 18U;
    const char tmp_msg_0[] = {-74, -114, -98, -88, -46, -33, 123, 63, -68, -105, 71, -123, 63, 54, -49, -122, -104, -96, 22, -107, 39, 88, 91, -117, 115, 66, 77, 22, 56, -27, -4, -76, -80, -2, -88, 117, -99, 100, 53, 96, -93, 126, -3, -64, -9, 75, 63, -128, 86, -114, -14, 84, -89, 25, -23, 32, 125, 43, -110, 5, 98, 91, 73, -51, 57, -91, -41, 15, -118, 61, 71, 95, 72, -65, 47, -23, 42, -17, 5, -29, 107, 23, 111, 97, 109, 20, 64, 104, 107, 95, -104, -63, -20, 56, 37, -44, -63, 28, -44, -66, 29, -34, -37, -43, -73, -60, 6, -127, 121, 72, 97, -100, -26, -81};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VideoData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VideoData msg;
    msg.setTimeStamp(0.11287066036);
    msg.setSource(38204U);
    msg.setSourceEntity(124U);
    msg.setDestination(42502U);
    msg.setDestinationEntity(70U);
    msg.id = 237U;
    msg.width = 22999U;
    msg.height = 301U;
    msg.widthstep = 22870U;
    msg.channels = 119U;
    msg.depth = 173U;
    msg.finaldata = 233U;
    const char tmp_msg_0[] = {-98, -109, -8, -2, 78, 70, -28, -33, 22, 69, 12, 44, 38, 52, 66, 74, 105, 37, 3, -11, 45, 100, 110, 68, -123, 52, -32, 36, -62, 47, 60, 114, 99, -127, -12, 18, -27, -5, -38, 123, 123, 13, 126, -68, 104, -23, 124, -108, -9, 72, -42, -77, -96, -112, -117, 13, 6, 92, -8, 108, -1, 34, -26, 51, 123, 94, 117, -89, 17, -10, -52, 85, -50, -126, -7, 21, 61, 6, 51, -53, -75, -53, 96, 115, -10, -93, 71, 47, 39, -83, 69, -16, 90, 23, -13, 112, -30, 117, -72, -13, -93, -9, 126, 50, -72, -51, -84, -34, -122, -127, -25, -99, 72, -39, 69, -114, 87, 103, -38, -37, 108, -110, 37, 100, -83, 92, 32, 36, -9, -47, 118, -5, 51, 28, -127, 79, -59, 86, 88, -79, -40, -94, -103, -78, 116, 91, 34, -23, -98, -37, 102, 6, 58, 52, -82, -118, 4, 35, -82, 33, 35, -57, -110, 55, -74, -110, 118, -91, -105, -89, 2, -118, 18, 97, -88, -51, 94, -6, -60, -10, -40, 85, -88, 20, -24, 29, 52, -47, 53, 86, 28, 68, 30, -100, 20, 27, 7, -2, -105, 24};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VideoData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VideoData msg;
    msg.setTimeStamp(0.874753276001);
    msg.setSource(7585U);
    msg.setSourceEntity(210U);
    msg.setDestination(64735U);
    msg.setDestinationEntity(194U);
    msg.id = 242U;
    msg.width = 39786U;
    msg.height = 14099U;
    msg.widthstep = 36667U;
    msg.channels = 237U;
    msg.depth = 90U;
    msg.finaldata = 123U;
    const char tmp_msg_0[] = {118, 117, 84, -24, 85, -73, 109, 88, 122, -28, -25, -77, -76, -17, -66, 48, 12, 33, -107, 17, -80, -126, -45, -16, -80, 16, 115, 115, -6, 12, -113, -14, -33, -61, 68, 72, 30, -74, 80, -56, 63, -88, -128, 55, -17, 42, 104, -3, 26, 82, -108, -117, -70, 90, -113, 9, 85, 85, -89, -41, -8, 43, 53, -38, -76, -70, 124, 93, -110, 1, -78, -31, -93, -22, 7, -9, -101, 95, -30, 116, -75, -15, -99, -51, 15, 120, -37, 4, 126, -20, -19, 90, -59, -52, -47, 90, 8, -74, 65, -127, 89, -14, -21, -78, -44, 37, 59, -124, -110, -75, 9, -75, 60, 7, 58, -31, -121, -93, -20, 34, 79, -69, -27, 29, 121, -47, -100, 50, -93, 11, 37, -91, 28, 125, 0, -55, 42, 45, -76, -42, 9, 89, -1, -80, -104, 120, 23, 38, 26, -112, -3, -105, -35, 36, 41, -111, 113, -44, 38, 113, -12, -101, -18, 43, -18, -16, 29, 17, 90, 1, 92, -128, 97, -88, 77, -115, -63, -112, -37, 50, -18, 122, 72, 24, -51, -126, -29, -18, 36, -51, 12, -38, 40};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VideoData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RawImage msg;
    msg.setTimeStamp(0.400196621838);
    msg.setSource(48826U);
    msg.setSourceEntity(241U);
    msg.setDestination(34923U);
    msg.setDestinationEntity(128U);
    msg.width = 12094U;
    msg.height = 15444U;
    msg.channels = 186U;
    msg.depth = 231U;
    const char tmp_msg_0[] = {-15, -78, 115, 50, 12, 31, -99, -9, -20, -89, -101, 93, 5, -7, 24, -111, 70, 76, 60, -46, 56, -56, 48, 75, 118, -91, 51, -126, 50, -7, 45, -35, -10, -89, -50, -70, -64, -91, -56, -120, 93, -12, 74, 49, -22, -74, -119, -68, -68, 10, 25, -93, 3, -124, 98, -89, -77, -81, -109, 2, -119, -80, -62, 52, 76, -68, 4, -123, -119, 62, 29, -13, -32, -79, -92, -74, 22, 38, 24, -53, 85, -25, 44, -114, -90, -6, -73, 62, 4, -25, 43, -85, -108, 117, -63, -46, 2, -86, -20, -124, -108, 122, 86, 61, 31, -15, 66, -105, -7, -37, -43, -33, 92, -71, -14, 87, 59, -67, -49, 83, -94, 90, -71, 109, -35, 34, 17, 57, -51, 17, 30, -83, -74, 49, -125, -36, 120, 101, -88, -115, 74, 18, 29, 125, 40, 1, -69, -79, -43, -25, 111, -92, 1, 70, 107, 33, 99, -15, 30, -108, -63, 42, 62, 13, 0, -57, 95, 50, -47, 125, -72, -106, -36};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RawImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RawImage msg;
    msg.setTimeStamp(0.728912823259);
    msg.setSource(35136U);
    msg.setSourceEntity(199U);
    msg.setDestination(6232U);
    msg.setDestinationEntity(78U);
    msg.width = 20378U;
    msg.height = 3567U;
    msg.channels = 166U;
    msg.depth = 62U;
    const char tmp_msg_0[] = {-28, -124, -71, -30, 96, 67, -112, -91, -66, 37, 33, 23, -39, 42, 24, -43, 100, 6, 76, -117, 97, -85, 120, -5, -52, -8, -15, 51, -12, 88, -98, -77, -6, 62, -122, -119, -3, -27, -33, 44, -56, -17, -17, -27, 110, 75, -10, -5, 69, 63, 107, -89, -109, 118, -96, 59, 65, -108, 91, -114, -106, -96, -121, -33, -73, -62, 62, -113, 88, 117, 77, -53, 58, 72, 99, -103, 113, 101, 95, 26, -102, -96, -6, 80, 82, -36, -93, -40, 31, -29, -10, 13, -128, 78, -95, -128};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RawImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RawImage msg;
    msg.setTimeStamp(0.201471977467);
    msg.setSource(39259U);
    msg.setSourceEntity(81U);
    msg.setDestination(63306U);
    msg.setDestinationEntity(114U);
    msg.width = 7226U;
    msg.height = 40545U;
    msg.channels = 124U;
    msg.depth = 168U;
    const char tmp_msg_0[] = {-116, 47, -98, 111, 73, -11, 105, 125, -37, -32, -79, -45, -110, -80, 4, -14, 61, 70, -45, 23, 3, 27, 61, -96, -64, 10, -27, -4, -104, -112, -54, 118, -101, 87, 100, 123, 15, -115, -85, -59, 16, 31, 88, -128, 2, 68, 102, 78, -76, 61, -125, 30, -37, 14, 66, 91, 24, 14, 42, 57, -60, 64, -11, -49, 111, -20, -71, 46, -49, 7, -120, 64, 20, 116, 20, -70, -53, -66, -110, -47, -11, 66, -16, 106, -96, -116};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RawImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.333775573783);
    msg.setSource(34400U);
    msg.setSourceEntity(65U);
    msg.setDestination(26285U);
    msg.setDestinationEntity(112U);
    msg.frameid = 22U;
    const char tmp_msg_0[] = {-22, 72, -50, -55, -121, -72, 73, -118, 72, -111, -70, -94, 84, -82, 78, -124, -91, -76, -96, 106, 37, 42, 80, 94, -64, 83, -68, -90, 30, -104, 32, -20, 124, -78, -37, -31, 112, -85, 79, 121, 28, -113, -96, -41, 95, -49, 20, -8, 25, -22, 62, 17, 51, -121, 14, 40, 87, -49, -12, 2, 100, -109, -115, 15, -81, -99, 97, -86, -63, 62, -27, 25, -121, 104, 32, 4, 116, -19, -19, 122, -63, -15, -93, -89, -64, -88, -21, 55, -11, 112, -47, 11, -74, -57, 62, -7, 43, -59, 118, 19, -123, 39, 59, -122, 115, -28, -44, 81};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.245407817192);
    msg.setSource(13604U);
    msg.setSourceEntity(232U);
    msg.setDestination(52967U);
    msg.setDestinationEntity(47U);
    msg.frameid = 18U;
    const char tmp_msg_0[] = {-18, -30, -115, -50, 18, 109, 64, -4, -93, 18, 1, 57, -81, -64, -12, -64, -124, 90, -20, -81, -72, -27, -11, -101, 24, -38, 52, 110, -28, 30, -4, 51, -44, -128, 89, -89, 72, -36, 55, -108, -37, -44, -72, -114, -50, 21, 26, -120, -26, 96, -125, -67, 35};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.063993849825);
    msg.setSource(35804U);
    msg.setSourceEntity(79U);
    msg.setDestination(56553U);
    msg.setDestinationEntity(105U);
    msg.frameid = 231U;
    const char tmp_msg_0[] = {65, 21, -128, -91, -95, -120, 9, -94, 21, -89, -85, -89, -53, 23, -73, -100, 41, 76, 120, 104, 56, -10, 43, -103, -124, 123, -22, 18};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.24975802091);
    msg.setSource(41455U);
    msg.setSourceEntity(189U);
    msg.setDestination(6549U);
    msg.setDestinationEntity(153U);
    msg.fps = 136U;
    msg.quality = 48U;
    msg.reps = 214U;
    msg.tsize = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.974491903659);
    msg.setSource(42370U);
    msg.setSourceEntity(7U);
    msg.setDestination(26683U);
    msg.setDestinationEntity(24U);
    msg.fps = 37U;
    msg.quality = 219U;
    msg.reps = 114U;
    msg.tsize = 127U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.708669680464);
    msg.setSource(48636U);
    msg.setSourceEntity(150U);
    msg.setDestination(12724U);
    msg.setDestinationEntity(172U);
    msg.fps = 246U;
    msg.quality = 168U;
    msg.reps = 101U;
    msg.tsize = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.618158074523);
    msg.setSource(48358U);
    msg.setSourceEntity(12U);
    msg.setDestination(6371U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.487758648898;
    msg.lon = 0.867333504412;
    msg.depth = 24U;
    msg.speed = 0.957537237291;
    msg.psi = 0.839120634389;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.857910827327);
    msg.setSource(32745U);
    msg.setSourceEntity(239U);
    msg.setDestination(25366U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.926533447414;
    msg.lon = 0.3702707589;
    msg.depth = 131U;
    msg.speed = 0.625428758553;
    msg.psi = 0.421722336799;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.274332370939);
    msg.setSource(39980U);
    msg.setSourceEntity(166U);
    msg.setDestination(1540U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.327679395435;
    msg.lon = 0.399177145071;
    msg.depth = 229U;
    msg.speed = 0.118910139694;
    msg.psi = 0.356947053119;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.215107620282);
    msg.setSource(38232U);
    msg.setSourceEntity(159U);
    msg.setDestination(43729U);
    msg.setDestinationEntity(163U);
    msg.label.assign("WHPJRIKMNZRHPILTEYVTRIIOVXQUFFCYRWTVSNMVIMDQCOEZCQRHNZEUTBSHASEKVBKXHFFRKAQDSYEKOPSNPLCBJZCJVWVTRINMPWYCUMNPJXYTAAMSIGKLLWRDHKUAEMRSFLGNZRUQHLODELWXYUXCQXQGVIHXYBGGPGEBKIKQWFLBGAGQBZBJWKFDAQHXJZXPYFTOWTCEANA");
    msg.lat = 0.681200825094;
    msg.lon = 0.788428061664;
    msg.z = 0.0137981275994;
    msg.z_units = 126U;
    msg.cog = 0.680175667566;
    msg.sog = 0.756990198042;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.921357715349);
    msg.setSource(32972U);
    msg.setSourceEntity(207U);
    msg.setDestination(47011U);
    msg.setDestinationEntity(47U);
    msg.label.assign("BBOWAERROFDFSJDLCHDTIPUTXUUWIPPJEXZCSLSNQPYJAPNXIQHOYIVWDYNWKVWVHBRDQATHMALCMWUOCXFVTHDVNAAOHXACVMJYBSKOGKLZ");
    msg.lat = 0.0992990912;
    msg.lon = 0.0838008165996;
    msg.z = 0.193576342131;
    msg.z_units = 177U;
    msg.cog = 0.621193349756;
    msg.sog = 0.556652644828;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.717506562978);
    msg.setSource(15803U);
    msg.setSourceEntity(165U);
    msg.setDestination(34606U);
    msg.setDestinationEntity(177U);
    msg.label.assign("RETBFPIFBXRBUUIRPIYPHMKFTFCQVWPZUSZZBQMMBZGJQPROWA");
    msg.lat = 0.951753540317;
    msg.lon = 0.876773167607;
    msg.z = 0.250037526129;
    msg.z_units = 244U;
    msg.cog = 0.89621794836;
    msg.sog = 0.865715644397;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.0698267753791);
    msg.setSource(60661U);
    msg.setSourceEntity(149U);
    msg.setDestination(51257U);
    msg.setDestinationEntity(219U);
    msg.name.assign("RCKWDSJRZPULONBLBFRJWGBNUXFRFBEHKAVBTVMONDFWAOJKHVZHWYTBXXNMZRVYTIHJQFZDKNBZIFTQXSFREHMKCDLOZZUKYPJMLPDUILMGRWQQCFFPDUAZOTXSMTDWBVSPAVXLPKNGUKCPNMEDOPCYCYGNJIICWAVQAQEOHTRSYUGAQSTQUUMOQESXNMSIPOERSCBYGAJGFYGWZPJXGXKHCYWLGXWKMIHTVJEOB");
    msg.value.assign("NVGHXSQTGHUNIKRDCNMMFESSMEDZADRJKUCGYMSBFYLORDLKHESVPHLKTHHFBPACVANPOFQPZUEUBZJNGLZFUMBCGZYDETHGYXWAGMJVVFHKRXTXJAFZUWOCAMWCBWEXNQOWUIDLEKQIODQUIZBZPKNIPTPCPAVLTCPIOSILRNGPYDVDRDRLRSKQZOUXBJIANWVJGSJLMQXXCTVBAIJBIUXMWGFMTSTYKJYQZYSYXOFTEVQY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.739093207536);
    msg.setSource(15756U);
    msg.setSourceEntity(169U);
    msg.setDestination(37727U);
    msg.setDestinationEntity(195U);
    msg.name.assign("UPIXVCMTCHUFWFMGDTDKMSUSMJFOWHENUGCCLAJFOLTZRKDEHVWVBZRDJPQFBJUCUOVWAZCDOYTTSTWTFYZPGSYSNBFHAPKWDAIMRLLEDKPTMBXXIGARKWHXBSEJVJQZNGMJJXRIGDOVFXPXRQIINQBOXGRSHILNVZNAAVEOOOUWNYBILZEACHJCGLYYJHQQSNKETFSYQB");
    msg.value.assign("AKQMREFVCJNPJZDSLBRBVCCYAPKNMXUEKEZHOZBJZTVHIXZGHZTDOIUBTQNUWPVQJWCIIIEHOHYLYNLDXSNHHCVDPBFSTMDR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.287858657213);
    msg.setSource(50664U);
    msg.setSourceEntity(174U);
    msg.setDestination(13763U);
    msg.setDestinationEntity(105U);
    msg.name.assign("FCNNFHQETRDKTHNLNEIQJOKREVDSOCATITNOZKIHPHCCCIBOWEPEJDZAKYAFZKSVL");
    msg.value.assign("OYSRIFQXUYZLWIEDTYIQAPUDCCSUVNUPERPHOORALBMNYVIVPQCWIGZANTHPKDDHLVKAUMLZMVGTKBDUVSUXQQODJVKWVNCGGSDXMYCQFFVHPYMAJNHILKAWCYXPRHWSEXFBTIEEKYSABWEZGCRSBQARJZHJGNEZPDHIGDHIKXWNBLMFOHXJBJTCFPDZK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.822508623661);
    msg.setSource(49240U);
    msg.setSourceEntity(148U);
    msg.setDestination(3868U);
    msg.setDestinationEntity(28U);
    msg.name.assign("RHDIRKQFKFROCHIVCUOFGLAHXVOX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.343477978004);
    msg.setSource(65405U);
    msg.setSourceEntity(133U);
    msg.setDestination(42997U);
    msg.setDestinationEntity(156U);
    msg.name.assign("TATXTSUWAVYLTMKXAPZDXIZGHWGIWCFJFYCENGHXIKJGRSHIEITORKBNDCYSUCOWWPFNBSYLANFKJZPCSSPNUYEMMPBVLXHPQHHFVGNRIAKBBVFDXIDXRKGBJTRCBENDDZOUASHRVZJJNTEUPVQQZKMLFRCJPXCZSFSTQHPAOGUGOIMQEXOBUDKVMSLAKUROMNCI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KHEAMJBILKEDZRFDKBKCMFBLXOQJFBQHPAFGSXSCNYCEMHXYYGEOXIFQWUNNUJMQPXVNIBMDFOWVWZWEULOFDWNWACXFNGZEGOOYKTVGICIPDPHWPWCVLZUVOYISMYTMHTYTCZITLCDQRJWBRDBEXUSRYGBOPRKZHTXVRVGGTUURHKLEHOZIJSKXPDKJAQXNPCMCSOFAVLVERANLQANUEQVJLZM");
    tmp_msg_0.value.assign("BSPONHRHOPUHXKNXPXZTPTYTGLPUB");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.83930525173);
    msg.setSource(21189U);
    msg.setSourceEntity(197U);
    msg.setDestination(62228U);
    msg.setDestinationEntity(33U);
    msg.name.assign("PUUGCTLQDBCFPXYZJAEIXNRYSVFXVVGOWKVCIFZZBTMTXZOWWFOKZCYPTCSLVKHCHSSWNITBKQLYXHURDMMGVGAFEMGDKNQDYSMQHTDHEYLKQQGEWNHAPSOKFFWSOZDXMIZNCRANVIQMUJBQKEVUXCGJITMYDELNBXNDMHJZIRRUKRNKYGHLOAYAJWMRGEJREQBRSPNHUSLITZRLUICOUIJQXPLWJCGOAXHWYEJAOB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.386824141993);
    msg.setSource(23256U);
    msg.setSourceEntity(210U);
    msg.setDestination(17636U);
    msg.setDestinationEntity(224U);
    msg.name.assign("FHIGSTIKZASPDBDGMDLFTJKQEICZKEQHOVFWCVFMOAXBIHANLOWWKLSIFKTTZJOPUMTQREDIQNPMPYIQMXPFKMCJSRAEBVSNDUDEZBCXAZCLXBGQHNGSUXWZJVTWZPOBSDMJMHAZUOLYDLXCTGBURAUYIHHQNESVJLHTDDAUONBXYEHIKWJWCMFEPRVGYUOGLSRWRBCQFGVFOUVXRLSZKVJQQXRCNZFERNGWVCRIUGJEHPWTP");
    msg.visibility.assign("XHIJHADUXNJDBCXFBCTTIMOYPSJFCJELJQHMQKMYNYIRBRPAKBMUVVIDGDZIEOMPPNSPQZMRDZUVVFKSWTUETKWAZMUOCNJYGQAWFHVGQYTTVHYXJRFNLOTJOHEEXEYBDUCBLMWBRV");
    msg.scope.assign("SMEJUOEBNTSLFMIWDBNSDAJTGJCNUZGMMYVBCWUQKHPJKSPSGJUITROETFEVKGSZWYLXDCRKCLVBGPLVLOMUGJXSYODN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.419308668722);
    msg.setSource(55155U);
    msg.setSourceEntity(150U);
    msg.setDestination(3037U);
    msg.setDestinationEntity(162U);
    msg.name.assign("JERUTZPVFKOIBNSQPSIMXZKRBANCPCXVWTLTOWURSKRWPUAQDEZBJGBJMAUNVWGKIQQDFLZSDALRUKFA");
    msg.visibility.assign("YRMOUJQZOBQVRIQBPVIFOACXSRWKNRBNUKLFIOYUBMMJXQPJFPEBXXDULCGOKIITQSDJTKVSKHTWPHROMOAELRVNDBXSEOXLVJGQUKERNRVZWDK");
    msg.scope.assign("QLKDQEMKPDUKDJXXHWZGMZXLILCSPHRLAIEXCWCNMHMMEQBMKQCDZUOIRNDWNFXYPJBTPGFKQLTHGWDR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.31978691617);
    msg.setSource(34226U);
    msg.setSourceEntity(85U);
    msg.setDestination(36444U);
    msg.setDestinationEntity(143U);
    msg.name.assign("YSDMACSKLVKZUQOFRYYESEYGSZZVKHHZAUJWKHUIUJSXUKNCTTWMSTAAVLOXLDPGQICURUUPCVLAMNVXFHBPVPRCXRFVLQQDGXKXRRGEDIRWBUBJNXRWAQNGPJCYGBZLIERQYTBOSJHJLPJHMMATKEFEWDHOBIXYTGCXLQWGJAHLPLINDHYTNWKCDGTGNXIIFNQUEEBNOAQJBVVWPMMYTOHKZZBCTWFDMECDJO");
    msg.visibility.assign("UYYMUIHNCGRWTGBMZYOLFXLNQASZMSKAFLVTKQCMOQWZHACSJJICEGHNRWULJGOSWXWTQPRLOZJAOPEDCEPXMRPYXKIPTNSCNAWDVUSBRVNENCHKNADZYOURRLUDTHMGLIPCCZSIGPFDJVFYYTTICBMOHTSUHXKZHBDAPXTEJQWUXELLREDMYEKJXFIVZQQIVIVMODSBHTXVDKHMJWFFBOAGERY");
    msg.scope.assign("BNSDODHBEFPDAFJIXCJYYUSKOXLLXPXONJUCKZSUTGZIMJWPHVMAERKQTJWGLJYXCNLUYKJOAODTHDTEGVKWLWSYBTZFAVVLQTNZSXUAZZSENERCCVDM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.780171604511);
    msg.setSource(64810U);
    msg.setSourceEntity(55U);
    msg.setDestination(54053U);
    msg.setDestinationEntity(225U);
    msg.name.assign("BHNWGYSZTCXQGKTPBHKTFRQBIRLJVUUKOTGBHICNCAACJF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IQZUKCMSJZONPDSOGAKSARRQNHLMTTYLPLYKMIMUIJZHFKKALGUEKDRYCOJQFOMEIWDTDGTJPWKYBBNAZBFBHCDDFVZOMYVHPF");
    tmp_msg_0.value.assign("GNANCEIMUZZORTSRWWZOMWCJLGRTBLVOTVGAUTKEJLIJDVQ");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.150703084131);
    msg.setSource(13733U);
    msg.setSourceEntity(183U);
    msg.setDestination(15622U);
    msg.setDestinationEntity(13U);
    msg.name.assign("JYBDXIKSLLITNXFRTJGJOGJQWMDFVVGVPWJAATVFJLHQBIKDOTQZBRCIPBQXRCOLQYEJHTACYZGSSSYWCEWNROBFDLGWCWEUHMTPPZUMILAZLNNBMPZXRUKKEVXRZLCKFDFUBNBOGEAXJSDRAGHCDDRVHEBMYAOHVHMOI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YSJWUZGBEDQFSZXDNRWSTBIURECXEFYJEFJGWLOTYHWYKNHFLFLABPVUFONPINTNSXPOHHXPTYXRJQAQUXOJJZLYZRCDMCCCEIBNODIQXAXUNNCXDLVPUROYPYDKTTBKJLLAWXQRLAIGFJQVMZEZKIGREJFBTKUNMU");
    tmp_msg_0.value.assign("GMCMXXONUKHMTWQCDLJNAKYITCGPJLZZTGSDOBVUQZCOAFWFWRJKLAEKKTXEZJCGASISYYJVDBVFNVROQMTLPYYPTSROVMMGLONPQUUWZPGYFZRPXBBJJKIUVQISOBXCBHQJUQFRNXDARCHQTPMMDKUXAFXCFJBAMZGRDSTRUSAVVH");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.7261657714);
    msg.setSource(64650U);
    msg.setSourceEntity(65U);
    msg.setDestination(54787U);
    msg.setDestinationEntity(7U);
    msg.name.assign("GVLSOCLETLQLAGCRNS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TSQVHLOPNVXAVWRERBIBXPSBNSJEHAGSGAUHKBSFSKCNMAGWFPIZDPVWAYGSYTUVBGDMMZGLVXESCKMYUHXCRQERYFETBKAFRATZRMYPTWQM");
    tmp_msg_0.value.assign("UQIMNPOSDMKAGVFVMUWDXGVWLUPYXKRMFNRCAMLDLBJRLTHHGMXOGENMTGNNZWWWFYQJQBEOWFADLEUBBHBZCDWCARLXCAHCMKGIHJGPEOUYEHXTZPKYCLNXRKEFZQLYYEABZMWQYFNPVJEPAHDJOPTYKZVZFQIBQNFTITXSDNGSUAWIXVDOSHPCRRCUUJQBJXBIPTSRKVDSSKGZRQHYIWHIZOYTO");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.742297651727);
    msg.setSource(56198U);
    msg.setSourceEntity(221U);
    msg.setDestination(49421U);
    msg.setDestinationEntity(212U);
    msg.name.assign("VJUKDVRULVJQGOASTMMNLHNZRBIMAOGUTOOESZFBMAREJBUNTZQFQVIKSIVJEQBSYCZBFYUEZMWTMJVHXBCSMKSWHGHGZONVINIYMWZYUJTRDXHQLKEMNBKLAJLXSTWFOCZJPMWOPYIQBWKBVJTUQUVTYZHOCBAINXPXKXLDWJNGLRFQOAIAWDDXFQFSDUAPPGSCHTLKPYEPCIFLVDUWYFYRPEYOCRPGCHEZSHNAXDIGXHRXNETKEFKRQLCADR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.699014623842);
    msg.setSource(39316U);
    msg.setSourceEntity(50U);
    msg.setDestination(58490U);
    msg.setDestinationEntity(58U);
    msg.name.assign("UKORZWDERPJFPBQBOPFTLVIVPUQIGAUNHARHKSBQJQQYJLEVKMOPRGDWMEXJFBPVNSFPUOL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.741582450831);
    msg.setSource(29115U);
    msg.setSourceEntity(249U);
    msg.setDestination(28446U);
    msg.setDestinationEntity(93U);
    msg.name.assign("UFHNWRAIUWWXDYAGAFKREDGAXZFUZLVSAZGNKZRHBZXLJTHJQOB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.859844092949);
    msg.setSource(18335U);
    msg.setSourceEntity(39U);
    msg.setDestination(49948U);
    msg.setDestinationEntity(40U);
    msg.timeout = 2175959439U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.968992380271);
    msg.setSource(12013U);
    msg.setSourceEntity(229U);
    msg.setDestination(45673U);
    msg.setDestinationEntity(56U);
    msg.timeout = 2801192314U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.618903260304);
    msg.setSource(55926U);
    msg.setSourceEntity(130U);
    msg.setDestination(2277U);
    msg.setDestinationEntity(211U);
    msg.timeout = 185950772U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.0701971105974);
    msg.setSource(61881U);
    msg.setSourceEntity(123U);
    msg.setDestination(64940U);
    msg.setDestinationEntity(33U);
    msg.sessid = 24634290U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.505854511369);
    msg.setSource(64017U);
    msg.setSourceEntity(217U);
    msg.setDestination(11985U);
    msg.setDestinationEntity(30U);
    msg.sessid = 3236485604U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.581927877252);
    msg.setSource(24765U);
    msg.setSourceEntity(171U);
    msg.setDestination(64881U);
    msg.setDestinationEntity(58U);
    msg.sessid = 2208611429U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.516223583125);
    msg.setSource(8527U);
    msg.setSourceEntity(16U);
    msg.setDestination(64425U);
    msg.setDestinationEntity(249U);
    msg.sessid = 2909466207U;
    msg.messages.assign("UJYAWILIQUWYNIDURIQAEZAKFQHPPIQBSVFXDRBKIBBDVDWQNMV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.705223460795);
    msg.setSource(3461U);
    msg.setSourceEntity(39U);
    msg.setDestination(8422U);
    msg.setDestinationEntity(82U);
    msg.sessid = 835760912U;
    msg.messages.assign("BCMDZVVUJCTRELMIIGBIONGBPVFZPJZFKKOHYEJJBRROIJATLUNIIZTFDFUELOKW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.966797434927);
    msg.setSource(51276U);
    msg.setSourceEntity(1U);
    msg.setDestination(53775U);
    msg.setDestinationEntity(78U);
    msg.sessid = 994950139U;
    msg.messages.assign("FARKDZJILIFRDAUKQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.471161419187);
    msg.setSource(7476U);
    msg.setSourceEntity(174U);
    msg.setDestination(684U);
    msg.setDestinationEntity(239U);
    msg.sessid = 949577180U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.998350874175);
    msg.setSource(30355U);
    msg.setSourceEntity(237U);
    msg.setDestination(55692U);
    msg.setDestinationEntity(52U);
    msg.sessid = 2508447266U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.427153876043);
    msg.setSource(61930U);
    msg.setSourceEntity(17U);
    msg.setDestination(59954U);
    msg.setDestinationEntity(231U);
    msg.sessid = 4068479563U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.23387100739);
    msg.setSource(58219U);
    msg.setSourceEntity(116U);
    msg.setDestination(65041U);
    msg.setDestinationEntity(55U);
    msg.sessid = 878475814U;
    msg.status = 63U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.862106119);
    msg.setSource(11937U);
    msg.setSourceEntity(24U);
    msg.setDestination(18023U);
    msg.setDestinationEntity(212U);
    msg.sessid = 2616791548U;
    msg.status = 189U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.188252317967);
    msg.setSource(27002U);
    msg.setSourceEntity(8U);
    msg.setDestination(29151U);
    msg.setDestinationEntity(138U);
    msg.sessid = 3323733024U;
    msg.status = 47U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.982643353432);
    msg.setSource(3994U);
    msg.setSourceEntity(203U);
    msg.setDestination(38436U);
    msg.setDestinationEntity(34U);
    msg.name.assign("COXFIBPWKLHRCZGGAQUNULNVGAGPDYSMWZHNEFNEIWZTWSVQMTHVNSVGFYIACEAOGUYRXVVJHDXWDPUHJMRSSAIPUDGTBYRKHWZZGOUCQMCAFYTMKVYDZEKAYXUEFNCBTTJLWIEMVFSKJWDNXJUROIM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.941979532893);
    msg.setSource(63817U);
    msg.setSourceEntity(222U);
    msg.setDestination(23904U);
    msg.setDestinationEntity(59U);
    msg.name.assign("RYDTIVGEWBUNJZZHOFQYEBEFHJOIOXOJNCOIEAFWKBJCVQSIGJXULIUCDVLRMUOTOYXVHUIMSNEWKRHLAXDAGDDXKCPPVDESPTQVGFKEZQGXMLZVGCTYHKJNFBUANMMYUKRXRKCGJXDAXERYRSBSEZBJWHLKZJIGABVTRQKZKYLBNQFUUWQDLWMTNCLGMTEYQPUIRFNMOSBTSWQWSCPFAPDJTHSZXNIAHYOZWFSQFGVLDLPWPCYCPOH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.182343546834);
    msg.setSource(18954U);
    msg.setSourceEntity(198U);
    msg.setDestination(27058U);
    msg.setDestinationEntity(119U);
    msg.name.assign("VFDFOBIQURDHUKDANICWXLBULZHYGUGSZZRHSDSLPVARJREWXBRINQEOHIKQYIAQRKVNFFQYFQLGCNIWDTTYUEKHWLPMZJEGJTXPEAALHAEZGXPHJDSACBETZUIXGSWISZOZMABCOFQMYTYNRMAJGNEKBDPSVPYLQMOZDKDNOKICXPPQOCG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.619674119958);
    msg.setSource(46072U);
    msg.setSourceEntity(93U);
    msg.setDestination(53548U);
    msg.setDestinationEntity(216U);
    msg.name.assign("JRBQPCFMCQLQLNPCPYTXDVNYTAAZAOWGHCVMSSIXYECBNJKHCULBNKDNJEPPOOXRHGXHUEWTUWNIULBYBDRGRVE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.0181631670377);
    msg.setSource(34244U);
    msg.setSourceEntity(169U);
    msg.setDestination(48715U);
    msg.setDestinationEntity(74U);
    msg.name.assign("VRKNOMOAZIYFFLODNXKNIYPXBJRHCLBNEBZWSXKMHHTFSKATVAMTTEWGSAZGGSSPMOWTRRIQCBRUFXDLHBDZJFJQBTKDCIAPSJZFVESGRCSQFAMCQHNUUPLJCFRVY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.644806935556);
    msg.setSource(19578U);
    msg.setSourceEntity(176U);
    msg.setDestination(49063U);
    msg.setDestinationEntity(88U);
    msg.name.assign("NFYKZFRCTKGYQYPJNFWDEGMDSRHPGVBOASCXQHSERAYLZPXYGGVDEHDKUHESRLYMPLVBSABJUFUHXZJWHRQOIRZGMBUDIAEVJKENAGOIICFZCBQIWMXKVVHMDNNLILLFYJSLUZWLWEBYMQOUIUSQDSQFOARKNSVGXTDCOBXBNCXCTJCMNOJIQIJWWCKOUJKPXZRHSYKHZQPQZAEVXJFPPBGKDMTULARZWTTBMODUT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.565597031384);
    msg.setSource(58556U);
    msg.setSourceEntity(211U);
    msg.setDestination(18399U);
    msg.setDestinationEntity(14U);
    msg.type = 130U;
    msg.error.assign("OJHACCSYHPDZLQIZXLQCTYRXYTIWOBPDUKODNAMAKNPKNKCLNDPENBSSRHAAGNOZRYWDYYQWGIXUIEYEVMBEMOIPMTWJKYMUDITGIEYBFBLXVZVEPFVOFFTHHJPCFUBMESLYGTDTSXXSSKH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.00177483614274);
    msg.setSource(7715U);
    msg.setSourceEntity(110U);
    msg.setDestination(48340U);
    msg.setDestinationEntity(228U);
    msg.type = 250U;
    msg.error.assign("UOSGAXONYOEFMNHQOKCUWOSTPQHDPJQFELHDXKBOVPDYXHGLAZSIUMZQQKLJFGMRRZMMDCRUNEWITNBWVPCPAFXLWDAQQASIGEDSPKVBI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.18605099602);
    msg.setSource(31226U);
    msg.setSourceEntity(10U);
    msg.setDestination(48133U);
    msg.setDestinationEntity(69U);
    msg.type = 140U;
    msg.error.assign("DUMLNKJINHBOHWJFNHEHGDZDCLGWNPYISJRRVYZGOMSSAZQUIRTXKOHQOVBEVDCFGATVEALQSYTZQYOXIVIQPABMWKTZVRNMEQQXRGRBJJUGKUACMESUBOPWIXQFZYPXSLDTIXCHJMXVVZWLMT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.803196445023);
    msg.setSource(31115U);
    msg.setSourceEntity(225U);
    msg.setDestination(53605U);
    msg.setDestinationEntity(196U);
    msg.seq = 23701U;
    msg.sys_dst.assign("KRPSQTRVJIOGRFKTRWCCPCHLUEPQYHSFNHQUG");
    msg.flags = 56U;
    const char tmp_msg_0[] = {10, 62, -26, 79, -60, -96, 111, -93, -32, -31, 15, 23, 39, -37, 62, 47, 2, 29, -101, -91, -47, -37, -69, 121, -25, -69, 98, 100, -78, -47, 3, -51, -100, 26, 74, 79, -108, -34, -10, -1, -44, 28, 108, -64, -77, 54, 24, -96, -94, -21, 2, -29, 106, -110, -67, -4, -104, -64, 94, 67, -78, -44, -102, -8, 124, -65, -68, 84, -74, -43, -93, 20, 106, 60, -49, 48, 101, -57, 100, -39, 97, -97, -78, 57, 118, -64, -123, 123, 41, 24, 66, 120, -113, 32, -114};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.55917976772);
    msg.setSource(62388U);
    msg.setSourceEntity(73U);
    msg.setDestination(42189U);
    msg.setDestinationEntity(249U);
    msg.seq = 59379U;
    msg.sys_dst.assign("ZGCLMOHZSAIXIBPUFJTWAXHBFRQSXYFIVDJMUKWEZHRUQCQNFVDJVOELJBYPCHWOTOYOVCORVAIBGTZHMGRWDXYCDGZTOTXUJLRDTZAHKPAPYGSGXPBDOZTDCCDBUWSSUFTYMWJFCVLSXAJFXXLPHPTDWQQVBLKIMEKMMEMAWQBCKYGKGYNIQ");
    msg.flags = 85U;
    const char tmp_msg_0[] = {57, -92, -59, -45, 25, 44, -100, -20, 98, 112, -28, -26, -34, 39, 98, 8, 74, -1, -69, 41, 70, 78, -19, -111, 58, 80, 119, 70, 64, -29, -55, 88, -110, 51, -54, 56, -128, -98, 61, 95, 120, 11, -4, 85, -89, 96, -86, 33, 121, 25, -69, -59, -6, -45, 17, -2, -38, 47, 83, -72, -118, -19, -48, -53, -44, -95, 125, -57, 14, -27, -15, -72, 116, 57, -67, -44, 33, 118, 77, -57, 112, -124, -94, 44, 69, 62, 80, 48, 39, -65, 11, 108, -83, 47, -49, -57, -89, 84, 122, 36, -18, -83, -95, 34, 14, -54, 89, 65, -62, -76, 17, -16, -128, -55, -125, -36, 95, 100, 12, 12, 16, 85, 77, 62, -16, 121, -85, 122, 5, 4, -20, 77, 64, -56, 67, -33, 52, -121, 67, -81, 110, 29, -44, 19, 27, 41, -98, 110, -103, 74, -64, -26, -107};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.0913381837882);
    msg.setSource(58622U);
    msg.setSourceEntity(139U);
    msg.setDestination(53921U);
    msg.setDestinationEntity(165U);
    msg.seq = 40357U;
    msg.sys_dst.assign("QRFVRWHIHKFMEZEUEYRCYPIZSNFRJVSKIKAEJMNWNOOGVPQOTLNWJOGQXGOXDYCKKCBJRMHGMHLTEPBNSCLHSQFAQCGFATCZPDHLYGZCQRWKEXXUXVMULQRKSRMDVVBXIEZAWTMUWDAJAUHNLAPEOFNIVNPF");
    msg.flags = 9U;
    const char tmp_msg_0[] = {119, 96, -94, -102, -72, 29, 113, -102, 25, 44, -48, 11, -105, 86, -115, -76, -51, 17, 123, -63, 27, -49, -103, -22, -18, 60, 21, 104, -50, 39, -12, 5, -46, 8, -33, -93, -22, -103, -9, -93, -8, -80, 102, -48, -36, 22, -95, 8, -61, -124, -1, -37, 47, 64, 37, -55, -96, 67, -60, 23, -99, 80, 41, -17, -57, -34, -1, 79, 76, 1, 6, -24, -18, -101, 44, 77, 94, -47, -117, -114, -36, 23, -110, -81, -52, 32, 12, 72, -107, 49, 36, -115, -99, 119, -68, -36, -98, -30, 19, 109, -70, 66, -20, 27, 37, 7, 126, 111, -90, 79, 1, -37, 2, -63, -49};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.180987682432);
    msg.setSource(17540U);
    msg.setSourceEntity(254U);
    msg.setDestination(62059U);
    msg.setDestinationEntity(47U);
    msg.sys_src.assign("GVZZDAWBDTJBFWZGLJQQYHTBSVOJZEIHEOPDQNSKDDQLAZBXQFATXCTAEWRSUSWOBEFEVKJYQCTRXHKSBALHOENYPRUMTWCSOPNKVPBLMMWYFEFVPYNHOWYDNSTIZEGJFMPIJHTXIUHVSMUVMMJZLKGIXDOAR");
    msg.sys_dst.assign("CSNXRMFUPLHXEZVIMQWWOFLSKKHLEUJLGJQQRP");
    msg.flags = 57U;
    const char tmp_msg_0[] = {-45, -58, -45, -109, 55, -65, 63, 64, 69, -47, 51, -110, 18, -61, 61, -111, 7, -85, 40, 63, 29, 30, 38, -22, 65, -49, 99, -54, -42, -77, -84, -84, 86, -62, -112, 119, -27, 117, 117, -87, 122, 57, -110, -41, -90, -98, 15, -11, 48, 22, -40, -48, -109, -23, -112, 64, -111, 36, 40, -106, 29, 53, -95, 45, -4, -119, -120, 87, 79, 98, 30, -66};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.161867622579);
    msg.setSource(64977U);
    msg.setSourceEntity(250U);
    msg.setDestination(61023U);
    msg.setDestinationEntity(63U);
    msg.sys_src.assign("LIQJCZGIPBOKVXQUZSGSIQGERRKPDQVQVJZYVHARFLJANXUALBVUYHEPFYHHIFXMGRTWSFAXUFOWPYIMRFPLPUKLDCNSKCJZMMFUBXBIXRVOWIJDLTCVZDENWONNOIPWITKKPNXAMVQDVJXYOLQREJXOFGYPWTEQDOTSSMBGTYMEHOBHJBNGKNADTDJARH");
    msg.sys_dst.assign("URMAOJGMKROLWXDRBBVUVABAZBPUITNZWYIMJKSPKHWXNSLESZUNWGZGVLDOFKVZISYOKHPQDDAIPLLXYREHUMYBOMDBUFPKLJQCQDGEHEHDCCTTFFZPMQCBIYNAWIFNNVXUTXSFFPMGLVQKXJTCEQPPAAMDVGZEMHCSYYJVRRTJHXKRCDIYVIYTBYGSOXQJJGLSEHFQJZOWQUNSZHVFZWUOOSTKIWQLHWXRCCFU");
    msg.flags = 180U;
    const char tmp_msg_0[] = {100, 46, -69, 30, -33, -111, -68, -24, -42, -32, -29, -79, 76, 102, -79, -104, 37, -91, -58, 58, 53, 114, -99, 69, -109, 25, 60, -48, -109, -114, -67, -127, -99, -116, -113, 115, -72, -28, 21, 26, 40, -15, -123, -64, -127, -32, 111, -21, 77, 81, -51, 97, -100, -99, 72, -14, 34, -8, 61, -110, 59, -115, 28, 8, 62, -107, -35, -45, -63, -7, -2, -40, 58, -45, 32, -94, 116, -31, 51, 46, 117, 0, -19, -66, 88, -126, 26, 1, -19, -23, -72, 84, 123, -7, 125, 70, -6, 117, 64, -63, 18, 43, -31, 38, -85, 48, 104};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.956344328663);
    msg.setSource(14809U);
    msg.setSourceEntity(168U);
    msg.setDestination(37471U);
    msg.setDestinationEntity(41U);
    msg.sys_src.assign("PNZRLDRASLMFULDKBVMBJAQIDAOEKYCAAXUSPHIPILT");
    msg.sys_dst.assign("GDTXGCAKZCDCBHBOAULLTNPLVFDKLDPCVICZINOUXUYJSEWBYRWCXABOGWZUGLHBABNWBCHORRQXWFPSYTRZAAYSZQJXKMKZKIJLIEMHQJFFXRXPFWZBIUNMIHDDYDMVHRMSAUMWGCFRUZOIJOZVKVGEYDJUPQBSOCFTNLJHKAHNFSTTRKTRZASPXMIVPOWVMWSDAQ");
    msg.flags = 73U;
    const char tmp_msg_0[] = {33, 93, -24, 31, 42, 31, -109, -96, -80, -72, 28, 37, -91, -96, 122, 92, -34, -97, -60, -66, 21, -127, 107, 100, -115, 90, 107, 19, 117, -18, 70, -24, -72, 77, -19, 75, 109, 21, -110, -86, 92, 53, -88, 96, -114, -122, -64, -23, 20, 72, 15, 30, -19, -115, 118, -25, -54, 89, 49, 5, -19, -70, 124, -58, 65, -124, -109, -59, -29, 101, -32, 58, 32, -52, 61, 2, -94, -126, 20, 85, 96, -123, -128, -56, 88, 92, 20, 118, 3, 1, 66, -124, -125, 42, -80, -42, 67, -69, -46, -88, 22, 7, 33, -109, 118, -105, -126, -100, -37, 28, 40, 11, 17, 32, 119, -17, 114, -48, 113, 112, 14, 18, 20, -35, 58, -83, 12, -100, -62, 31, 61, 0, -115, 29, 108, -86, 117, -103, -14, -7, -44, 79, 76, -108, 58, -40, -18, 71, 17, 77, -8, -104, 53, 54, 31, 117, 23, -51, 114, -58, 125, 15, 12, 111, -17, 36, 16, 87, 121, -121, -53, -45, 6, -97, -102, -79, 81, 66, 87, 2, -89, 11, -64, -92, -57, 22, -12, -37, -56, 21, -66, -63, 19, 27, -1, -54, 29, 51, -78, -51, 120, -28};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.107971957757);
    msg.setSource(19351U);
    msg.setSourceEntity(140U);
    msg.setDestination(15692U);
    msg.setDestinationEntity(223U);
    msg.seq = 56945U;
    msg.value = 217U;
    msg.error.assign("NGDNKSWEWNXFAGIJULQHVUMLDSVEGAUERQQOUBIIAMJXYOLNKLMCYBECZFFFVZKMXGWCGPKITSOEMULOPKCFSWAZLZOMKOTSRGJEIPXHYSDIDTZSRWHLTNBVCHMBPGAONHTTQPQGRUYFPYZBTKFALGQFMCPXRUETUWXJWVMFDSNAODHADTJNBXEHIUAREVY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.0538551974538);
    msg.setSource(6410U);
    msg.setSourceEntity(34U);
    msg.setDestination(54283U);
    msg.setDestinationEntity(251U);
    msg.seq = 55909U;
    msg.value = 8U;
    msg.error.assign("FHXZDXHTJGWYUKYTQBLMWHFPLPFRJDBALQSUEWADFTRIZBOEKJVDFQGRWCUIROZGDNXRVMRNVBKHMFVUCDPALDAAAKWIBOSSOMWATEKVHJSTJCGMZCCEYQKZXGCJMWYLVTZUZHSYWBISWLFSUHNRJGUZUNYFYMLDCJPRUG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.851589096349);
    msg.setSource(5983U);
    msg.setSourceEntity(41U);
    msg.setDestination(20752U);
    msg.setDestinationEntity(8U);
    msg.seq = 48531U;
    msg.value = 102U;
    msg.error.assign("ZRACTBTMFKYY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.537019001733);
    msg.setSource(5595U);
    msg.setSourceEntity(30U);
    msg.setDestination(46680U);
    msg.setDestinationEntity(118U);
    msg.seq = 31271U;
    msg.sys.assign("XFNZXJTKPMRONUKQHUVYFODOVZSRH");
    msg.value = 0.694271404175;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.636667167288);
    msg.setSource(46069U);
    msg.setSourceEntity(237U);
    msg.setDestination(23516U);
    msg.setDestinationEntity(145U);
    msg.seq = 40899U;
    msg.sys.assign("HJJKSXTRZXGZYCTXMQIFCQSAIESVZWKPLGPFXXQYDZAGFZMUKZNPWKCQEWJIC");
    msg.value = 0.940802648587;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.137633108073);
    msg.setSource(37155U);
    msg.setSourceEntity(123U);
    msg.setDestination(63907U);
    msg.setDestinationEntity(97U);
    msg.seq = 60828U;
    msg.sys.assign("RFRAUKLLJIWWISHQBNQCDGCSOXZMIWIVDEAYDLUMNSZQHIMIGYJRCBNAOFFAKZLGBUHCDQUVVZVEEMOSWGVXVYFTWVKYZDXYCASRXMAZKDWLRBTLANSEMAXPRIOFDLJSYEGUWOVOTUCMRGNTUBJXWSPBPTXJKINDRQPXHVIJMZEJGENKJOQERQM");
    msg.value = 0.629645516937;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.947398223059);
    msg.setSource(5615U);
    msg.setSourceEntity(72U);
    msg.setDestination(3929U);
    msg.setDestinationEntity(81U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.992657178467);
    msg.setSource(63126U);
    msg.setSourceEntity(223U);
    msg.setDestination(41301U);
    msg.setDestinationEntity(200U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.400376912627);
    msg.setSource(1918U);
    msg.setSourceEntity(201U);
    msg.setDestination(60513U);
    msg.setDestinationEntity(35U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.763154496315);
    msg.setSource(1640U);
    msg.setSourceEntity(227U);
    msg.setDestination(35163U);
    msg.setDestinationEntity(97U);
    msg.action = 36U;
    msg.longain = 3133919108U;
    msg.latgain = 2194843684U;
    msg.bondthick = 1665573295U;
    msg.leadgain = 3890445139U;
    msg.deconflgain = 2823829500U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.280644378072);
    msg.setSource(27134U);
    msg.setSourceEntity(200U);
    msg.setDestination(35847U);
    msg.setDestinationEntity(229U);
    msg.action = 10U;
    msg.longain = 1589257556U;
    msg.latgain = 1508666339U;
    msg.bondthick = 3028300423U;
    msg.leadgain = 435799960U;
    msg.deconflgain = 1607617469U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.126371981327);
    msg.setSource(511U);
    msg.setSourceEntity(37U);
    msg.setDestination(46475U);
    msg.setDestinationEntity(232U);
    msg.action = 79U;
    msg.longain = 1511577546U;
    msg.latgain = 1505435583U;
    msg.bondthick = 3196015223U;
    msg.leadgain = 1730151881U;
    msg.deconflgain = 2563278849U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
