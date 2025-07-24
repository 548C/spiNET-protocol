#ifndef _SPINET_CONF_H
#define _SPINET_CONF_H
/****************************************
spiNET.conf.h v0.1

    用于配置不同平台具体实现细节的全局参数配
置用头文件，对于每一种不同的实现，都应该认真
以下的参数并根据实际情况和设计做出对应修改，
并将该文件移动到合适的位置。
    对于每一个条目，其注释位于其上方。
****************************************/

// SPI的传输是否为大端序，是的话定义为1
// 对于更接近底层的开发，底层库可能提供了专用的模式选项和判断宏
// 此时最好将底层库头文件置于 spiNET.h 上方，并使用其中提供的
// 方法配置此参数
#define SPINET_IS_BIG_ENDINA 1

// 经过转义后的通信开始信号是否为下降沿，是的话定义为1
// 对于更接近底层的开发，底层库可能提供了专用的模式选项和判断宏
// 此时最好将底层库头文件置于 spiNET.h 上方，并使用其中提供的
// 方法配置此参数
#define SPINET_START_WITH_DOWN 1

// CRC使用的多项式
// 如有更多的包装需要，可启用并定义下面的更具体多项式名称
//#define CRCX_XXX_POLY
#define SPINET_CRC_POLY

// 非空闲模式下每个数据帧包含的最大字数
#define SPIFRAME_MAX_WORD_COUNT 10

// 以下为一些作特殊用途的保留端口号定义

// 传输控制
#define SPINET_SP_CTRL 0

// 本地回环
#define SPINET_SP_LOOP 1

#endif
