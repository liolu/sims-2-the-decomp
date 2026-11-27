/* compiler: 1.2/sp2p3 */
#include "m2c.h"
/* unprototyped callees: the asm leaves r1/r2 stale for 1-arg and 2-arg calls */
void func_020c8cec();
void func_020c70dc();
void func_020c71f4();
s32 func_020c7244();
s32 func_020c8cc4();
s32 func_02105474();
s32 func_020c5f00();

extern u8 data_02135244;
extern u8 data_02135820;
extern u8 data_0213591c;
extern u8 data_02135b84;
extern u8 data_02135bac;
extern u8 data_02135c6c;
extern u8 data_02135c74;
extern u8 data_0213694c;
extern u8 data_02136970;
extern u8 data_02136990;
extern u8 data_021369c0;
extern u8 data_021369d4;
extern u8 data_02136a0c;
extern u8 data_02136a20;
extern u8 data_02136a34;
extern u8 data_02136a48;
extern u8 data_02136a6c;
extern u8 data_02136a84;
extern u8 data_02136a9c;
extern u8 data_02136ab0;
extern u16 data_02140168;
extern u16 data_02140178;
extern s32 data_02140190;
extern s32 data_0214019c;
extern s32 data_021401ac;

void func_020c5f2c(void *arg0) {
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

    func_020c8cec(&data_02136ab0, &data_0213591c, data_0214019c);
    t = *(u16 *) ((u8 *) arg0 + 2);
    if (t != 0) {
        if ((s32) t >= 0 && t < 0x17U) {
            v2 = *(s32 *) (&data_02135bac + t * 4);
        } else {
            v2 = (s32) &data_02135244;
        }
        func_020c8cec(&data_02136a9c, &data_0213591c, v2);
        tv = *(u16 *) ((u8 *) arg0 + 2);
        if (data_0214019c != 9) {
            data_021401ac = (s32) tv;
        }
        func_020c8cec(&data_02135c6c, *(s32 *) (&data_02135b84 + data_0214019c * 4));
        nine          = 9;
        k             = nine;
        r             = *(s32 *) (&data_02135b84 + k * 4);
        data_0214019c = k;
        func_020c8cec(&data_02135c74, r);
        return;
    }
    func_020c8cec(&data_02136a84, *(u16 *) ((u8 *) arg0 + 8), *(u16 *) ((u8 *) arg0 + 0xA));
    a8  = *(u16 *) ((u8 *) arg0 + 8);
    a10 = *(u16 *) ((u8 *) arg0 + 0xA);
    if ((u32) data_02140178 > (u32) a10) {
        data_02140178 = a10;
        data_02140168 = a8;
    }
    v4 = a8 + 1;
    func_020c8cec(&data_02136a20, &data_02135820, func_020c7244());
    data_02140190 = 0x18;
    r             = func_02105474();
    if (r == 0x8000) {
        func_020c8cec(&data_02136a0c, &data_02135820, func_020c8cc4(3));
        func_020c70dc(3);
        func_020c8cec(&data_021369d4);
        func_020c71f4(9);
        res = 3;
    } else if (r == 0) {
        func_020c8cec(&data_021369c0, &data_02135820, func_020c8cc4(0x16));
        func_020c70dc(0x16);
        func_020c8cec(&data_02136990);
        func_020c71f4(9);
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
            r = func_020c5f00(func_020c5f2c, res);
            if (r != 2) {
                func_020c8cec(&data_02136970, r);
                res = (u16) r;
            } else {
                func_020c8cec(&data_0213694c);
                res = (u16) r;
            }
        }
    }
join:
    if (res == 0x18) {
        func_020c8cec(&data_02136a6c, (s32) data_02140168);
        func_020c8cec(&data_02135c6c, *(s32 *) (&data_02135b84 + data_0214019c * 4));
        seven         = 7;
        k             = seven;
        r             = *(s32 *) (&data_02135b84 + k * 4);
        data_0214019c = k;
        func_020c8cec(&data_02135c74, r);
        func_020c8cec(&data_02136a48);
    } else if (res != 2) {
        if ((s32) res >= 0 && res < 0x17U) {
            v2 = *(s32 *) (&data_02135bac + res * 4);
        } else {
            v2 = (s32) &data_02135244;
        }
        func_020c8cec(&data_02136a34, &data_0213591c, v2);
        if (data_0214019c != 9) {
            data_021401ac = (s32) res;
        }
        func_020c8cec(&data_02135c6c, *(s32 *) (&data_02135b84 + data_0214019c * 4));
        nine          = 9;
        k             = nine;
        r             = *(s32 *) (&data_02135b84 + k * 4);
        data_0214019c = k;
        func_020c8cec(&data_02135c74, r);
    }
    data_02140190 = 0x19;
}
