//================================== 
// Roy Merkel - 2021
// FILE: K32SCREEN_BUFFER.H 
//================================== 
#ifndef K32_SCREEN_BUFFER_H
#define K32_SCREEN_BUFFER_H

#include <windows.h>
#include "K32ObjectBase.h"
#include "Procdb.h"

#pragma pack(1) 
typedef struct _K32OBJ_SCREEN_BUFFER95 {
	K32ObjectHeader95 header;
	DWORD reserved;
	COORD dwSize;
	DWORD unk2;
	DWORD unk3;
	DWORD unk4;
	DWORD unk5;
	DWORD unk6;
	DWORD unk7;
	DWORD unk8;
	DWORD unk9;
	DWORD unk10;
	DWORD unk11;
	DWORD unk12;
	DWORD unk13;
	DWORD unk14;
	DWORD unk15;
	DWORD unk16;
	DWORD unk17;
	DWORD unk18;
} K32OBJ_SCREEN_BUFFER95, *PK32OBJ_SCREEN_BUFFER95;

typedef struct _K32OBJ_SCREEN_BUFFER98 {
	K32ObjectHeader98 header;
	COORD dwSize;
	DWORD unk2;
	DWORD unk3;
	DWORD unk4;
	DWORD unk5;
	DWORD unk6;
	DWORD unk7;
	DWORD unk8;
	DWORD unk9;
	DWORD unk10;
	DWORD unk11;
	DWORD unk12;
	DWORD unk13;
	DWORD unk14;
	DWORD unk15;
	DWORD unk16;
	DWORD unk17;
	DWORD unk18;
} K32OBJ_SCREEN_BUFFER98, *PK32OBJ_SCREEN_BUFFER98;

typedef struct _K32OBJ_SCREEN_BUFFERME {
	K32ObjectHeaderME header;
	COORD dwSize;
	DWORD unk2;
	DWORD unk3;
	DWORD unk4;
	DWORD unk5;
	DWORD unk6;
	DWORD unk7;
	DWORD unk8;
	DWORD unk9;
	DWORD unk10;
	DWORD unk11;
	DWORD unk12;
	DWORD unk13;
	DWORD unk14;
	DWORD unk15;
	DWORD unk16;
	DWORD unk17;
	DWORD unk18;
} K32OBJ_SCREEN_BUFFERME, *PK32OBJ_SCREEN_BUFFERME;

#pragma pack() 
#endif