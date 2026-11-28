/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_020455a4(s32);
s32 func_02046814(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02083218(s32);
M2C_UNK func_0208327c(s32, M2C_UNK, void **);
s32 func_020854d0(s32, s32);
M2C_UNK func_02085d80(void *, s32);
s32 func_02087950(void *);
M2C_UNK func_02087d7c(void *);
M2C_UNK func_0209b634();
M2C_UNK func_020a3a84(s32);
M2C_UNK func_020a42c0(s32);
M2C_UNK func_020a43bc(s32);

extern s32 data_0213e2f4;
extern s32 data_0213e42c;
extern s32 data_027e0000;
extern M2C_UNK data_027e0014;

void func_02087fd0(void *arg0, s32 arg1) {
    void *sp0[3];
    s32 temp_r4;
    s32 var_r0;
    void *var_r0_2;
    void *var_r3;

    func_0209b634();
    if (M2C_FIELD(arg0, u8 *, 0xF0) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xF4) = arg1;
    var_r0                       = func_02046814(0x40, 0, 4);
    if (var_r0 != 0) {
        var_r0 = func_020854d0(var_r0, M2C_FIELD(arg0, s32 *, 0xF4));
    }
    M2C_FIELD(arg0, s32 *, 0xFC) = var_r0;
    func_02087d7c(arg0);
    M2C_FIELD(arg0, s32 *, 0xF8) = func_02087950(arg0);
    func_02083218(data_0213e42c);
    var_r0_2 = func_020455a4((data_027e0000 * 0x34) + (s32) &data_027e0014);
    if (var_r0_2 != NULL) {
    loop_5:
        var_r3 = M2C_FIELD(var_r0_2, void **, 0);
        if ((M2C_FIELD(var_r3, u16 *, 0xC) != 0xB) || (M2C_FIELD(var_r3, u16 *, 0xA) != 0xFA)) {
            var_r0_2 = M2C_FIELD(var_r0_2, void **, 4);
            if (var_r0_2 == NULL) {
                goto block_8;
            }
            goto loop_5;
        }
    } else {
    block_8:
        var_r3 = NULL;
    }
    sp0[0] = var_r3;
    func_0208327c(data_0213e42c, 3, sp0);
    func_02085d80((u8 *) arg0 + 0x100, arg1);
    if (arg1 == 9) {
        temp_r4 = data_0213e2f4 + 0x31C8;
        func_020a3a84(temp_r4);
        func_020a43bc(temp_r4);
        func_020a42c0(temp_r4);
    }
    M2C_FIELD(arg0, u8 *, 0xF0) = 1U;
}
