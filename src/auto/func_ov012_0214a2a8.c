/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef unsigned char u8;
typedef struct {
    u16 v;
} S2;

void func_0203cdd4(s32);
s32 func_02048108(s32, s32, s32, s32, s32, s32);
void func_02051b80(S2);
s32 func_02077ef4(s32, u16);
void func_020d59bc(s32);
void func_ov012_02149bc4(u8 *, s32);
extern u8 *data_02139e8c;
extern s32 data_02139fa4;
extern u8 *data_0213d95c;
extern s32 data_0213e434;
extern S2 data_ov012_0214a968;

void func_ov012_0214a2a8(u8 *arg0) {
    u16 x;
    u16 y;
    u8 *t;

    if (*(u16 *) (data_02139e8c + 6) & 1) {
        t                = *(u8 **) (arg0 + 0x28);
        *(s32 *) (t + 4) = *(s32 *) (t + 4) | 1;
        t                = *(u8 **) (arg0 + 0x2C);
        *(s32 *) (t + 4) = *(s32 *) (t + 4) & ~1;
        func_020d59bc(0x160);
        func_02048108(data_02139fa4, 0x29, 1, 1, 0, 0);
        return;
    }
    if ((((u32) (data_0213d95c[0] << 0x1B)) >> 0x1F) != 0 && arg0[0x36] == 0) {
        x = *(u16 *) (data_0213d95c + 0x2A);
        y = *(u16 *) (data_0213d95c + 0x2C);
        if (x > 0xDA && x < 0xFA && y > 0x9A && y < 0xBA) {
            t                = *(u8 **) (arg0 + 0x28);
            *(s32 *) (t + 4) = *(s32 *) (t + 4) | 1;
            t                = *(u8 **) (arg0 + 0x2C);
            *(s32 *) (t + 4) = *(s32 *) (t + 4) & ~1;
            func_020d59bc(0x160);
            func_02048108(data_02139fa4, 0x29, 1, 1, 0, 0);
            return;
        }
        if (x >= 0xF && x <= 0x4B && y >= 0xD && y <= 0x19) {
            func_ov012_02149bc4(arg0, 0xA22);
        } else if (x >= 0xF && x <= 0x4B && y >= 0x25 && y <= 0x31) {
            if (func_02077ef4(data_0213e434 + 0x21DC, *(u16 *) (arg0 + 0x30)) != 0) {
                func_ov012_02149bc4(arg0, 0xA24);
            } else {
                func_ov012_02149bc4(arg0, 0xA23);
            }
        } else if (x >= 0xF && x <= 0x4B && y >= 0x39 && y <= 0x45) {
            if (func_02077ef4(data_0213e434 + 0x21DC, *(u16 *) (arg0 + 0x30)) == 0) {
                func_ov012_02149bc4(arg0, 0xA29);
            }
        } else if (x >= 0xF && x <= 0x4B && y >= 0x4D && y <= 0x59) {
            if (func_02077ef4(data_0213e434 + 0x21DC, *(u16 *) (arg0 + 0x30)) == 0) {
                func_ov012_02149bc4(arg0, 0xA2B);
            }
        } else if (x >= 0xF && x <= 0x87 && y >= 0x61 && y <= 0x6D) {
            func_ov012_02149bc4(arg0, 0xA25);
        } else if (x >= 0xF && x <= 0x87 && y >= 0x75 && y <= 0x81) {
            func_ov012_02149bc4(arg0, 0xA26);
        } else if (x >= 0xF && x <= 0x87 && y >= 0x89 && y <= 0x95) {
            func_ov012_02149bc4(arg0, 0xA27);
        } else if (x >= 0xF && x <= 0x87 && y >= 0x9D && y <= 0xA9) {
            func_ov012_02149bc4(arg0, 0xA28);
        }
    }
    if ((((u32) (data_0213d95c[0] << 0x1B)) >> 0x1F) != 0 && (s8) arg0[0x35] != 0 && arg0[0x34] != 0 && arg0[0x37] == 0) {
        arg0[0x35] = 0;
        func_0203cdd4(2);
        arg0[0x34] = 0;
        arg0[0x36] = 0;
        func_02051b80(data_ov012_0214a968);
    }
    if (arg0[0x37] != 0) {
        arg0[0x37] = 0;
    }
}
