# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/MathFunctions_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/MathFunctions_autogen.dir/ParseCache.txt"
  "MathFunctions_autogen"
  )
endif()
