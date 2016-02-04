#include "stdafx.h"
#include <iostream>

#include "JNABridge.Wrapper.h"

#import "JNABridge.DataAdapter.tlb"

using namespace std;
using namespace System;
using namespace System::Runtime::InteropServices;
using namespace JNABridge_DataAdapter;

//Transform data types
JNIEXPORT jstring JNICALL Java_ru_mgcrt_jnabridge_example_Starter_getData(JNIEnv *env, jobject obj, jstring input)
{
	try {
		//Get routing to adapter
		HRESULT com = CoInitialize(NULL);
		IDataRoutingPtr routine(__uuidof(DataRouting));
		//Execute adapter action
		_bstr_t result = routine->GetData(env->GetStringUTFChars(input, 0));
		CoUninitialize();
		return env->NewStringUTF(result);
	}
	catch (const std::exception &e) {
		cerr << e.what();
	}
}