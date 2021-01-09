#ifndef PROCDB_H
#define PROCDB_H

#include "Module32.h"

//================================== 
// PDB95, ENVIRONMENT_DATABASE, HANDLE_TABLE - Matt Pietrek 1995 
// PDB98, PDBME - António Feijão - Remote Library
// FILE: PROCDB.H 
//================================== 

#pragma pack(1) 
typedef struct _ENVIRONMENT_DATABASE 
{ 
PSTR    pszEnvironment;     // 00h Pointer to Environment 
DWORD   un1;                // 04h 
PSTR    pszCmdLine;         // 08h Pointer to command line 
PSTR    pszCurrDirectory;   // 0Ch Pointer to current directory 
LPSTARTUPINFOA pStartupInfo;// 10h Pointer to STARTUPINFOA struct 
HANDLE  hStdIn;             // 14h Standard Input 
HANDLE  hStdOut;            // 18h Standard Output 
HANDLE  hStdErr;            // 1Ch Standard Error 
DWORD   un2;                // 20h 
DWORD   InheritConsole;     // 24h 
DWORD   BreakType;          // 28h 
DWORD   BreakSem;           // 2Ch 
DWORD   BreakEvent;         // 30h 
DWORD   BreakThreadID;      // 34h 
DWORD   BreakHandlers;      // 38h 
} ENVIRONMENT_DATABASE, EDB, *PENVIRONMENT_DATABASE, *PEDB; 
 
typedef struct _HANDLE_TABLE_ENTRY 
{ 
    DWORD   flags;      // Valid flags depend on what type of object this is 
    PVOID   pObject;    // Pointer to the object that the handle refers to 
} HANDLE_TABLE_ENTRY, *PHANDLE_TABLE_ENTRY; 
 
typedef struct _HANDLE_TABLE 
{ 
    DWORD   cEntries;               // Max number of handles in table 
    HANDLE_TABLE_ENTRY array[1];    // An array (number is given by cEntries) 
} HANDLE_TABLE, *PHANDLE_TABLE; 
 
typedef struct _PDB95 {                 // Size = 0xC0 (from Kernel32) 
    DWORD   Type;                       //00 KERNEL32 object type (K32OBJ_PROCESS = 5) 
    DWORD   cReference;                 //04 Number of references to process 
    DWORD   Unknown1;                   //08 (always 0) 
    DWORD   pEvent;                     //0C Pointer to K32OBJ_EVENT (2) 
    DWORD   TerminationStatus;          //10 Returned by GetExitCodeProcess() 
    DWORD   Unknown2;                   //14 (always 0) 
    DWORD   DefaultHeap;                //18 Address of the default process heap 
    DWORD   MemoryContext;              //1C Pointer to the process's context (Returned by GetProcessHeap()) 
    DWORD   Flags;                      //20 Flags 
    DWORD   pPSP;                       //24 Linear address of PSP ? 
    WORD    PSPSelector;                //28 Selector for DOS PSP 
    WORD    MTEIndex;                   //2A *4 + ModuleList = IMTE 
    WORD    cThreads;                   //2C Number of threads belonging to this process 
    WORD    cNotTermThreads;            //2E Number of threads for this process that haven't yet been terminated 
    WORD    Unknown3;                   //30 (always 0) 
    WORD    cRing0Threads;              //32 Number of ring 0 threads 
    HANDLE  HeapHandle;                 //34 Heap to allocate handle tables out of (this seems to always be the KERNEL32 heap) 
    HTASK   W16TDB;                     //38 Win16 Task Database selector 
    DWORD   MemMapFiles;                //3C Pointer to memory mapped file list 
    PEDB    pEDB;                       //40 Pointer to Environment Database 
    PHANDLE_TABLE pHandleTable;         //44 Pointer to process handle table 
    struct _PDB95* ParentPDB;            //48 Parent process database 
    PMODREF MODREFlist;                 //4C Pointer to module reference list 
    DWORD   ThreadList;                 //50 Pointer to list of threads owned by this process 
    DWORD   DebuggeeCB;                 //54 Debuggee Context block ? 
    DWORD   LocalHeapFreeHead;          //58 Pointer to head of free list in process heap 
    DWORD   InitialRing0ID;             //5C (always 0) 
    CRITICAL_SECTION CriticalSection;   //60 Defined in winnt.h (len=0x18) 
    DWORD   Unknow4[2];                 //78 (always 0) 
    DWORD   pConsole;                   //80 Pointer to console object for process (K32OBJ_CONSOLE = 9) 
    DWORD   tlsInUseBits1;              //84 Represents TLS status bits 0 - 31 
    DWORD   tlsInUseBits2;              //88 Represents TLS status bits 32 - 63 
    DWORD   ProcessDWORD;               //8C Retrieved by GetProcessDword() 
    struct _PDB95* ProcessGroup;         //90 Pointer to the master process (K32_OBJ_PROCESS = 5) 
    DWORD   pExeMODREF;                 //94 Pointer to EXE's MODREF 
    DWORD   TopExcFilter;               //98 Top Exception Filter 
    DWORD   PriorityClass;              //9C Base scheduling priority for process (8 = NORMAL) 
    DWORD   HeapList;                   //A0 Head of the list of process heaps 
    DWORD   HeapHandleList;             //A4 Pointer to head of heap handle block list 
    DWORD   HeapPointer;                //A8 Normally zero, but can pointer to a moveable handle block in the heap 
    DWORD   pConsoleProvider;           //AC Zero or process that owns the console we're using (K32OBJ_CONSOLE) 
    WORD    EnvironSelector;            //B0 Selector containing process environment 
    WORD    ErrorMode;                  //B2 Value set by SetErrorMode() 
    DWORD   pEventLoadFinished;         //B4 Pointer to event LoadFinished (K32OBJ_EVENT = 2) 
    WORD    UTState;                    //B8 
    DWORD   Unknown5[2];                //BA 
} PDB95, *PPDB95; 

