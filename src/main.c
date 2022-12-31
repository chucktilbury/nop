/**
 * @file main.c
 *
 * @brief Main entry point to the program.
 *
 */
#include "common.h"
#include "errors.h"
#include "memory.h"

#include "ast/ast.h"
#include "parser.h"
#include "scanner.h"
//#include "symbol_tab.h"

extern FILE* outfile;

/**
 * @brief Main entry point.
 *
 * @param argc -- Number of program args
 * @param argv -- List of program args
 * @return int
 */
int main(int argc, char** argv) {
    outfile = stdout;
    _init_memory();
    if(argc < 2) {
        if(isatty(fileno(stdin))) {
            fprintf(stderr, "Nothing to input!\n");
            return 1;
        }
    }
    else {
        open_file(argv[1]);
    }


    nop_parse();

    // dumpSymTab();
    // close_file();
    _uninit_memory();

    return 0;
}
