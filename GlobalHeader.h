﻿#ifndef GLOBALHEADER_H
#define GLOBALHEADER_H

#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include "Logger.h"

#define BUILD_PATH  "/home/thornch/Desktop/ChickChick_Eng/build/"

inline void SetLEColor(QLineEdit *le, QString color){
    le->setStyleSheet("QLineEdit{background-color:"+color+"}");
}
inline void SetLBColor(QLabel *lb, QString color){
    lb->setStyleSheet("QLabel{background-color:"+color+"}");
}
inline void SetBTNColor(QPushButton *btn, QString color){
    btn->setStyleSheet("QPushButton{background-color:"+color+"}");
}



#define COLOR_NONE      "white"
#define COLOR_GOOD      "#40C86D"
#define COLOR_BAD       "#FF4F4F"
#define COLOR_WEAKBAD   "#FF4F4F"
#define COLOR_BLUE      "#119ADD"

#define COLOR_UNDETERMINED "#BFBFBF"


#define MENU_TYPE_NUM   6


extern int FIRE_NUM;

extern int IS_UI_LOCK;

extern Logger    *plog;
extern QString  appPath;


enum{
    PLATFORM_INIT_IDLE = 0,
    PLATFORM_INIT_START,
    PLATFORM_INIT_CHECK_CONNECTION,
    PLATFORM_INIT_CHECK_ROBOT_IN_GOOD_POSTURE,
    PLATFORM_INIT_CHECK_ROBOT_CONNECTION,
    PLATFORM_INIT_ROBOT_PROGRAM_TURN_ON,
    PLATFORM_INIT_OUTLET,
    PLATFORM_INIT_OUTLET_DONE,
    PLATFORM_INIT_DONE,
    PLATFORM_INIT_ON_SUCCESS_STATE,
    PLATFORM_INIT_ON_FAIL_STATE
};

enum{
    PLATFORM_OPERATION_IDLE = 0,
    PLATFORM_OPERATION_START,
    PLATFORM_OPERATION_CHECK_ON_INIT_SUCCES_STATE,
    PLATFORM_OPERATION_CHECK_ROBOT_POSTURE,
    PLATFORM_OPERATION_CHECK_PLATFORM_CLOSED,
    PLATFORM_OPERATION_CHECK_OUTLET_OCCUPY,
    PLATFORM_OPERATION_CHECK_SCHEDULER,
    PLATFORM_OPERATION_ON_OPERATING_STATE,
    PLATFORM_OPERATION_ON_OPERATING_FAIL_STATE,
    PLATFORM_OPERATION_ON_ERROR_STATE,

    PLATFORM_OPERATION_FATAL_CHECK_ROBOT_DANGEROUS_POSITION,
    PLATFORM_OPERATION_FATAL_AVOID_ROBOT_DANGEROUS_POSITION,
    PLATFORM_OPERATION_PLATFORM_OPENED_DETECTED,
};
enum{
    DISPLAY_MODE_IDLE = 0,
    DISPLAY_MODE_IN_READY,
    DISPLAY_MODE_IN_OPERATION,
};
extern int OP_STATUS_INITIALIZING;
extern int OP_STATUS_OPERATING;

extern int SUPER_FATAL_ERROR_PLATFORM_OPEN;
extern int PLATFORM_OPENED_WHEN_OPERATING_FLAG;





// ==========================================================


typedef struct{
    QString action;
    int action_time;
    int action_done;
}ST_RECIPE_STEP;
typedef QVector<ST_RECIPE_STEP> V_RECIPE;

typedef struct{
    QString menu_name;
    V_RECIPE recipe;
}ST_MENU;

extern QVector<ST_MENU>    MENUS;


//====================================================================================


#define MAX_SHARED_DATA 128
#define MAX_CONFIG_DATA 157

