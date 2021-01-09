#ifndef THREADDB_H
#define THREADDB_H
//================================== 
// WIN32WLK - Matt Pietrek 1995 
// FILE: THREADDB.H 
//================================== 
#include "tib.h" 
#include "tdbx.h"
#include "procdb.h" 

#pragma pack(1) 
typedef struct _TDB95 {                // Size = 0x1D4 (from Kernel32) 
    DWORD      Type;                   // 00 Object type = K32OBJ_THREAD (6) 
    DWORD      cReference;             // 04 Reference count for thread 
    PPDB95     pProcess;               // 08 Pointer to PDB 
    DWORD      pSomeEvent;             // 0C Pointer to K32OBJ_EVENT 
    TIB95      tib;                    // 10-40 TIB 
    DWORD      Flags;                  // 44 Flags 
    DWORD      TerminationStatus;      // 48 Returned by GetExitCodeThread() 
    WORD       TIBSelector;            // 4C TIB selector 
    WORD       EmulatorSelector;       // 4E 80387 emulator state selector 
    DWORD      cHandles;               // 50 (always 0) 
    DWORD      WaitNodeList;           // 54 Pointer to event list 
    DWORD      un4;                    // 58 (0 or 2) 
    DWORD      Ring0Thread;            // 5C Pointer to ring0 THCB (Thread Control Block) 
    TDBX95     *pTDBX;                 // 60 Pointer to TDBX 
    DWORD      StackBase;              // 64 Lowest stack address 
    DWORD      TerminationStack;       // 68 ESP for thread termination 
    DWORD      EmulatorData;           // 6C Linear address for 80387 emulator data 
    DWORD      GetLastErrorCode;       // 70 Value returned by GetLastErrorCode() 
    DWORD      DebuggerCB;             // 74 Pointer do debugger data 
    DWORD      DebuggerThread;         // 78 If thread is being debugged contains a non-NULL value 
    PCONTEXT   ThreadContext;          // 7C Register context defined in WINNT.H 
    DWORD      Except16List;           // 80 (always 0) 
    DWORD      ThunkConnect;           // 84 (always 0) 
    DWORD      NegStackBase;           // 88 StackBase + NegStackBase 
    DWORD      CurrentSS;              // 8C 16-bit stack selector for thunking 
    DWORD      SSTable;                // 90 Pointer to memory block with 16-bit stack info for thunking 
    DWORD      ThunkSS16;              // 94 Selector for thunking 
    DWORD      TLSArray[64];           // 98 TLS array 
    DWORD      DeltaPriority;          // 198 Diference between priority of thread and priority class of the owning process 
    DWORD      un5[7];                 // 19C 
    DWORD      APISuspendCount;        // 1B8 Number of times SuspendThread() has been called 
    DWORD      un[6];                  // 1BC 
 
/* 
    // The retail version breaks off somewhere around here. 
    // All the remaining fields are most likely only in the debug version 
    DWORD      un5[7];                 // 19C (always 0) 
    DWORD      pCreateData16;          // 1B8 Pointer to struct with PProcessInfo and pStartupInfo (always 0) 
    DWORD      APISuspendCount;        // 1BC Number of times SuspendThread() has been called 
    DWORD      un6;                    // 1C0 
    DWORD      WOWChain;               // 1C4 (always 0) 
    WORD       wSSBig;                 // 1C8 32-bit stack selector (always 0) 
    WORD       un7;                    // 1CA 
    DWORD      lp16SwitchRec;          // 1CC 
    DWORD      un8[6];                 // 1D0 (always 0) 
    DWORD      pSomeCritSect1;         // 1E8 Pointer to K32OBJ_CRITICAL_SECTION 
    DWORD      pWin16Mutex;            // 1EC Pointer to Win16Mutex in KRNL386.EXE 
    DWORD      pWin32Mutex;            // 1F0 Pointer to Krn32Mutex in KERNEL32.DLL 
    DWORD      pSomeCritSect2;         // 1F4 Pointer to K32OBJ_CRITICAL_SECTION 
    DWORD      un9;                    // 1F8 (always 0) 
    DWORD      ripString;              // 1FC 
    DWORD      LastTlsSetValueEIP[64]; // 200 Parallel to TlsArray, contains EIP where TLS value was last set from 
*/ 
} TDB95, *PTDB95;

typedef struct _TDB98 {        // Size = 0x228 (from Kernel32) 
    WORD    Type;              // 00 K32 object type 
    WORD    cReference;        // 02 Reference count 
    DWORD   pSomeEvent;        // 04 K32 event object used when someone waits on the thread object 
    TIB98   tib;               // 08 Thread information block (TIB) 
    DWORD   Unknown;           // 40 
    DWORD   Flags;             // 44 Flags 
    DWORD   TerminationStatus; // 48 Exit code 
    WORD    TIBSelector;       // 4C Selector used in FS to point to TIB 
    WORD    EmulatorSelector;  // 4E Memory block for saving x87 state 
    DWORD   cHandles;          // 50 Handle count 
    DWORD   Ring0Thread;       // 54 R0 thread control block (TCB) 
    TDBX98  *pTDBX;            // 58 R0 thread database extension (TDBX) 
    DWORD   un1[109];          // 5C 
    DWORD   APISuspendCount;   // 210 Count of SuspendThread's minus ResumeThread's 
} TDB98, *PTDB98;

typedef struct _TDBME {        // Size = 0x228 (from Kernel32) 
    WORD    Type;              // 00 K32 object type 
    WORD    cReference;        // 02 Reference count 
    DWORD   pSomeEvent;        // 04 K32 event object used when someone waits on the thread object 
    TIB98   tib;               // 08 Thread information block (TIB) 
    DWORD   Unknown;           // 40 
    DWORD   Unknown2;          // 44 
    WORD    TIBSelector;       // 46 Selector used in FS to point to TIB 
    DWORD   TerminationStatus; // 48 Exit code 
    DWORD   Flags;             // 4C Flags 
    DWORD   cHandles;          // 50 Handle count 
    DWORD   Ring0Thread;       // 54 R0 thread control block (TCB) 
    DWORD   Unknown3;          // 58 Selector for ??? 
    DWORD   un1[109];          // 5C 
    DWORD   APISuspendCount;   // 210 Count of SuspendThread's minus ResumeThread's 
} TDBME, *PTDBME;
 
typedef union _TDB {
	TDB95 tdb95;
	TDB98 tdb98;
	TDBME tdbME;
} TDB, *PTDB;

#pragma pack()
#endif
