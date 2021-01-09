//================================== 
// Roy Merkel - 2021
// FILE: K32CRITICALSECTION.H 
//================================== 
#ifndef K32_CRITICAL_SECTION_H
#define K32_CRITICAL_SECTION_H

#include <windows.h>
#include "K32ObjectBase.h"
#include "Procdb.h"
#include "Threaddb.h"

#pragma pack(1) 
typedef struct _K32OBJ_CRITICAL_SECTION95 {
	K32ObjectHeader95 header;
	PTDB95 pTdb; // 08 tdb pointer
	DWORD mystery;
	BOOL bOpen;
	struct _K32OBJ_CRITICAL_SECTION95 *pPrev;
	PVOID pMystery3;
	LPCRITICAL_SECTION pCriticalSection;
	PVOID mystery2;
	PVOID mystery3;
	PVOID mystery4;
	PVOID mystery5;
	PVOID mystery6;
} K32OBJ_CRITICAL_SECTION95, *PK32OBJ_CRITICAL_SECTION95;

typedef struct _K32OBJ_CRITICAL_SECTION98 {
	K32ObjectHeader98 header;
	BOOL bEntered;
	PTDBX98 pTdbx;
	DWORD mystery;
	DWORD bOpen;
	struct _K32OBJ_CRITICAL_SECTION98 *pPrev;
	PK32OBJECT_NAME pFooter;
	LPCRITICAL_SECTION pCriticalSection;
} K32OBJ_CRITICAL_SECTION98, *PK32OBJ_CRITICAL_SECTION98;

typedef struct _K32OBJ_CRITICAL_SECTIONME {
	K32ObjectHeaderME header;
	BOOL bEntered;
	PTDBXME pTdbx;
	DWORD mystery;
	DWORD bOpen;
	struct _K32OBJ_CRITICAL_SECTIONME *pPrev;
	PK32OBJECT_NAME pFooter;
	LPCRITICAL_SECTION pCriticalSection;
} K32OBJ_CRITICAL_SECTIONME, *PK32OBJ_CRITICAL_SECTIONME;

typedef union _K32OBJ_CRITICAL_SECTION {
	K32OBJ_CRITICAL_SECTION95 criticalSection95;
	K32OBJ_CRITICAL_SECTION98 criticalSection98;
	K32OBJ_CRITICAL_SECTIONME criticalSectionME;
} K32OBJ_CRITICAL_SECTION, *PK32OBJ_CRITICAL_SECTION;
#pragma pack() 
#endif