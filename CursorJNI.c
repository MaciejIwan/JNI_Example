// Save as "CursorJNI.h"
#include <jni.h>        // JNI header provided by JDK
#include <stdio.h>      // C Standard IO Header
#include "windows.h"
#include "CursorJNI.h"   // Generated
 
// Implementation of the native method sayHello()
JNIEXPORT jboolean JNICALL Java_CursorJNI_isVisible(JNIEnv *env, jobject thisObj) {
   uintptr_t s[16] = {
            (uintptr_t) LoadCursorA(NULL, IDC_APPSTARTING),
            (uintptr_t) LoadCursorA(NULL, IDC_ARROW),
            (uintptr_t) LoadCursorA(NULL, IDC_CROSS),
            (uintptr_t) LoadCursorA(NULL, IDC_HAND),
            (uintptr_t) LoadCursorA(NULL, IDC_HELP),
            (uintptr_t) LoadCursorA(NULL, IDC_IBEAM),
            (uintptr_t) LoadCursorA(NULL, IDC_ICON),
            (uintptr_t) LoadCursorA(NULL, IDC_NO),
            (uintptr_t) LoadCursorA(NULL, IDC_SIZE),
            (uintptr_t) LoadCursorA(NULL, IDC_SIZEALL),
            (uintptr_t) LoadCursorA(NULL, IDC_SIZENESW),
            (uintptr_t) LoadCursorA(NULL, IDC_SIZENS),
            (uintptr_t) LoadCursorA(NULL, IDC_SIZENWSE),
            (uintptr_t) LoadCursorA(NULL, IDC_SIZEWE),
            (uintptr_t) LoadCursorA(NULL, IDC_UPARROW),
            (uintptr_t) LoadCursorA(NULL, IDC_WAIT),

    };

    CURSORINFO ci;
    ci.cbSize = sizeof(ci);
    GetCursorInfo(&ci);
    uintptr_t current = (uintptr_t) ci.hCursor;

    for (int i = 0; i < 16; ++i) {
        if (s[i] == current)
            return JNI_TRUE;
    }

    return JNI_FALSE;
}