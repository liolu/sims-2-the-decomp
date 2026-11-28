/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02067744 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma_gxcommand.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
extern void func_020fbdf0(u32 dmaNo);
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
extern UnkGxCmdDmaState data_02145e64;
extern void func_01ffe190(u32 dmaNo, const void *src, void *dest, u32 ctrl);
extern void func_020f9554(u32 dmaNo, UnkDmaCallback callback, void *arg);
extern void func_020fbcb8(u32 dmaNo, u32 dmaType);
extern void func_020fbc48(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void func_020fc1f4(void *arg);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
void func_020fc234(u32 dmaNo, const void *src, u32 size, UnkDmaCallback callback, void *arg) {
    if (size == 0) {
        UnkCallCallback(callback, arg);
        return;
    }
    while (data_02145e64.isBusy) {
    }
    data_02145e64.isBusy   = 1;
    data_02145e64.dmaNo    = dmaNo;
    data_02145e64.callback = callback;
    data_02145e64.arg      = arg;
    func_020fbcb8(dmaNo, 0x38000000);
    func_020fbc48(dmaNo, (u32) src, size, 0);
    func_020fbdf0(dmaNo);
    func_020f9554(dmaNo, func_020fc1f4, 0);
    func_01ffe190(dmaNo, src, ((void *) 0x04000400), 0xfc400000 | (size >> 2));
}
void func_020fc1f4(void *arg);
