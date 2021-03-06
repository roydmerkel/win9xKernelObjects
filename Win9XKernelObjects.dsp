# Microsoft Developer Studio Project File - Name="Win9XKernelObjects" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=Win9XKernelObjects - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "Win9XKernelObjects.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "Win9XKernelObjects.mak" CFG="Win9XKernelObjects - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "Win9XKernelObjects - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "Win9XKernelObjects - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "Win9XKernelObjects - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo

!ELSEIF  "$(CFG)" == "Win9XKernelObjects - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /FR /YX /FD /GZ /c
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo

!ENDIF 

# Begin Target

# Name "Win9XKernelObjects - Win32 Release"
# Name "Win9XKernelObjects - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\K32Console.h
# End Source File
# Begin Source File

SOURCE=.\K32CriticalSection.h
# End Source File
# Begin Source File

SOURCE=.\K32Device.h
# End Source File
# Begin Source File

SOURCE=.\K32Event.h
# End Source File
# Begin Source File

SOURCE=.\K32FileChangeObject.h
# End Source File
# Begin Source File

SOURCE=.\K32FileObject.h
# End Source File
# Begin Source File

SOURCE=.\K32MailSlot.h
# End Source File
# Begin Source File

SOURCE=.\K32MappedFileObject.h
# End Source File
# Begin Source File

SOURCE=.\K32Mutex.h
# End Source File
# Begin Source File

SOURCE=.\K32ObjectBase.h
# End Source File
# Begin Source File

SOURCE=.\k32objtypes.h
# End Source File
# Begin Source File

SOURCE=.\K32Pipe.h
# End Source File
# Begin Source File

SOURCE=.\K32ScreenBuffer.h
# End Source File
# Begin Source File

SOURCE=.\K32Semaphore.h
# End Source File
# Begin Source File

SOURCE=.\K32Serial.h
# End Source File
# Begin Source File

SOURCE=.\K32Socket.h
# End Source File
# Begin Source File

SOURCE=.\K32ToolHelpSnapshot.h
# End Source File
# Begin Source File

SOURCE=.\Module32.h
# End Source File
# Begin Source File

SOURCE=.\Procdb.h
# End Source File
# Begin Source File

SOURCE=.\Tdbx.h
# End Source File
# Begin Source File

SOURCE=.\Threaddb.h
# End Source File
# Begin Source File

SOURCE=.\Tib.h
# End Source File
# End Group
# End Target
# End Project
