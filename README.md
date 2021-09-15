Building platform-tools and build-tools for Android, such as aapt aapt2 aidl zipalign adb fastboot ... etc</br>
if you need other tools, please refer to existing tools to add CMakeLists.txt 

Currently only test aarch64 architecture</br>
for other architectures you may need to refer to Android.bp to modify the corresponding CMakeLists.txt

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
### Screenshots

<a href="./screenshot/build_sdk_toos1.jpg"><img src="./screenshot/build_sdk_toos1.jpg" width="50%" /></a>
<a href="./screenshot/build_sdk_toos2.jpg"><img src="./screenshot/build_sdk_toos2.jpg" width="50%" /></a>

reference [android-tools](https://github.com/nmeum/android-tools)
