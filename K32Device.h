//================================== 
// Roy Merkel - 2021
// FILE: K32DEVICE.H 
//================================== 
#ifndef K32_DEVICE_H
#define K32_DEVICE_H

#include <windows.h>
#include "K32ObjectBase.h"

#pragma pack(1) 

typedef struct _K32OBJ_DEVICE95 {
	K32ObjectHeader95 header;
	DWORD reserved;
	LPVOID pDDB;
	LPCSTR pszLoadPath;
	CHAR szDeviceName[8];
} K32OBJ_DEVICE95, *PK32OBJ_DEVICE95;

typedef struct _K32OBJ_DEVICE98 {
	K32ObjectHeader98 header;
	LPVOID pDDB;
	LPCSTR pszLoadPath;
	CHAR szDeviceName[8];
} K32OBJ_DEVICE98, *PK32OBJ_DEVICE98;

typedef struct _K32OBJ_DEVICEME {
	K32ObjectHeaderME header;
	LPVOID pDDB;
	LPCSTR pszLoadPath;
	CHAR szDeviceName[8];
} K32OBJ_DEVICEME, *PK32OBJ_DEVICEME;

#pragma pack() 
#endif