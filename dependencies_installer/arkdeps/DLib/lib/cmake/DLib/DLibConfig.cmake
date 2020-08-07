get_filename_component(CMAKE_FILE_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
SET(_DLib_INCLUDE_DIR "${CMAKE_FILE_DIR}/../../../include")
SET(DLib_INCLUDE_DIR
  ${_DLib_INCLUDE_DIR}/DUtils
  ${_DLib_INCLUDE_DIR}/DUtilsCV
  ${_DLib_INCLUDE_DIR}/DVision
)
SET(DLib_LIBRARIES "${CMAKE_FILE_DIR}/../../DLib.lib")
SET(DLib_LIBS ${DLib_LIBRARIES})
SET(DLib_INCLUDE_DIRS ${DLib_INCLUDE_DIR})
