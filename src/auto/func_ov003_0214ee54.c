/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02139fa4[];

s32 func_ov003_0214ebdc(u8 *);
s32 func_ov003_0214eb1c(u8 *);
s32 func_ov003_0214e648(u8 *);
void func_ov003_0214dff4(u8 *);
void func_ov003_0214a464(u8 *, s32);
void func_020165bc(u8 *, s32);
void func_02051a50(s32, s32, s32);
s32 func_02052258(s32);
void func_02051338(s32, s32, s32, s32, s32);
u8 *func_020480c4(s32, s32);
void func_02048128(s32, s32, s32, s32, s32);
void func_0204818c(s32, s32, s32, s32, s32);

void func_ov003_0214ee54(u8 *r5) {
    s32 r0;
    s32 i;
    s32 z;
    u8 *o;

    if (r5[0x22] == 0) {
        r5[0x22] = 1;
        func_02051a50(3, 0, -1);
        r0 = func_02052258(0x7e3);
        func_02051338(1, 0xa2, 0xc, r0, 1);
    }

    if (r5[0x1f] == 0) {
        r0 = func_ov003_0214ebdc(r5);
        if (r0 == 0) {
            r0 = func_ov003_0214eb1c(r5);
        }
        if (r0 == 0) {
            r0 = func_ov003_0214e648(r5);
        }
        if (r0 == 0 && *(u16 *) (*(u8 **) (r5 + 4) + 0x74) == 7) {
            func_ov003_0214dff4(r5);
        }
    } else {
        r5[0x20] = r5[0x20] - 1;
        if (r5[0x20] == 0) {
            if (r5[0x1f] == 2) {
                *(u8 *) (*(u8 **) (r5 + 4) + 0x40) = 0xfe;
                func_ov003_0214a464(*(u8 **) (r5 + 4), r5[0x23]);
            }
            o = *(u8 **) (r5 + 4);
            if (o[0x40] == 1) {
                o[0x40] = 0;
            }
            o = func_020480c4(*(s32 *) data_02139fa4, 0);
            func_02048128(*(s32 *) data_02139fa4, 2, 0x11, *(s32 *) (o + 8), 0);
            func_0204818c(*(s32 *) data_02139fa4, 0xc, 0, 0, 0);
        } else if (r5[0x20] == 0xf) {
            r0 = r5[0x1f] >> 1;
            *(s32 *) (*(u8 **) (*(u8 **) (r5 + 8) + (r0 + 0xf) * 4) + 4) |= 1;
            *(s32 *) (*(u8 **) (*(u8 **) (r5 + 8) + (r0 + 0x11) * 4) + 4) &= ~1;
        }
    }

    i = 0;
    z = i;
    do {
        if (((u16 *) (r5 + 0x1a))[i] != 0) {
            ((u16 *) (r5 + 0x1a))[i] = ((u16 *) (r5 + 0x1a))[i] - 1;
            if (((u16 *) (r5 + 0x1a))[i] == 0) {
                func_020165bc(*(u8 **) (*(u8 **) (r5 + 8) + (i + 6) * 4), z);
            }
        }
        i += 1;
    } while (i < 2);
}
