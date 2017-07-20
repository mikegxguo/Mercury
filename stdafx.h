// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently



/*********************************************************************
*
*       Defines for constants
*/
#define    ________    0x0
#define    _______X    0x1
#define    ______X_    0x2
#define    ______XX    0x3
#define    _____X__    0x4
#define    _____X_X    0x5
#define    _____XX_    0x6
#define    _____XXX    0x7
#define    ____X___    0x8
#define    ____X__X    0x9
#define    ____X_X_    0xa
#define    ____X_XX    0xb
#define    ____XX__    0xc
#define    ____XX_X    0xd
#define    ____XXX_    0xe
#define    ____XXXX    0xf
#define    ___X____    0x10
#define    ___X___X    0x11
#define    ___X__X_    0x12
#define    ___X__XX    0x13
#define    ___X_X__    0x14
#define    ___X_X_X    0x15
#define    ___X_XX_    0x16
#define    ___X_XXX    0x17
#define    ___XX___    0x18
#define    ___XX__X    0x19
#define    ___XX_X_    0x1a
#define    ___XX_XX    0x1b
#define    ___XXX__    0x1c
#define    ___XXX_X    0x1d
#define    ___XXXX_    0x1e
#define    ___XXXXX    0x1f
#define    __X_____    0x20
#define    __X____X    0x21
#define    __X___X_    0x22
#define    __X___XX    0x23
#define    __X__X__    0x24
#define    __X__X_X    0x25
#define    __X__XX_    0x26
#define    __X__XXX    0x27
#define    __X_X___    0x28
#define    __X_X__X    0x29
#define    __X_X_X_    0x2a
#define    __X_X_XX    0x2b
#define    __X_XX__    0x2c
#define    __X_XX_X    0x2d
#define    __X_XXX_    0x2e
#define    __X_XXXX    0x2f
#define    __XX____    0x30
#define    __XX___X    0x31
#define    __XX__X_    0x32
#define    __XX__XX    0x33
#define    __XX_X__    0x34
#define    __XX_X_X    0x35
#define    __XX_XX_    0x36
#define    __XX_XXX    0x37
#define    __XXX___    0x38
#define    __XXX__X    0x39
#define    __XXX_X_    0x3a
#define    __XXX_XX    0x3b
#define    __XXXX__    0x3c
#define    __XXXX_X    0x3d
#define    __XXXXX_    0x3e
#define    __XXXXXX    0x3f
#define    _X______    0x40
#define    _X_____X    0x41
#define    _X____X_    0x42
#define    _X____XX    0x43
#define    _X___X__    0x44
#define    _X___X_X    0x45
#define    _X___XX_    0x46
#define    _X___XXX    0x47
#define    _X__X___    0x48
#define    _X__X__X    0x49
#define    _X__X_X_    0x4a
#define    _X__X_XX    0x4b
#define    _X__XX__    0x4c
#define    _X__XX_X    0x4d
#define    _X__XXX_    0x4e
#define    _X__XXXX    0x4f
#define    _X_X____    0x50
#define    _X_X___X    0x51
#define    _X_X__X_    0x52
#define    _X_X__XX    0x53
#define    _X_X_X__    0x54
#define    _X_X_X_X    0x55
#define    _X_X_XX_    0x56
#define    _X_X_XXX    0x57
#define    _X_XX___    0x58
#define    _X_XX__X    0x59
#define    _X_XX_X_    0x5a
#define    _X_XX_XX    0x5b
#define    _X_XXX__    0x5c
#define    _X_XXX_X    0x5d
#define    _X_XXXX_    0x5e
#define    _X_XXXXX    0x5f
#define    _XX_____    0x60
#define    _XX____X    0x61
#define    _XX___X_    0x62
#define    _XX___XX    0x63
#define    _XX__X__    0x64
#define    _XX__X_X    0x65
#define    _XX__XX_    0x66
#define    _XX__XXX    0x67
#define    _XX_X___    0x68
#define    _XX_X__X    0x69
#define    _XX_X_X_    0x6a
#define    _XX_X_XX    0x6b
#define    _XX_XX__    0x6c
#define    _XX_XX_X    0x6d
#define    _XX_XXX_    0x6e
#define    _XX_XXXX    0x6f
#define    _XXX____    0x70
#define    _XXX___X    0x71
#define    _XXX__X_    0x72
#define    _XXX__XX    0x73
#define    _XXX_X__    0x74
#define    _XXX_X_X    0x75
#define    _XXX_XX_    0x76
#define    _XXX_XXX    0x77
#define    _XXXX___    0x78
#define    _XXXX__X    0x79
#define    _XXXX_X_    0x7a
#define    _XXXX_XX    0x7b
#define    _XXXXX__    0x7c
#define    _XXXXX_X    0x7d
#define    _XXXXXX_    0x7e
#define    _XXXXXXX    0x7f
#define    X_______    0x80
#define    X______X    0x81
#define    X_____X_    0x82
#define    X_____XX    0x83
#define    X____X__    0x84
#define    X____X_X    0x85
#define    X____XX_    0x86
#define    X____XXX    0x87
#define    X___X___    0x88
#define    X___X__X    0x89
#define    X___X_X_    0x8a
#define    X___X_XX    0x8b
#define    X___XX__    0x8c
#define    X___XX_X    0x8d
#define    X___XXX_    0x8e
#define    X___XXXX    0x8f
#define    X__X____    0x90
#define    X__X___X    0x91
#define    X__X__X_    0x92
#define    X__X__XX    0x93
#define    X__X_X__    0x94
#define    X__X_X_X    0x95
#define    X__X_XX_    0x96
#define    X__X_XXX    0x97
#define    X__XX___    0x98
#define    X__XX__X    0x99
#define    X__XX_X_    0x9a
#define X__XX_XX    0x9b
#define X__XXX__    0x9c
#define X__XXX_X    0x9d
#define    X__XXXX_    0x9e
#define    X__XXXXX    0x9f
#define    X_X_____    0xa0
#define    X_X____X    0xa1
#define    X_X___X_    0xa2
#define    X_X___XX    0xa3
#define    X_X__X__    0xa4
#define    X_X__X_X    0xa5
#define    X_X__XX_    0xa6
#define    X_X__XXX    0xa7
#define    X_X_X___    0xa8
#define    X_X_X__X    0xa9
#define    X_X_X_X_    0xaa
#define    X_X_X_XX    0xab
#define    X_X_XX__    0xac
#define    X_X_XX_X    0xad
#define    X_X_XXX_    0xae
#define    X_X_XXXX    0xaf
#define    X_XX____    0xb0
#define X_XX___X    0xb1
#define    X_XX__X_    0xb2
#define    X_XX__XX    0xb3
#define    X_XX_X__    0xb4
#define    X_XX_X_X    0xb5
#define    X_XX_XX_    0xb6
#define    X_XX_XXX    0xb7
#define    X_XXX___    0xb8
#define    X_XXX__X    0xb9
#define    X_XXX_X_    0xba
#define    X_XXX_XX    0xbb
#define    X_XXXX__    0xbc
#define    X_XXXX_X    0xbd
#define    X_XXXXX_    0xbe
#define    X_XXXXXX    0xbf
#define    XX______    0xc0
#define    XX_____X    0xc1
#define    XX____X_    0xc2
#define    XX____XX    0xc3
#define    XX___X__    0xc4
#define    XX___X_X    0xc5
#define    XX___XX_    0xc6
#define    XX___XXX    0xc7
#define    XX__X___    0xc8
#define    XX__X__X    0xc9
#define    XX__X_X_    0xca
#define    XX__X_XX    0xcb
#define    XX__XX__    0xcc
#define    XX__XX_X    0xcd
#define    XX__XXX_    0xce
#define XX__XXXX    0xcf
#define    XX_X____    0xd0
#define    XX_X___X    0xd1
#define    XX_X__X_    0xd2
#define    XX_X__XX    0xd3
#define    XX_X_X__    0xd4
#define    XX_X_X_X    0xd5
#define    XX_X_XX_    0xd6
#define    XX_X_XXX    0xd7
#define    XX_XX___    0xd8
#define    XX_XX__X    0xd9
#define    XX_XX_X_    0xda
#define    XX_XX_XX    0xdb
#define    XX_XXX__    0xdc
#define    XX_XXX_X    0xdd
#define    XX_XXXX_    0xde
#define    XX_XXXXX    0xdf
#define    XXX_____    0xe0
#define    XXX____X    0xe1
#define    XXX___X_    0xe2
#define    XXX___XX    0xe3
#define    XXX__X__    0xe4
#define    XXX__X_X    0xe5
#define    XXX__XX_    0xe6
#define    XXX__XXX    0xe7
#define    XXX_X___    0xe8
#define    XXX_X__X    0xe9
#define    XXX_X_X_    0xea
#define    XXX_X_XX    0xeb
#define    XXX_XX__    0xec
#define    XXX_XX_X    0xed
#define    XXX_XXX_    0xee
#define    XXX_XXXX    0xef
#define    XXXX____    0xf0
#define    XXXX___X    0xf1
#define    XXXX__X_    0xf2
#define    XXXX__XX    0xf3
#define    XXXX_X__    0xf4
#define    XXXX_X_X    0xf5
#define    XXXX_XX_    0xf6
#define    XXXX_XXX    0xf7
#define    XXXXX___    0xf8
#define    XXXXX__X    0xf9
#define    XXXXX_X_    0xfa
#define    XXXXX_XX    0xfb
#define    XXXXXX__    0xfc
#define    XXXXXX_X    0xfd
#define    XXXXXXX_    0xfe
#define    XXXXXXXX    0xff




