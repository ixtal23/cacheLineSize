# CPU Cache Line Size

The utility prints the size of the cache line of CPU in bytes.

## Supported Platforms

* macOS
* Linux (not tested)
* Windows (not tested)

## Preconditions

The following applications must be installed:
* [Git](https://git-scm.com);
* [CMake](https://cmake.org/);
* C++ compiler: GCC, Clang, Xcode, Microsoft Visual Studio, etc.

## Build & Run

```
git clone git@github.com:ixtal23/cpu-cache-line-size.git
cd cpu-cache-line-size
./build.sh
./run.sh
```

## Results

### Apple MacBook Pro, 15-inch, 2019

```
cpu-cache-line-size % sysctl -a | grep machdep.cpu.brand_string
machdep.cpu.brand_string: Intel(R) Core(TM) i9-9880H CPU @ 2.30GHz
cpu-cache-line-size % ./build.sh
-- The CXX compiler identification is AppleClang 12.0.0.12000032
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /Users/user/Documents/cpu-cache-line-size/build
/usr/local/Cellar/cmake/3.18.4/bin/cmake -S/Users/user/Documents/cpu-cache-line-size -B/Users/user/Documents/cpu-cache-line-size/build --check-build-system CMakeFiles/Makefile.cmake 0
/usr/local/Cellar/cmake/3.18.4/bin/cmake -E cmake_progress_start /Users/user/Documents/cpu-cache-line-size/build/CMakeFiles /Users/user/Documents/cpu-cache-line-size/build//CMakeFiles/progress.marks
/Applications/Xcode.app/Contents/Developer/usr/bin/make  -f CMakeFiles/Makefile2 all
/Applications/Xcode.app/Contents/Developer/usr/bin/make  -f CMakeFiles/cpu-cache-line-size.dir/build.make CMakeFiles/cpu-cache-line-size.dir/depend
cd /Users/user/Documents/cpu-cache-line-size/build && /usr/local/Cellar/cmake/3.18.4/bin/cmake -E cmake_depends "Unix Makefiles" /Users/user/Documents/cpu-cache-line-size /Users/user/Documents/cpu-cache-line-size /Users/user/Documents/cpu-cache-line-size/build /Users/user/Documents/cpu-cache-line-size/build /Users/user/Documents/cpu-cache-line-size/build/CMakeFiles/cpu-cache-line-size.dir/DependInfo.cmake --color=
Scanning dependencies of target cpu-cache-line-size
/Applications/Xcode.app/Contents/Developer/usr/bin/make  -f CMakeFiles/cpu-cache-line-size.dir/build.make CMakeFiles/cpu-cache-line-size.dir/build
[ 50%] Building CXX object CMakeFiles/cpu-cache-line-size.dir/src/main.cpp.o
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   -O3 -DNDEBUG -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.15.sdk -o CMakeFiles/cpu-cache-line-size.dir/src/main.cpp.o -c /Users/user/Documents/cpu-cache-line-size/src/main.cpp
[100%] Linking CXX executable cpu-cache-line-size
/usr/local/Cellar/cmake/3.18.4/bin/cmake -E cmake_link_script CMakeFiles/cpu-cache-line-size.dir/link.txt --verbose=1
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ -O3 -DNDEBUG -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.15.sdk -Wl,-search_paths_first -Wl,-headerpad_max_install_names CMakeFiles/cpu-cache-line-size.dir/src/main.cpp.o -o cpu-cache-line-size 
[100%] Built target cpu-cache-line-size
/usr/local/Cellar/cmake/3.18.4/bin/cmake -E cmake_progress_start /Users/user/Documents/cpu-cache-line-size/build/CMakeFiles 0
/usr/local/Cellar/cmake/3.18.4/bin/cmake -S/Users/user/Documents/cpu-cache-line-size -B/Users/user/Documents/cpu-cache-line-size/build --check-build-system CMakeFiles/Makefile.cmake 0
/usr/local/Cellar/cmake/3.18.4/bin/cmake -E cmake_progress_start /Users/user/Documents/cpu-cache-line-size/build/CMakeFiles /Users/user/Documents/cpu-cache-line-size/build//CMakeFiles/progress.marks
/Applications/Xcode.app/Contents/Developer/usr/bin/make  -f CMakeFiles/Makefile2 all
/Applications/Xcode.app/Contents/Developer/usr/bin/make  -f CMakeFiles/cpu-cache-line-size.dir/build.make CMakeFiles/cpu-cache-line-size.dir/depend
cd /Users/user/Documents/cpu-cache-line-size/build && /usr/local/Cellar/cmake/3.18.4/bin/cmake -E cmake_depends "Unix Makefiles" /Users/user/Documents/cpu-cache-line-size /Users/user/Documents/cpu-cache-line-size /Users/user/Documents/cpu-cache-line-size/build /Users/user/Documents/cpu-cache-line-size/build /Users/user/Documents/cpu-cache-line-size/build/CMakeFiles/cpu-cache-line-size.dir/DependInfo.cmake --color=
/Applications/Xcode.app/Contents/Developer/usr/bin/make  -f CMakeFiles/cpu-cache-line-size.dir/build.make CMakeFiles/cpu-cache-line-size.dir/build
make[2]: Nothing to be done for `CMakeFiles/cpu-cache-line-size.dir/build'.
[100%] Built target cpu-cache-line-size
/usr/local/Cellar/cmake/3.18.4/bin/cmake -E cmake_progress_start /Users/user/Documents/cpu-cache-line-size/build/CMakeFiles 0
/Applications/Xcode.app/Contents/Developer/usr/bin/make  -f CMakeFiles/Makefile2 preinstall
make[1]: Nothing to be done for `preinstall'.
Install the project...
/usr/local/Cellar/cmake/3.18.4/bin/cmake -P cmake_install.cmake
-- Install configuration: "Release"
-- Installing: /Users/user/Documents/cpu-cache-line-size/bin/cpu-cache-line-size
cpu-cache-line-size % ./run.sh  
64
```
