# AST Boilerplate

This is about the boilerlace for the AST part of the parser. It has over 60 separate data structures and methods to manipulate them. And so it's a reasonable thing to create a script to generate some of the code that will go into the system.

The AST system has a data structure for every non-terminal in the parser. Every one of those data strucutres has parts in common and will be placed in their own file with their own source and headers. All of those will be compiled into a library to make it easy to hold them in a separate directory.

This utility takes a list of names, one on a line with no blanks and does the following with each line:

* Create the *.C and *.H files. The C file functions include calls to TRACE() as required.
    * The C file has a comment at the top with the file name. It implements the functions:
        * create_xxx() The default prototype has no parameters and returns a pointer to the generated data structure.
        * dump_xxx() The default prototype returns void and accepts a pointer to the generated data structure.
    * The header file has the lock and a comment at the beginning and:
        * The function prototypes
        * The data structure
        * An enum for types relavent to the data structure.
* Add a line in an include that includes the headers for all of the lines that are generated. This include will provide access to the data structures and the functions in the parser, among others.
* Add a list of C files for including in the CMakeLists.txt file.
* A list of the data structures for including in the parser %union {}.
* A list of %tokens<xxx> YYY for the parser.
* A commented out $$ = create_xxx(); for copy/paste into the parser.
