/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02016688(void *, s32, M2C_UNK);        /* extern */
typedef struct {
    s32 v;
} W;
M2C_UNK func_020861c8(void *, s32, W, M2C_UNK *); /* extern */
M2C_UNK func_020d5880(s32);                         /* extern */
extern void *data_0213e440;
extern s32 data_027e0000;

void func_0206676c(void *arg0) {
    u8 frame[0x20C];
    W *p;
    void *g;
    s32 var_r5;
    void *temp_r0;
    void *temp_r1;
    void *temp_r2;

    p = (W *) frame;
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    g                           = data_0213e440;
    ((volatile s32 *) frame)[0] = 0xA000;
    func_020861c8(g, M2C_FIELD(g, s32 *, 0xF8), *p, (M2C_UNK *) (frame + 4));
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    if (frame[0x204] != 0) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    if (var_r5 != 0) {
        temp_r0 = M2C_FIELD(arg0, void **, 0x5C);
        if ((M2C_FIELD(temp_r0, s32 *, 4) & 1) != 1) {
            func_02016688(temp_r0, 0x8BB, 0);
            temp_r2                      = M2C_FIELD(arg0, void **, 0x5C);
            M2C_FIELD(temp_r2, s32 *, 4) = (s32) (M2C_FIELD(temp_r2, s32 *, 4) | 1);
            func_020d5880(0x169);
        }
    }
    if (var_r5 == 0) {
        temp_r1                      = M2C_FIELD(arg0, void **, 0x5C);
        M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) & ~1);
    }
}
