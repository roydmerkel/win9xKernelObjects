//================================== 
// Roy Merkel - 2021
// FILE: K32CONSOLE.H 
//================================== 
#ifndef K32_CONSOLE_H
#define K32_CONSOLE_H

#include <windows.h>
#include "K32ObjectBase.h"
#include "K32ScreenBuffer.h"
#include "K32Event.h"
#include "K32CriticalSection.h"
#include "Procdb.h"

#pragma pack(1) 
typedef struct _K32OBJ_CONSOLE95 {
	K32ObjectHeader95 header;
	PDB95 *pPdb;
	PK32OBJ_EVENT95 pSomeEvent;
	PK32OBJ_SCREEN_BUFFER95 pScreenBuffer;
	DWORD un1;
	DWORD un2;
	DWORD un3;
	DWORD un4;
	COORD dwSize;
	DWORD un6;
	DWORD un7;
	DWORD un8;
	DWORD un9;
	DWORD un10;
	PK32OBJ_CRITICAL_SECTION95 pCriticalSection;
	DWORD un11;
	DWORD un12;
	struct {
		PK32LINKED_LIST_NODE unk1;
		PK32LINKED_LIST_NODE unk2;
		PK32LINKED_LIST_NODE unk3;
	} * un13;
	struct {
		PK32LINKED_LIST_NODE unk1;
		PK32LINKED_LIST_NODE unk2;
		PK32LINKED_LIST_NODE unk3;
	} * un14;
	DWORD un15;
	BYTE title[MAX_PATH];
	DWORD un16;
	DWORD un17;
	DWORD un18;
	PDB95 * pPdb2;
	BYTE unk20[0x30C];
	PK32OBJ_EVENT95 pSomeOtherEvent;
} K32OBJ_CONSOLE95, *PK32OBJ_CONSOLE95;

typedef struct _K32OBJ_CONSOLE98 {
	K32ObjectHeader98 header;
	PK32OBJ_EVENT98 pSomeEvent;
	PK32OBJ_SCREEN_BUFFER98 pScreenBuffer;
	DWORD un1;
	DWORD un2;
	DWORD un3;
	DWORD un4;
	COORD dwSize;
	DWORD un6;
	DWORD un7;
	DWORD un8;
	DWORD un9;
	DWORD un10;
	PK32OBJ_CRITICAL_SECTION98 pCriticalSection;
	DWORD un11;
	DWORD un12;
	struct {
		PK32LINKED_LIST_NODE unk1;
		PK32LINKED_LIST_NODE unk2;
		PK32LINKED_LIST_NODE unk3;
	} * un13;
	struct {
		PK32LINKED_LIST_NODE unk1;
		PK32LINKED_LIST_NODE unk2;
		PK32LINKED_LIST_NODE unk3;
	} * un14;
	DWORD un15;
	BYTE title[MAX_PATH];
	DWORD un16;
	DWORD un17;
	DWORD un18;
	PPDBME pPdb;
	BYTE unk20[0x30C];
	PK32OBJ_EVENT98 pSomeOtherEvent;
} K32OBJ_CONSOLE98, *PK32OBJ_CONSOLE98;

typedef struct _K32OBJ_CONSOLEME {
	K32ObjectHeaderME header;
	PK32OBJ_EVENTME pSomeEvent;
	PK32OBJ_SCREEN_BUFFERME pScreenBuffer;
	DWORD un1;
	DWORD un2;
	DWORD un3;
	DWORD un4;
	COORD dwSize;
	DWORD un6;
	DWORD un7;
	DWORD un8;
	DWORD un9;
	DWORD un10;
	PK32OBJ_CRITICAL_SECTIONME pCriticalSection;
	DWORD un11;
	DWORD un12;
	struct {
		PK32LINKED_LIST_NODE unk1;
		PK32LINKED_LIST_NODE unk2;
		PK32LINKED_LIST_NODE unk3;
	} * un13;
	struct {
		PK32LINKED_LIST_NODE unk1;
		PK32LINKED_LIST_NODE unk2;
		PK32LINKED_LIST_NODE unk3;
	} * un14;
	DWORD un15;
	BYTE title[MAX_PATH];
	DWORD un16;
	DWORD un17;
	DWORD un18;
	PPDBME pPdb;
	BYTE unk20[0x30C];
	PK32OBJ_EVENTME pSomeOtherEvent;
} K32OBJ_CONSOLEME, *PK32OBJ_CONSOLEME;

#pragma pack() 
#endif