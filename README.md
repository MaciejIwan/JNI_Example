# JNI_Example
Function written in C, for Java. Check if cursor is visible.

javac -h . CursorJNI.java


gcc -I"%JAVA_HOME%\include" -I"%JAVA_HOME%\include\win32" -shared -o cursor.dll CursorJNI.c
Example:
JAVA_HOME  = "C:\Users\mojkm\CLionProjects\CursorINI>gcc -I"C:\Program Files\JetBrains\IntelliJ IDEA 2021.3.2\jbr\"

Tool to explore .dll in GUI
http://www.nirsoft.net/utils/dll_export_viewer.html

To check .dll in terminal use:
file hello.dll

nm hello.dll | grep say

Tutorial for JNI
https://www3.ntu.edu.sg/home/ehchua/programming/java/javanativeinterface.html#zz-1.

for grep vm install
https://www.cygwin.com/