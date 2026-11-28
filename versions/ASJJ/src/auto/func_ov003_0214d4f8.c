/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov003_021504ec;
extern u8 data_ov003_02150674;
extern u8 data_ov003_0214f6b0;
extern void func_02046ae0(void *, s32);
extern void func_02089cac(void *);
extern void func_02046958(void *, void *, s32);
extern void func_ov003_0214d104(void *, s32);
extern void func_02050718(s32, s32, s32, s32, s32);

void *func_ov003_0214d4f8(void *arg0, s32 arg1) {
    u8 *r4            = (u8 *) arg0;
    *(void **) r4     = &data_ov003_021504ec;
    *(s32 *) (r4 + 4) = arg1;
    func_02046ae0(r4 + 8, 0x20);
    *(void **) r4 = &data_ov003_02150674;
    func_02089cac(r4 + 0x14);
    *(u16 *) (r4 + 0x10) = 0;
    *(u16 *) (r4 + 0x12) = 0;
    func_02046958(r4 + 8, &data_ov003_0214f6b0, 6);
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
    func_ov003_0214d104(r4, 1);
    func_02050718(0x20, 1, 0x2E, 0x2E, 0);
    func_02050718(0x20, 0x2E, 0x2E, 0x2E, 1);
    return r4;
}
