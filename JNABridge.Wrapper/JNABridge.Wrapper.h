// JNABridge.Wrapper.h

/* 
* Java native interface includes from JDK (%JAVA_HOME%/include) folder. 
* Configure project iclude directories.
*/
#include <jni.h>

/* Java package definition */
#ifndef _Included_ru_mgcrt_jnabridge_example_Starter
#define _Included_ru_mgcrt_jnabridge_example_Starter
#ifdef __cplusplus
extern "C" {
#endif
	JNIEXPORT jstring JNICALL Java_ru_mgcrt_jnabridge_example_Starter_getData(JNIEnv *, jobject, jstring);
#ifdef __cplusplus
}
#endif
#endif
