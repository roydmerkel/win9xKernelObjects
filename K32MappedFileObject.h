//================================== 
// Roy Merkel - 2021
// FILE: K32MAPPEDFILEOBJECT.H 
//================================== 
#ifndef K32_MAPPED_FILE_OBJECT_H
#define K32_MAPPED_FILE_OBJECT_H

#include <windows.h>
#include "K32ObjectBase.h"
#include "Procdb.h"
#include "Threaddb.h"

#pragma pack(1) 
typedef struct _K32OBJ_MAPPED_FILE_OBJECT_95 {
	K32ObjectHeader95 header;
	DWORD reserved;
	PK32OBJECT_NAME pMapName;
    DWORD dwMaximumSizeLow;
	LPVOID pLinearBase;
	DWORD dwPagerData;
	DWORD dwModeAndFlags;
	LPCSTR pszFullPath;
	LPVOID pRing0Handle; // pfhandle
	DWORD dwFileSize;
	BYTE bProtection;
	BYTE hPager;
	WORD wPSPSelector;
} K32OBJ_MAPPED_FILE_OBJECT_95, *PK32OBJ_MAPPED_FILE_OBJECT_95;

typedef struct _K32OBJ_MAPPED_FILE_OBJECT_98 {
	K32ObjectHeader98 header;
	PK32OBJECT_NAME pMapName;
    DWORD dwMaximumSizeLow;
	LPVOID pLinearBase;
	DWORD dwPagerData;
	DWORD dwModeAndFlags;
	LPCSTR pszFullPath;
	LPVOID pRing0Handle; // pfhandle
	DWORD dwFileSize;
	BYTE bProtection;
	BYTE hPager;
	WORD wPSPSelector;
} K32OBJ_MAPPED_FILE_OBJECT_98, *PK32OBJ_MAPPED_FILE_OBJECT_98;

typedef struct _K32OBJ_MAPPED_FILE_OBJECT_ME {
	K32ObjectHeaderME header;
	PK32OBJECT_NAME pMapName;
    DWORD dwMaximumSizeLow;
	LPVOID pLinearBase;
	DWORD dwPagerData;
	DWORD dwModeAndFlags;
	LPCSTR pszFullPath;
	LPVOID pRing0Handle; // pfhandle
	DWORD dwFileSize;
	BYTE bProtection;
	BYTE hPager;
	WORD wPSPSelector;
} K32OBJ_MAPPED_FILE_OBJECT_ME, *PK32OBJ_MAPPED_FILE_OBJECT_ME;

typedef union _K32OBJ_MAPPED_FILE_OBJECT {
	K32OBJ_MAPPED_FILE_OBJECT_95 mappedFileObject95;
	K32OBJ_MAPPED_FILE_OBJECT_98 mappedFileObject98;
	K32OBJ_MAPPED_FILE_OBJECT_ME mappedFileObjectME;
} K32OBJ_MAPPED_FILE_OBJECT, *PK32OBJ_MAPPED_FILE_OBJECT;
#pragma pack() 
#endif