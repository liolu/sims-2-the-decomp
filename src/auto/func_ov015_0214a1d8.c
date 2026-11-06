/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020d59bc(s32 id);
s32 func_ov015_02149cd0(u8 *a);
void func_0200fb30(s32 a, s32 b, s32 c);
s32 func_020730b4(s32 p);
s32 func_02064644(s32 a, s32 b);
void func_02018af8(s32 p, s32 a, s32 b, s32 c);
void func_02048108(s32 p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02011090(s32 p, s32 a, s32 b, s32 c, s32 d);

extern u8 *data_02139e8c;
extern u8 *data_0213e434;
extern u8 *data_02139fa4;
extern u8 *data_0213e580;

void func_ov015_0214a1d8(u8 *arg0) {
    u8 *obj;
    u8 *p2;
    u8 flag;

    if ((*(u16 *) (data_02139e8c + 6) & 1) != 0 ||
        (flag = (*(u8 **) (arg0 + 0x2C))[0x8C], (*(u8 **) (arg0 + 0x2C))[0x8C] = 0, flag != 0)) {
        func_020d59bc(0x162);
        if ((*(u16 *) (data_02139e8c + 6) & 1) != 0) {
            obj = *(u8 **) (arg0 + 0x2C);
            ((void (*)(u8 *, s32))(*(u32 **) obj)[9])(obj, 1);
            arg0[0x42] = 1;
        }
        if (func_ov015_02149cd0(arg0) == 1) {
            if (*(s32 *) (arg0 + 0x24) != 0) {
                func_0200fb30(*(s32 *) (arg0 + 0x24), 0, 0);
            }
            if (*(s32 *) (arg0 + 0x28) != 0 && arg0[0x3F] != 1) {
                if (arg0[0x3C] != 0xD || func_020730b4((s32) (data_0213e434 + 0x41F8)) != 0 ||
                    func_02064644((s32) data_0213e434, 0x26) == 0) {
                    func_02018af8(*(s32 *) (arg0 + 0x28) + 0x128, 2, 0, 2);
                }
            }
            if (*(s32 *) (data_02139fa4 + 0xE10) == 0x32) {
                func_02048108((s32) data_02139fa4, 0xC, 1, 0, 0, 0);
            }
        }
    }
    if (arg0[0x42] != 0) {
        if ((*(u16 *) (data_02139e8c + 8) & 1) != 0) {
            obj = *(u8 **) (arg0 + 0x2C);
            ((void (*)(u8 *, s32))(*(u32 **) obj)[9])(obj, 0);
            arg0[0x42] = 0;
        }
    }
    if (arg0[0x3F] != 1) {
        return;
    }
    p2 = *(u8 **) (data_0213e580 + 0xF8);
    if (((u32) (*(u16 *) (p2 + 0x1F8) << 31) >> 31) != 1) {
        return;
    }
    func_02011090((s32) p2, 0x25, 1, 1, 0);
}
