/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_021405a0;
extern u8 data_021403a0;
extern u8 data_02135cbc;
extern u8 data_02135ca8;
extern u8 data_02135254;
extern u8 data_02135244;
extern s32 data_0214019c;
extern s32 data_021401ac;
extern void *data_02135bac[];

s32 func_021066f8(void *, void *, void *);
void func_020c8cec();

s32 func_020c711c(void *arg0) {
    s32 r4;
    void *var_r2;

    r4 = func_021066f8(&data_021405a0, arg0, &data_021403a0);
    if (r4 == 7) {
        return 1;
    }
    if (r4 == 5) {
        func_020c8cec(&data_02135cbc);
        if (data_0214019c != 9) {
            data_021401ac = r4;
        }
        return 0;
    }
    if (r4 == 0) {
        goto ret1;
    }
    if (r4 < 0) {
        goto els;
    }
    if ((u32) r4 >= 0x17) {
        goto els;
    }
    var_r2 = data_02135bac[r4];
    goto call;
els:
    var_r2 = &data_02135244;
call:
    func_020c8cec(&data_02135ca8, &data_02135254, var_r2);
    if (data_0214019c != 9) {
        data_021401ac = r4;
    }
    return 0;
ret1:
    return 1;
}
