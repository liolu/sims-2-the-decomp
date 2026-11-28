/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* GX_LoadTex from projets/rayman-rr/src/donor/GX_LoadTex.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void func_020fc58c(register const void *srcp, register void *destp, register u32 size);
typedef void (*MIDmaCallback)(void *);
extern void func_020fc0e8(u32 dmaNo, const void *src, void *dest, u32 size);
extern void func_020fbe60(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_020f90cc(void *src, u32 offset, u32 size);
static inline void GXi_DmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 0x30) {
        func_020fc0e8(dmaNo, src, dest, size);
    } else {
        func_020fc58c(src, dest, size);
    }
}
static inline void GXi_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg) {
    if (dmaNo != -1) {
        func_020fbe60(dmaNo, src, dest, size, callback, arg);
    } else {
        func_020fc58c(src, dest, size);
    }
}
extern u32 data_02145a98;
extern u32 data_02145a84;
extern u32 data_02145a9c;
extern u32 data_02138814;
#pragma thumb off
void func_020f90cc(void *src, u32 offset, u32 size) {
    void *temp;
    if (!data_02145a98) {
        temp = (void *) (data_02145a84 + offset);
    } else {
        if ((offset + size) < data_02145a9c) {
            temp = (void *) (data_02145a84 + offset);
        } else if (offset >= data_02145a9c) {
            temp = (void *) (data_02145a98 + offset - data_02145a9c);
        } else {
            void *temp2 = (void *) data_02145a98;
            u32 temp1   = data_02145a9c - offset;
            temp        = (void *) (data_02145a84 + offset);
            GXi_DmaCopy32(data_02138814, src, temp, temp1);
            GXi_DmaCopy32Async(data_02138814, (void *) ((u8 *) src + temp1), temp2, (size - temp1), ((void *) 0),
                               ((void *) 0));
            return;
        }
    }
    GXi_DmaCopy32Async(data_02138814, src, temp, size, ((void *) 0), ((void *) 0));
}
