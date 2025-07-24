#ifndef _MODECTRL_PRO_H
#define _MODECTRL_PRO_H
/****************************************
modectrl.pro.h v0.1

    与模式控制有关的头文件
****************************************/
#include "spiNET.conf.h"

#define SPINET_MODEC_STOP 0
#define SPINET_MODEC_STANDBY 1
#define SPINET_MODEC_T_IDLE (SPINET_MODEC_STANDBY)
#define SPINET_MODEC_T_TEXT 2
#define SPINET_MODEC_T_DATA 3

#endif
