# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (C) 2019 Intel Corporation
#
# SPDX-License-Identifier: MIT
#
# ----------------- END LICENSE BLOCK -----------------------------------

cmake_minimum_required(VERSION 3.5)

project(ad_map_access_test_support)

include(../cmake/compile-options.cmake)
include(../cmake/hardening.cmake)
include(../cmake/testing.cmake)
include(../cmake/warnings.cmake)

#convert list to string
string (REPLACE ";" " " TARGET_LINK_FLAGS "${TARGET_LINK_OPTIONS}")

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/impl")
add_subdirectory(generated)