typedef struct _PDB98 {                 // Size = 0xC4 (from Kernel32) 
    BYTE    Type;                       // 00 Kernel object type = K32OBJ_PROCESS (6) 
    BYTE    Unknown_A;                  // 01 (align ?) 
    WORD    cReference;                 // 02 Number of references to process 
    DWORD   Unknown_B;                  // 04 Pointer to ??? 
    DWORD   Unknown1;                   // 08 (zero) 
    DWORD   pEvent;                     // 0C Event for process waiting 
    DWORD   TerminationStatus;          // 10 GetExitCodeProcess 
    DWORD   Unknown2;                   // 14 May be used for private purposes 
    DWORD   DefaultHeap;                // 18 GetProcessHeap 
    DWORD   MemoryContext;              // 1C Pointer to process context 
    DWORD   Flags;                      // 20 Flags 
    DWORD   pPSP;                       // 24 Linear address of DOS PSP 
    WORD    PSPSelector;                // 28 Selector to DOS PSP 
    WORD    MTEIndex;                   // 2A Index into global module table 
    WORD    cThreads;                   // 2C Threads.ItemCount 
    WORD    cNotTermThreads;            // 2E Threads.ItemCount 
    WORD    Unknown3;                   // 30 (zero) 
    WORD    cRing0Threads;              // 32 Normally Threads.ItemCount (except kernel32) 
    HANDLE  HeapHandle;                 // 34 Kernel32 shared heap 
    DWORD   w16TDB;                     // 38 Win16 task database selector 
    DWORD   MemMappedFiles;             // 3C List of memory mapped files 
    PEDB    pEDB;                       // 40 Pointer to Environment Database 
    PHANDLE_TABLE pHandleTable;         // 44 Pointer to Handle Table 
    struct _PDB98* ParentPDB;            // 48 Pointer to parent process (PDB) 
    PMODREF MODREFList;                 // 4C Pointer to list of modules 
    DWORD   ThreadList;                 // 50 Pointer to list of threads 
    DWORD   DebuggeeCB;                 // 54 Debuggee context block 
    DWORD   LocalHeapFreeHead;          // 58 Free list for process default heap 
    DWORD   InitialRing0ID;             // 5C Meaning unknown 
    CRITICAL_SECTION CriticalSection;   // 60 For synchronizing threads 
    DWORD   Unknown4[3];                // 78 
    DWORD   pConsole;                   // 84 Output console 
    DWORD   tlsInUseBits1;              // 88 Status of TLS indexes  0 - 31 
    DWORD   tlsInUseBits2;              // 8C Status of TLS indexes 32 - 63 
    DWORD   ProcessDWORD;               // 90 Undocumented API GetProcessDword, meaning unknown 
    struct _PDB98* ProcessGroup;         // 94 Master process PDB (in debugging) 
    DWORD   pExeMODREF;                 // 98 Points to exe's module structure 
    DWORD   TopExcFilter;               // 9C SetUnhandledExceptionFilter 
    DWORD   PriorityClass;              // A0 PriorityClass (8 = NORMAL) 
    DWORD   HeapList;                   // A4 List of heaps 
    DWORD   HeapHandleList;             // A8 List of moveable memory blocks 
    DWORD   HeapPointer;                // AC Pointer to one moveable memory block, meaning unknown 
    DWORD   pConsoleProvider;           // B0 Console for DOS apps 
    WORD    EnvironSelector;            // B4 Environment database selector 
    WORD    ErrorMode;                  // B6 SetErrorMode 
    DWORD   pEventLoadFinished;         // B8 Signaled when the process has finished loading 
    WORD    UTState;                    // BC Universal thunking, meaning unknown 
    WORD    Unknown5;                   // BE (zero) 
    DWORD   Unknown6;                   // C0 
} PDB98, *PPDB98; 

