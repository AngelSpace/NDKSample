#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_test_ndk_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_test_hello_SDKUtils_helloWorld(JNIEnv *env, jobject instance) {

    // TODO
    std::string hello = "Hello World";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_test_hello_SDKUtils_getName(JNIEnv *env, jclass type) {

    // TODO

    std::string hello = "张三";
    return env->NewStringUTF(hello.c_str());
}extern "C"
JNIEXPORT jint JNICALL
Java_com_test_hello_SDKUtils_calculate(JNIEnv *env, jclass type, jint a, jint b) {

    return a + b;

}