# Stop if cmake version below 3.0
cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

# Project name
project(foo-essentials)

# Enable c, and c++ language
enable_language(C CXX)

# Project version
set(FOO_VERSION_MAJOR 0)
set(FOO_VERSION_MINOR 1)
set(FOO_VERSION_PATCH 0)
set(FOO_VERSION
  "${FOO_VERSION_MAJOR}.${FOO_VERSION_MINOR}.${FOO_VERSION_PATCH}")

# Location of additional cmake modules
set(CMAKE_MODULE_PATH
  ${CMAKE_MODULE_PATH}
  ${CMAKE_CURRENT_SOURCE_DIR}/cmake
  )

include(OutOfSourceConfig)
include(BuildTypeConfig)

add_subdirectory(src)

include(ConfigureDebPackaging)
ConfigureDebPackaging("${FOO_VERSION}"
"ON"
""
"auto"
"Foo Company"
"Gokhan Karabulut <gokhanettin@gmail.com>")
