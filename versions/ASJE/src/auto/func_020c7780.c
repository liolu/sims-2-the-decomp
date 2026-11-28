/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u32 data_0214005c;
extern u8 data_0213625c[];
extern u8 data_02135308[];
extern u32 data_0214006c;
extern u32 data_02140050;
extern u32 data_02140044;
extern u32 data_02135a6c[];
extern u8 data_02135104[];
extern u8 data_02136248[];

M2C_UNK func_020c8c24();
M2C_UNK func_02105854();
M2C_UNK func_020fbdd4();
M2C_UNK func_020c78b8();

s32 func_020c7780(void) {
    s32 r4;
    s32 r7;
    u32 r2;

    func_020c8c24(data_0213625c, data_02135308, data_0214005c);
    data_0214006c = 0;
    data_02140050 = 0x10;
    r4            = func_02105854(func_020c78b8);
    if (r4 == 0) {
        return 1;
    }
    if (r4 != 2) {
        if (r4 >= 0 && (u32) r4 < 0x17) {
            r2 = data_02135a6c[r4];
        } else {
            r2 = (u32) data_02135104;
        }
        func_020c8c24(data_02136248, data_02135308, r2);
        if (data_0214005c != 9) {
            data_0214006c = r4;
        }
        return 0;
    }
    r7 = data_02140044;
    while (data_02140050 != 0x11 && data_0214006c == 0 && r7 > 0) {
        func_020fbdd4(0x101d0);
        (void) *(volatile u32 *) &data_02140050;
        r7--;
    }
    return data_0214006c == 0;
}
