  # JNI_Example
Function written in C, for Java. Check if cursor (arrow on screen) is visible.

## To generate header file for C
    javac -h . CursorJNI.java

## Compile your C code to dll
    gcc -I"%JAVA_HOME%\include" -I"%JAVA_HOME%\include\win32" -shared -o cursor.dll CursorJNI.c
    Example:
    gcc -I"C:\Program Files\JetBrains\IntelliJ IDEA 2021.3.2\jbr\include" -I"C:\Program Files\JetBrains\IntelliJ IDEA 2021.3.2\jbr\include\win32" -shared -o cursor.dll CursorJNI.c

## to run
    java CursorJNI 

## Tool to explore .dll in GUI
    http://www.nirsoft.net/utils/dll_export_viewer.html

## Tutorial for JNI
    https://www3.ntu.edu.sg/home/ehchua/programming/java/javanativeinterface.html#zz-1.
