# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "BurdaSudoku_autogen"
  "CMakeFiles\\BurdaSudoku_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\BurdaSudoku_autogen.dir\\ParseCache.txt"
  )
endif()
