#pragma once
// Message OMNI_SENSORS_MAIN

#define MAVLINK_MSG_ID_OMNI_SENSORS_MAIN 12001

typedef struct __mavlink_msg_omni_sensors_main_type
{
	//fuel
	uint8_t tank1_fuel_level; 		//first fuel level in % from 0 to 100
	uint8_t tank2_fuel_level; 		//second fuel level in % from 0 to 100
	//temperature
	uint16_t cylinder1_head_temp; 	//head 1 temperature in degree Celsius
	uint16_t cylinder2_head_temp; 	//head 1 temperature in degree Celsius
	/// INA226 data (voltage in volt, current in amper)
	float input_voltage;
	float input_current;
	float channel1_voltage;
	float channel1_current;
	float channel2_voltage;
	float channel2_current;
	float channel3_voltage;
	float channel3_current;
	float channel4_voltage;
	float channel4_current;
	//throttle_pwm
	uint16_t throttle_pwm_input; 	//from 800 to 2400
	uint16_t throttle_pwm_output;	//from 800 to 2400
	// Encoders (angle in degrees)
	uint8_t throttle_encoder;		//0.5 degree
	uint8_t tail_rotor_encoder;		//0.5 degree
	// Propeller speed sensors in rotate per minute (RPM)
	uint16_t rpm_sensor1; 			//Hz
	uint16_t rpm_sensor2; 			//Hz
	// Lidar sensor (height in meters)
	uint16_t measured_height;		//cm
	//
	uint8_t trusted_sensors;
} mavlink_msg_omni_sensors_main_type;

#define MAVLINK_MSG_OMNI_SENSORS_MAIN_LEN 	59
#define MAVLINK_MSG_OMNI_SENSORS_MAIN_MIN_LEN 59

#define MAVLINK_MSG_OMNI_SENSORS_MAIN_CRC 	0

static inline uint16_t mavlink_msg_omni_sensors_main_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_msg_omni_sensors_main_type* omni_sensors_main)
{
	memcpy(_MAV_PAYLOAD_NON_CONST(msg), omni_sensors_main, MAVLINK_MSG_OMNI_SENSORS_MAIN_LEN);
	msg->msgid = MAVLINK_MSG_ID_OMNI_SENSORS_MAIN;
	return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_OMNI_SENSORS_MAIN_MIN_LEN, MAVLINK_MSG_OMNI_SENSORS_MAIN_LEN, MAVLINK_MSG_OMNI_SENSORS_MAIN_CRC);
}

static inline void mavlink_msg_omni_sensors_main_decode(const mavlink_message_t* msg, mavlink_msg_omni_sensors_main_type* omni_sensors_main)
{
	uint8_t len = msg->len < MAVLINK_MSG_OMNI_SENSORS_MAIN_LEN? msg->len : MAVLINK_MSG_OMNI_SENSORS_MAIN_LEN;
	memset(omni_sensors_main, 0, MAVLINK_MSG_OMNI_SENSORS_MAIN_LEN);
	memcpy(omni_sensors_main, _MAV_PAYLOAD(msg), len);
}
