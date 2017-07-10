#include <jni.h>
#include <dlfcn.h>
#include <android/log.h>
#include <stdlib.h>
#include <Substrate.h>

#include "Rainbow/Rainbow.h"


#define LOG_TAG "rainbowsword"
#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__))


void (*_registerItems)();
void registerItems(){
	
	Rainbow::registerItems();
	
	_registerItems();
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
	
	MSHookFunction((void*) &Item::registerItems, (void*) &registerItems, (void**) &_registerItems);
	MSHookFunction((void*) &Item::initClientData, (void*) &initClientData, (void**) &_initClientData);
	MSHookFunction((void*) &Item::initCreativeItems, (void*) &initCreativeItems, (void**) &_initCreativeItems);
	
	
	return JNI_VERSION_1_2;
}
