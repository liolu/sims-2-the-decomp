/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 x, y, z;
} V3;

void func_02026be8();
void func_020117e8();
void func_0202873c();
void func_0201d124();
void func_02019cdc();
u8 *func_02014eac();
void func_0201ca08();
void func_02018acc();
extern s32 data_0213e560;

s32 func_0202e3e8(u8 *arg0, s32 arg1, s32 arg2) {
    u8 fr[0x110];
    u8 *t;
    u8 *m;
    s32 z;
    s32 a;
    s32 b;
    s32 c;

    if (arg1 != 0xA) {
        return 0;
    }
    func_02026be8(fr + 0x2c);
    z                    = 0;
    *(s32 *) (fr + 0x3c) = z;
    func_020117e8(arg2, 0x26, fr + 0x2c, arg0);
    func_0202873c(fr + 0x48);
    *(u8 **) (fr + 0x6c) = arg0 + 0x28;
    func_020117e8(arg2, 0x2D, fr + 0x48, arg0);
    func_0201d124(fr + 0x70);
    *(u16 *) (fr + 0xa0) = 0xB0;
    *(s32 *) (fr + 0x9c) = data_0213e560;
    *(s32 *) (fr + 0x8c) = *(s32 *) (arg0 + 4);
    func_020117e8(arg2, 3, fr + 0x70, arg0);
    *(u16 *) (fr + 0x5a)       = 0xF2;
    t                          = *(u8 **) (arg0 + 4);
    m                          = t + 0x78;
    a                          = ((s32 *) m)[0];
    *(s32 *) ((fr + 0x8) + 0)  = a;
    *(s32 *) ((fr + 0x60) + 0) = a;
    b                          = ((s32 *) m)[1];
    *(s32 *) ((fr + 0x8) + 4)  = b;
    *(s32 *) ((fr + 0x60) + 4) = b;
    c                          = ((s32 *) m)[2];
    *(s32 *) ((fr + 0x8) + 8)  = c;
    *(s32 *) ((fr + 0x60) + 8) = c;
    func_020117e8(arg2, 0x2D, fr + 0x48, arg0);
    func_02019cdc(fr + 0xac);
    t                          = *(u8 **) (arg0 + 4);
    m                          = t + 0x78;
    a                          = ((s32 *) m)[0];
    *(s32 *) ((fr + 0x14) + 0) = a;
    *(s32 *) ((fr + 0xbc) + 0) = a;
    b                          = ((s32 *) m)[1];
    *(s32 *) ((fr + 0x14) + 4) = b;
    *(s32 *) ((fr + 0xbc) + 4) = b;
    c                          = ((s32 *) m)[2];
    *(s32 *) ((fr + 0x14) + 8) = c;
    *(s32 *) ((fr + 0xbc) + 8) = c;
    func_020117e8(arg2, 0x10, fr + 0xac, arg0);
    t = func_02014eac(*(u8 **) (arg0 + 4), arg2 + 0x78);
    func_0201ca08(fr + 0xdc);
    a                          = 0x1000;
    *(s32 *) (fr + 0)          = a;
    *(s32 *) (fr + 4)          = a;
    *(s32 *) (fr + 0x100)      = a;
    a                          = ((s32 *) (t + 4))[0];
    *(s32 *) ((fr + 0x20) + 0) = a;
    *(s32 *) ((fr + 0xec) + 0) = a;
    b                          = ((s32 *) (t + 4))[1];
    *(s32 *) ((fr + 0x20) + 4) = b;
    *(s32 *) ((fr + 0xec) + 4) = b;
    c                          = ((s32 *) (t + 4))[2];
    *(s32 *) ((fr + 0x20) + 8) = c;
    *(s32 *) ((fr + 0xec) + 8) = c;
    func_020117e8(arg2, 0x1B, fr + 0xdc, arg0);
    func_02018acc(fr + 0xdc);
    func_02018acc(fr + 0xac);
    func_02018acc(fr + 0x70);
    func_02018acc(fr + 0x48);
    func_02018acc(fr + 0x2c);
    return 0;
}
