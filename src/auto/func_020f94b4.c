/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020174b4 from projets/rayman-rr/src/donor/func_020174b4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
extern void func_020fcaa0(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void _Z14DMAMemcpyAsyncijjjPFviEi(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_020f94b4(void *src, u32 offset, u32 size);
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        _Z14DMAMemcpyAsyncijjjPFviEi(dmaNo, src, dest, size, callback, arg);
    } else {
        func_020fcaa0(src, dest, size);
    }
}
extern u32 data_02145f68;
extern u32 data_02138d28;
#pragma thumb off
void func_020f94b4(void *src, u32 offset, u32 size) {
    GXi_DmaCopy32Async(data_02138d28, src, (void *) (data_02145f68 + offset), size, ((void *) 0), ((void *) 0));
}
