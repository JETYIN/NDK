package com.work.ndkdemo;

import android.app.Activity;
import android.os.Bundle;

import android.util.Log;
import android.view.View;

import android.widget.Toast;

public class MainActivity extends Activity {
    static {
        System.loadLibrary("MyJni");
    }

    /**
     * 创建本地方法
     **/
    public native String getStringFromNative();

    public native String getString_From_c();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.content_main);
        Log.e("getStringFromNative",getStringFromNative());
    }

    public void onClick(View view) {
        System.out.println(getString_From_c());
        Toast.makeText(this, getStringFromNative(), Toast.LENGTH_LONG).show();
    }
}