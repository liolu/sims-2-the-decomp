/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214b6a0 from https://github.com/RonyxDumb/mkds src/arm9/0214b6a0_func_0214b6a0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
extern void func_020fcaa0(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void _Z14DMAMemcpyAsyncijjjPFviEi(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_020f873c(void *src, u32 offset, u32 size);
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        _Z14DMAMemcpyAsyncijjjPFviEi(dmaNo, src, dest, size, callback, arg);
    } else {
        func_020fcaa0(src, dest, size);
    }
}
extern u32 data_02145f54;
extern u32 data_02145f50;
extern u32 data_02138d28;
#pragma thumb off
void func_020f873c(void *src, u32 offset, u32 size) {
    GXi_DmaCopy32Async(data_02138d28, src, (void *) (data_02145f54 + offset - data_02145f50), size, ((void *) 0),
                       ((void *) 0));
}
