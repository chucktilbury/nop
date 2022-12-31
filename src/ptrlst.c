/**
 * @file ptrlst.c
 *
 * @brief Generic list of pointers.
 *
 */
#include <stddef.h>
#include <assert.h>
#include "ptrlst.h"
#include "memory.h"

PtrLst* createPtrLst() {

    PtrLst* lst = _alloc_ds(PtrLst);
    lst->cap = 1 << 3;
    lst->len = 0;
    lst->list = _alloc_ds_array(void*, lst->cap);

    return lst;
}

void destroyPtrLst(PtrLst* lst) {

    assert(lst != NULL);
    _free(lst->list);
    _free(lst);
}

void addPtrLst(PtrLst* lst, void* ptr) {

    assert(lst != NULL);
    if(ptr != NULL) {
        if(lst->len+1 > lst->cap) {
            lst->cap <<= 1;
            lst->list = _realloc_ds_array(lst->list, void*, lst->cap);
        }

        lst->list[lst->len] = ptr;
        lst->len++;
    }
    // otherwise do nothing
}

void* getPtrLst(PtrLst* lst, int idx) {

    assert(lst != NULL);
    if(idx < 0 || idx >= lst->len)
        return NULL;
    else
        return lst->list[idx];
}

void* popPtrLst(PtrLst* lst) {

    assert(lst != NULL);
    if(lst->len <= 0)
        return NULL;
    else {
        lst->len--;
        return lst->list[lst->len];
    }
}

void* peekPtrLst(PtrLst* lst) {

    assert(lst != NULL);
    if(lst->len <= 0)
        return NULL;
    else {
        return lst->list[lst->len - 1];
    }
}

void pushPtrLst(PtrLst* lst, void* ptr) {

    assert(lst != NULL);
    addPtrLst(lst, ptr);
}

int lenPtrLst(PtrLst* lst) {

    assert(lst != NULL);
    return lst->len;
}

void** rawPtrLst(PtrLst* lst) {

    assert(lst != NULL);
    return lst->list;
}

void copyPtrLst(PtrLst* to, PtrLst* from) {

    int len = from->len;
    for(int i = 0; i < len; i++)
        addPtrLst(to, getPtrLst(from, i));
}

void* resetPtrLst(PtrLst* lst) {

    void* p = NULL;

    lst->idx = 0;
    if(lst->len > 0) {
        p = lst->list[0];
        lst->idx++;
    }

    return p;
}

void* iteratePtrLst(PtrLst* lst) {

    void* p = NULL;

    if(lst->idx < lst->len) {
        p = lst->list[lst->idx];
        lst->idx++;
    }

    return p;
}
