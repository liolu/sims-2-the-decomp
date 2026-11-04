/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u32 data_0214019c;
extern u8 data_0213639c[];
extern u8 data_02135448[];
extern u32 data_021401ac;
extern u32 data_02140190;
extern u32 data_02140184;
extern u32 data_02135bac[];
extern u8 data_02135244[];
extern u8 data_02136388[];

M2C_UNK func_020c8cec();
M2C_UNK func_02105990();
M2C_UNK func_020fbf10();
M2C_UNK func_020c7980();

s32 func_020c7848(void) {
    s32 r4;
    s32 r7;
    u32 r2;

    func_020c8cec(data_0213639c, data_02135448, data_0214019c);
    data_021401ac = 0;
    data_02140190 = 0x10;
    r4            = func_02105990(func_020c7980);
    if (r4 == 0) {
        return 1;
    }
    if (r4 != 2) {
        if (r4 >= 0 && (u32) r4 < 0x17) {
            r2 = data_02135bac[r4];
        } else {
            r2 = (u32) data_02135244;
        }
        func_020c8cec(data_02136388, data_02135448, r2);
        if (data_0214019c != 9) {
            data_021401ac = r4;
        }
        return 0;
    }
    r7 = data_02140184;
    while (data_02140190 != 0x11 && data_021401ac == 0 && r7 > 0) {
        func_020fbf10(0x101d0);
        (void) *(volatile u32 *) &data_02140190;
        r7--;
    }
    return data_021401ac == 0;
}
