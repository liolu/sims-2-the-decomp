/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02072720 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/gfd/gfd_vramtransfer.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
extern void func_020fae94(const void *addr, u32 size);
typedef struct {
    u32 type;
    const void *pSrc;
    u32 dstAddr;
    u32 szByte;
} UnkVramTransferTask;
typedef void (*UnkVramLoadFunc)(const void *pSrc, u32 dstAddr, u32 szByte);
extern const UnkVramLoadFunc data_0212b268[36];
void func_020ed178(UnkVramTransferTask *task) {
    UnkVramLoadFunc func = data_0212b268[task->type];
    func_020fae94(task->pSrc, task->szByte);
    func(task->pSrc, task->dstAddr, task->szByte);
}
