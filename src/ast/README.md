# AST

This directory contains files that were generated from the actual parser definition. There is one data structure for every non-terminal in the parser. Every data structure has a C file and a H file associated with it.

The only source code files that are not generated in this directory are ast.c and ast.h. These files are stored in the .boilerplate directory for safe keeping.

Note that almost all of these files have to be modified to actually generate a working AST structure and so regenerating them looses the changes. Ya. Don't do that unless you are ready for the consequences.
