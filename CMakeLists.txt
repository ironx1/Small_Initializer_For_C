cmake_minimum_required(VERSION 3.0)
project(KYInitializer C)
add_library(KYInitializer STATIC ky_initializer.c ky_initializer.h ky_interface.h)
set_target_properties(KYInitializer PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)