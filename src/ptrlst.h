/**
 * @file ptrlst.h
 *
 * @brief Pointer list.
 *
 */
#ifndef _PTRLST_H
#define _PTRLST_H

typedef struct {
    void** list;
    int cap;
    int len;
    int idx;
} PtrLst;

PtrLst* createPtrLst();
void destroyPtrLst(PtrLst* lst);
void addPtrLst(PtrLst* lst, void* ptr);
void* getPtrLst(PtrLst* lst, int idx);
void* popPtrLst(PtrLst* lst);
void* peekPtrLst(PtrLst* lst);
void pushPtrLst(PtrLst* lst, void* ptr);
int lenPtrLst(PtrLst* lst);
void** rawPtrLst(PtrLst* lst);
void copyPtrLst(PtrLst* to, PtrLst* from);
void* resetPtrLst(PtrLst* lst);
void* iteratePtrLst(PtrLst* lst);

#endif