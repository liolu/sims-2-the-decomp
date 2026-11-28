/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_02140460;
extern u8 data_02140260;
extern u8 data_02135b7c;
extern u8 data_02135b68;
extern u8 data_02135114;
extern u8 data_02135104;
extern s32 data_0214005c;
extern s32 data_0214006c;
extern void *data_02135a6c[];

s32 func_021065bc(void *, void *, void *);
void func_020c8c24();

s32 func_020c7054(void *arg0) {
    s32 r4;
    void *var_r2;

    r4 = func_021065bc(&data_02140460, arg0, &data_02140260);
    if (r4 == 7) {
        return 1;
    }
    if (r4 == 5) {
        func_020c8c24(&data_02135b7c);
        if (data_0214005c != 9) {
            data_0214006c = r4;
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
    var_r2 = data_02135a6c[r4];
    goto call;
els:
    var_r2 = &data_02135104;
call:
    func_020c8c24(&data_02135b68, &data_02135114, var_r2);
    if (data_0214005c != 9) {
        data_0214006c = r4;
    }
    return 0;
ret1:
    return 1;
}
