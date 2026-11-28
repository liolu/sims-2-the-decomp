/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_020e6978(s32, s32, s32);
void func_020e7498(s32, s32, s32, s32);
void func_020e73f8(s32, s32, s32, s32);
void func_020e71a4(s32, s32, s32, s32);

void func_020e7498(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 q;

    q = arg0 >> 2;
    func_020e6978(arg0, arg1, arg3 + ((arg2 - (q * 2)) * 4));
    if (arg0 > 0x200) {
        func_020e7498(q, arg1, arg2, arg3);
        func_020e73f8(q, arg1 + (q * 4), arg2, arg3);
        func_020e7498(q, arg1 + ((q * 2) << 2), arg2, arg3);
        func_020e7498(q, arg1 + ((q * 3) << 2), arg2, arg3);
    } else {
        func_020e71a4(arg0, arg1, arg2, arg3);
    }
}
