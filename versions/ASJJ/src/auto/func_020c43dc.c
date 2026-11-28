/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020c87d4();
M2C_UNK func_020fc75c();
M2C_UNK func_020fa980();
M2C_UNK func_020fb9fc();
M2C_UNK func_02105260();
M2C_UNK func_020c4638();
extern s32 data_0213fcc4;
extern s32 data_02135670[];
extern s32 data_0213fcd0;
extern u8 data_0213fc88;
extern u8 data_02135758;
extern u8 data_02135760;
extern u8 data_0213fe00;
extern u8 data_0213606c;
extern u8 data_02134fd4;
extern s32 data_0213fcb8;
extern s32 data_0213fcd4;
extern u8 data_02136040;
extern s32 data_02135698[];
extern u8 data_02134d30;
extern u8 data_0213602c;
extern s32 data_0213fcac;
extern u8 data_02136014;
extern u8 data_02136000;
extern u8 data_02135764;

typedef enum {
    THREE = 3
} THREE_E;

s32 func_020c43dc(s32 arg0, void *arg1, s32 arg2) {
    s32 r7;
    s32 r4;
    s32 r3;
    s32 r2;
    s32 res;
    s32 ok;
    THREE_E idx;

    r7            = data_0213fcc4;
    data_0213fcd0 = arg0;
    data_0213fc88 = arg2;
    func_020c87d4(&data_02135758, data_02135670[r7], arg2);
    idx           = THREE;
    data_0213fcc4 = idx;
    func_020c87d4(&data_02135760, data_02135670[idx], &data_0213fcc4);
    if (arg0 == 1 || arg0 == 3 || arg0 == 5) {
        func_020fc75c(arg1, &data_0213fe00, 0xC0);
        func_020fa980(&data_0213fe00, 0xC0);
        func_020c87d4(&data_0213606c, &data_02134fd4, data_0213fcc4);
        r4            = 0x22;
        r3            = data_0213fcc4 - 4;
        data_0213fcb8 = r4;
        r2            = 0;
        data_0213fcd4 = r2;
        if ((u32) r3 <= 2) {
            func_020c87d4(&data_02136040);
            res = 1;
        } else {
            r4 = func_02105260(func_020c4638, &data_0213fe00, r2, 1, r2);
            if (r4 == 0) {
                res = 1;
            } else if (r4 != 2) {
                if (r4 >= 0 && (u32) r4 < 0x17) {
                    r2 = data_02135698[r4];
                } else {
                    r2 = (s32) &data_02134d30;
                }
                func_020c87d4(&data_0213602c, &data_02134fd4, r2);
                if (data_0213fcc4 != 9) {
                    data_0213fcd4 = r4;
                }
                res = 0;
            } else {
                r4 = data_0213fcac;
                while (data_0213fcb8 != 0x23 && data_0213fcd4 == 0 && r4 > 0) {
                    func_020fb9fc(0x101D0);
                    (void) *(volatile s32 *) &data_0213fcb8;
                    r4 -= 1;
                }
                if (data_0213fcd4 != 0 || r4 == 0) {
                    ok = 0;
                } else {
                    ok = 1;
                }
                if (ok) {
                    func_020c87d4(&data_02136014);
                    res = 1;
                } else {
                    func_020c87d4(&data_02136000);
                    res = 0;
                }
            }
        }
        return res != 0;
    }
    func_020c87d4(&data_02135764, arg0);
    return 1;
}
