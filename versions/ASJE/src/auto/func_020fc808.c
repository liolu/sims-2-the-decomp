/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02067540 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma_gxcommand.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
typedef s32 BOOL;
extern void func_020fc1c8(u32 dmaNo);
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
extern UnkGxCmdDmaState data_02146204;
extern void func_020f9a04(u32 mask, UnkIrqHandler handler);
extern UnkIrqHandler func_020f9978(u32 mask);
extern void _Z24EnableSpecificInterruptsj(u32 mask);
extern void func_020fc020(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void func_020fc740(void);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
void func_020fc808(u32 dmaNo, const void *src, u32 size, UnkDmaCallback callback, void *arg) {
    u32 e;

    if (size == 0) {
        UnkCallCallback(callback, arg);
        return;
    }
    while (data_02146204.isBusy) {
    }
    while (!((((*(vu32 *) 0x04000600) & 0x7000000) >> 24) & 2)) {
    }
    data_02146204.isBusy   = 1;
    data_02146204.dmaNo    = dmaNo;
    data_02146204.src      = (u32) src;
    data_02146204.size     = size;
    data_02146204.callback = callback;
    data_02146204.arg      = arg;
    func_020fc020(dmaNo, (u32) src, size, 0);
    func_020fc1c8(dmaNo);

    e                             = func_020fbd64();
    data_02146204.fifoCond        = ((*(vu32 *) 0x04000600) & 0xc0000000) >> 30;
    data_02146204.fifoIntrHandler = func_020f9978(0x200000);
    (*(vu32 *) 0x04000600)        = ((*(vu32 *) 0x04000600) & ~0xc0000000) | 0x40000000;
    func_020f9a04(0x200000, func_020fc740);
    _Z24EnableSpecificInterruptsj(0x200000);
    func_020fc740();
    func_020fbd78(e);
}
void func_020fc740(void);
