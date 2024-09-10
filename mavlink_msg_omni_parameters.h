#pragma once
// Message OMNI_PARAMETERS

#define MAVLINK_MSG_ID_OMNI_PARAMETERS 12012

typedef struct __mavlink_msg_omni_parameters_type
{
	float temp_sensor_1_a;
	float temp_sensor_1_b;
	float temp_sensor_ref_1;
	float temp_sensor_2_a;
	float temp_sensor_2_b;
	float temp_sensor_ref_2;
	//24
	uint8_t encoder_throttle_zero_shift;
	uint8_t encoder_tail_zero_shift;
	//26
	uint16_t 	rpm_engine_prescaller;
	uint8_t 	rpm_engine_filter;
	uint16_t 	rpm_rotor_prescaller;
	uint8_t 	rpm_rotor_filter;
	//32
	uint8_t		height_sensor_filter;
	uint16_t	height_sensor_max_prefilght_level;
	//35
	float fuel_sensor_a_1;
	float fuel_sensor_b_1;
	float fuel_sensor_a_2;
	float fuel_sensor_b_2;
	//51
	float engine_gas_level_a;
	float engine_gas_level_b;
	float engine_gas_level_c;
	float engine_gas_level_d;
	uint16_t engine_max_inc_rpm;
	uint16_t engine_max_inc_pwm;
	//71
	uint8_t engine_start_time;
	uint8_t emergency_sound_time;
	//73
	uint32_t reserv_param;
	//77
	
} mavlink_msg_omni_parameters_type;

#define MAVLINK_MSG_OMNI_PARAMETERS_LEN 	77
#define MAVLINK_MSG_OMNI_PARAMETERS_MIN_LEN 77

#define MAVLINK_MSG_OMNI_PARAMETERS_CRC 	0

static inline uint16_t mavlink_msg_omni_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_msg_omni_parameters_type* omni_parameters)
{
	memcpy(_MAV_PAYLOAD_NON_CONST(msg), omni_parameters, MAVLINK_MSG_OMNI_PARAMETERS_LEN);
	msg->msgid = MAVLINK_MSG_ID_OMNI_PARAMETERS;
	return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_OMNI_PARAMETERS_MIN_LEN, MAVLINK_MSG_OMNI_PARAMETERS_LEN, MAVLINK_MSG_OMNI_PARAMETERS_CRC);
}

static inline void mavlink_msg_omni_parameters_decode(const mavlink_message_t* msg, mavlink_msg_omni_parameters_type* omni_parameters)
{
	uint8_t len = msg->len < MAVLINK_MSG_OMNI_PARAMETERS_LEN? msg->len : MAVLINK_MSG_OMNI_PARAMETERS_LEN;
	memset(omni_parameters, 0, MAVLINK_MSG_OMNI_PARAMETERS_LEN);
	memcpy(omni_parameters, _MAV_PAYLOAD(msg), len);
}
