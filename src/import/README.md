# IMPORT

This directory contains the importer for the system. This will be a major part of the system with its own parser and scanner. 

The import system will bring external declarations into the current name space without actually parsing over the implementation. The idea is that the other modules will be linked to the current one according to the operating system's need. The scope operators of PUBLIC, PRIVATE, and PROTECTED are respected. 

The import system is also responsible for finding the import modules in the file system, portably, according to the operating system's need.