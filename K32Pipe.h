//================================== 
// Roy Merkel - 2021
// FILE: K32PIPE.H 
//================================== 
#ifndef K32_PIPE_H
#define K32_PIPE_H

#include <windows.h>
#include "K32ObjectBase.h"
#include "K32Event.h"

#pragma pack(1) 

typedef struct _K32OBJ_PIPE95 {
	K32ObjectHeader95 header;
	DWORD reserved;
	LPVOID pPipeBuffer;
	DWORD hExtendedFileHandle;
	DWORD counter1;
	DWORD counter2;
	DWORD dwPipeBufferSize;
	DWORD unknown1;
	DWORD unknown2;
	PK32OBJ_EVENT95 pK32EventObject1;
	PK32OBJ_EVENT95 pK32EventObject2;
} K32OBJ_PIPE95, *PK32OBJ_PIPE95;

typedef struct _K32OBJ_PIPE98 {
	K32ObjectHeader98 header;
	LPVOID pPipeBuffer;
	DWORD hExtendedFileHandle;
	DWORD counter1;
	DWORD counter2;
	DWORD dwPipeBufferSize;
	DWORD unknown1;
	DWORD unknown2;
	PK32OBJ_EVENT98 pK32EventObject1;
	PK32OBJ_EVENT98 pK32EventObject2;
} K32OBJ_PIPE98, *PK32OBJ_PIPE98;

typedef struct _K32OBJ_PIPEME {
	K32ObjectHeaderME header;
	LPVOID pPipeBuffer;
	DWORD hExtendedFileHandle;
	DWORD counter1;
	DWORD counter2;
	DWORD dwPipeBufferSize;
	DWORD unknown1;
	DWORD unknown2;
	PK32OBJ_EVENTME pK32EventObject1;
	PK32OBJ_EVENTME pK32EventObject2;
} K32OBJ_PIPEME, *PK32OBJ_PIPEME;

#pragma pack() 
#endif