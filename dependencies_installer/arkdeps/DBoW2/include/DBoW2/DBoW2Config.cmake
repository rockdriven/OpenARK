get_filename_component(DBoW2_CMAKE_FILE_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(DBoW2_INCLUDE_DIR "${DBoW2_CMAKE_FILE_DIR}" PATH)
get_filename_component(DBoW2_ROOT_DIR "${DBoW2_INCLUDE_DIR}" PATH)
SET(DBoW2_LIBRARIES "${DBoW2_ROOT_DIR}/lib/DBoW2.lib")
SET(DBoW2_LIBS ${DBoW2_LIBRARIES})
SET(DBoW2_INCLUDE_DIRS "${DBoW2_CMAKE_FILE_DIR}")
