#pragma once
// Message OMNI_SMU_STOP_ACK

#define MAVLINK_MSG_ID_OMNI_SMU_STOP_ACK 12010

typedef struct __mavlink_msg_omni_smu_stop_ack_type
{
	uint8_t 	stop_cycle_count;
	uint8_t 	stop_status;
	
} mavlink_msg_omni_smu_stop_ack_type;

#define MAVLINK_MSG_OMNI_SMU_STOP_ACK_LEN 		2
#define MAVLINK_MSG_OMNI_SMU_STOP_ACK_MIN_LEN 	2

#define MAVLINK_MSG_OMNI_SMU_STOP_ACK_CRC 		0

static inline uint16_t mavlink_msg_omni_smu_stop_ack_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_msg_omni_smu_stop_ack_type* omni_smu_stop_ack)
{
	memcpy(_MAV_PAYLOAD_NON_CONST(msg), omni_smu_stop_ack, MAVLINK_MSG_OMNI_SMU_STOP_ACK_LEN);
	msg->msgid = MAVLINK_MSG_ID_OMNI_SMU_STOP_ACK;
	return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_OMNI_SMU_STOP_ACK_MIN_LEN, MAVLINK_MSG_OMNI_SMU_STOP_ACK_LEN, MAVLINK_MSG_OMNI_SMU_STOP_ACK_CRC);
}

static inline void mavlink_msg_omni_smu_stop_ack_decode(const mavlink_message_t* msg, mavlink_msg_omni_smu_stop_ack_type* omni_smu_stop_ack)
{
	uint8_t len = msg->len < MAVLINK_MSG_OMNI_SMU_STOP_ACK_LEN? msg->len : MAVLINK_MSG_OMNI_SMU_STOP_ACK_LEN;
	memset(omni_smu_stop_ack, 0, MAVLINK_MSG_OMNI_SMU_STOP_ACK_LEN);
	memcpy(omni_smu_stop_ack, _MAV_PAYLOAD(msg), len);
}
