/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u32 data_0213fcc4;
extern u8 data_02135e88[];
extern u8 data_02134f34[];
extern u32 data_0213fcd4;
extern u32 data_0213fcb8;
extern u32 data_0213fcac;
extern u32 data_02135698[];
extern u8 data_02134d30[];
extern u8 data_02135e74[];

M2C_UNK func_020c87d4();
M2C_UNK func_0210547c();
M2C_UNK func_020fb9fc();
M2C_UNK func_020c7468();

s32 func_020c7330(void) {
    s32 r4;
    s32 r7;
    u32 r2;

    func_020c87d4(data_02135e88, data_02134f34, data_0213fcc4);
    data_0213fcd4 = 0;
    data_0213fcb8 = 0x10;
    r4            = func_0210547c(func_020c7468);
    if (r4 == 0) {
        return 1;
    }
    if (r4 != 2) {
        if (r4 >= 0 && (u32) r4 < 0x17) {
            r2 = data_02135698[r4];
        } else {
            r2 = (u32) data_02134d30;
        }
        func_020c87d4(data_02135e74, data_02134f34, r2);
        if (data_0213fcc4 != 9) {
            data_0213fcd4 = r4;
        }
        return 0;
    }
    r7 = data_0213fcac;
    while (data_0213fcb8 != 0x11 && data_0213fcd4 == 0 && r7 > 0) {
        func_020fb9fc(0x101d0);
        (void) *(volatile u32 *) &data_0213fcb8;
        r7--;
    }
    return data_0213fcd4 == 0;
}
