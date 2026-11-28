/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

s32 func_020ff244(void *, M2C_UNK, M2C_UNK);        /* extern */
s32 func_020ff3e8(void *, void *);                  /* extern */
struct P2 {
    s32 a;
    s32 b;
};
s32 func_020ff438(void *, struct P2);                /* extern */
M2C_UNK func_020ff738(void *);                      /* extern */
M2C_UNK func_02107bf4(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK func_020db600;
extern M2C_UNK func_020db654;
extern M2C_UNK func_020db808;
extern M2C_UNK func_020db848;
extern M2C_UNK func_020db888;
extern M2C_UNK func_020db8a4;
extern M2C_UNK func_020dbc0c;

s32 func_020db514(void *arg0, void *arg1, s32 arg2) {
    func_02107bf4(arg0, 0, 0x144);
    if ((arg2 & 0x04800000) == 0x04800000) {
        func_020ff738(arg0 + 0x54);
        if (func_020ff438(arg0 + 0x54, *(struct P2 *) arg1) == 0) {
            return 0;
        }
    } else if ((arg2 & 0x800000) != 0) {
        M2C_FIELD(arg0, void **, 0xB0) = arg1;
        M2C_FIELD(arg0, s32 *, 0xB4)   = func_020ff244(*(void *volatile *) ((u8 *) arg0 + 0xB0), 0, 1);
    } else {
        func_020ff738(arg0 + 0x54);
        if (func_020ff3e8(arg0 + 0x54, arg1) == 0) {
            return 0;
        }
    }
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &func_020dbc0c;
    M2C_FIELD(arg0, M2C_UNK **, 4)    = &func_020db8a4;
    M2C_FIELD(arg0, M2C_UNK **, 8)    = &func_020db888;
    M2C_FIELD(arg0, M2C_UNK **, 0xC)  = &func_020db848;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &func_020db654;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &func_020db808;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_020db600;
    return 1;
}
