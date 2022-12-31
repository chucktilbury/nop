/**
 * @file import.h
 *
 * @brief This module handles importing files. Basically it just switches the
 * scanner buffer and starts scanning in the new file and jumps back when that
 * file ends. This also has the routines for finding files and manipulating
 * path names. Not a part of the AST.
 *
 */
#ifndef _IMPORT_H
#define _IMPORT_H

void openFile(const char* fname);

#endif /* _IMPORT_H */
