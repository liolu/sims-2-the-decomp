/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"
extern "C" void func_020e5d24(s32, s32, s32);
extern "C" void func_020e6b48(s32, s32, s32, s32);
extern "C" void func_020e70c0(s32, s32, s32, s32);

extern "C" void func_020e7020(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r4 = arg0 >> 2;
    func_020e5d24(arg0, arg1, arg3 + ((arg2 - arg0) * 4));
    if (arg0 > 0x200) {
        func_020e70c0(temp_r4, arg1, arg2, arg3);
        func_020e7020(temp_r4, arg1 + (temp_r4 * 4), arg2, arg3);
        func_020e70c0(temp_r4, arg1 + (temp_r4 * 8), arg2, arg3);
        func_020e7020(temp_r4, arg1 + ((temp_r4 * 3) << 2), arg2, arg3);
        return;
    }
    func_020e6b48(arg0, arg1, arg2, arg3);
}
