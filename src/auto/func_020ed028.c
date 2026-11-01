/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02072824 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/gfd/gfd_vramtransfer.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
typedef struct {
    u32 type;
    const void *pSrc;
    u32 dstAddr;
    u32 szByte;
} UnkVramTransferTask;
typedef struct {
    UnkVramTransferTask *pTaskArray;
    u32 lengthOfArray;
    u16 idxFront;
    u16 idxRear;
    u16 numTasks;
    u32 totalSize;
} UnkVramTransferManager;
extern UnkVramTransferManager data_021431cc;
void func_020ed178(UnkVramTransferTask *task);
UnkVramTransferTask *func_020ed108(UnkVramTransferManager *mgr);
BOOL func_020ed0b4(UnkVramTransferManager *mgr);
void func_020ed028(void) {
    UnkVramTransferManager *mgr = &data_021431cc;
    UnkVramTransferTask *task   = func_020ed108(mgr);

    while (func_020ed0b4(mgr)) {
        func_020ed178(task);
        mgr->totalSize -= task->szByte;
        task = func_020ed108(mgr);
    }
}
