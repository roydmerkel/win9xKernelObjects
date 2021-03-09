//================================== 
// Roy Merkel - 2021
// FILE: K32TOOLHELPSNAPSHOT.H 
//================================== 
#ifndef K32_TOOLHELP_SNAPSHOT_H
#define K32_TOOLHELP_SNAPSHOT_H

#include <windows.h>
#include "K32ObjectBase.h"

#pragma pack(1) 

typedef struct _K32OBJ_TOOLHELP_SNAPSHOT95 {
	K32ObjectHeader95 header;
	DWORD reserved;
	DWORD unk1;
	DWORD unk2; // look like it's reserved for new TH32CS_SNAP* buffer pointers.
	DWORD countSnapHeapList;
	LPVOID pSnapHeapListUnk; // the TH32CS_SNAPHEAPLIST buffer?
	DWORD countSnapProcess;
	LPVOID pSnapProcessUnk; // the TH32CS_SNAPPROCESS buffer?
	DWORD countSnapThread;
	LPVOID pSnapThreadUnk; // the TH32CS_SNAPTHREAD buffer?
	DWORD countSnapModule;
	LPVOID pSnapModuleUnk; // the TH32CS_SNAPMODULE buffer?
} K32OBJ_TOOLHELP_SNAPSHOT95, *PK32OBJ_TOOLHELP_SNAPSHOT95;

typedef struct _K32OBJ_TOOLHELP_SNAPSHOT98 {
	K32ObjectHeader98 header;
	DWORD unk1;
	DWORD unk2; // look like it's reserved for new TH32CS_SNAP* buffer pointers.
	DWORD countSnapHeapList;
	LPVOID pSnapHeapListUnk; // the TH32CS_SNAPHEAPLIST buffer?
	DWORD countSnapProcess;
	LPVOID pSnapProcessUnk; // the TH32CS_SNAPPROCESS buffer?
	DWORD countSnapThread;
	LPVOID pSnapThreadUnk; // the TH32CS_SNAPTHREAD buffer?
	DWORD countSnapModule;
	LPVOID pSnapModuleUnk; // the TH32CS_SNAPMODULE buffer?
} K32OBJ_TOOLHELP_SNAPSHOT98, *PK32OBJ_TOOLHELP_SNAPSHOT98;

typedef struct _K32OBJ_TOOLHELP_SNAPSHOTME {
	K32ObjectHeaderME header;
	DWORD unk1;
	DWORD unk2; // look like it's reserved for new TH32CS_SNAP* buffer pointers.
	DWORD countSnapHeapList;
	LPVOID pSnapHeapListUnk; // the TH32CS_SNAPHEAPLIST buffer?
	DWORD countSnapProcess;
	LPVOID pSnapProcessUnk; // the TH32CS_SNAPPROCESS buffer?
	DWORD countSnapThread;
	LPVOID pSnapThreadUnk; // the TH32CS_SNAPTHREAD buffer?
	DWORD countSnapModule;
	LPVOID pSnapModuleUnk; // the TH32CS_SNAPMODULE buffer?
} K32OBJ_TOOLHELP_SNAPSHOTME, *PK32OBJ_TOOLHELP_SNAPSHOTME;

#pragma pack() 
#endif
