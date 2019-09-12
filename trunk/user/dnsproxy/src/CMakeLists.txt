cmake_minimum_required(VERSION 2.8)
cmake_policy(SET CMP0048 NEW)

project(dnsproxy VERSION "1.1.1")

set(SOURCE_FILES dnsproxy.c domain_cache.c transport_cache.c)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

