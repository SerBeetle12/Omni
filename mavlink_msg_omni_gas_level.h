#pragma once
// Message OMNI_GAS_LEVEL

#define MAVLINK_MSG_ID_OMNI_GAS_LEVEL 12003

typedef struct __mavlink_msg_omni_gas_level_type
{
	//from 0 to 3000 in absolute microsecond length in PWM generate
	uint16_t gas_level;
} mavlink_msg_omni_gas_level_type;

#define MAVLINK_MSG_OMNI_GAS_LEVEL_LEN 	2
#define MAVLINK_MSG_OMNI_GAS_LEVEL_MIN_LEN 2

#define MAVLINK_MSG_OMNI_GAS_LEVEL_CRC 	0

static inline uint16_t mavlink_msg_omni_gas_level_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_msg_omni_gas_level_type* omni_gas_level)
{
	memcpy(_MAV_PAYLOAD_NON_CONST(msg), omni_gas_level, MAVLINK_MSG_OMNI_GAS_LEVEL_LEN);
	msg->msgid = MAVLINK_MSG_ID_OMNI_GAS_LEVEL;
	return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_OMNI_GAS_LEVEL_MIN_LEN, MAVLINK_MSG_OMNI_GAS_LEVEL_LEN, MAVLINK_MSG_OMNI_GAS_LEVEL_CRC);
}

static inline void mavlink_msg_omni_gas_level_decode(const mavlink_message_t* msg, mavlink_msg_omni_gas_level_type* omni_gas_level)
{
	uint8_t len = msg->len < MAVLINK_MSG_OMNI_GAS_LEVEL_LEN? msg->len : MAVLINK_MSG_OMNI_GAS_LEVEL_LEN;
	memset(omni_gas_level, 0, MAVLINK_MSG_OMNI_GAS_LEVEL_LEN);
	memcpy(omni_gas_level, _MAV_PAYLOAD(msg), len);
}
