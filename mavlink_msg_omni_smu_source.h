#pragma once
// Message OMNI_SMU_SOURCE

#define MAVLINK_MSG_ID_OMNI_SMU_SOURCE 12011

typedef struct __mavlink_msg_omni_smu_source_type
{
	uint8_t 	input_pwm_source;
	
} mavlink_msg_omni_smu_source_type;

#define MAVLINK_MSG_OMNI_SMU_SOURCE_LEN 		1
#define MAVLINK_MSG_OMNI_SMU_SOURCE_MIN_LEN 	1

#define MAVLINK_MSG_OMNI_SMU_SOURCE_CRC 		0

static inline uint16_t mavlink_msg_omni_smu_source_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_msg_omni_smu_source_type* omni_smu_source)
{
	memcpy(_MAV_PAYLOAD_NON_CONST(msg), omni_smu_source, MAVLINK_MSG_OMNI_SMU_SOURCE_LEN);
	msg->msgid = MAVLINK_MSG_ID_OMNI_SMU_SOURCE;
	return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_OMNI_SMU_SOURCE_MIN_LEN, MAVLINK_MSG_OMNI_SMU_SOURCE_LEN, MAVLINK_MSG_OMNI_SMU_SOURCE_CRC);
}

static inline void mavlink_msg_omni_smu_source_decode(const mavlink_message_t* msg, mavlink_msg_omni_smu_source_type* omni_smu_source)
{
	uint8_t len = msg->len < MAVLINK_MSG_OMNI_SMU_SOURCE_LEN? msg->len : MAVLINK_MSG_OMNI_SMU_SOURCE_LEN;
	memset(omni_smu_source, 0, MAVLINK_MSG_OMNI_SMU_SOURCE_LEN);
	memcpy(omni_smu_source, _MAV_PAYLOAD(msg), len);
}
