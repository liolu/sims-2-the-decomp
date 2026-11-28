/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"
extern "C" void func_020e60fc(s32, s32, s32);
extern "C" void func_020e6f20(s32, s32, s32, s32);
extern "C" void func_020e7498(s32, s32, s32, s32);

extern "C" void func_020e73f8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r4 = arg0 >> 2;
    func_020e60fc(arg0, arg1, arg3 + ((arg2 - arg0) * 4));
    if (arg0 > 0x200) {
        func_020e7498(temp_r4, arg1, arg2, arg3);
        func_020e73f8(temp_r4, arg1 + (temp_r4 * 4), arg2, arg3);
        func_020e7498(temp_r4, arg1 + (temp_r4 * 8), arg2, arg3);
        func_020e73f8(temp_r4, arg1 + ((temp_r4 * 3) << 2), arg2, arg3);
        return;
    }
    func_020e6f20(arg0, arg1, arg2, arg3);
}
