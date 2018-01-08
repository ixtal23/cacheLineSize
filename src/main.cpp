//
// main.cpp
// cacheLineSize
//
// Created by Maxim Morozov on 06/01/2018.
// Copyright © 2018 Maxim Morozov. All rights reserved.
//
// The utility prints the size of the cache line in bytes.
//

#include <iostream>
#include <cstddef>

#if defined(__APPLE__)

#include <sys/sysctl.h>

size_t cacheLineSize() {
    size_t lineSize = 0;
    size_t sizeOfLineSize = sizeof(lineSize);
    sysctlbyname("hw.cachelinesize", &lineSize, &sizeOfLineSize, 0, 0);
    return lineSize;
}

#elif defined(__linux__)

#include <cstdio>

size_t cacheLineSize() {
    size_t lineSize = 0;

    FILE* const f = fopen("/sys/devices/system/cpu/cpu0/cache/index0/coherency_line_size", "r");
    if (f) {
        fscanf(f, "%ul", &lineSize);
        fclose(f);

        return lineSize;
    }

    return lineSize;
}

#elif defined(_WIN32) || defined(_WIN64)

#include <windows.h>
#include <cstdint>
#include <vector>

size_t cacheLineSize() {
    size_t lineSize = 0;

    DWORD bufferSize = 0;
    GetLogicalProcessorInformation(0, &bufferSize);

    std::vector<uint8_t> buffer(bufferSize, 0);
    SYSTEM_LOGICAL_PROCESSOR_INFORMATION* const procInfo = reinterpret_cast<SYSTEM_LOGICAL_PROCESSOR_INFORMATION*>(&buffer[0])
    GetLogicalProcessorInformation(procInfo, &bufferSize);

    for (size_t i = 0, procInfoSize = bufferSize / sizeof(SYSTEM_LOGICAL_PROCESSOR_INFORMATION); i != procInfoSize; ++i) {
        if (procInfo[i].Relationship == RelationCache && 1 == procInfo[i].Cache.Level) {
            lineSize = procInfo[i].Cache.LineSize;
            break;
        }
    }

    return lineSize;
}

#else
    #error Unsupported platform
#endif

int main(int argc, const char * argv[]) {
    std::cout << cacheLineSize() << std::endl;
    return 0;
}
