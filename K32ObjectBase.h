//================================== 
// Roy Merkel - 2021
// FILE: K32OBJECTBASE.H 
//================================== 
#ifndef K32_OBJECT_BASE_H
#define K32_OBJECT_BASE_H
#include <windows.h>

#pragma pack(1) 
typedef struct _K32ObjectHeader95 {
	DWORD dwType;
	DWORD dwRefCnt;
} K32ObjectHeader95, *PK32ObjectHeader95;

typedef struct _K32ObjectHeader98 {
	BYTE dwType;
	BYTE dwFlags;
	WORD dwRefCnt;
} K32ObjectHeader98, *PK32ObjectHeader98;

typedef struct _K32ObjectHeaderME {
	BYTE dwType;
	BYTE dwFlags;
	WORD dwRefCnt;
} K32ObjectHeaderME, *PK32ObjectHeaderME;

typedef struct _K32OBJBASE95 {            
    K32ObjectHeader95   header;         //00 KERNEL32 object header
    BYTE	payload[0];					//08 payload
} K32OBJBASE95, *PK32OBJBASE95; 

typedef struct _K32OBJBASE98 {                 // Size = 0xC4 (from Kernel32) 
    K32ObjectHeader98   header;         //00 KERNEL32 object header
    BYTE	payload[0];					// 04 payload
} K32OBJBASE98, *PK32OBJBASE98; 

typedef struct _K32OBJBASEME {                 // Size = 0xC4 (from Kernel32) 
    K32ObjectHeaderME   header;         //00 KERNEL32 object header
	BYTE	payload[0];					// 04 payload
} K32OBJBASEME, *PK32OBJBASEME; 
 
typedef union _K32OBJBASE {
	K32OBJBASE95 kobj95;
	K32OBJBASE98 kobj98;
	K32OBJBASEME kobjME;
} K32OBJBASE, *PK32OBJBASE;

typedef struct _K32OBJECT_NAME {
	struct _K32OBJECT_NAME *mystery; // -- points to another footer mystery, but doesn't seem to match the previous object created.
	PK32OBJBASE *pSelf;
	BYTE payload[0];
} K32OBJECT_NAME, *PK32OBJECT_NAME;
#pragma pack() 
#endif