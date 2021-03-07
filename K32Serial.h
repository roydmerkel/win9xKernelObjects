//================================== 
// Roy Merkel - 2021
// FILE: K32SERIAL.H 
//================================== 
#ifndef K32_SERIAL_H
#define K32_SERIAL_H

#include <windows.h>
#include "K32ObjectBase.h"
#include "K32Event.h"

#pragma pack(1) 

typedef struct _K32OBJ_SERIAL95 {
	K32ObjectHeader95 header;
	DWORD reserved;
	LPVOID unk1;
	PK32OBJ_EVENT95 pEvent1;
	PK32OBJ_EVENT95 pEvent2;
	PK32OBJ_EVENT95 pEvent3;
	BOOL bOverlapped;
} K32OBJ_SERIAL95, *PK32OBJ_SERIAL95;

typedef struct _K32OBJ_SERIAL98 {
	K32ObjectHeader98 header;
	LPVOID unk1;
	PK32OBJ_EVENT98 pEvent1;
	PK32OBJ_EVENT98 pEvent2;
	PK32OBJ_EVENT98 pEvent3;
	BOOL bOverlapped;
	LPVOID unk2;
	DWORD unk3;
} K32OBJ_SERIAL98, *PK32OBJ_SERIAL98;

typedef struct _K32OBJ_SERIALME {
	K32ObjectHeaderME header;
	LPVOID unk1;
	PK32OBJ_EVENTME pEvent1;
	PK32OBJ_EVENTME pEvent2;
	PK32OBJ_EVENTME pEvent3;
	BOOL bOverlapped;
	LPVOID unk2;
	DWORD unk3;
} K32OBJ_SERIALME, *PK32OBJ_SERIALME;

#pragma pack() 
#endif