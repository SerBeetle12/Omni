#pragma once
// Message OMNI_SMU_PREHEAT_START

#define MAVLINK_MSG_ID_OMNI_SMU_PREHEAT_START 12005

struct __mavlink_msg_omni_smu_preheat_start_type
{
	uint8_t 	preheat_cycle_count; 
	uint16_t 	idle_revs; 	
	uint16_t 	preheat_revs;
	uint8_t 	icu_work_temp;
	uint16_t 	preheat_cycle_length;
	
} __attribute__((packed));

typedef struct __mavlink_msg_omni_smu_preheat_start_type mavlink_msg_omni_smu_preheat_start_type;

#define MAVLINK_MSG_OMNI_SMU_PREHEAT_START_LEN 		8
#define MAVLINK_MSG_OMNI_SMU_PREHEAT_START_MIN_LEN 	8

#define MAVLINK_MSG_OMNI_SMU_PREHEAT_START_CRC 		0

static inline uint16_t mavlink_msg_omni_smu_preheat_start_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_msg_omni_smu_preheat_start_type* omni_smu_preheat_start)
{
	memcpy(_MAV_PAYLOAD_NON_CONST(msg), omni_smu_preheat_start, MAVLINK_MSG_OMNI_SMU_PREHEAT_START_LEN);
	msg->msgid = MAVLINK_MSG_ID_OMNI_SMU_PREHEAT_START;
	return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_OMNI_SMU_PREHEAT_START_MIN_LEN, MAVLINK_MSG_OMNI_SMU_PREHEAT_START_LEN, MAVLINK_MSG_OMNI_SMU_PREHEAT_START_CRC);
}

static inline void mavlink_msg_omni_smu_preheat_start_decode(const mavlink_message_t* msg, mavlink_msg_omni_smu_preheat_start_type* omni_smu_preheat_start)
{
	uint8_t len = msg->len < MAVLINK_MSG_OMNI_SMU_PREHEAT_START_LEN? msg->len : MAVLINK_MSG_OMNI_SMU_PREHEAT_START_LEN;
	memset(omni_smu_preheat_start, 0, MAVLINK_MSG_OMNI_SMU_PREHEAT_START_LEN);
	memcpy(omni_smu_preheat_start, _MAV_PAYLOAD(msg), len);
}
