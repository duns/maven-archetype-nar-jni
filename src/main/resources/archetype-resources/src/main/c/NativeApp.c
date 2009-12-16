#set($foo = "hello?") 
#set($fr = "._") 
#set($a = $fr.charAt(0)) 
#set($b = $fr.charAt(1)) 

\#include <stdio.h>
\#include "${groupId.replace($a, $b)}_NativeApp.h"

JNIEXPORT jstring JNICALL Java_${groupId.replace($a, $b)}_NativeApp_sayHello( JNIEnv *env, jobject obj ) {
	jstring value;           /* the return value */

	char buf[40];            /* working buffer (really only need 20 ) */

	sprintf ( buf, "%s", "Hello NAR World!" );

	value = (*env)->NewStringUTF( env, buf );

	return value;
}

