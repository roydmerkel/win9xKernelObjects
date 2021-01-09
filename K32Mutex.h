//================================== 
// Roy Merkel - 2021
// FILE: K32MUTEX.H 
//================================== 
#ifndef K32_MUTEX_H
#define K32_MUTEX_H

#include <windows.h>
#include "K32ObjectBase.h"
#include "Procdb.h"
#include "Threaddb.h"

#pragma pack(1) 
typedef struct _K32OBJ_MUTEX95 {
	K32ObjectHeader95 header;
	PPDB95 pPdb; // 08 pdb pointer
	PSECURITY_ATTRIBUTES pSecurityAttribues; // 0C always NULL for me
	BOOL bOpen; // 10
	PK32OBJECT_NAME pFooter; // 14
	PTDB95 pTdb; // 18
	struct _K32OBJ_MUTEX95 *pPrev; // 1C
	PVOID pMystery1; // 20
	K32OBJECT_NAME footer; // 24
} K32OBJ_MUTEX95, *PK32OBJ_MUTEX95;

typedef struct _K32OBJ_MUTEX98 {
	K32ObjectHeader98 header;
	PSECURITY_ATTRIBUTES pSecurityAttributes;
	BOOL bOpen;
	PK32OBJECT_NAME pFooter;
	PTDBX98 pTdbx;
	struct _K32OBJ_MUTEX98 *pPrev;
} K32OBJ_MUTEX98, *PK32OBJ_MUTEX98;

typedef struct _K32OBJ_MUTEXME {
	K32ObjectHeaderME header;
	PSECURITY_ATTRIBUTES pSecurityAttributes;
	BOOL bOpen;
	PK32OBJECT_NAME pFooter;
	PTDBXME pTdbx;
	struct _K32OBJ_MUTEXME *pPrev;
} K32OBJ_MUTEXME, *PK32OBJ_MUTEXME;

typedef union _K32OBJ_MUTEX {
	K32OBJ_MUTEX95 mutex95;
	K32OBJ_MUTEX98 mutex98;
	K32OBJ_MUTEXME mutexME;
} K32OBJ_MUTEX, *PK32OBJ_MUTEX;
#pragma pack() 
#endif