extern GUI_BITMAP bmbtn_checkbox_checked;
extern GUI_BITMAP bmbtn_checkbox_empty;
extern GUI_BITMAP bmbtn_edit;
extern GUI_BITMAP bmbtn_play;
extern GUI_BITMAP bmbtn_setcolumn;
extern GUI_BITMAP bmbtn_setcolumn_h;
extern GUI_BITMAP bmico_7days;
extern GUI_BITMAP bmico_A;
extern GUI_BITMAP bmico_active_time;
extern GUI_BITMAP bmico_alarm;
extern GUI_BITMAP bmico_alarm_stop;
extern GUI_BITMAP bmico_analog;
extern GUI_BITMAP bmico_battery01;
extern GUI_BITMAP bmico_battery02;
extern GUI_BITMAP bmico_battery03;
extern GUI_BITMAP bmico_battery04;
extern GUI_BITMAP bmico_B;
extern GUI_BITMAP bmico_bestrecord;
extern GUI_BITMAP bmico_call;
extern GUI_BITMAP bmico_C;
extern GUI_BITMAP bmico_content_cal;
extern GUI_BITMAP bmico_content_heart_b;
extern GUI_BITMAP bmico_content_heart_w;
extern GUI_BITMAP bmico_content_sleep;
extern GUI_BITMAP bmico_content_steps;
extern GUI_BITMAP bmico_D;
extern GUI_BITMAP bmico_fb;
extern GUI_BITMAP bmico_footer_down_arrow;
extern GUI_BITMAP bmico_footer_pagemark_n;
extern GUI_BITMAP bmico_headerbar_gps00;
extern GUI_BITMAP bmico_headerbar_gps01;
extern GUI_BITMAP bmico_headerbar_gps02;
extern GUI_BITMAP bmico_headerbar_gps03;
extern GUI_BITMAP bmico_layout01;
extern GUI_BITMAP bmico_layout02;
extern GUI_BITMAP bmico_layout03;
extern GUI_BITMAP bmico_layout04;
extern GUI_BITMAP bmico_layout05;
extern GUI_BITMAP bmico_layout06;
extern GUI_BITMAP bmico_leave_sleep_b;
extern GUI_BITMAP bmico_leave_sleep_w;
extern GUI_BITMAP bmico_line;
extern GUI_BITMAP bmico_lv1;
extern GUI_BITMAP bmico_lv2;
extern GUI_BITMAP bmico_lv3;
extern GUI_BITMAP bmico_lv4;
extern GUI_BITMAP bmico_lv5;
extern GUI_BITMAP bmico_lv6;
extern GUI_BITMAP bmico_lv7;
extern GUI_BITMAP bmico_lvincrease;
extern GUI_BITMAP bmico_lvup;
extern GUI_BITMAP bmico_marathon;
extern GUI_BITMAP bmico_pace_32;
extern GUI_BITMAP bmico_pairing01;
extern GUI_BITMAP bmico_pairing02;
extern GUI_BITMAP bmico_pairing03;
extern GUI_BITMAP bmico_play;
extern GUI_BITMAP bmico_pop_hover_down;
extern GUI_BITMAP bmico_pop_hover_top;
extern GUI_BITMAP bmico_pop_play;
extern GUI_BITMAP bmico_pop_stop;
extern GUI_BITMAP bmico_red;
extern GUI_BITMAP bmico_schedule;
extern GUI_BITMAP bmico_sleep32;
extern GUI_BITMAP bmico_sleep;
extern GUI_BITMAP bmico_SMS;
extern GUI_BITMAP bmico_start_right_key;
extern GUI_BITMAP bmico_status_battery_0;
extern GUI_BITMAP bmico_status_battery_1;
extern GUI_BITMAP bmico_status_battery_2;
extern GUI_BITMAP bmico_status_battery_3;
extern GUI_BITMAP bmico_status_bell;
extern GUI_BITMAP bmico_status_bluetooth;
extern GUI_BITMAP bmico_status_heart;
extern GUI_BITMAP bmico_status_play;
extern GUI_BITMAP bmico_status_sleep;
extern GUI_BITMAP bmico_steps;
extern GUI_BITMAP bmico_stop;
extern GUI_BITMAP bmico_takeeasy;
extern GUI_BITMAP bmico_time;
extern GUI_BITMAP bmico_trophy32;
extern GUI_BITMAP bmico_trophy64;
extern GUI_BITMAP bmico_twitter;
extern GUI_BITMAP bmico_updating;
extern GUI_BITMAP bmico_whatsapp;
extern GUI_BITMAP bmico_yellow;
extern GUI_BITMAP bmic_pace;
extern GUI_BITMAP bmitem_clock01;
extern GUI_BITMAP bmitem_clock02;
extern GUI_BITMAP bmitem_clock03;
extern GUI_BITMAP bmitem_clock04;
extern GUI_BITMAP bmMercury_poweron;
extern GUI_BITMAP bmic_fbmessenger;
extern GUI_BITMAP bmico_skype;
extern GUI_BITMAP bmico_other;
extern GUI_BITMAP bmico_status_bluetooth_off;
extern GUI_BITMAP bmico_status_bluetooth_error;
extern GUI_BITMAP bmitem_clock05;
extern GUI_BITMAP bmitem_clock06;
extern GUI_BITMAP bmico_EPO_expired_w;
extern GUI_BITMAP bmico_notice;
extern GUI_BITMAP bmic_up;
extern GUI_BITMAP bmic_down;
extern GUI_BITMAP bmico_headerbar_gps_search;

