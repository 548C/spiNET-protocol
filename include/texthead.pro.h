#ifndef _TEXT_HEAD_PRO_H
#define _TEXT_HEAD_PRO_H
/****************************************
texthead.pro.h v0.1

    与协议规定的正文报头有关的头文件
****************************************/
#include "spiNET.conf.h"

#define SPINET_RP_MASK_BE 0xFF00
#define SPINET_TP_MASK_BE 0x00FF

#define SPINET_RP_MASK_LE 0x00FF
#define SPINET_TP_MASK_LE 0xFF00

#if (SPINET_IS_BIG_ENDINA)
    #define SPINET_RP_MASK (SPINET_RP_MASK_BE)
    #define SPINET_TP_MASK (SPINET_TP_MASK_BE)
#else
    #define SPINET_RP_MASK (SPINET_RP_MASK_LE)
    #define SPINET_TP_MASK (SPINET_TP_MASK_LE)
#endif // SPINET_IS_BIG_ENDINA

#endif
