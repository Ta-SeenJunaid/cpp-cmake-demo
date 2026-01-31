add_library(math STATIC
    Math.cpp
)


target_include_directories(math
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)


target_link_libraries(math
    PUBLIC
        logger
)