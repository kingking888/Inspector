/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_fuzhu8_inspector_jni_DexHunter */

#ifndef _Included_com_fuzhu8_inspector_jni_DexHunter
#define _Included_com_fuzhu8_inspector_jni_DexHunter
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_fuzhu8_inspector_jni_DexHunter
 * Method:    _saveDexFileByCookie
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_fuzhu8_inspector_jni_DexHunter__1saveDexFileByCookie
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_fuzhu8_inspector_jni_DexHunter
 * Method:    _dumpDexFileByCookie
 * Signature: (ILjava/lang/ClassLoader;)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_com_fuzhu8_inspector_jni_DexHunter__1dumpDexFileByCookie
  (JNIEnv *, jobject, jint, jobject);

#ifdef __cplusplus
}
#endif
#endif
