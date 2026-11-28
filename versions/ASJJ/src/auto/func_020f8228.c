/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214b6a0 from https://github.com/RonyxDumb/mkds src/arm9/0214b6a0_func_0214b6a0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
extern void func_020fc58c(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void func_020fbe60(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_020f8228(void *src, u32 offset, u32 size);
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        func_020fbe60(dmaNo, src, dest, size, callback, arg);
    } else {
        func_020fc58c(src, dest, size);
    }
}
extern u32 data_02145a74;
extern u32 data_02145a70;
extern u32 data_02138814;
#pragma thumb off
void func_020f8228(void *src, u32 offset, u32 size) {
    GXi_DmaCopy32Async(data_02138814, src, (void *) (data_02145a74 + offset - data_02145a70), size, ((void *) 0),
                       ((void *) 0));
}
