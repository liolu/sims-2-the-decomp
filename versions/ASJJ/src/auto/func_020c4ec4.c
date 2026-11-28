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

void func_020c87d4();
s32 func_02104f60(void);
u16 func_02104d70(void);
s32 func_02105378();
void func_020c4280(void);
void func_020c515c(void);
extern s32 data_0213fcc4;
extern u8 data_02135780[];
extern u8 data_02134d4c[];
extern s32 data_02135670[];
extern u8 data_02135758[];
extern u8 data_02135760[];
extern u16 data_0213fc98;
extern s32 data_0213fcc8;
extern Q data_0213fd00;
extern u16 data_0213fc9c;
extern u8 data_02135f00[];
extern u8 data_02134f20[];
extern s32 data_02135698[];
extern u8 data_02135eec[];
extern s32 data_0213fcd4;
extern u8 data_02135ed8[];
extern u8 data_0213fe00[];
extern u8 data_02134d30[];
extern u8 data_02135ec4[];

s32 func_020c4ec4(u16 *arg0, u16 arg1) {
    s32 r4;
    u32 r3;
    E2 k2;
    E9 k9;
    s32 r2;
    s32 ret;
    s32 res;
    u16 r1h;

    func_020c87d4(data_02135780, data_02134d4c, data_0213fcc4);
    func_020c87d4(data_02135758, data_02135670[data_0213fcc4], data_0213fcc4);
    k2            = K2;
    data_0213fcc4 = k2;
    func_020c87d4(data_02135760, data_02135670[k2], &data_0213fcc4);
    data_0213fc98    = arg1;
    data_0213fcc8    = (s32) func_020c4280;
    data_0213fd00.f4 = 0;
    data_0213fc9c    = 0;
    data_0213fd00.fc = arg0[2];
    data_0213fd00.fa = arg0[1];
    data_0213fd00.f8 = arg0[0];
    func_020c87d4(data_02135f00, data_02134f20, data_0213fcc4);

    res = func_02104f60();
    if (res == 0x8000) {
        func_020c87d4(data_02135eec, data_02134f20, data_02135698[3]);
        if (data_0213fcc4 != 9) {
            data_0213fcd4 = 3;
        }
        ret = 0;
    } else if (res == 0) {
        func_020c87d4(data_02135ed8, data_02134f20, data_02135698[0x58 / 4]);
        if (data_0213fcc4 != 9) {
            data_0213fcd4 = 0x16;
        }
        ret = 0;
    } else {
        r1h = data_0213fc98;
        if (r1h == 0) {
            r3 = data_0213fd00.f4;
            do {
                r3 = (u16) (r3 + 1);
                if (r3 > 0x10) {
                    r3 = 1;
                }
            } while ((res & (1 << (r3 - 1))) == 0);
            data_0213fd00.f4 = r3;
        } else {
            data_0213fd00.f4 = r1h;
        }
        data_0213fd00.f6 = func_02104d70();
        data_0213fd00.p  = (s32) data_0213fe00;
        r4               = func_02105378(func_020c515c, &data_0213fd00);
        if (r4 != 2) {
            if (r4 >= 0 && (u32) r4 < 0x17) {
                r2 = data_02135698[r4];
            } else {
                r2 = (s32) data_02134d30;
            }
            func_020c87d4(data_02135ec4, data_02134f20, r2);
            if (data_0213fcc4 != 9) {
                data_0213fcd4 = r4;
            }
            ret = 0;
        } else {
            ret = 1;
        }
    }

    if (ret != 0) {
        return 1;
    }
    func_020c87d4(data_02135758, data_02135670[data_0213fcc4], data_0213fcc4);
    k9            = K9;
    data_0213fcc4 = k9;
    func_020c87d4(data_02135760, data_02135670[k9], &data_0213fcc4);
    return 0;
}
