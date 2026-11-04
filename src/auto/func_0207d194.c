/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_02001944(s32);
void func_02071e44(void *, s32, s32);
void func_02001914(void);
extern u8 *data_02139fa4;
extern u8 *data_0213e434;

void func_0207d194(u8 *arg0, s32 arg1) {
    u8 var_r8;
    s32 zero;
    u8 *temp_r0;
    u8 *obj;
    u8 *base;
    u8 *p0;
    s32 v;
    s32 r7;

    zero   = 0;
    var_r8 = 0;
    do {
        temp_r0 = arg0 + var_r8 * 0x4C;
        if (temp_r0[0xA41] == 0) {
            goto next;
        }
        if (*(s32 *) (temp_r0 + 0xA44) != 6 && *(s32 *) (temp_r0 + 0xA44) != 8) {
            goto next;
        }
        if (*(s32 *) (temp_r0 + 0xA38) != 0x871) {
            goto next;
        }
        if (arg1 != *(u16 *) (temp_r0 + 0xA48)) {
            goto next;
        }
        temp_r0[0xA41] = 0;
        arg0[0xD08]    = 1;
        obj            = data_02139fa4;
        r7             = *(s32 *) (obj + 0xDA8);
        func_02001944(0);
        func_02071e44(((u8 *) r7) + 0x24, 0x970, 0x973);
        base        = data_0213e434;
        p0          = base + 0x2F60;
        v           = *(s32 *) p0 + 0x32;
        *(s32 *) p0 = v;
        v           = *(s32 *) p0;
        if (v > 0xF423F) {
            *(s32 *) p0 = 0xF423F;
        } else if (v < 0) {
            *(s32 *) p0 = zero;
        }
        p0[0xC]           = 1;
        v                 = *(s32 *) (p0 + 4) + 0x32;
        *(s32 *) (p0 + 4) = v;
        v                 = *(s32 *) (p0 + 4);
        if (v > 0xF423F || v < 0) {
            *(s32 *) (p0 + 4) = 0xF423F;
        }
        func_02001914();
    next:
        var_r8 = (u8) (var_r8 + 1);
    } while (var_r8 < 10);
}
