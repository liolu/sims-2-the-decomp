/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02016614();
s32 func_02016700();
void func_02049858(void *, s32);
void func_02049b14(void *, s32);
extern u16 data_ov010_0215262c;
extern u32 data_ov010_0215276c[];

typedef struct {
    s32 x, y;
} Vec;
void func_ov010_0214b7a4(u8 *arg0) {
    s32 x0[2];
    s32 x1[2];
    u8 *p;
    s32 temp_r4_2;
    u8 temp_r4;
    u8 old;
    p       = *(u8 **) (arg0 + 0x90);
    temp_r4 = *(u8 *) (p + 0x1E6);
    old     = *(u8 *) (arg0 + 0x87);
    if (old == temp_r4) {
        return;
    }
    *(u8 *) (arg0 + 0x87) = temp_r4;
    func_02049858(arg0, old);
    if (*(u8 *) (arg0 + 0x87) == 0) {
        func_02049b14(arg0, 8);
    } else {
        func_02049b14(arg0, 7);
    }
    ((Vec *) x0)->y        = ((temp_r4 * 0xD) + 0x84) << 0xC;
    ((Vec *) x1)->y        = ((Vec *) x0)->y;
    ((Vec *) x0)->x        = 0xF000;
    ((Vec *) x1)->x        = 0xF000;
    *(s32 *) (arg0 + 0x50) = ((Vec *) x1)->x;
    *(s32 *) (arg0 + 0x54) = ((Vec *) x1)->y;
    temp_r4_2              = data_ov010_0215276c[temp_r4];
    func_02016700(arg0, temp_r4_2);
    func_02016614(arg0, temp_r4_2, data_ov010_0215262c, 0);
}
