//================================== 
// Roy Merkel - 2021
// FILE: K32MAILSLOT.H 
//================================== 
#ifndef K32_MAIL_SLOT_H
#define K32_MAIL_SLOT_H

#include <windows.h>
#include "K32ObjectBase.h"
#include "K32Event.h"

#pragma pack(1) 

typedef struct _K32OBJ_MAILSLOT95 {
	K32ObjectHeader95 header;
	DWORD reserved;
	LPCSTR pszMailslotName;
	DWORD hExtendedFileHandle;
} K32OBJ_MAILSLOT95, *PK32OBJ_MAILSLOT95;

typedef struct _K32OBJ_MAILSLOT98 {
	K32ObjectHeader98 header;
	LPCSTR pszMailslotName;
	DWORD hExtendedFileHandle;
} K32OBJ_MAILSLOT98, *PK32OBJ_MAILSLOT98;

typedef struct _K32OBJ_MAILSLOTME {
	K32ObjectHeaderME header;
	LPCSTR pszMailslotName;
	DWORD hExtendedFileHandle;
} K32OBJ_MAILSLOTME, *PK32OBJ_MAILSLOTME;

#pragma pack() 
#endif