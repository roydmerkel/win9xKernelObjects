#ifndef TDBX_H
#define TDBX_H

#include "procdb.h"

//================================== 
// TDBX95 - Matt Pietrek 1995 
// TDBX98 - António Feijão - Remote Library
// TDBXME - Roy Merkel - 2021
// FILE: TDBX.H 
//================================== 
#pragma pack(1)

typedef struct _TDB95 TDB95;
typedef struct _TDB98 TDB98;
typedef struct _TDBME TDBME;

typedef struct _TDBX95 { 
    TDB98  *ptdb;             // 00 TDB 
    PDB98  *ppdb;             // 04 PDB 
    DWORD  ContextHandle;     // 08 R0 memory context 
    DWORD  un1;               // 0C 
    DWORD  TimeOutHandle;     // 10 
    DWORD  WakeParam;         // 14 
    DWORD  BlockHandle;       // 18 R0 semaphore on which thread will wait inside VWIN32 
    DWORD  BlockState;        // 1C 
    DWORD  SuspendCount;      // 20 Number of times SuspendThread() was called 
    DWORD  SuspendHandle;     // 24 
    DWORD  MustCompleteCount; // 28 Count of EnterMustComplete's minus LeaveMustComplete's 
    DWORD  WaitExFlags;       // 2C Flags 
    DWORD  SyncWaitCount;     // 30 
    DWORD  QueuedSyncFuncs;   // 34 
    DWORD  UserAPCList;       // 38 
    DWORD  KernAPCList;       // 3C 
    DWORD  pPMPSPSelector;    // 40 Pointer to protected mode PSP selector 
    DWORD  BlockedOnID;       // 44 
    DWORD  un2[7];            // 48 
    DWORD  TraceRefData;      // 64 
    DWORD  TraceCallBack;     // 68 
    DWORD  TraceEventHandle;  // 6C 
    WORD   TraceOutLastCS;    // 70 
    WORD   K16TDB;            // 72 Win16 TDB selector 
    WORD   K16PDB;            // 74 Win16 PSP selector 
    WORD   DosPDBSeg;         // 76 Real mode segment value of PSP 
    WORD   ExceptionCount;    // 78 
} TDBX95, *PTDBX95;  

typedef struct _TDBX98 { 
    DWORD  un0;                // 00 
    TDB98  *ptdb;              // 04 R3 thread database 
    PDB98  *ppdb;              // 08 R3 process database 
    DWORD  ContextHandle;      // 0C R0 memory context 
    DWORD  Ring0Thread;        // 10 R0 thread control block [TCB *] 
    DWORD  WaitNodeList;       // 14 Anchor of things we're waiting on  [WAITNODE *] 
    DWORD  WaitFlags;          // 18 Blocking flags 
    DWORD  un1;                // 1C 
    DWORD  TimeOutHandle;      // 20 
    DWORD  WakeParam;          // 24 
    DWORD  BlockHandle;        // 28 R0 semaphore on which thread will wait inside VWIN32 
    DWORD  BlockState;         // 2C 
    DWORD  SuspendCount;       // 30 
    DWORD  SuspendHandle;      // 34 
    DWORD  MustCompleteCount;  // 38 Count of EnterMustComplete's minus LeaveMustComplete's 
    DWORD  WaitExFlags;        // 3C Flags 
    DWORD  SyncWaitCount;      // 40 
    DWORD  QueuedSyncFuncs;    // 44 
    DWORD  UserAPCList;        // 48 
    DWORD  KernAPCList;        // 4C 
    DWORD  pPMPSPSelector;     // 50 
    DWORD  BlockedOnID;        // 54 
} TDBX98, *PTDBX98; 


typedef struct _TDBXME {
	DWORD un0;
    DWORD  WaitNodeList;       // Anchor of things we're waiting on  [WAITNODE *] 
    DWORD  WaitFlags;          // Blocking flags 
	DWORD  Ring0Thread;        // R0 thread control block [TCB *] 
	DWORD  ContextHandle;      // R0 memory context 
	PDBME  *ppdb;              // R3 process database
	TDBME  *ptdb;              // R3 thread database
    DWORD  SuspendCount;       //
    DWORD  SuspendHandle;      //
    DWORD  MustCompleteCount;  // Count of EnterMustComplete's minus LeaveMustComplete's
	DWORD  BlockState;         // 
	DWORD  BlockHandle;        // R0 semaphore on which thread will wait inside VWIN32
	DWORD  WakeParam;          //
	DWORD  TimeOutHandle;      //
	DWORD  un1;
	DWORD  unk1;
	DWORD  unk2;
	DWORD  unk3;
	DWORD  unk4;
	DWORD  unk5;
	DWORD  unk6;
	DWORD  unk7;
	DWORD  unk8;
	DWORD  pPMPSPSelector;
	DWORD  KernAPCList;
	DWORD  unk11; // UserAPCList
	DWORD  unk12;
	DWORD  unk13;
	DWORD  WaitExFlags;
} TDBXME, *PTDBXME;

typedef union _TDBX {
	TDBX95 tdbx95;
	TDBX98 tdbx98;
	TDBXME tdbxME;
} TDBX, *PTDBX;

#pragma pack()
#endif
