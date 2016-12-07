#include "com_work_ndkdemo_MainActivity.h"
//#include <android/log.h>
//#define  LOG_TAG  "System.out"
//#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG,  __VA_ARGS__)
//#define LOGINFO(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG,  __VA_ARGS__)





JNIEXPORT jstring JNICALL
Java_com_work_ndkdemo_MainActivity_getStringFromNative
        (JNIEnv * env, jobject obj){
    // LOGINFO("LOGINFO");
    return (*env)->NewStringUTF(env,"NDK 测试成功");
}

jstring Java_com_work_ndkdemo_MainActivity_getString_1From_1c
        (JNIEnv * env, jobject job){

    return  (*(*env)).NewStringUTF(env,"NDK 来自于C文件");

}