/*
 * jsmain.c
 *
 *  Created on: 2015��8��10��
 *      Author: zzl
 */
#include "jsmain.h"

#ifdef __cplusplus
extern "C" {
#endif
#include "platform_config.h"
#include "jsinteractive.h"
#include "jshardware.h"
#ifdef __cplusplus
}
#endif


int jsMain(){
	jshInit();
	jsvInit();
	jsiInit(false);
	while (1) {
		jsiLoop();
	}
}



