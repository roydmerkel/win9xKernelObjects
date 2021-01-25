//================================== 
// WIN95_K32OBJ_* - Matt Pietrek 1995 
// WIN98_K32OBJ_* - António Feijão - Remote Library
// WINME_K32OBJ_* - Roy Merkel
// FILE: TIB.H 
//================================== 
#ifndef K32_OBJ_TYPES_H
#define K32_OBJ_TYPES_H
#define WIN95_K32OBJ_SEMAPHORE            0x1
#define WIN95_K32OBJ_EVENT                0x2
#define WIN95_K32OBJ_MUTEX                0x3
#define WIN95_K32OBJ_CRITICAL_SECTION     0x4
#define WIN95_K32OBJ_PROCESS              0x5
#define WIN95_K32OBJ_THREAD               0x6
#define WIN95_K32OBJ_FILE                 0x7
#define WIN95_K32OBJ_CHANGE               0x8
#define WIN95_K32OBJ_CONSOLE              0x9
#define WIN95_K32OBJ_SCREEN_BUFFER        0xA
#define WIN95_K32OBJ_MEM_MAPPED_FILE      0xB
#define WIN95_K32OBJ_SERIAL               0xC
#define WIN95_K32OBJ_DEVICE_IOCTL         0xD
#define WIN95_K32OBJ_PIPE                 0xE
#define WIN95_K32OBJ_MAILSLOT             0xF
#define WIN95_K32OBJ_TOOLHELP_SNAPSHOT    0x10
#define WIN95_K32OBJ_SOCKET               0x11

#define WIN98_K32OBJ_SEMAPHORE            0x1
#define WIN98_K32OBJ_EVENT                0x2
#define WIN98_K32OBJ_MUTEX                0x3
#define WIN98_K32OBJ_CRITICAL_SECTION     0x4
#define WIN98_K32OBJ_CHANGE               0x5
#define WIN98_K32OBJ_PROCESS              0x6
#define WIN98_K32OBJ_THREAD               0x7
#define WIN98_K32OBJ_FILE                 0x8
#define WIN98_K32OBJ_CONSOLE              0x9
#define WIN98_K32OBJ_SCREEN_BUFFER        0xA
#define WIN98_K32OBJ_MAILSLOT             0xB
#define WIN98_K32OBJ_SERIAL               0xC
#define WIN98_K32OBJ_MEM_MAPPED_FILE      0xD
#define WIN98_K32OBJ_PIPE                 0xE
#define WIN98_K32OBJ_DEVICE_IOCTL         0xF
#define WIN98_K32OBJ_TOOLHELP_SNAPSHOT    0x10
#define WIN98_K32OBJ_SOCKET               0x11

#define WINME_K32OBJ_SEMAPHORE            0x1
#define WINME_K32OBJ_EVENT                0x2
#define WINME_K32OBJ_MUTEX                0x3
#define WINME_K32OBJ_CRITICAL_SECTION     0x4
//#define                0x5
#define WINME_K32OBJ_PROCESS              0x6
#define WINME_K32OBJ_THREAD               0x7
#define WINME_K32OBJ_FILE                 0x8
#define WINME_K32OBJ_CHANGE               0x9
#define WINME_K32OBJ_CONSOLE              0xA
//#define              0xB
#define WINME_K32OBJ_SCREEN_BUFFER        0xC
#define WINME_K32OBJ_MEM_MAPPED_FILE      0xD
#define WINME_K32OBJ_SERIAL               0xE
#define WINME_K32OBJ_DEVICE_IOCTL         0xF
#define WINME_K32OBJ_PIPE                 0x10
#define WINME_K32OBJ_MAILSLOT             0x11
#define WINME_K32OBJ_TOOLHELP_SNAPSHOT    0x12
#define WINME_K32OBJ_SOCKET               0x13
#endif
