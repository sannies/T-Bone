//hard coded value
#define MAX_MOTOR_CURRENT_260 1500
#define MAX_MOTOR_CURRENT_5041 1500

//registers for TMC4361
#define TMC4361_GENERAL_CONFIG_REGISTER 0x0
#define TMC4361_REFERENCE_CONFIG_REGISTER 0x01
#define TMC4361_START_CONFIG_REGISTER 0x2
#define TMC4361_INPUT_FILTER_REGISTER 0x3
#define TMC4361_SPIOUT_CONF_REGISTER 0x04
#define TMC4361_ENCODER_INPUT_CONFIG_REGISTER 0x07
#define TMC4361_STEP_CONF_REGISTER 0x0A
#define TMC4361_EVENT_CLEAR_CONF_REGISTER 0x0c
#define TMC4361_INTERRUPT_CONFIG_REGISTER 0x0d
#define TMC4361_EVENTS_REGISTER 0x0e
#define TMC4361_STATUS_REGISTER 0x0f
#define TMC4361_START_OUT_ADD_REGISTER 0x11
#define TMC4361_GEAR_RATIO_REGISTER 0x12
#define TMC4361_START_DELAY_REGISTER 0x13
#define TMC4361_RAMP_MODE_REGISTER 0x20
#define TMC4361_X_ACTUAL_REGISTER 0x21 
#define TMC4361_V_ACTUAL_REGISTER 0x22
#define TMC4361_A_ACTUAL_REGISTER 0x23
#define TMC4361_V_MAX_REGISTER 0x24
#define TMC4361_V_START_REGISTER 0x25
#define TMC4361_V_STOP_REGISTER 0x26
#define TMC4361_A_MAX_REGISTER 0x28
#define TMC4361_D_MAX_REGISTER 0x29
#define TMC4361_BOW_1_REGISTER 0x2d
#define TMC4361_BOW_2_REGISTER 0x2e
#define TMC4361_BOW_3_REGISTER 0x2f
#define TMC4361_BOW_4_REGISTER 0x30
#define TMC4361_CLK_FREQ_REGISTER 0x31
#define TMC4361_POSITION_COMPARE_REGISTER 0x32
#define TMC4361_VIRTUAL_STOP_LEFT_REGISTER 0x33
#define TMC4361_VIRTUAL_STOP_RIGHT_REGISTER 0x34
#define TMC4361_X_LATCH_REGISTER 0x36
#define TMC4361_X_TARGET_REGISTER 0x37
#define TMC4361_X_TARGET_PIPE_0_REGSISTER 0x38
#define TMC4361_SH_RAMP_MODE_REGISTER 0x40
#define TMC4361_SH_V_MAX_REGISTER 0x41
#define TMC4361_SH_V_START_REGISTER 0x42
#define TMC4361_SH_V_STOP_REGISTER 0x43
#define TMC4361_SH_VBREAK_REGISTER 0x44
#define TMC4361_SH_A_MAX_REGISTER 0x45
#define TMC4361_SH_D_MAX_REGISTER 0x46
#define TMC4361_SH_BOW_1_REGISTER 0x49
#define TMC4361_SH_BOW_2_REGISTER 0x4a
#define TMC4361_SH_BOW_3_REGISTER 0x4b
#define TMC4361_SH_BOW_4_REGISTER 0x4c
#define TMC4361_ENCODER_POSITION_REGISTER 0x50
#define TMC4361_ENCODER_INPUT_RESOLUTION_REGISTER 0x54
#define TMC4361_COVER_LOW_REGISTER 0x6c
#define TMC4361_COVER_HIGH_REGISTER 0x6d

//registers for TMC5041
#define TMC5041_GENERAL_CONFIG_REGISTER 0x00
#define TMC5041_GENERAL_STATUS_REGISTER 0x01
#define TMC5041_INPUT_REGISTER 0x04

