/* compiler: 1.2/sp2p3 */
#include "m2c.h"
/* unprototyped callees: the asm leaves r1/r2 stale for 1-arg and 2-arg calls */
void func_020c87d4();
void func_020c6bc4();
void func_020c6cdc();
s32 func_020c6d2c();
s32 func_020c87ac();
s32 func_02104f60();
s32 func_020c59e8();

extern u8 data_02134d30;
extern u8 data_0213530c;
extern u8 data_02135408;
extern u8 data_02135670;
extern u8 data_02135698;
extern u8 data_02135758;
extern u8 data_02135760;
extern u8 data_02136438;
extern u8 data_0213645c;
extern u8 data_0213647c;
extern u8 data_021364ac;
extern u8 data_021364c0;
extern u8 data_021364f8;
extern u8 data_0213650c;
extern u8 data_02136520;
extern u8 data_02136534;
extern u8 data_02136558;
extern u8 data_02136570;
extern u8 data_02136588;
extern u8 data_0213659c;
extern u16 data_0213fc90;
extern u16 data_0213fca0;
extern s32 data_0213fcb8;
extern s32 data_0213fcc4;
extern s32 data_0213fcd4;

void func_020c5a14(void *arg0) {
    s32 v2;
    s32 r;
    u16 v4;
    u16 res;
    u32 t;
    u16 tv;
    u16 a8;
    u16 a10;
    s32 k;
    enum {
        NINE = 9
    } nine;
    enum {
        SEVEN = 7
    } seven;

    func_020c87d4(&data_0213659c, &data_02135408, data_0213fcc4);
    t = *(u16 *) ((u8 *) arg0 + 2);
    if (t != 0) {
        if ((s32) t >= 0 && t < 0x17U) {
            v2 = *(s32 *) (&data_02135698 + t * 4);
        } else {
            v2 = (s32) &data_02134d30;
        }
        func_020c87d4(&data_02136588, &data_02135408, v2);
        tv = *(u16 *) ((u8 *) arg0 + 2);
        if (data_0213fcc4 != 9) {
            data_0213fcd4 = (s32) tv;
        }
        func_020c87d4(&data_02135758, *(s32 *) (&data_02135670 + data_0213fcc4 * 4));
        nine          = 9;
        k             = nine;
        r             = *(s32 *) (&data_02135670 + k * 4);
        data_0213fcc4 = k;
        func_020c87d4(&data_02135760, r);
        return;
    }
    func_020c87d4(&data_02136570, *(u16 *) ((u8 *) arg0 + 8), *(u16 *) ((u8 *) arg0 + 0xA));
    a8  = *(u16 *) ((u8 *) arg0 + 8);
    a10 = *(u16 *) ((u8 *) arg0 + 0xA);
    if ((u32) data_0213fca0 > (u32) a10) {
        data_0213fca0 = a10;
        data_0213fc90 = a8;
    }
    v4 = a8 + 1;
    func_020c87d4(&data_0213650c, &data_0213530c, func_020c6d2c());
    data_0213fcb8 = 0x18;
    r             = func_02104f60();
    if (r == 0x8000) {
        func_020c87d4(&data_021364f8, &data_0213530c, func_020c87ac(3));
        func_020c6bc4(3);
        func_020c87d4(&data_021364c0);
        func_020c6cdc(9);
        res = 3;
    } else if (r == 0) {
        func_020c87d4(&data_021364ac, &data_0213530c, func_020c87ac(0x16));
        func_020c6bc4(0x16);
        func_020c87d4(&data_0213647c);
        func_020c6cdc(9);
        res = 0x18;
    } else {
        res = v4;
        if (!((1 << (res - 1)) & r)) {
            for (;;) {
                res = res + 1;
                if ((u32) res > 0x10U) {
                    res = 0x18;
                    goto join;
                }
                if ((1 << (res - 1)) & r) {
                    break;
                }
            }
        }
        {
            r = func_020c59e8(func_020c5a14, res);
            if (r != 2) {
                func_020c87d4(&data_0213645c, r);
                res = (u16) r;
            } else {
                func_020c87d4(&data_02136438);
                res = (u16) r;
            }
        }
    }
join:
    if (res == 0x18) {
        func_020c87d4(&data_02136558, (s32) data_0213fc90);
        func_020c87d4(&data_02135758, *(s32 *) (&data_02135670 + data_0213fcc4 * 4));
        seven         = 7;
        k             = seven;
        r             = *(s32 *) (&data_02135670 + k * 4);
        data_0213fcc4 = k;
        func_020c87d4(&data_02135760, r);
        func_020c87d4(&data_02136534);
    } else if (res != 2) {
        if ((s32) res >= 0 && res < 0x17U) {
            v2 = *(s32 *) (&data_02135698 + res * 4);
        } else {
            v2 = (s32) &data_02134d30;
        }
        func_020c87d4(&data_02136520, &data_02135408, v2);
        if (data_0213fcc4 != 9) {
            data_0213fcd4 = (s32) res;
        }
        func_020c87d4(&data_02135758, *(s32 *) (&data_02135670 + data_0213fcc4 * 4));
        nine          = 9;
        k             = nine;
        r             = *(s32 *) (&data_02135670 + k * 4);
        data_0213fcc4 = k;
        func_020c87d4(&data_02135760, r);
    }
    data_0213fcb8 = 0x19;
}