typedef struct _PDBME {                 // Size = 0xC4 (from Kernel32) 
    BYTE    Type;                       // 00 Kernel object type = K32OBJ_PROCESS (6) 
    BYTE    Unknown_A;                  // 01 (align ?) 
    WORD    cReference;                 // 02 Number of references to process 
    DWORD   Unknown_B;                  // 04 Pointer to ??? 
    DWORD   Unknown1;                   // 08 (zero) 
    DWORD   pEvent;                     // 0C Event for process waiting 
    DWORD   TerminationStatus;          // 10 GetExitCodeProcess 
    DWORD   Unknown2;                   // 14 May be used for private purposes 
    DWORD   DefaultHeap;                // 18 GetProcessHeap 
    DWORD   MemoryContext;              // 1C Pointer to process context 
    DWORD   Flags;                      // 20 Flags 
    DWORD   pPSP;                       // 24 Linear address of DOS PSP 
    WORD    PSPSelector;                // 28 Selector to DOS PSP 
    WORD    MTEIndex;                   // 2A Index into global module table 
    WORD    cThreads;                   // 2C Threads.ItemCount 
    WORD    cNotTermThreads;            // 2E Threads.ItemCount 
    WORD    Unknown3;                   // 30 (zero) 
    WORD    cRing0Threads;              // 32 Normally Threads.ItemCount (except kernel32) 
    HANDLE  HeapHandle;                 // 34 Kernel32 shared heap 
    DWORD   w16TDB;                     // 38 Win16 task database selector 
    DWORD   MemMappedFiles;             // 3C List of memory mapped files 
    PEDB    pEDB;                       // 40 Pointer to Environment Database 
    PHANDLE_TABLE pHandleTable;         // 44 Pointer to Handle Table 
    struct _PDBME* ParentPDB;            // 48 Pointer to parent process (PDB) 
    PMODREF MODREFList;                 // 4C Pointer to list of modules 
    DWORD   ThreadList;                 // 50 Pointer to list of threads 
    DWORD   DebuggeeCB;                 // 54 Debuggee context block 
    DWORD   LocalHeapFreeHead;          // 58 Free list for process default heap 
    DWORD   InitialRing0ID;             // 5C Meaning unknown 
    CRITICAL_SECTION CriticalSection;   // 60 For synchronizing threads 
    DWORD   Unknown4[2];                // 78 
    DWORD   pConsole;                   // 80 Output console 
    DWORD   tlsInUseBits1;              // 84 Status of TLS indexes  0 - 31 
    DWORD   tlsInUseBits2;              // 88 Status of TLS indexes 32 - 63 
    DWORD   ProcessDWORD;               // 8C Undocumented API GetProcessDword, meaning unknown 
    DWORD   Unknown_C;                  // 90 Unknown 
    struct _PDBME* ProcessGroup;         // 94 Master process PDB (in debugging) 
    DWORD   pExeMODREF;                 // 98 Points to exe's module structure 
    DWORD   TopExcFilter;               // 9C SetUnhandledExceptionFilter 
    DWORD   PriorityClass;              // A0 PriorityClass (8 = NORMAL) 
    DWORD   HeapList;                   // A4 List of heaps 
    DWORD   HeapHandleList;             // A8 List of moveable memory blocks 
    DWORD   HeapPointer;                // AC Pointer to one moveable memory block, meaning unknown 
    DWORD   pConsoleProvider;           // B0 Console for DOS apps 
    WORD    EnvironSelector;            // B4 Environment database selector 
    WORD    ErrorMode;                  // B6 SetErrorMode 
    DWORD   pEventLoadFinished;         // B8 Signaled when the process has finished loading 
    WORD    UTState;                    // BC Universal thunking, meaning unknown 
    WORD    Unknown5;                   // BE (zero) 
    DWORD   Unknown6;                   // C0 
} PDBME, *PPDBME; 
 
typedef union _PDB {
	PDB95 pdb95;
	PDB98 pdb98;
	PDBME pdbME;
} PDB, *PPDB;

#pragma pack()
#endif
