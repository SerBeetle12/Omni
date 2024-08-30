#pragma once
// Message OMNI_SMU_STOP

#define MAVLINK_MSG_ID_OMNI_SMU_STOP 12009

typedef struct __mavlink_msg_omni_smu_stop_type
{
	uint8_t 	stop_cycle_count;
	
} mavlink_msg_omni_smu_stop_type;

#define MAVLINK_MSG_OMNI_SMU_STOP_LEN 		1
#define MAVLINK_MSG_OMNI_SMU_STOP_MIN_LEN 	1

#define MAVLINK_MSG_OMNI_SMU_STOP_CRC 		0

static inline uint16_t mavlink_msg_omni_smu_stop_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_msg_omni_smu_stop_type* omni_smu_stop)
{
	memcpy(_MAV_PAYLOAD_NON_CONST(msg), omni_smu_stop, MAVLINK_MSG_OMNI_SMU_STOP_LEN);
	msg->msgid = MAVLINK_MSG_ID_OMNI_SMU_STOP;
	return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_OMNI_SMU_STOP_MIN_LEN, MAVLINK_MSG_OMNI_SMU_STOP_LEN, MAVLINK_MSG_OMNI_SMU_STOP_CRC);
}

static inline void mavlink_msg_omni_smu_stop_decode(const mavlink_message_t* msg, mavlink_msg_omni_smu_stop_type* omni_smu_stop)
{
	uint8_t len = msg->len < MAVLINK_MSG_OMNI_SMU_STOP_LEN? msg->len : MAVLINK_MSG_OMNI_SMU_STOP_LEN;
	memset(omni_smu_stop, 0, MAVLINK_MSG_OMNI_SMU_STOP_LEN);
	memcpy(omni_smu_stop, _MAV_PAYLOAD(msg), len);
}
