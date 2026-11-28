/* compiler: 1.2/sp2p3 -pragma "opt_common_subs off" */
#include "m2c.h"

struct Node {
    u32 val;
    Node *next;
    Node *prev;
};

struct List {
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0c();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1c();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void Grow();
    Node *head;
    Node *tail;
    u8 pad[0x20 - 0xc];
    Node *freeHead;
    Node *freeTail;
    u16 cap;
    u16 count;
    void PushBack(u32 v);
};

extern "C" void func_020458a8(List *l, u32 v);

void func_020458a8(List *l, u32 v) {
    Node *p;
    Node *n;
    int empty;
    if (l->count >= l->cap) {
        l->Grow();
    }
    n           = l->freeHead;
    l->freeHead = n->next;
    if (l->freeHead == 0) {
        l->freeTail = 0;
    }
    n->val = v;
    p      = 0;
    if (p == 0) {
        p = l->tail;
    }
    empty = (l->head == 0);
    if (empty) {
        l->tail = n;
        l->head = l->tail;
        n->next = 0;
        n->prev = 0;
    }
    if (!empty) {
        while (p->next != 0) {
            p = p->next;
        }
        n->prev = p;
        n->next = 0;
        p->next = n;
        if (p == l->tail) {
            l->tail = n;
        }
    }
    l->count++;
}
