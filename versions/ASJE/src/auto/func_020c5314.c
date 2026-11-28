/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef enum {
    K2 = 2
} E2;
typedef enum {
    K9 = 9
} E9;

typedef struct {
    s32 p;
    u16 f4;
    u16 f6;
    u16 f8;
    u16 fa;
    u16 fc;
} Q;

void func_020c8c24();
s32 func_02105338(void);
u16 func_02105148(void);
s32 func_02105750();
void func_020c46d0(void);
void func_020c55ac(void);
extern s32 data_0214005c;
extern u8 data_02135b54[];
extern u8 data_02135120[];
extern s32 data_02135a44[];
extern u8 data_02135b2c[];
extern u8 data_02135b34[];
extern u16 data_02140030;
extern s32 data_02140060;
extern Q data_021400a0;
extern u16 data_02140034;
extern u8 data_021362d4[];
extern u8 data_021352f4[];
extern s32 data_02135a6c[];
extern u8 data_021362c0[];
extern s32 data_0214006c;
extern u8 data_021362ac[];
extern u8 data_021401a0[];
extern u8 data_02135104[];
extern u8 data_02136298[];

s32 func_020c5314(u16 *arg0, u16 arg1) {
    s32 r4;
    u32 r3;
    E2 k2;
    E9 k9;
    s32 r2;
    s32 ret;
    s32 res;
    u16 r1h;

    func_020c8c24(data_02135b54, data_02135120, data_0214005c);
    func_020c8c24(data_02135b2c, data_02135a44[data_0214005c], data_0214005c);
    k2            = K2;
    data_0214005c = k2;
    func_020c8c24(data_02135b34, data_02135a44[k2], &data_0214005c);
    data_02140030    = arg1;
    data_02140060    = (s32) func_020c46d0;
    data_021400a0.f4 = 0;
    data_02140034    = 0;
    data_021400a0.fc = arg0[2];
    data_021400a0.fa = arg0[1];
    data_021400a0.f8 = arg0[0];
    func_020c8c24(data_021362d4, data_021352f4, data_0214005c);

    res = func_02105338();
    if (res == 0x8000) {
        func_020c8c24(data_021362c0, data_021352f4, data_02135a6c[3]);
        if (data_0214005c != 9) {
            data_0214006c = 3;
        }
        ret = 0;
    } else if (res == 0) {
        func_020c8c24(data_021362ac, data_021352f4, data_02135a6c[0x58 / 4]);
        if (data_0214005c != 9) {
            data_0214006c = 0x16;
        }
        ret = 0;
    } else {
        r1h = data_02140030;
        if (r1h == 0) {
            r3 = data_021400a0.f4;
            do {
                r3 = (u16) (r3 + 1);
                if (r3 > 0x10) {
                    r3 = 1;
                }
            } while ((res & (1 << (r3 - 1))) == 0);
            data_021400a0.f4 = r3;
        } else {
            data_021400a0.f4 = r1h;
        }
        data_021400a0.f6 = func_02105148();
        data_021400a0.p  = (s32) data_021401a0;
        r4               = func_02105750(func_020c55ac, &data_021400a0);
        if (r4 != 2) {
            if (r4 >= 0 && (u32) r4 < 0x17) {
                r2 = data_02135a6c[r4];
            } else {
                r2 = (s32) data_02135104;
            }
            func_020c8c24(data_02136298, data_021352f4, r2);
            if (data_0214005c != 9) {
                data_0214006c = r4;
            }
            ret = 0;
        } else {
            ret = 1;
        }
    }

    if (ret != 0) {
        return 1;
    }
    func_020c8c24(data_02135b2c, data_02135a44[data_0214005c], data_0214005c);
    k9            = K9;
    data_0214005c = k9;
    func_020c8c24(data_02135b34, data_02135a44[k9], &data_0214005c);
    return 0;
}
