Building platform-tools and build-tools for Android, such as `aapt aapt2 aidl zipalign adb fastboot` ... etc</br>

If you need other tools, please refer to existing tools to add CMake file

Currently only test aarch64 architecture</br>

For other architectures you may need to refer to `Android.bp` to modify the corresponding CMake file

 **** 
### How to build

```bash
cd /path/to/sdk-tools 
mkdir build && cd build

# settings the ndk toolchain
NDK_TOOLCHAIN=/path/to/android-ndk-r23/toolchains/llvm/prebuilt/linux-aarch64

cmake -G 'Ninja' \
    -DCMAKE_C_COMPILER=$NDK_TOOLCHAIN/bin/aarch64-linux-android30-clang \
    -DCMAKE_CXX_COMPILER=$NDK_TOOLCHAIN/bin/aarch64-linux-android30-clang++ \
    -DCMAKE_SYSROOT=$NDK_TOOLCHAIN/sysroot \
    -DCMAKE_BUILD_TYPE=Release \
    ..

ninja -j16
```

 **** 
 