cmake_minimum_required(VERSION 3.20 FATAL_ERROR)

project(Autoclicker VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(${PROJECT_NAME}
	source/Autoclicker.cpp
)

if(MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE
        $<$<CONFIG:Debug>:/W4 /WX>
        $<$<CONFIG:Release>:/O2>
    )
else()
    target_compile_options(${PROJECT_NAME} PRIVATE
        $<$<CONFIG:Debug>:-Wall -Wextra -Wpedantic -Werror>
        $<$<CONFIG:Release>:-O3>
    )
endif()

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    message("Building Debug version")
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    message("Building Release version")
endif()
