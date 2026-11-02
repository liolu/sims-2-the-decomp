/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* GX_LoadTex from projets/rayman-rr/src/donor/GX_LoadTex.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void func_020fcaa0(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void func_020fc5fc(u32 dmaNo, const void *src, void *dest, u32 size);
extern void _Z14DMAMemcpyAsyncijjjPFviEi(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_020f95e0(void *src, u32 offset, u32 size);
static inline void GXi_DmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 0x30) {
        func_020fc5fc(dmaNo, src, dest, size);
    } else {
        func_020fcaa0(src, dest, size);
    }
}
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        _Z14DMAMemcpyAsyncijjjPFviEi(dmaNo, src, dest, size, callback, arg);
    } else {
        func_020fcaa0(src, dest, size);
    }
}
extern u32 data_02145f78;
extern u32 data_02145f64;
extern u32 data_02145f7c;
extern u32 data_02138d28;
#pragma thumb off
void func_020f95e0(void *src, u32 offset, u32 size) {
    void *temp;
    if (!data_02145f78) {
        temp = (void *) (data_02145f64 + offset);
    } else {
        if ((offset + size) < data_02145f7c) {
            temp = (void *) (data_02145f64 + offset);
        } else if (offset >= data_02145f7c) {
            temp = (void *) (data_02145f78 + offset - data_02145f7c);
        } else {
            void *temp2 = (void *) data_02145f78;
            u32 temp1   = data_02145f7c - offset;
            temp        = (void *) (data_02145f64 + offset);
            GXi_DmaCopy32(data_02138d28, src, temp, temp1);
            GXi_DmaCopy32Async(data_02138d28, (void *) ((u8 *) src + temp1), temp2, (size - temp1), ((void *) 0),
                               ((void *) 0));
            return;
        }
    }
    GXi_DmaCopy32Async(data_02138d28, src, temp, size, ((void *) 0), ((void *) 0));
}
