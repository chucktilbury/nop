cmake_minimum_required(VERSION 3.18)
project(nopcc)

find_package(FLEX REQUIRED)
find_package(BISON REQUIRED)

BISON_TARGET(PARSER
    parser.y
    ${CMAKE_CURRENT_BINARY_DIR}/parser.c
    COMPILE_FLAGS "--name-prefix=nop_ --report=lookahead -tvdo"
)

FLEX_TARGET(SCANNER
    scanner.l
    ${CMAKE_CURRENT_BINARY_DIR}/scanner.c
    COMPILE_FLAGS "-i --prefix=nop_"
)

ADD_FLEX_BISON_DEPENDENCY(SCANNER PARSER)

#set(BISON_PARSER_COMPILE_FLAG "--report=lookahead -tv")

include_directories(${CMAKE_CURRENT_BINARY_DIR} ./)

add_executable(${PROJECT_NAME}
    ${BISON_PARSER_OUTPUTS}
    ${FLEX_SCANNER_OUTPUTS}
    errors.c
    #dumper.c
    main.c
    ptrlst.c
    memory.c
    #ast.c
    #import.c
    #namespace.c
    #class.c
    #struct.c
    #symbol.c
    #compound_name.c
    #type_name.c
    #func_declaration.c
    #parameter_decl.c
    #constant_expression.c
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        ${PROJECT_SOURCE_DIR}/ast
        ${PROJECT_SOURCE_DIR}/import
)

target_link_libraries(${PROJECT_NAME}
    pthread
    ast
    import
)

add_subdirectory(ast)
add_subdirectory(import)

target_compile_options(${PROJECT_NAME}
    PRIVATE
        -Wall
        -Wextra
        -Wno-sign-compare
        -Wno-unused-variable
        -Wno-parentheses-equality
        #$<$<CONFIG:DEBUG>:-g3 >
        $<$<CONFIG:DEBUG>:-g >
        #$<$<CONFIG:DEBUG>:-Og >
        #$<$<CONFIG:DEBUG>:-DMEMORY_DEBUG >
        $<$<CONFIG:DEBUG>:-DENA_TRACE >
        #$<$<CONFIG:DEBUG>:-DENABLE_TRACE >
        $<$<CONFIG:DEBUG>:-DENABLE_DUMP >
        $<$<CONFIG:RELEASE>:-Ofast >
        $<$<CONFIG:PROFILE>:-pg -O0 >
)

set_property(DIRECTORY PROPERTY ADDITIONAL_MAKE_CLEAN_FILES
             "${CMAKE_CURRENT_SOURCE_DIR}/parser.h"
             "${CMAKE_CURRENT_SOURCE_DIR}/parser.output")
