/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_01ffabc8(u8 *, s32, s32);
extern void func_01ffac40(u8 *, void *);
extern void func_020117e8();
extern void func_02018acc(u8 *);
extern void func_02019cdc(u8 *);
extern void func_0201c990(u8 *);
extern void func_0201d0ac(u8 *);
extern void func_0201d4f4(u8 *);
extern void func_0201d7cc(u8 *);
extern void func_02027650(u8 *);
extern u8 *func_02086da0();
extern u8 *data_0213e440;
extern u8 *data_0213e2f4;

void func_02025c08(u8 *arg0) {
    u8 F[0x104];
    u8 *r;
    s32 t;

    *(s32 *) (F + 0) = 0x015F9000;
    r                = func_02086da0(data_0213e440, *(u8 **) (arg0 + 4), 2, -1, 0x015F9000, -1, 1);
    if (r == 0) {
        return;
    }
    t = *(s32 *) (data_0213e2f4 + *(u16 *) (r + 0xA) * 0x2C + 0x21EC);
    if (t != 3 && t != 5 && t != 0 && t != 0xA && t != 1) {
        return;
    }
    *(u8 **) (arg0 + 0x34) = r;
    if (*(u8 **) (arg0 + 0x34) == 0) {
        return;
    }
    func_0201c990(F + 12);
    func_0201d0ac(F + 64);
    func_02019cdc(F + 124);
    func_0201d4f4(F + 172);
    func_0201d7cc(F + 208);
    func_01ffabc8(*(u8 **) (arg0 + 0x34) + 0xE0, 5, 1);
    func_01ffac40(*(u8 **) (arg0 + 4) + 0xE0, arg0);
    func_02027650(F + 232);
    *(u8 **) (F + 256) = *(u8 **) (arg0 + 0x34);
    *(u8 **) (F + 248) = *(u8 **) (arg0 + 4);
    func_020117e8(*(u8 **) (arg0 + 4), 0x22, F + 172, arg0);
    *(u16 *) (F + 112) = 0xB3;
    *(s32 *) (F + 80)  = 0x24D;
    func_020117e8(*(u8 **) (arg0 + 4), 3, F + 64, arg0);
    *(u16 *) (F + 226) = 0xB3;
    func_020117e8(*(u8 **) (arg0 + 4), 0x23, F + 208, arg0);
    *(u16 *) (F + 190) = 0x122;
    *(u16 *) (F + 188) = 0x123;
    func_020117e8(*(u8 **) (arg0 + 4), 0x22, F + 172, arg0);
    *(u16 *) (F + 0xFC) = 0x24;
    func_020117e8(*(u8 **) (arg0 + 4), 0x21, F + 232, arg0);
    *(u16 *) (F + 152) = 0x135;
    *(u8 **) (F + 164) = *(u8 **) (arg0 + 0x34);
    func_020117e8(*(u8 **) (arg0 + 4), 0x10, F + 124, arg0);
    *(u16 *) (F + 56) = 3;
    *(s32 *) (F + 4)  = 0xC000;
    *(s32 *) (F + 8)  = 0xC000;
    *(s32 *) (F + 48) = 0xC000;
    *(u8 **) (F + 40) = *(u8 **) (arg0 + 0x34);
    func_020117e8(*(u8 **) (arg0 + 4), 0x1B, F + 12, arg0);
    *(u16 *) (F + 112) = 0;
    *(s32 *) (F + 80)  = -1;
    *(u8 *) (F + 115)  = 1;
    func_020117e8(*(u8 **) (arg0 + 0x34), 3, F + 64, 0);
    func_02018acc(F + 232);
    func_02018acc(F + 208);
    func_02018acc(F + 172);
    func_02018acc(F + 124);
    func_02018acc(F + 64);
    func_02018acc(F + 12);
}
