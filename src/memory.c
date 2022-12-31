/**
 * @file memory.c
 *
 * @brief Implement memory allocation fail safes.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "errors.h"

void* allocMem(size_t size) {

    void* ptr = malloc(size);
    if(ptr == NULL)
        fatal("cannot allocate %lu bytes\n", size);

    memset(ptr, 0, size);
    return ptr;
}

void* reallocMem(void* ptr, size_t size) {

    void* nptr = realloc(ptr, size);
    if(nptr == NULL)
        fatal("cannot reallocate %lu bytes\n", size);

    return nptr;
}

void* duplicateMem(void* ptr, size_t size) {

    void* nptr = allocMem(size);
    memcpy(nptr, ptr, size);

    return nptr;
}

char* duplicateStr(const char* str) {

    char* ptr = NULL;

    if(str != NULL) {
        size_t len = strlen(str)+1;
        ptr = (char*)duplicateMem((void*)str, len);
    }
    else {
        ptr = allocMem(1);
        ptr[0] = '\0';
    }

    return ptr;
}

void freeMem(void* ptr) {

    if(ptr != NULL) {
        free(ptr);
    }
}

