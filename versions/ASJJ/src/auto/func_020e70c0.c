/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_020e65a0(s32, s32, s32);
void func_020e70c0(s32, s32, s32, s32);
void func_020e7020(s32, s32, s32, s32);
void func_020e6dcc(s32, s32, s32, s32);

void func_020e70c0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 q;

    q = arg0 >> 2;
    func_020e65a0(arg0, arg1, arg3 + ((arg2 - (q * 2)) * 4));
    if (arg0 > 0x200) {
        func_020e70c0(q, arg1, arg2, arg3);
        func_020e7020(q, arg1 + (q * 4), arg2, arg3);
        func_020e70c0(q, arg1 + ((q * 2) << 2), arg2, arg3);
        func_020e70c0(q, arg1 + ((q * 3) << 2), arg2, arg3);
    } else {
        func_020e6dcc(arg0, arg1, arg2, arg3);
    }
}
