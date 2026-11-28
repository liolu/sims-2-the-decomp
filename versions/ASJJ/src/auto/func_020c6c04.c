/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_021400c0;
extern u8 data_0213fec0;
extern u8 data_021357a8;
extern u8 data_02135794;
extern u8 data_02134d40;
extern u8 data_02134d30;
extern s32 data_0213fcc4;
extern s32 data_0213fcd4;
extern void *data_02135698[];

s32 func_021061e4(void *, void *, void *);
void func_020c87d4();

s32 func_020c6c04(void *arg0) {
    s32 r4;
    void *var_r2;

    r4 = func_021061e4(&data_021400c0, arg0, &data_0213fec0);
    if (r4 == 7) {
        return 1;
    }
    if (r4 == 5) {
        func_020c87d4(&data_021357a8);
        if (data_0213fcc4 != 9) {
            data_0213fcd4 = r4;
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
    var_r2 = data_02135698[r4];
    goto call;
els:
    var_r2 = &data_02134d30;
call:
    func_020c87d4(&data_02135794, &data_02134d40, var_r2);
    if (data_0213fcc4 != 9) {
        data_0213fcd4 = r4;
    }
    return 0;
ret1:
    return 1;
}
