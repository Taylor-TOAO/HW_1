﻿# CMakeList.txt : CMake project for CMakeProject6, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("CMakeProject6")

# Add source to this project's executable.
add_executable (CMakeProject6 "CMakeProject6.cpp" "CMakeProject6.h" "Problem1.h" "Problem1.cpp" "RollRateEquation.h" "RollRateEquation.cpp" "Problem2.h" "Problem2.cpp" "Problem3.h" "Problem3.cpp" "Problem4.h" "Problem4.cpp" "Problem5.h" "Problem5.cpp" "Problem6.h" "Problem6.cpp" "Problem8.h" "Problem8.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeProject6 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
