//================================== 
// Roy Merkel - 2021
// FILE: K32SOCKET.H 
//================================== 
#ifndef K32_SOCKET_H
#define K32_SOCKET_H

#include <windows.h>
#include "K32ObjectBase.h"
#include "Procdb.h"

#pragma pack(1) 

typedef struct _K32OBJ_SOCKET95 {
	K32ObjectHeader95 header;
	PPDB95 pPdb;
	LPVOID unk1;
} K32OBJ_SOCKET95, *PK32OBJ_SOCKET95;

typedef struct _K32OBJ_SOCKET98 {
	K32ObjectHeader98 header;
	LPVOID unk1;
	DWORD unk2;
} K32OBJ_SOCKET98, *PK32OBJ_SOCKET98;

typedef struct _K32OBJ_SOCKETME {
	K32ObjectHeaderME header;
	LPVOID unk1;
	DWORD unk2;
} K32OBJ_SOCKETME, *PK32OBJ_SOCKETME;

#pragma pack() 
#endif