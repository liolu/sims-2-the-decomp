/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02067540 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma_gxcommand.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
typedef s32 BOOL;
extern void func_020fc304(u32 dmaNo);
typedef void (*UnkDmaCallback)(void *arg);
typedef void (*UnkIrqHandler)(void);
typedef struct {
    volatile BOOL isBusy;
    u32 dmaNo;
    u32 src;
    u32 size;
    UnkDmaCallback callback;
    void *arg;
    u32 fifoCond;
    UnkIrqHandler fifoIntrHandler;
} UnkGxCmdDmaState;
extern UnkGxCmdDmaState data_02146344;
extern void func_020f9b40(u32 mask, UnkIrqHandler handler);
extern UnkIrqHandler _Z19GetInterruptHandlerj(u32 mask);
extern void _Z24EnableSpecificInterruptsj(u32 mask);
extern void func_020fc15c(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void func_020fc87c(void);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
void func_020fc944(u32 dmaNo, const void *src, u32 size, UnkDmaCallback callback, void *arg) {
    u32 e;

    if (size == 0) {
        UnkCallCallback(callback, arg);
        return;
    }
    while (data_02146344.isBusy) {
    }
    while (!((((*(vu32 *) 0x04000600) & 0x7000000) >> 24) & 2)) {
    }
    data_02146344.isBusy   = 1;
    data_02146344.dmaNo    = dmaNo;
    data_02146344.src      = (u32) src;
    data_02146344.size     = size;
    data_02146344.callback = callback;
    data_02146344.arg      = arg;
    func_020fc15c(dmaNo, (u32) src, size, 0);
    func_020fc304(dmaNo);

    e                             = func_020fbea0();
    data_02146344.fifoCond        = ((*(vu32 *) 0x04000600) & 0xc0000000) >> 30;
    data_02146344.fifoIntrHandler = _Z19GetInterruptHandlerj(0x200000);
    (*(vu32 *) 0x04000600)        = ((*(vu32 *) 0x04000600) & ~0xc0000000) | 0x40000000;
    func_020f9b40(0x200000, func_020fc87c);
    _Z24EnableSpecificInterruptsj(0x200000);
    func_020fc87c();
    func_020fbeb4(e);
}
void func_020fc87c(void);
