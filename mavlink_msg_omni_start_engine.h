#pragma once
// Message OMNI_START_ENGINE

#define MAVLINK_MSG_ID_OMNI_START_ENGINE 12002

typedef struct __mavlink_msg_omni_start_engine_type
{
	//command to start 1 - if start and 0 - if stop engine
	uint8_t start_command;
} mavlink_msg_omni_start_engine_type;

#define MAVLINK_MSG_OMNI_START_ENGINE_LEN 	1
#define MAVLINK_MSG_OMNI_START_ENGINE_MIN_LEN 1

#define MAVLINK_MSG_OMNI_START_ENGINE_CRC 	0

static inline uint16_t mavlink_msg_omni_start_engine_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_msg_omni_start_engine_type* omni_start_engine)
{
	memcpy(_MAV_PAYLOAD_NON_CONST(msg), omni_start_engine, MAVLINK_MSG_OMNI_START_ENGINE_LEN);
	msg->msgid = MAVLINK_MSG_ID_OMNI_START_ENGINE;
	return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_OMNI_START_ENGINE_MIN_LEN, MAVLINK_MSG_OMNI_START_ENGINE_LEN, MAVLINK_MSG_OMNI_START_ENGINE_CRC);
}

static inline void mavlink_msg_omni_start_engine_decode(const mavlink_message_t* msg, mavlink_msg_omni_start_engine_type* omni_start_engine)
{
	uint8_t len = msg->len < MAVLINK_MSG_OMNI_START_ENGINE_LEN? msg->len : MAVLINK_MSG_OMNI_START_ENGINE_LEN;
	memset(omni_start_engine, 0, MAVLINK_MSG_OMNI_START_ENGINE_LEN);
	memcpy(omni_start_engine, _MAV_PAYLOAD(msg), len);
}
