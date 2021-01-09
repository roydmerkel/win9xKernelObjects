//================================== 
// TIB95, SEH - Matt Pietrek 1995 
// TIB98, TIBME - António Feijão - Remote Library
// FILE: TIB.H 
//================================== 
#ifndef TIB_H
#define TIB_H
#pragma pack(1) 
 
typedef struct _SEH 
{ 
    struct _SEH *pNext; 
    FARPROC     pfnHandler; 
} SEH, *PSEH; 
 
// This is semi-documented in the NTDDK.H file from the NT DDK 
typedef struct _TIB95 {         // Size = 0x34 
    PSEH    pvExcept;           // 00 Pointer to head of structured exception handling chain 
    PVOID   pvStackUserTop;     // 04 Max. address for stack 
    PVOID   pvStackUserBase;    // 08 Lowest page aligned addr. of stack 
    WORD    pvTDB;              // 0C Ptr to win-16 task database 
    WORD    pvThunksSS;         // 0E SS selector used for thunking to 16 bits 
    DWORD   SelmanList;         // 10 Pointer to selector manager list 
    PVOID   pvArbitrary;        // 14 Available for application use 
    struct _TIB95 *pTIBSelf;    // 18 Linear address of TIB structure 
    WORD    TIBFlags;           // 1C TIBF_WIN32 = 1, TIBF_TRAP = 2 
    WORD    Win16MutexCount;    // 1E Win16Lock 
    DWORD   DebugContext;       // 20 Pointer to debug context structure 
    DWORD   pCurrentPriority;   // 24 Pointer to DWORD containing current priority level 
    DWORD   pvQueue;            // 28 Message Queue selector 
    PVOID*  pvTLSArray;         // 2C Thread Local Storage (TLS) array 
    PVOID*  pProcess;           // 30 Pointer to owning process database (PDB) 
} TIB95, *PTIB95; 

typedef struct _TIB98 {        // Size = 0x38 
    PSEH    pvExcept;          // 00 Head of exception record list 
    PVOID   pvStackUserTop;    // 04 Top of user stack 
    PVOID   pvStackUserBase;   // 08 Base of user stack 
    WORD    pvTDB;             // 0C Ptr to win-16 task database 
    WORD    pvThunksSS;        // 0E SS selector used for thunking to 16 bits 
    DWORD   SelmanList;        // 10 Pointer to selector manager list 
    PVOID   pvArbitrary;       // 14 Available for application use 
    struct _TIB98 *pTIBSelf;   // 18 Linear address of TIB structure 
    WORD    TIBFlags;          // 1C TIBF_WIN32 = 1, TIBF_TRAP = 2 
    WORD    Win16MutexCount;   // 1E Win16Lock 
    DWORD   DebugContext;      // 20 Pointer to debug context structure 
    DWORD   pCurrentPriority;  // 24 Pointer to DWORD containing current priority level 
    DWORD   pvQueue;           // 28 Message Queue selector 
    PVOID   *pvTLSArray;       // 2C Thread Local Storage (TLS) array 
    PVOID   *pProcess;         // 30 Pointer to owning process database (PDB) 
    DWORD   Unknown;           // 34 Pointer to ??? 
} TIB98, *PTIB98; 

typedef struct _TIBME {        // Size = 0x38 
    PSEH    pvExcept;          // 00 Head of exception record list 
    PVOID   pvStackUserTop;    // 04 Top of user stack 
    PVOID   pvStackUserBase;   // 08 Base of user stack 
    WORD    pvTDB;             // 0C Ptr to win-16 task database 
    WORD    pvThunksSS;        // 0E SS selector used for thunking to 16 bits 
    DWORD   SelmanList;        // 10 Pointer to selector manager list 
    PVOID   pvArbitrary;       // 14 Available for application use 
    struct _TIB98 *pTIBSelf;   // 18 Linear address of TIB structure 
    WORD    TIBFlags;          // 1C TIBF_WIN32 = 1, TIBF_TRAP = 2 
    WORD    Win16MutexCount;   // 1E Win16Lock 
    DWORD   DebugContext;      // 20 Pointer to debug context structure 
    DWORD   pCurrentPriority;  // 24 Pointer to DWORD containing current priority level 
    DWORD   pvQueue;           // 28 Message Queue selector 
    PVOID   *pvTLSArray;       // 2C Thread Local Storage (TLS) array 
    PVOID   *pProcess;         // 30 Pointer to owning process database (PDB) 
    DWORD   Unknown;           // 34 Pointer to ??? 
} TIBME, *PTIBME; 

typedef union _TIB {
	TIB95 tib95;
	TIB98 tib98;
	TIBME tibME;
} TIB, *PTIB;

#pragma pack()
#endif