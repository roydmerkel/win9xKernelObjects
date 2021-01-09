//================================== 
// Roy Merkel - 2021
// FILE: K32FILEOBJECT.H 
//================================== 
#ifndef K32_FILE_OBJECT_H
#define K32_FILE_OBJECT_H

#include <windows.h>
#include "K32ObjectBase.h"
#include "K32Event.h"
#include "Procdb.h"
#include "Threaddb.h"

#pragma pack(1) 
typedef struct _K32OBJ_FILE_OBJECT_95 {
	K32ObjectHeader95 header;
	PPDB95 pPdb;
	PK32OBJ_EVENT95 pSomeEvent;
	WORD hExtendedFileHandle;
	WORD reserved;
	DWORD dwModeAndFlags; // delete on close = 0xFFFFFFFF, if dos file handle (hExtendedFileHandle <= 0x200) then mode and flags word
	char pszFullPath[1];
} K32OBJ_FILE_OBJECT_95, *PK32OBJ_FILE_OBJECT_95;

typedef struct _K32OBJ_FILE_OBJECT_98 {
	K32ObjectHeader98 header;
	PK32OBJ_EVENT98 pSomeEvent;
	WORD hExtendedFileHandle;
	WORD reserved;
	DWORD dwModeAndFlags; // delete on close = 0xFFFFFFFF, if dos file handle (hExtendedFileHandle <= 0x200) then mode and flags word
	char pszFullPath[1];
} K32OBJ_FILE_OBJECT_98, *PK32OBJ_FILE_OBJECT_98;

typedef struct _K32OBJ_FILE_OBJECT_ME {
	K32ObjectHeaderME header;
	PK32OBJ_EVENTME pSomeEvent;
	WORD hExtendedFileHandle;
	WORD reserved;
	DWORD dwModeAndFlags; // delete on close = 0xFFFFFFFF, if dos file handle (hExtendedFileHandle <= 0x200) then mode and flags word
	char pszFullPath[1];
} K32OBJ_FILE_OBJECT_ME, *PK32OBJ_FILE_OBJECT_ME;

typedef union _K32OBJ_FILE_OBJECT {
	K32OBJ_FILE_OBJECT_95 fileObject95;
	K32OBJ_FILE_OBJECT_98 fileObject98;
	K32OBJ_FILE_OBJECT_ME fileObjectME;
} K32OBJ_FILE_OBJECT, *PK32OBJ_FILE_OBJECT;
#pragma pack() 
#endif