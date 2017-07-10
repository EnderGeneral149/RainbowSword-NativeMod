#include <jni.h>
#include <dlfcn.h>
#include <android/log.h>
#include <stdlib.h>
#include <Substrate.h>

#include "Rainbow/Rainbow.h"


#define LOG_TAG "rainbowsword"
#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__))


void (*_registerItems)();//I myself arent sure why we do this
void registerItems(){
	
	Rainbow::registerItems();//This once again just references the function under the Rainbow class
	
	_registerItems();//nor am I sure why about this one
}

void (*_initClientData)();
void initClientData(){
	
	_initClientData();
	
	Rainbow::initClientData();
}

void (*_initCreativeItems)();
void initCreativeItems(){
	
	_initCreativeItems();
	
	Rainbow::initCreativeItems();
}



JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
	LOGI("Hello world!");
	
	MSHookFunction((void*) &Item::registerItems, (void*) &registerItems, (void**) &_registerItems);//For all of these we follow the syntax of MSHook and input our own functions
	MSHookFunction((void*) &Item::initClientData, (void*) &initClientData, (void**) &_initClientData);
	MSHookFunction((void*) &Item::initCreativeItems, (void*) &initCreativeItems, (void**) &_initCreativeItems);
	
	
	return JNI_VERSION_1_2;
}
