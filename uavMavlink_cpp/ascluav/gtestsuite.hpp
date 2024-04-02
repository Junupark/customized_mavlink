/** @file
 *	@brief MAVLink comm testsuite protocol generated from ascluav.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <gtest/gtest.h>
#include "ascluav.hpp"

#ifdef TEST_INTEROP
using namespace mavlink;
#undef MAVLINK_HELPER
#include "mavlink.h"
#endif


TEST(ascluav, ASCL_PARAM_SET)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_PARAM_SET packet_in{};
    packet_in.param_id = 17443;
    packet_in.param_value = 17.0;
    packet_in.param_type = 151;

    mavlink::ascluav::msg::ASCL_PARAM_SET packet1{};
    mavlink::ascluav::msg::ASCL_PARAM_SET packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.param_id, packet2.param_id);
    EXPECT_EQ(packet1.param_value, packet2.param_value);
    EXPECT_EQ(packet1.param_type, packet2.param_type);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_PARAM_SET)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_param_set_t packet_c {
         17.0, 17443, 151
    };

    mavlink::ascluav::msg::ASCL_PARAM_SET packet_in{};
    packet_in.param_id = 17443;
    packet_in.param_value = 17.0;
    packet_in.param_type = 151;

    mavlink::ascluav::msg::ASCL_PARAM_SET packet2{};

    mavlink_msg_ascl_param_set_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.param_id, packet2.param_id);
    EXPECT_EQ(packet_in.param_value, packet2.param_value);
    EXPECT_EQ(packet_in.param_type, packet2.param_type);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_PARAM_REQUEST)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_PARAM_REQUEST packet_in{};
    packet_in.param_id = 17235;

    mavlink::ascluav::msg::ASCL_PARAM_REQUEST packet1{};
    mavlink::ascluav::msg::ASCL_PARAM_REQUEST packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.param_id, packet2.param_id);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_PARAM_REQUEST)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_param_request_t packet_c {
         17235
    };

    mavlink::ascluav::msg::ASCL_PARAM_REQUEST packet_in{};
    packet_in.param_id = 17235;

    mavlink::ascluav::msg::ASCL_PARAM_REQUEST packet2{};

    mavlink_msg_ascl_param_request_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.param_id, packet2.param_id);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_PARAM_VALUE)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_PARAM_VALUE packet_in{};
    packet_in.param_id = 17443;
    packet_in.param_value = 17.0;
    packet_in.param_type = 151;
    packet_in.result = 218;

    mavlink::ascluav::msg::ASCL_PARAM_VALUE packet1{};
    mavlink::ascluav::msg::ASCL_PARAM_VALUE packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.param_id, packet2.param_id);
    EXPECT_EQ(packet1.param_value, packet2.param_value);
    EXPECT_EQ(packet1.param_type, packet2.param_type);
    EXPECT_EQ(packet1.result, packet2.result);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_PARAM_VALUE)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_param_value_t packet_c {
         17.0, 17443, 151, 218
    };

    mavlink::ascluav::msg::ASCL_PARAM_VALUE packet_in{};
    packet_in.param_id = 17443;
    packet_in.param_value = 17.0;
    packet_in.param_type = 151;
    packet_in.result = 218;

    mavlink::ascluav::msg::ASCL_PARAM_VALUE packet2{};

    mavlink_msg_ascl_param_value_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.param_id, packet2.param_id);
    EXPECT_EQ(packet_in.param_value, packet2.param_value);
    EXPECT_EQ(packet_in.param_type, packet2.param_type);
    EXPECT_EQ(packet_in.result, packet2.result);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_COMMAND_SEND_FI)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_COMMAND_SEND_FI packet_in{};
    packet_in.command_id = 18483;
    packet_in.option = 18587;
    packet_in.paramf1 = 17.0;
    packet_in.paramf2 = 45.0;
    packet_in.paramf3 = 73.0;
    packet_in.parami1 = 963498088;
    packet_in.parami2 = 963498296;
    packet_in.parami3 = 963498504;

    mavlink::ascluav::msg::ASCL_COMMAND_SEND_FI packet1{};
    mavlink::ascluav::msg::ASCL_COMMAND_SEND_FI packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.command_id, packet2.command_id);
    EXPECT_EQ(packet1.option, packet2.option);
    EXPECT_EQ(packet1.paramf1, packet2.paramf1);
    EXPECT_EQ(packet1.paramf2, packet2.paramf2);
    EXPECT_EQ(packet1.paramf3, packet2.paramf3);
    EXPECT_EQ(packet1.parami1, packet2.parami1);
    EXPECT_EQ(packet1.parami2, packet2.parami2);
    EXPECT_EQ(packet1.parami3, packet2.parami3);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_COMMAND_SEND_FI)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_command_send_fi_t packet_c {
         17.0, 45.0, 73.0, 963498088, 963498296, 963498504, 18483, 18587
    };

    mavlink::ascluav::msg::ASCL_COMMAND_SEND_FI packet_in{};
    packet_in.command_id = 18483;
    packet_in.option = 18587;
    packet_in.paramf1 = 17.0;
    packet_in.paramf2 = 45.0;
    packet_in.paramf3 = 73.0;
    packet_in.parami1 = 963498088;
    packet_in.parami2 = 963498296;
    packet_in.parami3 = 963498504;

    mavlink::ascluav::msg::ASCL_COMMAND_SEND_FI packet2{};

    mavlink_msg_ascl_command_send_fi_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.command_id, packet2.command_id);
    EXPECT_EQ(packet_in.option, packet2.option);
    EXPECT_EQ(packet_in.paramf1, packet2.paramf1);
    EXPECT_EQ(packet_in.paramf2, packet2.paramf2);
    EXPECT_EQ(packet_in.paramf3, packet2.paramf3);
    EXPECT_EQ(packet_in.parami1, packet2.parami1);
    EXPECT_EQ(packet_in.parami2, packet2.parami2);
    EXPECT_EQ(packet_in.parami3, packet2.parami3);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_COMMAND_SEND_F)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_COMMAND_SEND_F packet_in{};
    packet_in.command_id = 18483;
    packet_in.option = 18587;
    packet_in.paramf1 = 17.0;
    packet_in.paramf2 = 45.0;
    packet_in.paramf3 = 73.0;
    packet_in.paramf4 = 101.0;
    packet_in.paramf5 = 129.0;
    packet_in.paramf6 = 157.0;

    mavlink::ascluav::msg::ASCL_COMMAND_SEND_F packet1{};
    mavlink::ascluav::msg::ASCL_COMMAND_SEND_F packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.command_id, packet2.command_id);
    EXPECT_EQ(packet1.option, packet2.option);
    EXPECT_EQ(packet1.paramf1, packet2.paramf1);
    EXPECT_EQ(packet1.paramf2, packet2.paramf2);
    EXPECT_EQ(packet1.paramf3, packet2.paramf3);
    EXPECT_EQ(packet1.paramf4, packet2.paramf4);
    EXPECT_EQ(packet1.paramf5, packet2.paramf5);
    EXPECT_EQ(packet1.paramf6, packet2.paramf6);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_COMMAND_SEND_F)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_command_send_f_t packet_c {
         17.0, 45.0, 73.0, 101.0, 129.0, 157.0, 18483, 18587
    };

    mavlink::ascluav::msg::ASCL_COMMAND_SEND_F packet_in{};
    packet_in.command_id = 18483;
    packet_in.option = 18587;
    packet_in.paramf1 = 17.0;
    packet_in.paramf2 = 45.0;
    packet_in.paramf3 = 73.0;
    packet_in.paramf4 = 101.0;
    packet_in.paramf5 = 129.0;
    packet_in.paramf6 = 157.0;

    mavlink::ascluav::msg::ASCL_COMMAND_SEND_F packet2{};

    mavlink_msg_ascl_command_send_f_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.command_id, packet2.command_id);
    EXPECT_EQ(packet_in.option, packet2.option);
    EXPECT_EQ(packet_in.paramf1, packet2.paramf1);
    EXPECT_EQ(packet_in.paramf2, packet2.paramf2);
    EXPECT_EQ(packet_in.paramf3, packet2.paramf3);
    EXPECT_EQ(packet_in.paramf4, packet2.paramf4);
    EXPECT_EQ(packet_in.paramf5, packet2.paramf5);
    EXPECT_EQ(packet_in.paramf6, packet2.paramf6);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_COMMAND_ACK)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_COMMAND_ACK packet_in{};
    packet_in.command_id = 17235;
    packet_in.result = 139;

    mavlink::ascluav::msg::ASCL_COMMAND_ACK packet1{};
    mavlink::ascluav::msg::ASCL_COMMAND_ACK packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.command_id, packet2.command_id);
    EXPECT_EQ(packet1.result, packet2.result);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_COMMAND_ACK)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_command_ack_t packet_c {
         17235, 139
    };

    mavlink::ascluav::msg::ASCL_COMMAND_ACK packet_in{};
    packet_in.command_id = 17235;
    packet_in.result = 139;

    mavlink::ascluav::msg::ASCL_COMMAND_ACK packet2{};

    mavlink_msg_ascl_command_ack_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.command_id, packet2.command_id);
    EXPECT_EQ(packet_in.result, packet2.result);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE packet_in{};
    packet_in.timems = 963497464;
    packet_in.pqr = {{ 45.0, 46.0, 47.0 }};
    packet_in.euler = {{ 129.0, 130.0, 131.0 }};
    packet_in.quat = {{ 213.0, 214.0, 215.0, 216.0 }};
    packet_in.acc = {{ 325.0, 326.0, 327.0 }};
    packet_in.velNed = {{ 409.0, 410.0, 411.0 }};
    packet_in.ned = {{ 493.0, 494.0, 495.0 }};
    packet_in.llh = {{ 963501624, 963501625, 963501626 }};
    packet_in.navStatus = 22019;
    packet_in.filterStatus = 22123;

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE packet1{};
    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timems, packet2.timems);
    EXPECT_EQ(packet1.pqr, packet2.pqr);
    EXPECT_EQ(packet1.euler, packet2.euler);
    EXPECT_EQ(packet1.quat, packet2.quat);
    EXPECT_EQ(packet1.acc, packet2.acc);
    EXPECT_EQ(packet1.velNed, packet2.velNed);
    EXPECT_EQ(packet1.ned, packet2.ned);
    EXPECT_EQ(packet1.llh, packet2.llh);
    EXPECT_EQ(packet1.navStatus, packet2.navStatus);
    EXPECT_EQ(packet1.filterStatus, packet2.filterStatus);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_telemetry_nav_state_regular_value_t packet_c {
         963497464, { 45.0, 46.0, 47.0 }, { 129.0, 130.0, 131.0 }, { 213.0, 214.0, 215.0, 216.0 }, { 325.0, 326.0, 327.0 }, { 409.0, 410.0, 411.0 }, { 493.0, 494.0, 495.0 }, { 963501624, 963501625, 963501626 }, 22019, 22123
    };

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE packet_in{};
    packet_in.timems = 963497464;
    packet_in.pqr = {{ 45.0, 46.0, 47.0 }};
    packet_in.euler = {{ 129.0, 130.0, 131.0 }};
    packet_in.quat = {{ 213.0, 214.0, 215.0, 216.0 }};
    packet_in.acc = {{ 325.0, 326.0, 327.0 }};
    packet_in.velNed = {{ 409.0, 410.0, 411.0 }};
    packet_in.ned = {{ 493.0, 494.0, 495.0 }};
    packet_in.llh = {{ 963501624, 963501625, 963501626 }};
    packet_in.navStatus = 22019;
    packet_in.filterStatus = 22123;

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REGULAR_VALUE packet2{};

    mavlink_msg_ascl_telemetry_nav_state_regular_value_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timems, packet2.timems);
    EXPECT_EQ(packet_in.pqr, packet2.pqr);
    EXPECT_EQ(packet_in.euler, packet2.euler);
    EXPECT_EQ(packet_in.quat, packet2.quat);
    EXPECT_EQ(packet_in.acc, packet2.acc);
    EXPECT_EQ(packet_in.velNed, packet2.velNed);
    EXPECT_EQ(packet_in.ned, packet2.ned);
    EXPECT_EQ(packet_in.llh, packet2.llh);
    EXPECT_EQ(packet_in.navStatus, packet2.navStatus);
    EXPECT_EQ(packet_in.filterStatus, packet2.filterStatus);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_TELEMETRY_NAV_STATE_REGULAR_COV)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REGULAR_COV packet_in{};
    packet_in.timems = 963497464;
    packet_in.covQuat = {{ 45.0, 46.0, 47.0, 48.0, 49.0, 50.0, 51.0, 52.0, 53.0, 54.0 }};
    packet_in.covDiag = {{ 325.0, 326.0, 327.0, 328.0, 329.0, 330.0, 331.0, 332.0, 333.0, 334.0, 335.0, 336.0, 337.0, 338.0, 339.0, 340.0, 341.0, 342.0, 343.0, 344.0, 345.0, 346.0 }};

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REGULAR_COV packet1{};
    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REGULAR_COV packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timems, packet2.timems);
    EXPECT_EQ(packet1.covQuat, packet2.covQuat);
    EXPECT_EQ(packet1.covDiag, packet2.covDiag);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_TELEMETRY_NAV_STATE_REGULAR_COV)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_telemetry_nav_state_regular_cov_t packet_c {
         963497464, { 45.0, 46.0, 47.0, 48.0, 49.0, 50.0, 51.0, 52.0, 53.0, 54.0 }, { 325.0, 326.0, 327.0, 328.0, 329.0, 330.0, 331.0, 332.0, 333.0, 334.0, 335.0, 336.0, 337.0, 338.0, 339.0, 340.0, 341.0, 342.0, 343.0, 344.0, 345.0, 346.0 }
    };

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REGULAR_COV packet_in{};
    packet_in.timems = 963497464;
    packet_in.covQuat = {{ 45.0, 46.0, 47.0, 48.0, 49.0, 50.0, 51.0, 52.0, 53.0, 54.0 }};
    packet_in.covDiag = {{ 325.0, 326.0, 327.0, 328.0, 329.0, 330.0, 331.0, 332.0, 333.0, 334.0, 335.0, 336.0, 337.0, 338.0, 339.0, 340.0, 341.0, 342.0, 343.0, 344.0, 345.0, 346.0 }};

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REGULAR_COV packet2{};

    mavlink_msg_ascl_telemetry_nav_state_regular_cov_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timems, packet2.timems);
    EXPECT_EQ(packet_in.covQuat, packet2.covQuat);
    EXPECT_EQ(packet_in.covDiag, packet2.covDiag);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_TELEMETRY_NAV_STATE_ATT)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_ATT packet_in{};
    packet_in.timems = 963497464;
    packet_in.pqr = {{ 45.0, 46.0, 47.0 }};
    packet_in.euler = {{ 129.0, 130.0, 131.0 }};
    packet_in.quat = {{ 213.0, 214.0, 215.0, 216.0 }};
    packet_in.covQuat = {{ 325.0, 326.0, 327.0, 328.0, 329.0, 330.0, 331.0, 332.0, 333.0, 334.0 }};
    packet_in.fused = 1;

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_ATT packet1{};
    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_ATT packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timems, packet2.timems);
    EXPECT_EQ(packet1.pqr, packet2.pqr);
    EXPECT_EQ(packet1.euler, packet2.euler);
    EXPECT_EQ(packet1.quat, packet2.quat);
    EXPECT_EQ(packet1.covQuat, packet2.covQuat);
    EXPECT_EQ(packet1.fused, packet2.fused);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_TELEMETRY_NAV_STATE_ATT)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_telemetry_nav_state_att_t packet_c {
         963497464, { 45.0, 46.0, 47.0 }, { 129.0, 130.0, 131.0 }, { 213.0, 214.0, 215.0, 216.0 }, { 325.0, 326.0, 327.0, 328.0, 329.0, 330.0, 331.0, 332.0, 333.0, 334.0 }, 1
    };

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_ATT packet_in{};
    packet_in.timems = 963497464;
    packet_in.pqr = {{ 45.0, 46.0, 47.0 }};
    packet_in.euler = {{ 129.0, 130.0, 131.0 }};
    packet_in.quat = {{ 213.0, 214.0, 215.0, 216.0 }};
    packet_in.covQuat = {{ 325.0, 326.0, 327.0, 328.0, 329.0, 330.0, 331.0, 332.0, 333.0, 334.0 }};
    packet_in.fused = 1;

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_ATT packet2{};

    mavlink_msg_ascl_telemetry_nav_state_att_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timems, packet2.timems);
    EXPECT_EQ(packet_in.pqr, packet2.pqr);
    EXPECT_EQ(packet_in.euler, packet2.euler);
    EXPECT_EQ(packet_in.quat, packet2.quat);
    EXPECT_EQ(packet_in.covQuat, packet2.covQuat);
    EXPECT_EQ(packet_in.fused, packet2.fused);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_TELEMETRY_NAV_STATE_VEL_POS)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_VEL_POS packet_in{};
    packet_in.timems = 963497464;
    packet_in.acc = {{ 45.0, 46.0, 47.0 }};
    packet_in.velNed = {{ 129.0, 130.0, 131.0 }};
    packet_in.ned = {{ 213.0, 214.0, 215.0 }};
    packet_in.llh = {{ 963499544, 963499545, 963499546 }};
    packet_in.covVelPos = {{ 381.0, 382.0, 383.0, 384.0, 385.0, 386.0, 387.0, 388.0, 389.0, 390.0, 391.0, 392.0, 393.0, 394.0, 395.0, 396.0, 397.0, 398.0, 399.0, 400.0, 401.0 }};
    packet_in.fused = 157;

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_VEL_POS packet1{};
    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_VEL_POS packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timems, packet2.timems);
    EXPECT_EQ(packet1.acc, packet2.acc);
    EXPECT_EQ(packet1.velNed, packet2.velNed);
    EXPECT_EQ(packet1.ned, packet2.ned);
    EXPECT_EQ(packet1.llh, packet2.llh);
    EXPECT_EQ(packet1.covVelPos, packet2.covVelPos);
    EXPECT_EQ(packet1.fused, packet2.fused);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_TELEMETRY_NAV_STATE_VEL_POS)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_telemetry_nav_state_vel_pos_t packet_c {
         963497464, { 45.0, 46.0, 47.0 }, { 129.0, 130.0, 131.0 }, { 213.0, 214.0, 215.0 }, { 963499544, 963499545, 963499546 }, { 381.0, 382.0, 383.0, 384.0, 385.0, 386.0, 387.0, 388.0, 389.0, 390.0, 391.0, 392.0, 393.0, 394.0, 395.0, 396.0, 397.0, 398.0, 399.0, 400.0, 401.0 }, 157
    };

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_VEL_POS packet_in{};
    packet_in.timems = 963497464;
    packet_in.acc = {{ 45.0, 46.0, 47.0 }};
    packet_in.velNed = {{ 129.0, 130.0, 131.0 }};
    packet_in.ned = {{ 213.0, 214.0, 215.0 }};
    packet_in.llh = {{ 963499544, 963499545, 963499546 }};
    packet_in.covVelPos = {{ 381.0, 382.0, 383.0, 384.0, 385.0, 386.0, 387.0, 388.0, 389.0, 390.0, 391.0, 392.0, 393.0, 394.0, 395.0, 396.0, 397.0, 398.0, 399.0, 400.0, 401.0 }};
    packet_in.fused = 157;

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_VEL_POS packet2{};

    mavlink_msg_ascl_telemetry_nav_state_vel_pos_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timems, packet2.timems);
    EXPECT_EQ(packet_in.acc, packet2.acc);
    EXPECT_EQ(packet_in.velNed, packet2.velNed);
    EXPECT_EQ(packet_in.ned, packet2.ned);
    EXPECT_EQ(packet_in.llh, packet2.llh);
    EXPECT_EQ(packet_in.covVelPos, packet2.covVelPos);
    EXPECT_EQ(packet_in.fused, packet2.fused);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_TELEMETRY_NAV_STATE_REFERNCE)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REFERNCE packet_in{};
    packet_in.timems = 963497464;
    packet_in.euler = {{ 45.0, 46.0, 47.0 }};
    packet_in.llh = {{ 963498296, 963498297, 963498298 }};
    packet_in.velNed = {{ 213.0, 214.0, 215.0 }};

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REFERNCE packet1{};
    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REFERNCE packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timems, packet2.timems);
    EXPECT_EQ(packet1.euler, packet2.euler);
    EXPECT_EQ(packet1.llh, packet2.llh);
    EXPECT_EQ(packet1.velNed, packet2.velNed);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_TELEMETRY_NAV_STATE_REFERNCE)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_telemetry_nav_state_refernce_t packet_c {
         963497464, { 45.0, 46.0, 47.0 }, { 963498296, 963498297, 963498298 }, { 213.0, 214.0, 215.0 }
    };

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REFERNCE packet_in{};
    packet_in.timems = 963497464;
    packet_in.euler = {{ 45.0, 46.0, 47.0 }};
    packet_in.llh = {{ 963498296, 963498297, 963498298 }};
    packet_in.velNed = {{ 213.0, 214.0, 215.0 }};

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REFERNCE packet2{};

    mavlink_msg_ascl_telemetry_nav_state_refernce_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timems, packet2.timems);
    EXPECT_EQ(packet_in.euler, packet2.euler);
    EXPECT_EQ(packet_in.llh, packet2.llh);
    EXPECT_EQ(packet_in.velNed, packet2.velNed);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_TELEMETRY_HOME)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_TELEMETRY_HOME packet_in{};
    packet_in.timems = 963497464;
    packet_in.lat = 963497672;
    packet_in.lon = 963497880;
    packet_in.height = 963498088;
    packet_in.state = 53;

    mavlink::ascluav::msg::ASCL_TELEMETRY_HOME packet1{};
    mavlink::ascluav::msg::ASCL_TELEMETRY_HOME packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timems, packet2.timems);
    EXPECT_EQ(packet1.lat, packet2.lat);
    EXPECT_EQ(packet1.lon, packet2.lon);
    EXPECT_EQ(packet1.height, packet2.height);
    EXPECT_EQ(packet1.state, packet2.state);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_TELEMETRY_HOME)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_telemetry_home_t packet_c {
         963497464, 963497672, 963497880, 963498088, 53
    };

    mavlink::ascluav::msg::ASCL_TELEMETRY_HOME packet_in{};
    packet_in.timems = 963497464;
    packet_in.lat = 963497672;
    packet_in.lon = 963497880;
    packet_in.height = 963498088;
    packet_in.state = 53;

    mavlink::ascluav::msg::ASCL_TELEMETRY_HOME packet2{};

    mavlink_msg_ascl_telemetry_home_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timems, packet2.timems);
    EXPECT_EQ(packet_in.lat, packet2.lat);
    EXPECT_EQ(packet_in.lon, packet2.lon);
    EXPECT_EQ(packet_in.height, packet2.height);
    EXPECT_EQ(packet_in.state, packet2.state);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_TELEMETRY_SENSOR_MAG)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_MAG packet_in{};
    packet_in.timems = 963497464;
    packet_in.mag = {{ 45.0, 46.0, 47.0 }};

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_MAG packet1{};
    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_MAG packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timems, packet2.timems);
    EXPECT_EQ(packet1.mag, packet2.mag);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_TELEMETRY_SENSOR_MAG)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_telemetry_sensor_mag_t packet_c {
         963497464, { 45.0, 46.0, 47.0 }
    };

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_MAG packet_in{};
    packet_in.timems = 963497464;
    packet_in.mag = {{ 45.0, 46.0, 47.0 }};

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_MAG packet2{};

    mavlink_msg_ascl_telemetry_sensor_mag_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timems, packet2.timems);
    EXPECT_EQ(packet_in.mag, packet2.mag);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_TELEMETRY_SENSOR_IMU)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_IMU packet_in{};
    packet_in.timems = 963497464;
    packet_in.gyro = {{ 45.0, 46.0, 47.0 }};
    packet_in.acc = {{ 129.0, 130.0, 131.0 }};

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_IMU packet1{};
    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_IMU packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timems, packet2.timems);
    EXPECT_EQ(packet1.gyro, packet2.gyro);
    EXPECT_EQ(packet1.acc, packet2.acc);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_TELEMETRY_SENSOR_IMU)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_telemetry_sensor_imu_t packet_c {
         963497464, { 45.0, 46.0, 47.0 }, { 129.0, 130.0, 131.0 }
    };

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_IMU packet_in{};
    packet_in.timems = 963497464;
    packet_in.gyro = {{ 45.0, 46.0, 47.0 }};
    packet_in.acc = {{ 129.0, 130.0, 131.0 }};

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_IMU packet2{};

    mavlink_msg_ascl_telemetry_sensor_imu_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timems, packet2.timems);
    EXPECT_EQ(packet_in.gyro, packet2.gyro);
    EXPECT_EQ(packet_in.acc, packet2.acc);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_TELEMETRY_SENSOR_GPS)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GPS packet_in{};
    packet_in.timems = 963497464;
    packet_in.lat = 963497672;
    packet_in.lon = 963497880;
    packet_in.height = 963498088;
    packet_in.velNed = {{ 963498296, 963498297, 963498298 }};
    packet_in.numSats = 89;
    packet_in.fixType = 156;

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GPS packet1{};
    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GPS packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timems, packet2.timems);
    EXPECT_EQ(packet1.lat, packet2.lat);
    EXPECT_EQ(packet1.lon, packet2.lon);
    EXPECT_EQ(packet1.height, packet2.height);
    EXPECT_EQ(packet1.velNed, packet2.velNed);
    EXPECT_EQ(packet1.numSats, packet2.numSats);
    EXPECT_EQ(packet1.fixType, packet2.fixType);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_TELEMETRY_SENSOR_GPS)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_telemetry_sensor_gps_t packet_c {
         963497464, 963497672, 963497880, 963498088, { 963498296, 963498297, 963498298 }, 89, 156
    };

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GPS packet_in{};
    packet_in.timems = 963497464;
    packet_in.lat = 963497672;
    packet_in.lon = 963497880;
    packet_in.height = 963498088;
    packet_in.velNed = {{ 963498296, 963498297, 963498298 }};
    packet_in.numSats = 89;
    packet_in.fixType = 156;

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GPS packet2{};

    mavlink_msg_ascl_telemetry_sensor_gps_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timems, packet2.timems);
    EXPECT_EQ(packet_in.lat, packet2.lat);
    EXPECT_EQ(packet_in.lon, packet2.lon);
    EXPECT_EQ(packet_in.height, packet2.height);
    EXPECT_EQ(packet_in.velNed, packet2.velNed);
    EXPECT_EQ(packet_in.numSats, packet2.numSats);
    EXPECT_EQ(packet_in.fixType, packet2.fixType);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_TELEMETRY_SENSOR_BARO)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_BARO packet_in{};
    packet_in.timems = 963497464;
    packet_in.pressure = 45.0;
    packet_in.temperature = 73.0;
    packet_in.alt = 963498088;

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_BARO packet1{};
    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_BARO packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timems, packet2.timems);
    EXPECT_EQ(packet1.pressure, packet2.pressure);
    EXPECT_EQ(packet1.temperature, packet2.temperature);
    EXPECT_EQ(packet1.alt, packet2.alt);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_TELEMETRY_SENSOR_BARO)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_telemetry_sensor_baro_t packet_c {
         963497464, 45.0, 73.0, 963498088
    };

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_BARO packet_in{};
    packet_in.timems = 963497464;
    packet_in.pressure = 45.0;
    packet_in.temperature = 73.0;
    packet_in.alt = 963498088;

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_BARO packet2{};

    mavlink_msg_ascl_telemetry_sensor_baro_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timems, packet2.timems);
    EXPECT_EQ(packet_in.pressure, packet2.pressure);
    EXPECT_EQ(packet_in.temperature, packet2.temperature);
    EXPECT_EQ(packet_in.alt, packet2.alt);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_TELEMETRY_SENSOR_GPS_INS)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GPS_INS packet_in{};
    packet_in.timems = 963497464;
    packet_in.lat = 963497672;
    packet_in.lon = 963497880;
    packet_in.height = 963498088;
    packet_in.velNed = {{ 963498296, 963498297, 963498298 }};
    packet_in.euler = {{ 213.0, 214.0, 215.0 }};
    packet_in.gyro = {{ 297.0, 298.0, 299.0 }};
    packet_in.acc = {{ 381.0, 382.0, 383.0 }};

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GPS_INS packet1{};
    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GPS_INS packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timems, packet2.timems);
    EXPECT_EQ(packet1.lat, packet2.lat);
    EXPECT_EQ(packet1.lon, packet2.lon);
    EXPECT_EQ(packet1.height, packet2.height);
    EXPECT_EQ(packet1.velNed, packet2.velNed);
    EXPECT_EQ(packet1.euler, packet2.euler);
    EXPECT_EQ(packet1.gyro, packet2.gyro);
    EXPECT_EQ(packet1.acc, packet2.acc);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_TELEMETRY_SENSOR_GPS_INS)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_telemetry_sensor_gps_ins_t packet_c {
         963497464, 963497672, 963497880, 963498088, { 963498296, 963498297, 963498298 }, { 213.0, 214.0, 215.0 }, { 297.0, 298.0, 299.0 }, { 381.0, 382.0, 383.0 }
    };

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GPS_INS packet_in{};
    packet_in.timems = 963497464;
    packet_in.lat = 963497672;
    packet_in.lon = 963497880;
    packet_in.height = 963498088;
    packet_in.velNed = {{ 963498296, 963498297, 963498298 }};
    packet_in.euler = {{ 213.0, 214.0, 215.0 }};
    packet_in.gyro = {{ 297.0, 298.0, 299.0 }};
    packet_in.acc = {{ 381.0, 382.0, 383.0 }};

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GPS_INS packet2{};

    mavlink_msg_ascl_telemetry_sensor_gps_ins_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timems, packet2.timems);
    EXPECT_EQ(packet_in.lat, packet2.lat);
    EXPECT_EQ(packet_in.lon, packet2.lon);
    EXPECT_EQ(packet_in.height, packet2.height);
    EXPECT_EQ(packet_in.velNed, packet2.velNed);
    EXPECT_EQ(packet_in.euler, packet2.euler);
    EXPECT_EQ(packet_in.gyro, packet2.gyro);
    EXPECT_EQ(packet_in.acc, packet2.acc);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_TELEMETRY_SENSOR_GENERAL)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GENERAL packet_in{};
    packet_in.timems = 963497464;
    packet_in.ned = {{ 45.0, 46.0, 47.0 }};
    packet_in.llh = {{ 963498296, 963498297, 963498298 }};
    packet_in.velNed = {{ 213.0, 214.0, 215.0 }};
    packet_in.euler = {{ 297.0, 298.0, 299.0 }};
    packet_in.mag = {{ 381.0, 382.0, 383.0 }};
    packet_in.gyro = {{ 465.0, 466.0, 467.0 }};
    packet_in.acc = {{ 549.0, 550.0, 551.0 }};
    packet_in.reserved1 = {{ 633.0, 634.0, 635.0 }};
    packet_in.reserved2 = {{ 717.0, 718.0, 719.0 }};
    packet_in.reserved3 = {{ 801.0, 802.0, 803.0 }};
    packet_in.reserved4 = {{ 885.0, 886.0, 887.0 }};

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GENERAL packet1{};
    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GENERAL packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timems, packet2.timems);
    EXPECT_EQ(packet1.ned, packet2.ned);
    EXPECT_EQ(packet1.llh, packet2.llh);
    EXPECT_EQ(packet1.velNed, packet2.velNed);
    EXPECT_EQ(packet1.euler, packet2.euler);
    EXPECT_EQ(packet1.mag, packet2.mag);
    EXPECT_EQ(packet1.gyro, packet2.gyro);
    EXPECT_EQ(packet1.acc, packet2.acc);
    EXPECT_EQ(packet1.reserved1, packet2.reserved1);
    EXPECT_EQ(packet1.reserved2, packet2.reserved2);
    EXPECT_EQ(packet1.reserved3, packet2.reserved3);
    EXPECT_EQ(packet1.reserved4, packet2.reserved4);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_TELEMETRY_SENSOR_GENERAL)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_telemetry_sensor_general_t packet_c {
         963497464, { 45.0, 46.0, 47.0 }, { 963498296, 963498297, 963498298 }, { 213.0, 214.0, 215.0 }, { 297.0, 298.0, 299.0 }, { 381.0, 382.0, 383.0 }, { 465.0, 466.0, 467.0 }, { 549.0, 550.0, 551.0 }, { 633.0, 634.0, 635.0 }, { 717.0, 718.0, 719.0 }, { 801.0, 802.0, 803.0 }, { 885.0, 886.0, 887.0 }
    };

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GENERAL packet_in{};
    packet_in.timems = 963497464;
    packet_in.ned = {{ 45.0, 46.0, 47.0 }};
    packet_in.llh = {{ 963498296, 963498297, 963498298 }};
    packet_in.velNed = {{ 213.0, 214.0, 215.0 }};
    packet_in.euler = {{ 297.0, 298.0, 299.0 }};
    packet_in.mag = {{ 381.0, 382.0, 383.0 }};
    packet_in.gyro = {{ 465.0, 466.0, 467.0 }};
    packet_in.acc = {{ 549.0, 550.0, 551.0 }};
    packet_in.reserved1 = {{ 633.0, 634.0, 635.0 }};
    packet_in.reserved2 = {{ 717.0, 718.0, 719.0 }};
    packet_in.reserved3 = {{ 801.0, 802.0, 803.0 }};
    packet_in.reserved4 = {{ 885.0, 886.0, 887.0 }};

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GENERAL packet2{};

    mavlink_msg_ascl_telemetry_sensor_general_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timems, packet2.timems);
    EXPECT_EQ(packet_in.ned, packet2.ned);
    EXPECT_EQ(packet_in.llh, packet2.llh);
    EXPECT_EQ(packet_in.velNed, packet2.velNed);
    EXPECT_EQ(packet_in.euler, packet2.euler);
    EXPECT_EQ(packet_in.mag, packet2.mag);
    EXPECT_EQ(packet_in.gyro, packet2.gyro);
    EXPECT_EQ(packet_in.acc, packet2.acc);
    EXPECT_EQ(packet_in.reserved1, packet2.reserved1);
    EXPECT_EQ(packet_in.reserved2, packet2.reserved2);
    EXPECT_EQ(packet_in.reserved3, packet2.reserved3);
    EXPECT_EQ(packet_in.reserved4, packet2.reserved4);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_RC_CHANNELS_RAW)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_RC_CHANNELS_RAW packet_in{};
    packet_in.chan1 = 17235;
    packet_in.chan2 = 17339;
    packet_in.chan3 = 17443;
    packet_in.chan4 = 17547;
    packet_in.chan5 = 17651;
    packet_in.chan6 = 17755;
    packet_in.chan7 = 17859;
    packet_in.chan8 = 17963;
    packet_in.chan9 = 18067;
    packet_in.chan10 = 18171;
    packet_in.chan11 = 18275;
    packet_in.chan12 = 18379;
    packet_in.chan13 = 18483;
    packet_in.chan14 = 18587;
    packet_in.chan15 = 18691;
    packet_in.chan16 = 18795;

    mavlink::ascluav::msg::ASCL_RC_CHANNELS_RAW packet1{};
    mavlink::ascluav::msg::ASCL_RC_CHANNELS_RAW packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.chan1, packet2.chan1);
    EXPECT_EQ(packet1.chan2, packet2.chan2);
    EXPECT_EQ(packet1.chan3, packet2.chan3);
    EXPECT_EQ(packet1.chan4, packet2.chan4);
    EXPECT_EQ(packet1.chan5, packet2.chan5);
    EXPECT_EQ(packet1.chan6, packet2.chan6);
    EXPECT_EQ(packet1.chan7, packet2.chan7);
    EXPECT_EQ(packet1.chan8, packet2.chan8);
    EXPECT_EQ(packet1.chan9, packet2.chan9);
    EXPECT_EQ(packet1.chan10, packet2.chan10);
    EXPECT_EQ(packet1.chan11, packet2.chan11);
    EXPECT_EQ(packet1.chan12, packet2.chan12);
    EXPECT_EQ(packet1.chan13, packet2.chan13);
    EXPECT_EQ(packet1.chan14, packet2.chan14);
    EXPECT_EQ(packet1.chan15, packet2.chan15);
    EXPECT_EQ(packet1.chan16, packet2.chan16);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_RC_CHANNELS_RAW)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_rc_channels_raw_t packet_c {
         17235, 17339, 17443, 17547, 17651, 17755, 17859, 17963, 18067, 18171, 18275, 18379, 18483, 18587, 18691, 18795
    };

    mavlink::ascluav::msg::ASCL_RC_CHANNELS_RAW packet_in{};
    packet_in.chan1 = 17235;
    packet_in.chan2 = 17339;
    packet_in.chan3 = 17443;
    packet_in.chan4 = 17547;
    packet_in.chan5 = 17651;
    packet_in.chan6 = 17755;
    packet_in.chan7 = 17859;
    packet_in.chan8 = 17963;
    packet_in.chan9 = 18067;
    packet_in.chan10 = 18171;
    packet_in.chan11 = 18275;
    packet_in.chan12 = 18379;
    packet_in.chan13 = 18483;
    packet_in.chan14 = 18587;
    packet_in.chan15 = 18691;
    packet_in.chan16 = 18795;

    mavlink::ascluav::msg::ASCL_RC_CHANNELS_RAW packet2{};

    mavlink_msg_ascl_rc_channels_raw_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.chan1, packet2.chan1);
    EXPECT_EQ(packet_in.chan2, packet2.chan2);
    EXPECT_EQ(packet_in.chan3, packet2.chan3);
    EXPECT_EQ(packet_in.chan4, packet2.chan4);
    EXPECT_EQ(packet_in.chan5, packet2.chan5);
    EXPECT_EQ(packet_in.chan6, packet2.chan6);
    EXPECT_EQ(packet_in.chan7, packet2.chan7);
    EXPECT_EQ(packet_in.chan8, packet2.chan8);
    EXPECT_EQ(packet_in.chan9, packet2.chan9);
    EXPECT_EQ(packet_in.chan10, packet2.chan10);
    EXPECT_EQ(packet_in.chan11, packet2.chan11);
    EXPECT_EQ(packet_in.chan12, packet2.chan12);
    EXPECT_EQ(packet_in.chan13, packet2.chan13);
    EXPECT_EQ(packet_in.chan14, packet2.chan14);
    EXPECT_EQ(packet_in.chan15, packet2.chan15);
    EXPECT_EQ(packet_in.chan16, packet2.chan16);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_RC_CHANNELS_SCALED)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_RC_CHANNELS_SCALED packet_in{};
    packet_in.chan1 = 17235;
    packet_in.chan2 = 17339;
    packet_in.chan3 = 17443;
    packet_in.chan4 = 17547;
    packet_in.chan5 = 17651;
    packet_in.chan6 = 17755;
    packet_in.chan7 = 17859;
    packet_in.chan8 = 17963;
    packet_in.chan9 = 18067;
    packet_in.chan10 = 18171;
    packet_in.chan11 = 18275;
    packet_in.chan12 = 18379;
    packet_in.chan13 = 18483;
    packet_in.chan14 = 18587;
    packet_in.chan15 = 18691;
    packet_in.chan16 = 18795;

    mavlink::ascluav::msg::ASCL_RC_CHANNELS_SCALED packet1{};
    mavlink::ascluav::msg::ASCL_RC_CHANNELS_SCALED packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.chan1, packet2.chan1);
    EXPECT_EQ(packet1.chan2, packet2.chan2);
    EXPECT_EQ(packet1.chan3, packet2.chan3);
    EXPECT_EQ(packet1.chan4, packet2.chan4);
    EXPECT_EQ(packet1.chan5, packet2.chan5);
    EXPECT_EQ(packet1.chan6, packet2.chan6);
    EXPECT_EQ(packet1.chan7, packet2.chan7);
    EXPECT_EQ(packet1.chan8, packet2.chan8);
    EXPECT_EQ(packet1.chan9, packet2.chan9);
    EXPECT_EQ(packet1.chan10, packet2.chan10);
    EXPECT_EQ(packet1.chan11, packet2.chan11);
    EXPECT_EQ(packet1.chan12, packet2.chan12);
    EXPECT_EQ(packet1.chan13, packet2.chan13);
    EXPECT_EQ(packet1.chan14, packet2.chan14);
    EXPECT_EQ(packet1.chan15, packet2.chan15);
    EXPECT_EQ(packet1.chan16, packet2.chan16);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_RC_CHANNELS_SCALED)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_rc_channels_scaled_t packet_c {
         17235, 17339, 17443, 17547, 17651, 17755, 17859, 17963, 18067, 18171, 18275, 18379, 18483, 18587, 18691, 18795
    };

    mavlink::ascluav::msg::ASCL_RC_CHANNELS_SCALED packet_in{};
    packet_in.chan1 = 17235;
    packet_in.chan2 = 17339;
    packet_in.chan3 = 17443;
    packet_in.chan4 = 17547;
    packet_in.chan5 = 17651;
    packet_in.chan6 = 17755;
    packet_in.chan7 = 17859;
    packet_in.chan8 = 17963;
    packet_in.chan9 = 18067;
    packet_in.chan10 = 18171;
    packet_in.chan11 = 18275;
    packet_in.chan12 = 18379;
    packet_in.chan13 = 18483;
    packet_in.chan14 = 18587;
    packet_in.chan15 = 18691;
    packet_in.chan16 = 18795;

    mavlink::ascluav::msg::ASCL_RC_CHANNELS_SCALED packet2{};

    mavlink_msg_ascl_rc_channels_scaled_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.chan1, packet2.chan1);
    EXPECT_EQ(packet_in.chan2, packet2.chan2);
    EXPECT_EQ(packet_in.chan3, packet2.chan3);
    EXPECT_EQ(packet_in.chan4, packet2.chan4);
    EXPECT_EQ(packet_in.chan5, packet2.chan5);
    EXPECT_EQ(packet_in.chan6, packet2.chan6);
    EXPECT_EQ(packet_in.chan7, packet2.chan7);
    EXPECT_EQ(packet_in.chan8, packet2.chan8);
    EXPECT_EQ(packet_in.chan9, packet2.chan9);
    EXPECT_EQ(packet_in.chan10, packet2.chan10);
    EXPECT_EQ(packet_in.chan11, packet2.chan11);
    EXPECT_EQ(packet_in.chan12, packet2.chan12);
    EXPECT_EQ(packet_in.chan13, packet2.chan13);
    EXPECT_EQ(packet_in.chan14, packet2.chan14);
    EXPECT_EQ(packet_in.chan15, packet2.chan15);
    EXPECT_EQ(packet_in.chan16, packet2.chan16);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_PWM_OUT)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_PWM_OUT packet_in{};
    packet_in.chan1 = 17235;
    packet_in.chan2 = 17339;
    packet_in.chan3 = 17443;
    packet_in.chan4 = 17547;
    packet_in.chan5 = 17651;
    packet_in.chan6 = 17755;
    packet_in.chan7 = 17859;
    packet_in.chan8 = 17963;
    packet_in.chan9 = 18067;
    packet_in.chan10 = 18171;
    packet_in.chan11 = 18275;
    packet_in.chan12 = 18379;
    packet_in.chan13 = 18483;
    packet_in.chan14 = 18587;
    packet_in.chan15 = 18691;
    packet_in.chan16 = 18795;

    mavlink::ascluav::msg::ASCL_PWM_OUT packet1{};
    mavlink::ascluav::msg::ASCL_PWM_OUT packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.chan1, packet2.chan1);
    EXPECT_EQ(packet1.chan2, packet2.chan2);
    EXPECT_EQ(packet1.chan3, packet2.chan3);
    EXPECT_EQ(packet1.chan4, packet2.chan4);
    EXPECT_EQ(packet1.chan5, packet2.chan5);
    EXPECT_EQ(packet1.chan6, packet2.chan6);
    EXPECT_EQ(packet1.chan7, packet2.chan7);
    EXPECT_EQ(packet1.chan8, packet2.chan8);
    EXPECT_EQ(packet1.chan9, packet2.chan9);
    EXPECT_EQ(packet1.chan10, packet2.chan10);
    EXPECT_EQ(packet1.chan11, packet2.chan11);
    EXPECT_EQ(packet1.chan12, packet2.chan12);
    EXPECT_EQ(packet1.chan13, packet2.chan13);
    EXPECT_EQ(packet1.chan14, packet2.chan14);
    EXPECT_EQ(packet1.chan15, packet2.chan15);
    EXPECT_EQ(packet1.chan16, packet2.chan16);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_PWM_OUT)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_pwm_out_t packet_c {
         17235, 17339, 17443, 17547, 17651, 17755, 17859, 17963, 18067, 18171, 18275, 18379, 18483, 18587, 18691, 18795
    };

    mavlink::ascluav::msg::ASCL_PWM_OUT packet_in{};
    packet_in.chan1 = 17235;
    packet_in.chan2 = 17339;
    packet_in.chan3 = 17443;
    packet_in.chan4 = 17547;
    packet_in.chan5 = 17651;
    packet_in.chan6 = 17755;
    packet_in.chan7 = 17859;
    packet_in.chan8 = 17963;
    packet_in.chan9 = 18067;
    packet_in.chan10 = 18171;
    packet_in.chan11 = 18275;
    packet_in.chan12 = 18379;
    packet_in.chan13 = 18483;
    packet_in.chan14 = 18587;
    packet_in.chan15 = 18691;
    packet_in.chan16 = 18795;

    mavlink::ascluav::msg::ASCL_PWM_OUT packet2{};

    mavlink_msg_ascl_pwm_out_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.chan1, packet2.chan1);
    EXPECT_EQ(packet_in.chan2, packet2.chan2);
    EXPECT_EQ(packet_in.chan3, packet2.chan3);
    EXPECT_EQ(packet_in.chan4, packet2.chan4);
    EXPECT_EQ(packet_in.chan5, packet2.chan5);
    EXPECT_EQ(packet_in.chan6, packet2.chan6);
    EXPECT_EQ(packet_in.chan7, packet2.chan7);
    EXPECT_EQ(packet_in.chan8, packet2.chan8);
    EXPECT_EQ(packet_in.chan9, packet2.chan9);
    EXPECT_EQ(packet_in.chan10, packet2.chan10);
    EXPECT_EQ(packet_in.chan11, packet2.chan11);
    EXPECT_EQ(packet_in.chan12, packet2.chan12);
    EXPECT_EQ(packet_in.chan13, packet2.chan13);
    EXPECT_EQ(packet_in.chan14, packet2.chan14);
    EXPECT_EQ(packet_in.chan15, packet2.chan15);
    EXPECT_EQ(packet_in.chan16, packet2.chan16);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_RL_RESET_COMMAND_LANDING)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_RL_RESET_COMMAND_LANDING packet_in{};
    packet_in.x = 17.0;
    packet_in.y = 45.0;
    packet_in.z = 73.0;
    packet_in.dx = 101.0;
    packet_in.dy = 129.0;
    packet_in.dz = 157.0;
    packet_in.roll = 185.0;
    packet_in.pitch = 213.0;
    packet_in.yaw = 241.0;
    packet_in.p = 269.0;
    packet_in.q = 297.0;
    packet_in.r = 325.0;

    mavlink::ascluav::msg::ASCL_RL_RESET_COMMAND_LANDING packet1{};
    mavlink::ascluav::msg::ASCL_RL_RESET_COMMAND_LANDING packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.x, packet2.x);
    EXPECT_EQ(packet1.y, packet2.y);
    EXPECT_EQ(packet1.z, packet2.z);
    EXPECT_EQ(packet1.dx, packet2.dx);
    EXPECT_EQ(packet1.dy, packet2.dy);
    EXPECT_EQ(packet1.dz, packet2.dz);
    EXPECT_EQ(packet1.roll, packet2.roll);
    EXPECT_EQ(packet1.pitch, packet2.pitch);
    EXPECT_EQ(packet1.yaw, packet2.yaw);
    EXPECT_EQ(packet1.p, packet2.p);
    EXPECT_EQ(packet1.q, packet2.q);
    EXPECT_EQ(packet1.r, packet2.r);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_RL_RESET_COMMAND_LANDING)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_rl_reset_command_landing_t packet_c {
         17.0, 45.0, 73.0, 101.0, 129.0, 157.0, 185.0, 213.0, 241.0, 269.0, 297.0, 325.0
    };

    mavlink::ascluav::msg::ASCL_RL_RESET_COMMAND_LANDING packet_in{};
    packet_in.x = 17.0;
    packet_in.y = 45.0;
    packet_in.z = 73.0;
    packet_in.dx = 101.0;
    packet_in.dy = 129.0;
    packet_in.dz = 157.0;
    packet_in.roll = 185.0;
    packet_in.pitch = 213.0;
    packet_in.yaw = 241.0;
    packet_in.p = 269.0;
    packet_in.q = 297.0;
    packet_in.r = 325.0;

    mavlink::ascluav::msg::ASCL_RL_RESET_COMMAND_LANDING packet2{};

    mavlink_msg_ascl_rl_reset_command_landing_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.x, packet2.x);
    EXPECT_EQ(packet_in.y, packet2.y);
    EXPECT_EQ(packet_in.z, packet2.z);
    EXPECT_EQ(packet_in.dx, packet2.dx);
    EXPECT_EQ(packet_in.dy, packet2.dy);
    EXPECT_EQ(packet_in.dz, packet2.dz);
    EXPECT_EQ(packet_in.roll, packet2.roll);
    EXPECT_EQ(packet_in.pitch, packet2.pitch);
    EXPECT_EQ(packet_in.yaw, packet2.yaw);
    EXPECT_EQ(packet_in.p, packet2.p);
    EXPECT_EQ(packet_in.q, packet2.q);
    EXPECT_EQ(packet_in.r, packet2.r);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_RL_FULL_STATE_LANDING)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_RL_FULL_STATE_LANDING packet_in{};
    packet_in.x = {{ 17.0, 18.0, 19.0 }};
    packet_in.dx = {{ 101.0, 102.0, 103.0 }};
    packet_in.euler = {{ 185.0, 186.0, 187.0 }};
    packet_in.pqr = {{ 269.0, 270.0, 271.0 }};
    packet_in.tgtX = {{ 353.0, 354.0, 355.0 }};
    packet_in.tgtdX = {{ 437.0, 438.0, 439.0 }};
    packet_in.cmdLB = {{ 20979, 20980, 20981, 20982 }};

    mavlink::ascluav::msg::ASCL_RL_FULL_STATE_LANDING packet1{};
    mavlink::ascluav::msg::ASCL_RL_FULL_STATE_LANDING packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.x, packet2.x);
    EXPECT_EQ(packet1.dx, packet2.dx);
    EXPECT_EQ(packet1.euler, packet2.euler);
    EXPECT_EQ(packet1.pqr, packet2.pqr);
    EXPECT_EQ(packet1.tgtX, packet2.tgtX);
    EXPECT_EQ(packet1.tgtdX, packet2.tgtdX);
    EXPECT_EQ(packet1.cmdLB, packet2.cmdLB);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_RL_FULL_STATE_LANDING)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_rl_full_state_landing_t packet_c {
         { 17.0, 18.0, 19.0 }, { 101.0, 102.0, 103.0 }, { 185.0, 186.0, 187.0 }, { 269.0, 270.0, 271.0 }, { 353.0, 354.0, 355.0 }, { 437.0, 438.0, 439.0 }, { 20979, 20980, 20981, 20982 }
    };

    mavlink::ascluav::msg::ASCL_RL_FULL_STATE_LANDING packet_in{};
    packet_in.x = {{ 17.0, 18.0, 19.0 }};
    packet_in.dx = {{ 101.0, 102.0, 103.0 }};
    packet_in.euler = {{ 185.0, 186.0, 187.0 }};
    packet_in.pqr = {{ 269.0, 270.0, 271.0 }};
    packet_in.tgtX = {{ 353.0, 354.0, 355.0 }};
    packet_in.tgtdX = {{ 437.0, 438.0, 439.0 }};
    packet_in.cmdLB = {{ 20979, 20980, 20981, 20982 }};

    mavlink::ascluav::msg::ASCL_RL_FULL_STATE_LANDING packet2{};

    mavlink_msg_ascl_rl_full_state_landing_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.x, packet2.x);
    EXPECT_EQ(packet_in.dx, packet2.dx);
    EXPECT_EQ(packet_in.euler, packet2.euler);
    EXPECT_EQ(packet_in.pqr, packet2.pqr);
    EXPECT_EQ(packet_in.tgtX, packet2.tgtX);
    EXPECT_EQ(packet_in.tgtdX, packet2.tgtdX);
    EXPECT_EQ(packet_in.cmdLB, packet2.cmdLB);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_RL_OBSERVATION_LANDING)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_RL_OBSERVATION_LANDING packet_in{};
    packet_in.h_bar = 17.0;
    packet_in.dImageX = 45.0;
    packet_in.dImageY = 73.0;
    packet_in.velBodyX = 101.0;
    packet_in.velBodyY = 129.0;
    packet_in.dz = 157.0;
    packet_in.p = 185.0;
    packet_in.q = 213.0;
    packet_in.phi = 241.0;
    packet_in.theta = 269.0;

    mavlink::ascluav::msg::ASCL_RL_OBSERVATION_LANDING packet1{};
    mavlink::ascluav::msg::ASCL_RL_OBSERVATION_LANDING packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.h_bar, packet2.h_bar);
    EXPECT_EQ(packet1.dImageX, packet2.dImageX);
    EXPECT_EQ(packet1.dImageY, packet2.dImageY);
    EXPECT_EQ(packet1.velBodyX, packet2.velBodyX);
    EXPECT_EQ(packet1.velBodyY, packet2.velBodyY);
    EXPECT_EQ(packet1.dz, packet2.dz);
    EXPECT_EQ(packet1.p, packet2.p);
    EXPECT_EQ(packet1.q, packet2.q);
    EXPECT_EQ(packet1.phi, packet2.phi);
    EXPECT_EQ(packet1.theta, packet2.theta);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_RL_OBSERVATION_LANDING)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_rl_observation_landing_t packet_c {
         17.0, 45.0, 73.0, 101.0, 129.0, 157.0, 185.0, 213.0, 241.0, 269.0
    };

    mavlink::ascluav::msg::ASCL_RL_OBSERVATION_LANDING packet_in{};
    packet_in.h_bar = 17.0;
    packet_in.dImageX = 45.0;
    packet_in.dImageY = 73.0;
    packet_in.velBodyX = 101.0;
    packet_in.velBodyY = 129.0;
    packet_in.dz = 157.0;
    packet_in.p = 185.0;
    packet_in.q = 213.0;
    packet_in.phi = 241.0;
    packet_in.theta = 269.0;

    mavlink::ascluav::msg::ASCL_RL_OBSERVATION_LANDING packet2{};

    mavlink_msg_ascl_rl_observation_landing_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.h_bar, packet2.h_bar);
    EXPECT_EQ(packet_in.dImageX, packet2.dImageX);
    EXPECT_EQ(packet_in.dImageY, packet2.dImageY);
    EXPECT_EQ(packet_in.velBodyX, packet2.velBodyX);
    EXPECT_EQ(packet_in.velBodyY, packet2.velBodyY);
    EXPECT_EQ(packet_in.dz, packet2.dz);
    EXPECT_EQ(packet_in.p, packet2.p);
    EXPECT_EQ(packet_in.q, packet2.q);
    EXPECT_EQ(packet_in.phi, packet2.phi);
    EXPECT_EQ(packet_in.theta, packet2.theta);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING packet_in{};
    packet_in.phi = 17.0;
    packet_in.theta = 45.0;

    mavlink::ascluav::msg::ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING packet1{};
    mavlink::ascluav::msg::ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.phi, packet2.phi);
    EXPECT_EQ(packet1.theta, packet2.theta);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_rl_action_phi_theta_command_landing_t packet_c {
         17.0, 45.0
    };

    mavlink::ascluav::msg::ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING packet_in{};
    packet_in.phi = 17.0;
    packet_in.theta = 45.0;

    mavlink::ascluav::msg::ASCL_RL_ACTION_PHI_THETA_COMMAND_LANDING packet2{};

    mavlink_msg_ascl_rl_action_phi_theta_command_landing_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.phi, packet2.phi);
    EXPECT_EQ(packet_in.theta, packet2.theta);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif
