# cacheLineSize
The utility prints the size of the cache line in bytes.

## Supported Platforms

* macOS
* Linux (not tested)
* Windows (not tested)

## Preconditions

The following applications must be installed:
* [Git](https://git-scm.com);
* [CMake](https://cmake.org/);
* C++ compiler: GCC, Clang, Xcode, Microsoft Visual Studio.

## Build & Run

```
git clone git@github.com:ixtal23/cacheLineSize.git
cd cacheLineSize
./build.sh
./run.sh
```

## Results

### Apple MacBook Pro Retina, 15-inch, Late 2013, macOS High Sierra 10.13.2, Intel(R) Core(TM) i7-4750HQ CPU @ 2.00GHz

```
dev$ git --version
git version 2.14.3 (Apple Git-98)
dev$ cmake --version
cmake version 3.10.1
CMake suite maintained and supported by Kitware (kitware.com/cmake).
dev$ xcodebuild -version
Xcode 9.2
Build version 9C40b
dev$ git clone git@github.com:ixtal23/cacheLineSize.git
Cloning into 'cacheLineSize'...
remote: Counting objects: 5, done.
remote: Compressing objects: 100% (5/5), done.
remote: Total 5 (delta 0), reused 0 (delta 0), pack-reused 0
Receiving objects: 100% (5/5), 4.73 KiB | 2.36 MiB/s, done.
dev$ cd cacheLineSize
cacheLineSize$ ./build.sh
-- The CXX compiler identification is AppleClang 9.0.0.9000039
-- Check for working CXX compiler: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++
-- Check for working CXX compiler: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /Users/user/Documents/dev/cacheLineSize/cmake.build
/opt/local/bin/cmake -H/Users/user/Documents/dev/cacheLineSize -B/Users/user/Documents/dev/cacheLineSize/cmake.build --check-build-system CMakeFiles/Makefile.cmake 0
/opt/local/bin/cmake -E cmake_progress_start /Users/user/Documents/dev/cacheLineSize/cmake.build/CMakeFiles /Users/user/Documents/dev/cacheLineSize/cmake.build/CMakeFiles/progress.marks
/Applications/Xcode.app/Contents/Developer/usr/bin/make -f CMakeFiles/Makefile2 all
/Applications/Xcode.app/Contents/Developer/usr/bin/make -f CMakeFiles/cacheLineSize.dir/build.make CMakeFiles/cacheLineSize.dir/depend
cd /Users/user/Documents/dev/cacheLineSize/cmake.build && /opt/local/bin/cmake -E cmake_depends "Unix Makefiles" /Users/user/Documents/dev/cacheLineSize /Users/user/Documents/dev/cacheLineSize /Users/user/Documents/dev/cacheLineSize/cmake.build /Users/user/Documents/dev/cacheLineSize/cmake.build /Users/user/Documents/dev/cacheLineSize/cmake.build/CMakeFiles/cacheLineSize.dir/DependInfo.cmake --color=
Scanning dependencies of target cacheLineSize
/Applications/Xcode.app/Contents/Developer/usr/bin/make -f CMakeFiles/cacheLineSize.dir/build.make CMakeFiles/cacheLineSize.dir/build
[ 50%] Building CXX object CMakeFiles/cacheLineSize.dir/src/main.cpp.o
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++    -O3 -DNDEBUG   -o CMakeFiles/cacheLineSize.dir/src/main.cpp.o -c /Users/user/Documents/dev/cacheLineSize/src/main.cpp
[100%] Linking CXX executable cacheLineSize
/opt/local/bin/cmake -E cmake_link_script CMakeFiles/cacheLineSize.dir/link.txt --verbose=1
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  -O3 -DNDEBUG -Wl,-search_paths_first -Wl,-headerpad_max_install_names  CMakeFiles/cacheLineSize.dir/src/main.cpp.o  -o cacheLineSize
[100%] Built target cacheLineSize
/opt/local/bin/cmake -E cmake_progress_start /Users/user/Documents/dev/cacheLineSize/cmake.build/CMakeFiles 0
/opt/local/bin/cmake -H/Users/user/Documents/dev/cacheLineSize -B/Users/user/Documents/dev/cacheLineSize/cmake.build --check-build-system CMakeFiles/Makefile.cmake 0
/opt/local/bin/cmake -E cmake_progress_start /Users/user/Documents/dev/cacheLineSize/cmake.build/CMakeFiles /Users/user/Documents/dev/cacheLineSize/cmake.build/CMakeFiles/progress.marks
/Applications/Xcode.app/Contents/Developer/usr/bin/make -f CMakeFiles/Makefile2 all
/Applications/Xcode.app/Contents/Developer/usr/bin/make -f CMakeFiles/cacheLineSize.dir/build.make CMakeFiles/cacheLineSize.dir/depend
cd /Users/user/Documents/dev/cacheLineSize/cmake.build && /opt/local/bin/cmake -E cmake_depends "Unix Makefiles" /Users/user/Documents/dev/cacheLineSize /Users/user/Documents/dev/cacheLineSize /Users/user/Documents/dev/cacheLineSize/cmake.build /Users/user/Documents/dev/cacheLineSize/cmake.build /Users/user/Documents/dev/cacheLineSize/cmake.build/CMakeFiles/cacheLineSize.dir/DependInfo.cmake --color=
/Applications/Xcode.app/Contents/Developer/usr/bin/make -f CMakeFiles/cacheLineSize.dir/build.make CMakeFiles/cacheLineSize.dir/build
make[2]: Nothing to be done for `CMakeFiles/cacheLineSize.dir/build'.
[100%] Built target cacheLineSize
/opt/local/bin/cmake -E cmake_progress_start /Users/user/Documents/dev/cacheLineSize/cmake.build/CMakeFiles 0
/Applications/Xcode.app/Contents/Developer/usr/bin/make -f CMakeFiles/Makefile2 preinstall
make[1]: Nothing to be done for `preinstall'.
Install the project...
/opt/local/bin/cmake -P cmake_install.cmake
-- Install configuration: "Release"
-- Installing: /Users/user/Documents/dev/cacheLineSize/bin/cacheLineSize
cacheLineSize$ ./run.sh
64
cacheLineSize$
```
