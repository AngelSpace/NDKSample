package com.test.hello;

/**
 * Created by yangpeng on 1/25/18.
 */

public class SDKUtils {

    static {
        System.loadLibrary("native-lib");
    }

    public static native String helloWorld();


    public static native String getName();


    public static native int calculate(int a, int b);

}