GUI_BITMAP* icon_set[] = {
        &bmbtn_checkbox_checked,//0
        &bmbtn_checkbox_empty,
        &bmbtn_edit,
        &bmbtn_play,
        &bmbtn_setcolumn,
        &bmbtn_setcolumn_h,
        &bmico_7days,
        &bmico_A,
        &bmico_active_time,
        &bmico_alarm,//9
        &bmico_alarm_stop,
        &bmico_analog,
        &bmico_battery01,
        &bmico_battery02,
        &bmico_battery03,
        &bmico_battery04,
        &bmico_B,
        &bmico_bestrecord,
        &bmico_call,
        &bmico_C,//19
        &bmico_content_cal,
        &bmico_content_heart_b,
        &bmico_content_heart_w,
        &bmico_content_sleep,
        &bmico_content_steps,
        &bmico_D,
        &bmico_fb,
        &bmico_footer_down_arrow,
        &bmico_footer_pagemark_n,
        &bmico_headerbar_gps00,//29
        &bmico_headerbar_gps01,
        &bmico_headerbar_gps02,
        &bmico_headerbar_gps03,
        &bmico_layout01,
        &bmico_layout02,
        &bmico_layout03,
        &bmico_layout04,
        &bmico_layout05,
        &bmico_layout06,
        &bmico_leave_sleep_b,//39
        &bmico_leave_sleep_w,
        &bmico_line,
        &bmico_lv1,
        &bmico_lv2,
        &bmico_lv3,
        &bmico_lv4,
        &bmico_lv5,
        &bmico_lv6,
        &bmico_lv7,
        &bmico_lvincrease,//49
        &bmico_lvup,
        &bmico_marathon,
        &bmico_pace_32,
        &bmico_pairing01,
        &bmico_pairing02,
        &bmico_pairing03,
        &bmico_play,
        &bmico_pop_hover_down,
        &bmico_pop_hover_top,
        &bmico_pop_play,//59
        &bmico_pop_stop,
        &bmico_red,
        &bmico_schedule,
        &bmico_sleep32,
        &bmico_sleep,
        &bmico_SMS,
        &bmico_start_right_key,
        &bmico_status_battery_0,
        &bmico_status_battery_1,
        &bmico_status_battery_2,//69
        &bmico_status_battery_3,
        &bmico_status_bell,
        &bmico_status_bluetooth,
        &bmico_status_heart,
        &bmico_status_play,
        &bmico_status_sleep,
        &bmico_steps,
        &bmico_stop,
        &bmico_takeeasy,
        &bmico_time,//79
        &bmico_trophy32,
        &bmico_trophy64,
        &bmico_twitter,
        &bmico_updating,
        &bmico_whatsapp,
        &bmico_yellow,
        &bmic_pace,
        &bmitem_clock01,
        &bmitem_clock02,
        &bmitem_clock03,//89
        &bmitem_clock04,
        &bmMercury_poweron,
        &bmic_fbmessenger,
        &bmico_skype,
        &bmico_other,
        &bmico_status_bluetooth_off,
        &bmico_status_bluetooth_error,
        &bmitem_clock05,
        &bmitem_clock06,
        &bmico_EPO_expired_w, //99
        &bmico_notice,
        &bmic_up,
        &bmic_down,
        &bmico_headerbar_gps_search,
};

