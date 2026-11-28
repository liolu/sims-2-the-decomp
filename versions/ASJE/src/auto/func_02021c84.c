/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02021490(void *, s32, s32);
M2C_UNK func_0201e6fc(void *);
M2C_UNK func_020117d8(void *, s32, void *, s32);
M2C_UNK func_02082834(void *, s32, s32);
M2C_UNK func_02018acc(void *);
s32 func_02021604(void *, void *);
s32 func_02021a4c(void *, void *);
s32 func_02021890(void *, void *);
s32 func_020216ac(void *, void *);
M2C_UNK func_01ffac40(void *, void *);
M2C_UNK func_0202693c(void *);
M2C_UNK func_020117e8(void *, s32, void *, void *);
M2C_UNK func_0201dc78(void *);
M2C_UNK func_02019684(void *);
s32 func_0202463c(void *);
extern u8 data_0213e2f4;

s32 func_02021c84(u8 *arg0, s32 arg1, u8 *arg2) {
    u8 fr[0xA4];

    if (arg0[0x2B] == 0) {
        switch (arg1) {
            case 0x22:
                func_02021490(arg0, 0xF, 0);
                return 0;
            case 0x23:
                func_0201e6fc(fr);
                func_020117d8(arg2, 5, fr, 0);
                func_02082834((u8 *) *(u8 **) &data_0213e2f4 + 0x21DC + *(u16 *) (arg2 + 0xA) * 0x2C, 3, 0);
                func_02018acc(fr);
                return 0;
            case 0x24:
                return func_02021604(arg0, arg2);
            case 0x44:
                return func_02021a4c(arg0, arg2);
            case 0x45:
                return func_02021890(arg0, arg2);
            case 0x46:
                return func_020216ac(arg0, arg2);
            case 0x47:
                *arg2 = arg0[0x3E];
                return 0;
            case 0x48:
                *arg2 = arg0[0x3F];
                return 0;
            case 0x49:
                *arg2 = arg0[0x40];
                return 0;
            case 0x43:
                if (arg0[0x40] != 0) {
                    arg0[0x40] = 0;
                }
                arg0[0x41] = 1;
                func_01ffac40(*(u8 **) (arg0 + 4) + 0xE0, arg0);
                func_0202693c(fr + 0x58);
                *(u16 *) (fr + 0x88) = 0x77;
                *(u16 *) (fr + 0x74) = 0;
                func_020117e8(*(u8 **) (arg0 + 4), 8, fr + 0x58, arg0);
                func_02018acc(fr + 0x58);
                return 0;
            case 0x27:
                func_0201dc78(fr + 0x1C);
                func_02019684(fr + 0x40);
                func_020117e8(arg2, 0x1E, fr + 0x40, 0);
                func_020117e8(arg2, 0x46, fr + 0x1C, 0);
                func_020117e8(*(u8 **) (arg0 + 4), 0x1E, fr + 0x40, 0);
                func_020117e8(*(u8 **) (arg0 + 4), 0x46, fr + 0x1C, 0);
                func_02018acc(fr + 0x40);
                func_02018acc(fr + 0x1C);
                return 2;
            case 0x5D:
                return func_0202463c(arg0);
            default:
                return 0;
        }
    }
    return 0;
}
