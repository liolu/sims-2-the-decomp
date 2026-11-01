/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200b92c from projets/code-lyoko/src/donor/func_0200b92c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
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
extern UnkGxCmdDmaState data_02146344;
extern void func_020f9b40(u32 mask, UnkIrqHandler handler);
extern void func_020f9968(u32 mask);
extern void func_020fc808(void *arg);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
void func_020fc808(void *arg) {
    func_020f9968(0x200000);
    (*(vu32 *) 0x04000600) = (data_02146344.fifoCond << 30) | ((*(vu32 *) 0x04000600) & ~0xc0000000);
    func_020f9b40(0x200000, data_02146344.fifoIntrHandler);
    data_02146344.isBusy = 0;
    UnkCallCallback(data_02146344.callback, data_02146344.arg);
}
