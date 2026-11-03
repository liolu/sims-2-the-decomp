/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0203d438(s32, s32);
M2C_UNK func_0203d484(s32);

void func_020abedc(u8 **arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 v;

    switch (arg3) {
        case 0:
            v          = func_0203d438(arg1, 3);
            (*arg0)[0] = 0;
            (*arg0)[1] = v;
            *arg0 += 2;
            break;
        case 1:
            break;
        case 2:
        case 3:
            v          = func_0203d438(arg1, 5);
            (*arg0)[0] = arg3 + 5;
            (*arg0)[1] = v;
            *arg0 += 2;
            break;
        case 4:
            v = func_0203d438(arg1, 2);
            switch (v) {
                case 1:
                    v          = func_0203d484(arg1);
                    (*arg0)[0] = 6;
                    (*arg0)[1] = v;
                    *arg0 += 2;
                    break;
                case 2:
                    v          = func_0203d438(arg1, 2);
                    (*arg0)[0] = 4;
                    (*arg0)[1] = v;
                    *arg0 += 2;
                    break;
                case 3:
                    v          = func_0203d484(arg1);
                    (*arg0)[0] = 5;
                    (*arg0)[1] = v;
                    *arg0 += 2;
                    break;
            }
            break;
    }
}
