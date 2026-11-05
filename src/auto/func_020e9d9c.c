/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_020e4b58(s32);
void func_020e4c28(s32);
void func_020e4fac(s32, s32);
void func_020e5b00(s32, s32);
void func_020e6198(s32, s32, s32, s32);
void func_020e72e0(s32, s32, s32, s32);
void func_020e7534(s32, s32, s32, s32);
void func_020e75d4(s32, s32, s32, s32);
void func_020e844c(s32, s32, s32);
void func_020e9288(s32);
void func_020e9458(s32);
void func_020e9930(s32, s32, s32);

void func_020e9d9c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 q;

    if (arg0 > 0x20) {
        q = arg0 >> 2;
        func_020e844c(arg0, arg1, arg4 + ((arg3 - q) * 4));
        if (arg0 > 0x200) {
            func_020e75d4(q, arg1, arg3, arg4);
            func_020e7534(q, arg1 + (q * 4), arg3, arg4);
            func_020e75d4(q, arg1 + (q * 8), arg3, arg4);
            func_020e75d4(q, arg1 + ((q * 3) << 2), arg3, arg4);
        } else if (q > 0x20) {
            func_020e72e0(arg0, arg1, arg3, arg4);
        } else {
            func_020e6198(arg0, arg1, arg3, arg4);
        }
        func_020e9930(arg0, arg2, arg1);
        return;
    }
    if (arg0 > 8) {
        if (arg0 == 0x20) {
            func_020e5b00(arg1, arg4 + ((arg3 - 8) * 4));
            func_020e9458(arg1);
        } else {
            func_020e4fac(arg1, arg4);
            func_020e9288(arg1);
        }
        return;
    }
    if (arg0 == 8) {
        func_020e4c28(arg1);
        return;
    }
    if (arg0 == 4) {
        func_020e4b58(arg1);
    }
}
