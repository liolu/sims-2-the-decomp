/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_0201866c(void *);
M2C_UNK func_02018acc(void *);
M2C_UNK func_02046844(void *);
M2C_UNK func_020d5604();
extern u8 data_0211e208;
extern u8 data_02130c70;

void *func_02029bcc(void *arg0) {
    u8 t;
    s32 f;
    M2C_FIELD(arg0, void **, 0) = &data_02130c70;
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
        (*(void (**)(void))(&data_0211e208 + t * 0xC))();
    }
    if (M2C_FIELD(arg0, s32 *, 0x9C) != 0) {
        func_020d5604();
        M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    }
    func_02018acc((u8 *) arg0 + 0x18);
    func_0201866c(arg0);
    func_02046844(arg0);
    return arg0;
}
