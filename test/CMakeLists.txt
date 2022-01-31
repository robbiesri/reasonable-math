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

project(rsm-tests)

if (WIN32)
    add_compile_definitions(WIN32_LEAN_AND_MEAN)
endif(WIN32)

set(TEST_SRC_DIR      ${CMAKE_CURRENT_SOURCE_DIR})

list(APPEND BASIC_TEST_SRC_FILES
    ${TEST_SRC_DIR}/BasicTests.cpp
    ${TEST_SRC_DIR}/UnitTestMain.cpp
)

add_executable(BasicUnitTests ${BASIC_TEST_SRC_FILES})

target_link_libraries(BasicUnitTests doctest librsm-basic)
