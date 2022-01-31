#
# Copyright 2022 Robert Srinivasiah
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
# http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

cmake_minimum_required(VERSION 3.14)

project(librsm-core)

set(SRC_DIR         ${CMAKE_CURRENT_SOURCE_DIR})
set(PUBLIC_DIR      ${SRC_DIR}/Public)
set(PRIVATE_DIR     ${SRC_DIR}/Private)

if (WIN32)
    add_compile_definitions(WIN32_LEAN_AND_MEAN)
endif()

list(APPEND PUBLIC_HDR_FILES
    ${PUBLIC_DIR}/CoreVec.h
)

list(APPEND PRIVATE_HDR_FILES
#    ${PRIVATE_DIR}/???.h
)

list(APPEND PRIVATE_SRC_FILES
    ${PRIVATE_DIR}/CoreVec.cpp
)

add_library(${PROJECT_NAME} SHARED 
    ${PUBLIC_HDR_FILES}
    ${PRIVATE_HDR_FILES}
    ${PRIVATE_SRC_FILES}
)

target_include_directories(${PROJECT_NAME} 
    PUBLIC
        ${PUBLIC_DIR}
    PRIVATE
        ${PRIVATE_DIR}
)

target_link_libraries(${PROJECT_NAME} 
    PRIVATE
#        spdlog::spdlog
)

# If I ever restore dynamic library behavior, i need the structure here
# to copy to a shared location