//4KB per sector, total 7 sectors;
extern GUI_BITMAP bmEN_updaterequires;
extern GUI_BITMAP bmDE_updaterequires;
extern GUI_BITMAP bmFR_Updaterequires;
extern GUI_BITMAP bmNL_Updaterequires;
extern GUI_BITMAP bmIT_updaterequires;
extern GUI_BITMAP bmES_Updaterequires;
extern GUI_BITMAP bmRU_Updaterequires;
extern GUI_BITMAP bmPL_Updaterequires;
extern GUI_BITMAP bmHU_Updaterequires;
extern GUI_BITMAP bmCS_updaterequires;
extern GUI_BITMAP bmRO_Updaterequires;
//FIXME, JAPANESE
//FIXME, CHINESE
extern GUI_BITMAP bmZHTW_Updaterequires;

GUI_BITMAP* bl_set[] = {
        &bmEN_updaterequires,//0, FIT_LANGUAGE_ENGLISH
        &bmDE_updaterequires,//1, FIT_LANGUAGE_GERMAN
        &bmFR_Updaterequires,//2, FIT_LANGUAGE_FRENCH
        &bmNL_Updaterequires,//3, FIT_LANGUAGE_DUTCH
        &bmIT_updaterequires,//4, FIT_LANGUAGE_ITALIAN
        &bmES_Updaterequires,//5, FIT_LANGUAGE_SPANISH
        &bmRU_Updaterequires,//6, FIT_LANGUAGE_RUSSIAN
        &bmPL_Updaterequires,//7, FIT_LANGUAGE_POLISH
        &bmHU_Updaterequires,//8, FIT_LANGUAGE_HUNGARIAN
        &bmCS_updaterequires,//9, FIT_LANGUAGE_CZECH
        &bmRO_Updaterequires,//10, FIT_LANGUAGE_ROMANIAN
        &bmEN_updaterequires,//11, FIT_LANGUAGE_JAPANESE, XXX, FIXME
        &bmEN_updaterequires,//12, FIT_LANGUAGE_CHINESE, XXX, FIXME
        &bmZHTW_Updaterequires,//13, FIT_LANGUAGE_TAIWANESE
 };
