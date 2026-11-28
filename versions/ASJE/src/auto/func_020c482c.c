/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020c8c24();
M2C_UNK func_020fcb34();
M2C_UNK func_020fad58();
M2C_UNK func_020fbdd4();
M2C_UNK func_02105638();
M2C_UNK func_020c4a88();
extern s32 data_0214005c;
extern s32 data_02135a44[];
extern s32 data_02140068;
extern u8 data_02140020;
extern u8 data_02135b2c;
extern u8 data_02135b34;
extern u8 data_021401a0;
extern u8 data_02136440;
extern u8 data_021353a8;
extern s32 data_02140050;
extern s32 data_0214006c;
extern u8 data_02136414;
extern s32 data_02135a6c[];
extern u8 data_02135104;
extern u8 data_02136400;
extern s32 data_02140044;
extern u8 data_021363e8;
extern u8 data_021363d4;
extern u8 data_02135b38;

typedef enum {
    THREE = 3
} THREE_E;

s32 func_020c482c(s32 arg0, void *arg1, s32 arg2) {
    s32 r7;
    s32 r4;
    s32 r3;
    s32 r2;
    s32 res;
    s32 ok;
    THREE_E idx;

    r7            = data_0214005c;
    data_02140068 = arg0;
    data_02140020 = arg2;
    func_020c8c24(&data_02135b2c, data_02135a44[r7], arg2);
    idx           = THREE;
    data_0214005c = idx;
    func_020c8c24(&data_02135b34, data_02135a44[idx], &data_0214005c);
    if (arg0 == 1 || arg0 == 3 || arg0 == 5) {
        func_020fcb34(arg1, &data_021401a0, 0xC0);
        func_020fad58(&data_021401a0, 0xC0);
        func_020c8c24(&data_02136440, &data_021353a8, data_0214005c);
        r4            = 0x22;
        r3            = data_0214005c - 4;
        data_02140050 = r4;
        r2            = 0;
        data_0214006c = r2;
        if ((u32) r3 <= 2) {
            func_020c8c24(&data_02136414);
            res = 1;
        } else {
            r4 = func_02105638(func_020c4a88, &data_021401a0, r2, 1, r2);
            if (r4 == 0) {
                res = 1;
            } else if (r4 != 2) {
                if (r4 >= 0 && (u32) r4 < 0x17) {
                    r2 = data_02135a6c[r4];
                } else {
                    r2 = (s32) &data_02135104;
                }
                func_020c8c24(&data_02136400, &data_021353a8, r2);
                if (data_0214005c != 9) {
                    data_0214006c = r4;
                }
                res = 0;
            } else {
                r4 = data_02140044;
                while (data_02140050 != 0x23 && data_0214006c == 0 && r4 > 0) {
                    func_020fbdd4(0x101D0);
                    (void) *(volatile s32 *) &data_02140050;
                    r4 -= 1;
                }
                if (data_0214006c != 0 || r4 == 0) {
                    ok = 0;
                } else {
                    ok = 1;
                }
                if (ok) {
                    func_020c8c24(&data_021363e8);
                    res = 1;
                } else {
                    func_020c8c24(&data_021363d4);
                    res = 0;
                }
            }
        }
        return res != 0;
    }
    func_020c8c24(&data_02135b38, arg0);
    return 1;
}
