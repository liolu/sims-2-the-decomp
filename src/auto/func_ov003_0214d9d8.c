/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov003_021509cc;
extern u8 data_ov003_02150b54;
extern u8 data_ov003_0214fb90;
extern void func_02046acc(void *, s32);
extern void func_02089dc0(void *);
extern void func_02046944(void *, void *, s32);
extern void func_ov003_0214d5e4(void *, s32);
extern void func_0205077c(s32, s32, s32, s32, s32);

void *func_ov003_0214d9d8(void *arg0, s32 arg1) {
    u8 *r4            = (u8 *) arg0;
    *(void **) r4     = &data_ov003_021509cc;
    *(s32 *) (r4 + 4) = arg1;
    func_02046acc(r4 + 8, 0x20);
    *(void **) r4 = &data_ov003_02150b54;
    func_02089dc0(r4 + 0x14);
    *(u16 *) (r4 + 0x10) = 0;
    *(u16 *) (r4 + 0x12) = 0;
    func_02046944(r4 + 8, &data_ov003_0214fb90, 6);
    {
        u8 *r1            = *(u8 **) (r4 + 8);
        u8 *r3            = *(u8 **) (r1 + 0x10);
        *(u32 *) (r3 + 4) = *(u32 *) (r3 + 4) & ~1;
    }
    {
        u8 *r2            = *(u8 **) (r4 + 8);
        u8 *r3            = *(u8 **) (r2 + 0x14);
        *(u32 *) (r3 + 4) = *(u32 *) (r3 + 4) & ~1;
    }
    {
        u8 *o = *(u8 *volatile *) (r4 + 4);
        u8 *t = *(u8 **) (r4 + 8);
        u8 *e = *(u8 **) (t + (*(u16 *) (o + 0x76) + 4) * 4);
        *(u32 *) (e + 4) |= 1;
    }
    func_ov003_0214d5e4(r4, 1);
    func_0205077c(0x20, 1, 0x2E, 0x2E, 0);
    func_0205077c(0x20, 0x2E, 0x2E, 0x2E, 1);
    return r4;
}
