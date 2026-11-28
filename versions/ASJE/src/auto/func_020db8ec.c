/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

s32 func_020ff61c(void *, M2C_UNK, M2C_UNK);        /* extern */
s32 func_020ff7c0(void *, void *);                  /* extern */
struct P2 {
    s32 a;
    s32 b;
};
s32 func_020ff810(void *, struct P2);                /* extern */
M2C_UNK func_020ffb10(void *);                      /* extern */
M2C_UNK func_02107fcc(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK func_020db9d8;
extern M2C_UNK func_020dba2c;
extern M2C_UNK func_020dbbe0;
extern M2C_UNK func_020dbc20;
extern M2C_UNK func_020dbc60;
extern M2C_UNK func_020dbc7c;
extern M2C_UNK func_020dbfe4;

s32 func_020db8ec(void *arg0, void *arg1, s32 arg2) {
    func_02107fcc(arg0, 0, 0x144);
    if ((arg2 & 0x04800000) == 0x04800000) {
        func_020ffb10(arg0 + 0x54);
        if (func_020ff810(arg0 + 0x54, *(struct P2 *) arg1) == 0) {
            return 0;
        }
    } else if ((arg2 & 0x800000) != 0) {
        M2C_FIELD(arg0, void **, 0xB0) = arg1;
        M2C_FIELD(arg0, s32 *, 0xB4)   = func_020ff61c(*(void *volatile *) ((u8 *) arg0 + 0xB0), 0, 1);
    } else {
        func_020ffb10(arg0 + 0x54);
        if (func_020ff7c0(arg0 + 0x54, arg1) == 0) {
            return 0;
        }
    }
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &func_020dbfe4;
    M2C_FIELD(arg0, M2C_UNK **, 4)    = &func_020dbc7c;
    M2C_FIELD(arg0, M2C_UNK **, 8)    = &func_020dbc60;
    M2C_FIELD(arg0, M2C_UNK **, 0xC)  = &func_020dbc20;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &func_020dba2c;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &func_020dbbe0;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_020db9d8;
    return 1;
}
