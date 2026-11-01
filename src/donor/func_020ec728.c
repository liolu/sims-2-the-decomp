/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_FndSetAllocModeForExpHeap from https://github.com/RonyxDumb/mkds src/arm9/020176c0_Mem_Exp_GetAllocatableSize.c
 * (license: none), reused by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
extern const u16(*ctrdgi_fl_maxtime);
typedef struct {
    void *prevObject;
    void *nextObject;
} NNSFndLink;
typedef struct {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;
} NNSFndList;
typedef struct NNSiFndHeapHead NNSiFndHeapHead;
struct NNSiFndHeapHead {
    u32 signature;
    NNSFndLink link;
    NNSFndList childList;
    void *heapStart;
    void *heapEnd;
    u32 attribute;
};
typedef NNSiFndHeapHead *NNSFndHeapHandle;
typedef struct NNSiFndExpHeapMBlockHead NNSiFndExpHeapMBlockHead;
struct NNSiFndExpHeapMBlockHead {
    u16 signature;
    u16 attribute;
    u32 blockSize;
    NNSiFndExpHeapMBlockHead *pMBHeadPrev;
    NNSiFndExpHeapMBlockHead *pMBHeadNext;
};
typedef struct NNSiFndExpMBlockList NNSiFndExpMBlockList;
struct NNSiFndExpMBlockList {
    NNSiFndExpHeapMBlockHead *head;
    NNSiFndExpHeapMBlockHead *tail;
};
typedef struct NNSiFndExpHeapHead NNSiFndExpHeapHead;
struct NNSiFndExpHeapHead {
    NNSiFndExpMBlockList mbFreeList;
    NNSiFndExpMBlockList mbUsedList;
    u16 groupID;
    u16 feature;
};
extern u16 func_020ec728(NNSFndHeapHandle heap, u16 mode);
typedef u32 NNSiUIntPtr;
inline NNSiUIntPtr NNSiGetUIntPtr(const void *ptr) {
    return (NNSiUIntPtr) ptr;
}
inline void *AddU32ToPtr(void *ptr, u32 val) {
    return (void *) (NNSiGetUIntPtr(ptr) + val);
}
static inline NNSiFndExpHeapHead *GetExpHeapHeadPtrFromHeapHead(NNSiFndHeapHead *pHHead) {
    return AddU32ToPtr(pHHead, sizeof(NNSiFndHeapHead));
}
static inline NNSiFndExpHeapHead *GetExpHeapHeadPtrFromHandle(NNSFndHeapHandle heap) {
    return GetExpHeapHeadPtrFromHeapHead(heap);
}
static inline u16 GetAllocMode(NNSiFndExpHeapHead *pEHHead) {
    return (u16) (((pEHHead->feature) >> (0)) & ((1 << (1)) - 1));
}
static inline void SetAllocMode(NNSiFndExpHeapHead *pEHHead, u16 mode) {
    do {
        u32 maskBits = (u32) ((1 << (1)) - 1);
        u32 newVal   = (mode) &maskBits;
        (void) (maskBits <<= 0);
        (pEHHead->feature) &= ~maskBits;
        (pEHHead->feature) |= newVal << (0);
    } while (0);
    ;
}
u16 func_020ec728(NNSFndHeapHandle heap, u16 mode) {
    ((void) 0);

    {
        NNSiFndExpHeapHead *const pEHHead = GetExpHeapHeadPtrFromHandle(heap);
        u16 oldMode                       = GetAllocMode(pEHHead);
        SetAllocMode(pEHHead, mode);

        return oldMode;
    }
}
