//
// Copyright © 2020 Maxim Morozov. All rights reserved.
//
// Created by Maxim Morozov on 30/10/2020.
//
// cpu-cache-line-size
//
// main.cpp
//
// The utility prints the size of the cache line of CPU in bytes.
//

#include <iostream>
#include <cstddef>

#if defined(__APPLE__)

#include <sys/sysctl.h>

std::size_t getCPUCacheLineSize() {
    std::size_t lineSize = 0;
    std::size_t sizeOfLineSize = sizeof(lineSize);
    sysctlbyname("hw.cachelinesize", &lineSize, &sizeOfLineSize, 0, 0);
    return lineSize;
}

#elif defined(__linux__)

#include <cstdio>

std::size_t getCPUCacheLineSize() {
    std::size_t lineSize = 0;

    FILE* const f = fopen("/sys/devices/system/cpu/cpu0/cache/index0/coherency_line_size", "r");
    if (f) {
        fscanf(f, "%ul", &lineSize);
        fclose(f);
    }

    return lineSize;
}

#elif defined(_WIN32) || defined(_WIN64)

#include <windows.h>
#include <cstdint>
#include <vector>

std::size_t getCPUCacheLineSize() {
    std::size_t lineSize = 0;

    DWORD bufferSize = 0;
    GetLogicalProcessorInformation(0, &bufferSize);

    std::vector<std::uint8_t> buffer(bufferSize, 0);
    SYSTEM_LOGICAL_PROCESSOR_INFORMATION* const procInfo = reinterpret_cast<SYSTEM_LOGICAL_PROCESSOR_INFORMATION*>(&buffer[0])
    GetLogicalProcessorInformation(procInfo, &bufferSize);

    const std::size_t procInfoSize = bufferSize / sizeof(SYSTEM_LOGICAL_PROCESSOR_INFORMATION);

    for (std::size_t i = 0; i < procInfoSize; ++i) {
        if (RelationCache == procInfo[i].Relationship && 1 == procInfo[i].Cache.Level) {
            lineSize = procInfo[i].Cache.LineSize;
            break;
        }
    }

    return lineSize;
}

#else
    #error Unsupported platform
#endif

int main(int argc, const char* argv[]) {
    std::cout << getCPUCacheLineSize() << std::endl;
    return 0;
}
