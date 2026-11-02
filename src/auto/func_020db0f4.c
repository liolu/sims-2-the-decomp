#include "m2c.h"
M2C_UNK func_020db788(void *);
M2C_UNK lbl_020db818(void *);
M2C_UNK func_020de890(void *);
void func_020db0f4(u8 *arg0) {
    (*(void (**)(void *, s32))(arg0 + 0x18))(arg0, 0);
    func_020db788(arg0);
    lbl_020db818(arg0);
    func_020de890(M2C_FIELD(arg0, void **, 0x94));
}
