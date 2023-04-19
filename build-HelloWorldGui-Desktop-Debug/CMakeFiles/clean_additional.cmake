# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/HelloWorldGui_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/HelloWorldGui_autogen.dir/ParseCache.txt"
  "HelloWorldGui_autogen"
  )
endif()
