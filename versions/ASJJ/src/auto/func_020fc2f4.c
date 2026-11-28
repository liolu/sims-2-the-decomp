/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020676e4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma_gxcommand.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
typedef s32 BOOL;
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
extern void func_020f962c(u32 mask, UnkIrqHandler handler);
extern void func_020f9454(u32 mask);
extern void func_020fc2f4(void *arg);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
void func_020fc2f4(void *arg) {
    func_020f9454(0x200000);
    (*(vu32 *) 0x04000600) = (data_02145e64.fifoCond << 30) | ((*(vu32 *) 0x04000600) & ~0xc0000000);
    func_020f962c(0x200000, data_02145e64.fifoIntrHandler);
    data_02145e64.isBusy = 0;
    UnkCallCallback(data_02145e64.callback, data_02145e64.arg);
}
