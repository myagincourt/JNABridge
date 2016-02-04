========================================================================
    DYNAMIC LINK LIBRARY : JNABridge.Wrapper Project Overview
========================================================================

Simple wrapper, transfers data from JVM to CLR.

DataAdapter.dll must registered for com interop, its type library copied to wrapper source directory by post-build event.

This file contains a summary of what you will find in each of the files that
make up your JNABridge.Wrapper application.

JNABridge.Wrapper.vcxproj
    This is the main project file for VC++ projects generated using an Application Wizard. 
    It contains information about the version of Visual C++ that generated the file, and 
    information about the platforms, configurations, and project features selected with the
    Application Wizard.

JNABridge.Wrapper.vcxproj.filters
    This is the filters file for VC++ projects generated using an Application Wizard. 
    It contains information about the association between the files in your project 
    and the filters. This association is used in the IDE to show grouping of files with
    similar extensions under a specific node (for e.g. ".cpp" files are associated with the
    "Source Files" filter).

JNABridge.Wrapper.cpp
    This is the main DLL source file.

JNABridge.Wrapper.h
    This file contains a class declaration.

AssemblyInfo.cpp
	Contains custom attributes for modifying assembly metadata.

