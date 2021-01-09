//================================== 
// Roy Merkel - 2021
// FILE: K32MAPPEDFILEOBJECT.H 
//================================== 
#ifndef K32_FILE_CHANGE_OBJECT_H
#define K32_FILE_CHANGE_OBJECT_H

#include <windows.h>
#include "K32ObjectBase.h"
#include "K32Event.h"
#include "Procdb.h"
#include "Threaddb.h"

#pragma pack(1) 
typedef struct _K32OBJ_FILE_CHANGE_OBJECT_95 {
	K32ObjectHeader95 header;
	PDB95 *pPdb;
	PK32OBJ_EVENT95 pK32EventObject;
	DWORD hFcnHandle;
} K32OBJ_FILE_CHANGE_OBJECT_95, *PK32OBJ_FILE_CHANGE_OBJECT_95;

typedef struct _K32OBJ_FILE_CHANGE_OBJECT_98 {
	K32ObjectHeader98 header;
	PK32OBJ_EVENT98 pK32EventObject;
	DWORD hFcnHandle;
} K32OBJ_FILE_CHANGE_OBJECT_98, *PK32OBJ_FILE_CHANGE_OBJECT_98;

typedef struct _K32OBJ_FILE_CHANGE_OBJECT_ME {
	K32ObjectHeaderME header;
	PK32OBJ_EVENTME pK32EventObject;
	DWORD hFcnHandle;
} K32OBJ_FILE_CHANGE_OBJECT_ME, *PK32OBJ_FILE_CHANGE_OBJECT_ME;

typedef union _K32OBJ_FILE_CHANGE_OBJECT {
	K32OBJ_FILE_CHANGE_OBJECT_95 fileChangeObject95;
	K32OBJ_FILE_CHANGE_OBJECT_98 fileChangeObject98;
	K32OBJ_FILE_CHANGE_OBJECT_ME fileChangeObjectME;
} K32OBJ_FILE_CHANGE_OBJECT, *PK32OBJ_FILE_CHANGE_OBJECT;
#pragma pack() 
#endif