#define TMC5041_RAMP_MODE_REGISTER_1 0x20
#define TMC5041_X_ACTUAL_REGISTER_1 0x21
#define TMC5041_V_ACTUAL_REGISTER_1 0x22
#define TMC5041_V_START_REGISTER_1 0x23
#define TMC5041_A_1_REGISTER_1 0x24
#define TMC5041_V_1_REGISTER_1 0x25
#define TMC5041_A_MAX_REGISTER_1 0x26
#define TMC5041_V_MAX_REGISTER_1 0x27
#define TMC5041_D_MAX_REGISTER_1 0x28
#define TMC5041_D_1_REGISTER_1 0x2a
#define TMC5041_V_STOP_REGISTER_1 0x2b
#define TMC5041_T_ZERO_WAIT_REGISTER_1 0x2c
#define TMC5041_X_TARGET_REGISTER_1 0x2d
#define TMC5041_HOLD_RUN_CURRENT_REGISTER_1 0x30
#define TMC5041_REFERENCE_SWITCH_CONFIG_REGISTER_1 0x34
#define TMC5041_X_LATCH_REGISTER_1 0x36
#define TMC5041_RAMP_STATUS_REGISTER_1 0x35
#define TMC5041_CHOPPER_CONFIGURATION_REGISTER_1 0x6c
#define TMC5041_DRIVER_STATUS_REGISTER_1 0x6f

#define TMC5041_RAMP_MODE_REGISTER_2 0x40
#define TMC5041_X_ACTUAL_REGISTER_2 0x41
#define TMC5041_V_ACTUAL_REGISTER_2 0x42
#define TMC5041_V_START_REGISTER_2 0x43
#define TMC5041_A_1_REGISTER_2 0x44
#define TMC5041_V_1_REGISTER_2 0x45
#define TMC5041_A_MAX_REGISTER_2 0x46
#define TMC5041_V_MAX_REGISTER_2 0x47
#define TMC5041_D_MAX_REGISTER_2 0x48
#define TMC5041_D_1_REGISTER_2 0x4a
#define TMC5041_V_STOP_REGISTER_2 0x4b
#define TMC5041_T_ZERO_WAIT_REGISTER_2 04c
#define TMC5041_X_TARGET_REGISTER_2 0x4d
#define TMC5041_HOLD_RUN_CURRENT_REGISTER_2 0x50
#define TMC5041_REFERENCE_SWITCH_CONFIG_REGISTER_2 0x54
#define TMC5041_X_LATCH_REGISTER_2 0x56
#define TMC5041_RAMP_STATUS_REGISTER_2 0x55
#define TMC5041_CHOPPER_CONFIGURATION_REGISTER_2 0x7c
#define TMC5041_DRIVER_STATUS_REGISTER_2 0x7f

//a nice define to address the TMC5041
#define TMC5041_MOTORS 3

//standard values
#define I_HOLD_DELAY 2
#define V_LOW_SENSE 0.325
#define V_HIGH_SENSE 0.18
#define SQRT_2 (1.414213562373095)
#define TMC_5041_R_SENSE 0.22        // Lars: 220mOhm on electronic

//some nice calculation s
//simple FP math see https://ucexperiment.wordpress.com/2012/10/28/fixed-point-math-on-the-arduino-platform/
#define FIXED_23_8_MAKE(a)     (int32_t)((a*(1ul << 8ul)))
#define FIXED_22_2_MAKE(a)     (int32_t)((a*(1ul << 2ul)))

#define X_TARGET_IN_DIRECTION(m,t) ((inverted_motors & _BV(m))? -t:t)
#define IS_COORDINATED_MOTOR(a) (a<nr_of_coordinated_motors)

//how to mask REFERENCE_CONFIG_REGISTER if you want to configure just one end 
#define TMC4361_LEFT_ENDSTOP_REGISTER_PATTERN (_BV(0) | _BV(2) | _BV(6) | _BV(10) | _BV(11) | _BV(14))
#define TMC4361_RIGHT_ENDSTOP_REGISTER_PATTERN (_BV(1) | _BV(3) | _BV(7) | _BV(12) | _BV(13) | _BV(15))
#define TMC5041_LEFT_ENDSTOP_REGISTER_PATTERN (_BV(0) | _BV(2) | _BV(5) | _BV(6))
#define TMC5041_RIGHT_ENDSTOP_REGISTER_PATTERN (_BV(1) | _BV(3) | _BV(7) | _BV(8))

