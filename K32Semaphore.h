//================================== 
// Roy Merkel - 2021
// FILE: K32SEMAPHORE.H 
//================================== 
#ifndef K32_SEMAPHORE_H
#define K32_SEMAPHORE_H

#include <windows.h>
#include "Procdb.h"
#include "K32ObjectBase.h"

#pragma pack(1) 
typedef struct _K32OBJ_SEMAPHORE95 {
	K32ObjectHeader95 header;
	PPDB95 pPdb; // 08 pdb pointer
	PSECURITY_ATTRIBUTES pSecurityAttribues; // 0C always NULL for me
	DWORD initialCount; // 10 initial count
	PK32OBJECT_NAME pFooter; //14
	DWORD maxCount; // 18 
	PVOID mystery2; // 1c
	K32OBJECT_NAME footer; // 20
} K32OBJ_SEMAPHORE95, *PK32OBJ_SEMAPHORE95;

typedef struct _K32OBJ_SEMAPHORE98 {
	K32ObjectHeader98 header;
	PSECURITY_ATTRIBUTES pSecurityAttribues; // 0C always NULL for me
	DWORD initialCount; // 10 initial count
	PK32OBJECT_NAME pFooter; //14
	DWORD maxCount; // 18 
	DWORD mystery1;
	DWORD mystery2;
	DWORD mystery3;
} K32OBJ_SEMAPHORE98, *PK32OBJ_SEMAPHORE98;

typedef struct _K32_SEMAPHOREME {
	K32ObjectHeaderME header;
	PSECURITY_ATTRIBUTES pSecurityAttribues; // 0C always NULL for me
	DWORD initialCount; // 10 initial count
	PK32OBJECT_NAME pFooter; //14
	DWORD maxCount; // 18 
	DWORD mystery1;
	DWORD mystery2;
	DWORD mystery3;
} K32OBJ_SEMAPHOREME, *PK32OBJ_SEMAPHOREME;

typedef union _K32OBJ_SEMAPHORE {
	K32OBJ_SEMAPHORE95 semaphore95;
	K32OBJ_SEMAPHORE98 semaphore98;
	K32OBJ_SEMAPHOREME semaphoreME;
} K32OBJ_SEMAPHORE, *PK32OBJ_SEMAPHORE;
#pragma pack() 
#endif