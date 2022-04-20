cmake_minimum_required (VERSION 3.5)

project (Lesson1)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++14")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")
set (source_dir "${PROJECT_SOURCE_DIR}/src")

#GLOB é comando pra criar uma lista de arquivos (comando variável pesquisa)
file (GLOB source_files "${source_dir}/*.cpp")

include_directories("${PROJECT_SOURCE_DIR}/inc")

add_executable (${PROJECT_NAME} ${source_files})


