/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov010_02152a34[];
extern void func_020519d8(s32, s32, s32);
extern void *func_020521e0(s32);
extern void *func_02018578(void *);
extern void func_02018520(void *, s32, s32);
extern s32 func_02051d18(s32, void *);
extern s32 func_ov010_0214b3c8(void *, s32);
extern void func_ov010_0214fbf8(void *);
extern void func_ov010_0214faf4(void *);
extern s32 func_0204cb3c(s32, s32);
extern s32 func_ov010_0214bc0c(void *, s32);

void func_ov010_0214fcac(u8 *arg0) {
    u32 i;
    u32 j;
    u8 *q;
    s32 sp0;
    u8 *obj;
    s32 sp4[5];
    u8 *r6;

    func_020519d8(3, 0xC, 0);
    sp0                       = (s32) func_020521e0(0x6D5);
    *(void **) (arg0 + 0x1C0) = func_02018578(&sp0);
    func_02018520(*(void **) (arg0 + 0x1C0), 0x1E, 0x76);
    obj                   = *(u8 **) (arg0 + 0x1C0);
    *(s32 *) (obj + 0x14) = (*(s32 *) (obj + 0x14) & ~0xC00) | 0x800;
    obj                   = *(u8 **) (arg0 + 0x1C0);
    *(s32 *) (obj + 0x14) = (*(s32 *) (obj + 0x14) & ~0xF000) | 0xF000;

    q = arg0;
    i = 0;
    do {
        sp0                    = func_02051d18(0, sp4);
        *(void **) (q + 0x138) = func_02018578(&sp0);
        obj                    = *(u8 **) (q + 0x138);
        func_02018520(obj, (s16) (data_ov010_02152a34[i * 2] + 8), (s16) (data_ov010_02152a34[i * 2 + 1] + 0x10));
        i++;
        obj                   = *(u8 **) (q + 0x138);
        *(s32 *) (obj + 0x14) = (*(s32 *) (obj + 0x14) & ~0xC00) | 0x800;
        obj                   = *(u8 **) (q + 0x138);
        *(s32 *) (obj + 0x14) = (*(s32 *) (obj + 0x14) & ~0xF000) | 0xF000;
        q += 0x28;
    } while (i < 3);

    r6 = arg0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            ((s32 *) r6)[0x4f + j] = func_ov010_0214b3c8(arg0, j);
        }
        r6 += 0x28;
    }
    func_ov010_0214fbf8(arg0);
    func_ov010_0214faf4(arg0);
    arg0[0x1E6]             = (u8) func_0204cb3c(0, 2);
    *(s32 *) (arg0 + 0xC)   = 0;
    *(s32 *) (arg0 + 0x1BC) = func_ov010_0214bc0c(arg0, arg0[0x1E6]);
}
