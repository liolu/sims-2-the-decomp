/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MI_SendGXCommandAsyncFast from projets/rayman-rr/src/donor/MI_SendGXCommandAsyncFast.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
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
extern void func_01ffe190(u32 dmaNo, const void *src, void *dest, u32 ctrl);
extern void func_020f9a68(u32 dmaNo, UnkDmaCallback callback, void *arg);
extern void func_020fc1cc(u32 dmaNo, u32 dmaType);
extern void func_020fc15c(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void func_020fc708(void *arg);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
void func_020fc748(u32 dmaNo, const void *src, u32 size, UnkDmaCallback callback, void *arg) {
    if (size == 0) {
        UnkCallCallback(callback, arg);
        return;
    }
    while (data_02146344.isBusy) {
    }
    data_02146344.isBusy   = 1;
    data_02146344.dmaNo    = dmaNo;
    data_02146344.callback = callback;
    data_02146344.arg      = arg;
    func_020fc1cc(dmaNo, 0x38000000);
    func_020fc15c(dmaNo, (u32) src, size, 0);
    func_020fc304(dmaNo);
    func_020f9a68(dmaNo, func_020fc708, 0);
    func_01ffe190(dmaNo, src, ((void *) 0x04000400), 0xfc400000 | (size >> 2));
}
extern void func_020fc708(void *arg);
