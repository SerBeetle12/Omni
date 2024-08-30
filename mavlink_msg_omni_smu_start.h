#pragma once
// Message OMNI_SMU_START

#define MAVLINK_MSG_ID_OMNI_SMU_START 12007

typedef struct __mavlink_msg_omni_smu_start_type
{
	uint8_t 	start_cycle_count; 
	uint16_t 	idle_revs;
	
} mavlink_msg_omni_smu_start_type;

#define MAVLINK_MSG_OMNI_SMU_START_LEN 		3
#define MAVLINK_MSG_OMNI_SMU_START_MIN_LEN 	3

#define MAVLINK_MSG_OMNI_SMU_START_CRC 		0

static inline uint16_t mavlink_msg_omni_smu_start_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_msg_omni_smu_start_type* omni_smu_start)
{
	memcpy(_MAV_PAYLOAD_NON_CONST(msg), omni_smu_start, MAVLINK_MSG_OMNI_SMU_START_LEN);
	msg->msgid = MAVLINK_MSG_ID_OMNI_SMU_START;
	return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_OMNI_SMU_START_MIN_LEN, MAVLINK_MSG_OMNI_SMU_START_LEN, MAVLINK_MSG_OMNI_SMU_START_CRC);
}

static inline void mavlink_msg_omni_smu_start_decode(const mavlink_message_t* msg, mavlink_msg_omni_smu_start_type* omni_smu_start)
{
	uint8_t len = msg->len < MAVLINK_MSG_OMNI_SMU_START_LEN? msg->len : MAVLINK_MSG_OMNI_SMU_START_LEN;
	memset(omni_smu_start, 0, MAVLINK_MSG_OMNI_SMU_START_LEN);
	memcpy(omni_smu_start, _MAV_PAYLOAD(msg), len);
}
