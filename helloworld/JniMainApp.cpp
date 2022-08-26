// Native methods implementation of
// javacodes/jniapplication/src/jniapplication/JniMainApp.java

#include <iostream>

#include "JniMainApp.h"

void JNICALL Java_jniapplication_JniMainApp_hello
  (JNIEnv * env, jobject object, jstring jStr) {
    const char *cstr = env->GetStringUTFChars(jStr, NULL);
    std::string str = std::string(cstr);
    std::cout<< str;
}

void JNICALL Java_jniapplication_JniMainApp_sayHi
  (JNIEnv * env, jclass object) {
    std::cout << "Hello World" << std::endl;
}
