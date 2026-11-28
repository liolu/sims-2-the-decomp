/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_0201866c(void *);
M2C_UNK func_02018acc(void *);
M2C_UNK func_020d54c8();
extern u8 data_0211e0cc;
extern u8 data_02130b30;

void *func_02029bec(void *arg0) {
    u8 t;
    s32 f;
    M2C_FIELD(arg0, void **, 0) = &data_02130b30;
    t                           = M2C_FIELD(arg0, u8 *, 0x28);
    switch (t) {
        case 3:
        case 5:
        case 6:
            f = 1;
            break;
        default:
            f = 0;
            break;
    }
    if (f != 0) {
        (*(void (**)(void))(&data_0211e0cc + t * 0xC))();
    }
    if (M2C_FIELD(arg0, s32 *, 0x9C) != 0) {
        func_020d54c8();
        M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    }
    func_02018acc((u8 *) arg0 + 0x18);
    func_0201866c(arg0);
    return arg0;
}
