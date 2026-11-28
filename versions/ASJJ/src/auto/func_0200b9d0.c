/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0212f688;
extern u8 data_0212f66c;
extern u8 data_0212f650;
extern u8 data_0212f634;
extern u32 data_027e1124;

u8 *func_020468a0(s32 a, s32 b, s32 c);
u8 *func_0200c3a0(u8 *o);

u8 *func_0200b9d0(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *o;

    switch (arg1) {
        case 0:
            o = func_020468a0(0x1c, 3, 4);
            if (o == 0) {
                break;
            }
            *(u32 *) (o + 0x0)  = (u32) &data_0212f688;
            *(s32 *) (o + 0x4)  = 0;
            *(s32 *) (o + 0x8)  = 0;
            *(s32 *) (o + 0xc)  = 0;
            *(s16 *) (o + 0x10) = -1;
            o[0x12]             = 1;
            *(s8 *) (o + 0x13)  = -1;
            o[0x14]             = 0;
            o[0x15]             = 0;
            o[0x16]             = 0;
            *(u32 *) (o + 0x0)  = (u32) &data_0212f66c;
            *(u32 *) (o + 0x18) = data_027e1124;
            o[0x13]             = 0;
            break;
        case 4:
            o = func_020468a0(0x30, 3, 4);
            if (o == 0) {
                break;
            }
            o = func_0200c3a0(o);
            break;
        case 5:
            o = func_020468a0(0x24, 3, 4);
            if (o == 0) {
                break;
            }
            *(u32 *) (o + 0x0)  = (u32) &data_0212f688;
            *(s32 *) (o + 0x4)  = 0;
            *(s32 *) (o + 0x8)  = 0;
            *(s32 *) (o + 0xc)  = 0;
            *(s16 *) (o + 0x10) = -1;
            o[0x12]             = 1;
            *(s8 *) (o + 0x13)  = -1;
            o[0x14]             = 0;
            o[0x15]             = 0;
            o[0x16]             = 0;
            *(u32 *) (o + 0x0)  = (u32) &data_0212f650;
            *(s32 *) (o + 0x18) = 0;
            *(s32 *) (o + 0x1c) = 0;
            *(s32 *) (o + 0x20) = 0;
            o[0x13]             = 5;
            break;
        case 3:
            o = func_020468a0(0x20, 3, 4);
            if (o == 0) {
                break;
            }
            *(u32 *) (o + 0x0)  = (u32) &data_0212f688;
            *(s32 *) (o + 0x4)  = 0;
            *(s32 *) (o + 0x8)  = 0;
            *(s32 *) (o + 0xc)  = 0;
            *(s16 *) (o + 0x10) = -1;
            o[0x12]             = 1;
            *(s8 *) (o + 0x13)  = -1;
            o[0x14]             = 0;
            o[0x15]             = 0;
            o[0x16]             = 0;
            *(u32 *) (o + 0x0)  = (u32) &data_0212f634;
            o[0x13]             = 3;
            break;
        default:
            return 0;
    }
    if (arg2 == -1) {
        *(u8 **) (arg0 + 0xc) = o;
        arg0[4]               = 1;
    } else {
        *(u8 **) (*(u8 **) (arg0 + 8) + arg2 * 4) = o;
        arg0[5] += 1;
    }
    return o;
}
