/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02018664(void *);
M2C_UNK func_02018ac4(void *);
M2C_UNK func_02046858(void *);
M2C_UNK func_020d50f0();
extern u8 data_0211dcf4;
extern u8 data_02130770;

void *func_02029c08(void *arg0) {
    u8 t;
    s32 f;
    M2C_FIELD(arg0, void **, 0) = &data_02130770;
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
        (*(void (**)(void))(&data_0211dcf4 + t * 0xC))();
    }
    if (M2C_FIELD(arg0, s32 *, 0x9C) != 0) {
        func_020d50f0();
        M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    }
    func_02018ac4((u8 *) arg0 + 0x18);
    func_02018664(arg0);
    func_02046858(arg0);
    return arg0;
}
