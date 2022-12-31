/**
 * @file memory.h
 *
 * @brief Wrapper for memory allocation routines to make error handling better.
 *
 */
#ifndef _MEMORY_H
#define _MEMORY_H

#include <stddef.h>

void* allocMem(size_t size);
void* reallocMem(void* ptr, size_t size);
void* duplicateMem(void* ptr, size_t size);
char* duplicateStr(const char* str);
void freeMem(void* ptr);

#define _init_memory()
#define _uninit_memory()
#define _alloc(s) allocMem(s)
#define _alloc_ds(t) (t*)allocMem(sizeof(t))
#define _alloc_ds_array(t, n) (t*)allocMem(sizeof(t) * (n))
#define _realloc(p, s) reallocMem((void*)(p), (s))
#define _realloc_ds_array(p, t, n) (t*)reallocMem((void*)(p), sizeof(t) * (n))
#define _copy_str(s) duplicateStr(s)
#define _copy_data(p, s) duplicateMem(p, s)
#define _free(p) freeMem((void*)p)

#endif /* _MEMORY_H */