typedef union{
    struct{
        char    header[4];
        // 0
        float   time;                   // time [sec]
        float   jnt_ref[6];             // joint reference [deg]
        float   jnt_ang[6];             // joint encoder value [deg]
        float   cur[6];                 // joint current value [mA]
        // 19
        float   tcp_ref[6];             // calculated tool center point from reference [mm, deg]
        float   tcp_pos[6];             // calculated tool center point from encoder [mm, deg]
        // 31
        float   analog_in[4];           // analog input value of control box [V]
        float   analog_out[4];          // analog output value of control box [V]
        int     digital_in[16];         // digital input value of control box [0 or 1]
        int     digital_out[16];        // digital input value of control box [0 or 1]
        // 71
        float   temperature_mc[6];      // board temperature of each joint [celcius]
        // 77
        int     task_pc;                // (ignore)
        int     task_repeat;            // (ignore)
        int     task_run_id;            // (ignore)
        int     task_run_num;           // (ignore)
        float   task_run_time;          // (ignore)
        int     task_state;             // (ignore)
        // 83
        float   default_speed;          // overriding speed [0~1]
        int     robot_state;            // state of robot motion [1:idle  2:paused or stopped by accident  3: moving]
        int     power_state;            // power state
        // 86
        float   tcp_target[6];          // (ignore)
        int     jnt_info[6];            // joint information (look mSTAT)
        // 98
        int     collision_detect_onoff; // collision detect onoff [0:off  1:on]
        int     is_freedrive_mode;      // current freedrive status [0:off  1:on]
        int     program_mode;           // current program mode [0:real mode  1:simulation mode]
        // 101
        int     init_state_info;        // status information of robot initialization process
        int     init_error;             // error code of robot initialization process
        // 103
        float   tfb_analog_in[2];       // analog input value of tool flange board [V]
        int     tfb_digital_in[2];      // digital input value of tool flange board [0 or 1]
        int     tfb_digital_out[2];     // digital output value of tool flange board [0 or 1]
        float   tfb_voltage_out;        // reference voltage of tool flange board [0, 12, 24]
        // 110
        int     op_stat_collision_occur;
        int     op_stat_sos_flag;
        int     op_stat_self_collision;
        int     op_stat_soft_estop_occur;
        int     op_stat_ems_flag;
        // 115
        int     digital_in_config[2];
        // 117
        int     inbox_trap_flag[2];
        int     inbox_check_mode[2];
        // 121
        float eft_fx;
        float eft_fy;
        float eft_fz;
        float eft_mx;
        float eft_my;
        float eft_mz;
        // 127


    }sdata;
    float fdata[MAX_SHARED_DATA];
    int idata[MAX_SHARED_DATA];
}systemSTAT;

typedef union{
    struct{
        char    header[4];
        // 0
        float   sensitivity;            // collision threshold [0~1]
        float   work_x_min;             // (ignore)
        float   work_x_max;             // (ignore)
        float   work_y_min;             // (ignore)
        float   work_y_max;             // (ignore)
        float   work_z_min;             // (ignore)
        float   work_z_max;             // (ignore)
        int     work_onoff;
        float   mount_rotate[3];        // direction of gravity [normalized vector]
        // 11
        float   toolbox_size[3];        // virtual collision box size of tool [mm]
        float   toolbox_center_pos[3];  // virtual collision box position of tool [mm]
        float   tool_mass;              // tool mass [kg]
        float   tool_mass_center_pos[3];// center of mass position of tool [mm]
        float   tool_ee_pos[3];         // tool position [mm]
        // 24
        int     usb_detected_flag;
        int     usb_copy_done_flag;
        // 26
        int     rs485_tool_baud;
        int     rs485_tool_stopbit;
        int     rs485_tool_paritybit;
        int     rs485_box_baud;
        int     rs485_box_stopbit;
        int     rs485_box_paritybit;
        // 32
        int     io_function_in[16];
        int     io_function_out[16];
        // 64
        int     ip_addr[4];
        int     netmask[4];
        int     gateway[4];
        // 76
        int     version;
        // 77
        char    default_script[64];    // 16*4
        // 93
        int     auto_init;
        float   inbox0_size[3];
        float   inbox0_pos[3];
        float   inbox1_size[3];
        float   inbox1_pos[3];
        // 106
        int     default_repeat_num;
        // 107
        float   direct_teaching_sensitivity[6];
        // 113
        float   tool_ee_ori[3];
        // 116
        float   user_coord_0[6];
        float   user_coord_1[6];
        float   user_coord_2[6];
        // 134
        char    dio_begin_box_dout[16]; // 4*4
        float   dio_begin_box_aout[4];
        char    dio_end_box_dout[16];   // 4*4
        float   dio_end_box_aout[4];
        int     dio_begin_tool_voltage; // 1
        int     dio_end_tool_voltage;   // 1
        char    dio_begin_tool_dout[2]; // 1
        char    dio_end_tool_dout[2];   // -
        // 153
        int     ext_ft_model_info;
        // 154
        int     robot_model_type;
        // 155
        int     collision_stop_mode;
        // 156

    }sdata;
    float fdata[MAX_CONFIG_DATA];
}systemCONFIG;

typedef struct{
    char    header[4];
    char    type;
    char    msg[1000];
    int     len;
}systemPOPUP;

extern systemSTAT   sys_status;
extern systemCONFIG sys_config;
extern systemPOPUP  sys_popup;


#endif // GLOBALHEADER_H
