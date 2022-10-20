// Save as CursorJNI.java
public class CursorJNI {
    static {
        System.loadLibrary("cursor");
        // Load native library cursor.dll (Windows) or libhello.so (Unixes)  at runtime
        // This library contains a native method called isVisible()
    }


    // Declare an instance native method isVisible() which receives no parameter and returns void
    private native boolean isVisible();

    // Test Driver
    public static void main(String[] args) throws InterruptedException {
        CursorJNI cursor = new CursorJNI();  // Create an instance and invoke the native method
        while (true) {
            System.out.println(cursor.isVisible());
            Thread.sleep(500);
        }
    }
}