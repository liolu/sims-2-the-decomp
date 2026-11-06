/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213e580[];
extern u8 data_02139fa4[];
extern u8 data_0213e434[];
void func_020d59bc(s32);
void func_01ffabc8(void *, s32, s32);
void func_02048108(void *, s32, s32, s32, s32, s32);
s32 func_020480f0(void *);

void func_ov014_0214aadc(u8 *arg0, s32 arg1) {
    u8 *p;
    u8 *q;
    s32 f;

    if (arg1 == 5) {
        func_020d59bc(0x274);
        func_01ffabc8(*(u8 **) (*(u8 **) data_0213e580 + 0xF8) + 0xE0, 8, 0);
        func_02048108(*(void **) data_02139fa4, 0xC, 1, 0, 0, 0);
        return;
    }
    *(s32 *) (arg0 + 0x38) = arg1;
    *(s32 *) (arg0 + 0x3C) = 1;
    *(s32 *) (arg0 + 0x40) = 0;
    *(s32 *) (arg0 + 0x44) = 0x10;
    if (*(s32 *) (arg0 + 0x38) == 0) {
        func_020d59bc(0x274);
    } else {
        func_020d59bc(0x275);
    }
    if (*(s32 *) (arg0 + 0x38) != 4) {
        return;
    }
    if (func_020480f0(*(void **) data_02139fa4) != 0) {
        return;
    }
    p = *(u8 **) data_0213e434;
    f = *(s32 *) p;
    if ((f & 0x20000) == 0 && *(s32 *) (p + 0x74) >= 0x19) {
        *(volatile s32 *) p |= 0x20000;
        q                    = *(u8 **) data_02139fa4;
        *(s32 *) (q + 0xE38) = 0x996;
        *(s32 *) (q + 0xE3C) = -1;
        *(u8 *) (q + 0xE40)  = 0;
        return;
    }
    if ((f & 0x40000) != 0) {
        return;
    }
    p = *(u8 *volatile *) data_0213e434;
    if (*(s32 *) (p + 0x78) < 0x19) {
        return;
    }
    *(volatile s32 *) p |= 0x40000;
    q                    = *(u8 **) data_02139fa4;
    *(s32 *) (q + 0xE38) = 0x996;
    *(s32 *) (q + 0xE3C) = -1;
    *(u8 *) (q + 0xE40)  = 0;
}
