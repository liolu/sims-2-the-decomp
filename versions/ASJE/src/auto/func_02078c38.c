/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u16 data_02132730[];
extern u8 data_02121808[];
extern u8 data_0213e2f4[];
extern u8 data_0213e440[];

s32 func_0204cb3c(s32, s32);
s32 func_020645cc(void *, s32);
void func_0205f4b4(u8);
void func_0205f5b4(u8);
void func_0205f6b4(u8);
void func_0205f7b4(u8);
void func_0205e320(void *, s32, s32, s32, s32, s32);

void func_02078c38(u8 *arg0) {
    u16 tbl[5];
    u16 r4;
    u16 v4;
    s32 var2;
    s32 var3;
    u32 sel;
    u8 *p;
    u8 *pp;
    u8 v1;

    tbl[0] = data_02132730[0];
    tbl[1] = data_02132730[1];
    tbl[2] = data_02132730[2];
    tbl[3] = data_02132730[3];
    tbl[4] = data_02132730[4];
    r4     = (u16) func_0204cb3c(0, 4);
    if (func_020645cc(*(u8 **) data_0213e2f4, 0x56) != 0) {
        return;
    }
    if (r4 == 0xD) {
        if (((u8 *) *(u8 **) data_0213e2f4)[0x2F78] != 4) {
            return;
        }
    }
    v4 = tbl[r4];
    if (v4 == *(s32 *) (*(u8 **) data_0213e440 + 0xF4)) {
        return;
    }
    sel  = (u32) func_0204cb3c(0, 3);
    var2 = 0;
    switch (sel) {
        case 0:
            func_0205f6b4((u8) v4);
            var2 = 0x907;
            break;
        case 1:
            func_0205f7b4((u8) v4);
            var2 = 0x90A;
            break;
        case 2:
            func_0205f5b4((u8) v4);
            var2 = 0x908;
            break;
        case 3:
            func_0205f4b4((u8) v4);
            var2 = 0x909;
            break;
    }
    v1 = arg0[0x7D6];
    p  = *(u8 **) data_0213e2f4;
    pp = p + 0x47F0;
    if (*(s32 *) (pp + 4) == 9 && (u16) * (s32 *) (pp + 8) == 0x13) {
        var3 = *(u16 *) (*(u8 **) (data_02121808 + 0x140) + (v1 + 4) * 2);
    } else {
        r4   = *(u16 *) (arg0 + 0x7D4);
        var3 = *(u16 *) (*(u8 **) (data_02121808 + r4 * 0x14) + (v1 + 4) * 2);
    }
    func_0205e320(*(u8 **) data_0213e2f4 + 0x3030, 0x2D, var2, var3, 0, 0);
}
