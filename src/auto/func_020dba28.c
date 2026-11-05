/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

s32 func_020ff758(void *, M2C_UNK, M2C_UNK);        /* extern */
s32 func_020ff8fc(void *, void *);                  /* extern */
struct P2 {
    s32 a;
    s32 b;
};
s32 func_020ff94c(void *, struct P2);                /* extern */
M2C_UNK func_020ffc4c(void *);                      /* extern */
M2C_UNK func_02108108(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK func_020dbb14;
extern M2C_UNK func_020dbb68;
extern M2C_UNK func_020dbd1c;
extern M2C_UNK func_020dbd5c;
extern M2C_UNK func_020dbd9c;
extern M2C_UNK func_020dbdb8;
extern M2C_UNK func_020dc120;

s32 func_020dba28(void *arg0, void *arg1, s32 arg2) {
    func_02108108(arg0, 0, 0x144);
    if ((arg2 & 0x04800000) == 0x04800000) {
        func_020ffc4c(arg0 + 0x54);
        if (func_020ff94c(arg0 + 0x54, *(struct P2 *) arg1) == 0) {
            return 0;
        }
    } else if ((arg2 & 0x800000) != 0) {
        M2C_FIELD(arg0, void **, 0xB0) = arg1;
        M2C_FIELD(arg0, s32 *, 0xB4)   = func_020ff758(*(void *volatile *) ((u8 *) arg0 + 0xB0), 0, 1);
    } else {
        func_020ffc4c(arg0 + 0x54);
        if (func_020ff8fc(arg0 + 0x54, arg1) == 0) {
            return 0;
        }
    }
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &func_020dc120;
    M2C_FIELD(arg0, M2C_UNK **, 4)    = &func_020dbdb8;
    M2C_FIELD(arg0, M2C_UNK **, 8)    = &func_020dbd9c;
    M2C_FIELD(arg0, M2C_UNK **, 0xC)  = &func_020dbd5c;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &func_020dbb68;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &func_020dbd1c;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_020dbb14;
    return 1;
}
