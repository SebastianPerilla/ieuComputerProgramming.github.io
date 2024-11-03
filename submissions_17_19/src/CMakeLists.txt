# add_library(zipfs SHARED include/zipfs.h)
# set_target_properties(zipfs PROPERTIES LINKER_LANGUAGE CXX) # need to specify C++ as a linker language
# target_link_libraries(zipfs)

# add_executable(main_zipfs_containers main_zipfs_containers.cpp)
# target_link_directories(main_zipfs_containers PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

# add_executable(main_zipfs_algorithms main_zipfs_algorithms.cpp)
# target_include_directories(main_zipfs_algorithms PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)



add_library(zipfs SHARED include/zipfs.h)
set_target_properties(zipfs PROPERTIES LINKER_LANGUAGE CXX) # need to specify C++ as a linker language
target_link_libraries(zipfs)

add_executable(main_zipfs_containers main_zipfs_containers.cpp)
target_link_directories(main_zipfs_containers PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(main_zipfs_algorithms main_zipfs_algorithms.cpp)
target_include_directories(main_zipfs_algorithms PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src ${CMAKE_CURRENT_SOURCE_DIR}/include)



add_executable(main_zipfs_containers main_zipfs_containers.cpp container_functions.cpp)
add_executable(main_zipfs_algorithms main_zipfs_algorithms.cpp algorithm_functions.cpp)
