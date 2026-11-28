/* compiler: 1.2/sp2p3 */
#include "m2c.h"
/* unprototyped callees: the asm leaves r1/r2 stale for 1-arg and 2-arg calls */
void func_020c8c24();
void func_020c7014();
void func_020c712c();
s32 func_020c717c();
s32 func_020c8bfc();
s32 func_02105338();
s32 func_020c5e38();

extern u8 data_02135104;
extern u8 data_021356e0;
extern u8 data_021357dc;
extern u8 data_02135a44;
extern u8 data_02135a6c;
extern u8 data_02135b2c;
extern u8 data_02135b34;
extern u8 data_0213680c;
extern u8 data_02136830;
extern u8 data_02136850;
extern u8 data_02136880;
extern u8 data_02136894;
extern u8 data_021368cc;
extern u8 data_021368e0;
extern u8 data_021368f4;
extern u8 data_02136908;
extern u8 data_0213692c;
extern u8 data_02136944;
extern u8 data_0213695c;
extern u8 data_02136970;
extern u16 data_02140028;
extern u16 data_02140038;
extern s32 data_02140050;
extern s32 data_0214005c;
extern s32 data_0214006c;

void func_020c5e64(void *arg0) {
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

    func_020c8c24(&data_02136970, &data_021357dc, data_0214005c);
    t = *(u16 *) ((u8 *) arg0 + 2);
    if (t != 0) {
        if ((s32) t >= 0 && t < 0x17U) {
            v2 = *(s32 *) (&data_02135a6c + t * 4);
        } else {
            v2 = (s32) &data_02135104;
        }
        func_020c8c24(&data_0213695c, &data_021357dc, v2);
        tv = *(u16 *) ((u8 *) arg0 + 2);
        if (data_0214005c != 9) {
            data_0214006c = (s32) tv;
        }
        func_020c8c24(&data_02135b2c, *(s32 *) (&data_02135a44 + data_0214005c * 4));
        nine          = 9;
        k             = nine;
        r             = *(s32 *) (&data_02135a44 + k * 4);
        data_0214005c = k;
        func_020c8c24(&data_02135b34, r);
        return;
    }
    func_020c8c24(&data_02136944, *(u16 *) ((u8 *) arg0 + 8), *(u16 *) ((u8 *) arg0 + 0xA));
    a8  = *(u16 *) ((u8 *) arg0 + 8);
    a10 = *(u16 *) ((u8 *) arg0 + 0xA);
    if ((u32) data_02140038 > (u32) a10) {
        data_02140038 = a10;
        data_02140028 = a8;
    }
    v4 = a8 + 1;
    func_020c8c24(&data_021368e0, &data_021356e0, func_020c717c());
    data_02140050 = 0x18;
    r             = func_02105338();
    if (r == 0x8000) {
        func_020c8c24(&data_021368cc, &data_021356e0, func_020c8bfc(3));
        func_020c7014(3);
        func_020c8c24(&data_02136894);
        func_020c712c(9);
        res = 3;
    } else if (r == 0) {
        func_020c8c24(&data_02136880, &data_021356e0, func_020c8bfc(0x16));
        func_020c7014(0x16);
        func_020c8c24(&data_02136850);
        func_020c712c(9);
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
            r = func_020c5e38(func_020c5e64, res);
            if (r != 2) {
                func_020c8c24(&data_02136830, r);
                res = (u16) r;
            } else {
                func_020c8c24(&data_0213680c);
                res = (u16) r;
            }
        }
    }
join:
    if (res == 0x18) {
        func_020c8c24(&data_0213692c, (s32) data_02140028);
        func_020c8c24(&data_02135b2c, *(s32 *) (&data_02135a44 + data_0214005c * 4));
        seven         = 7;
        k             = seven;
        r             = *(s32 *) (&data_02135a44 + k * 4);
        data_0214005c = k;
        func_020c8c24(&data_02135b34, r);
        func_020c8c24(&data_02136908);
    } else if (res != 2) {
        if ((s32) res >= 0 && res < 0x17U) {
            v2 = *(s32 *) (&data_02135a6c + res * 4);
        } else {
            v2 = (s32) &data_02135104;
        }
        func_020c8c24(&data_021368f4, &data_021357dc, v2);
        if (data_0214005c != 9) {
            data_0214006c = (s32) res;
        }
        func_020c8c24(&data_02135b2c, *(s32 *) (&data_02135a44 + data_0214005c * 4));
        nine          = 9;
        k             = nine;
        r             = *(s32 *) (&data_02135a44 + k * 4);
        data_0214005c = k;
        func_020c8c24(&data_02135b34, r);
    }
    data_02140050 = 0x19;
}
