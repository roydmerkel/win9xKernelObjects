//================================== 
// Roy Merkel - 2021
// FILE: K32EVENT.H 
//================================== 
#ifndef K32_EVENT_H
#define K32_EVENT_H

#include <windows.h>
#include "K32ObjectBase.h"
#include "Procdb.h"

#pragma pack(1) 
typedef struct _K32OBJ_EVENT95 {
	K32ObjectHeader95 header;
	PPDB95 pPdb; // 08 pdb pointer???
	PSECURITY_ATTRIBUTES pSecurityAttribues; // 0C always NULL for me
	BOOL bInitialState; // 10
	PK32OBJECT_NAME pFooter; // 14
	BOOL bManualReset; // 18
	PVOID mystery2; // 1C
	K32OBJECT_NAME footer; // 20
} K32OBJ_EVENT95, *PK32OBJ_EVENT95;

typedef struct _K32OBJ_EVENT98 {
	K32ObjectHeader98 header;
	PSECURITY_ATTRIBUTES pSecurityAttribues; // 0C always NULL for me
	BOOL bInitialState; // 10
	PK32OBJECT_NAME pFooter; // 14
	DWORD mystery1; // 18
	DWORD mystery2; // 1C
	DWORD mystery3; // 1C
	DWORD mystery4; // 1C
} K32OBJ_EVENT98, *PK32OBJ_EVENT98;

typedef struct _EVENTME {
	K32ObjectHeaderME header;
	PSECURITY_ATTRIBUTES pSecurityAttribues; // 0C always NULL for me
	BOOL bInitialState; // 10
	PK32OBJECT_NAME pFooter; // 14
	DWORD mystery1; // 18
	DWORD mystery2; // 1C
	DWORD mystery3; // 1C
	DWORD mystery4; // 1C
} K32OBJ_EVENTME, *PK32OBJ_EVENTME;

typedef union _K32OBJ_EVENT {
	K32OBJ_EVENT95 event95;
	K32OBJ_EVENT98 event98;
	K32OBJ_EVENTME eventME;
} K32OBJ_EVENT, *PK32OBJ_EVENT;
#pragma pack() 
#endif