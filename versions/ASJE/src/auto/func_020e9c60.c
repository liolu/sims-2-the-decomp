/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_020e4a1c(s32);
void func_020e4aec(s32);
void func_020e4e70(s32, s32);
void func_020e59c4(s32, s32);
void func_020e605c(s32, s32, s32, s32);
void func_020e71a4(s32, s32, s32, s32);
void func_020e73f8(s32, s32, s32, s32);
void func_020e7498(s32, s32, s32, s32);
void func_020e8310(s32, s32, s32);
void func_020e914c(s32);
void func_020e931c(s32);
void func_020e97f4(s32, s32, s32);

void func_020e9c60(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 q;

    if (arg0 > 0x20) {
        q = arg0 >> 2;
        func_020e8310(arg0, arg1, arg4 + ((arg3 - q) * 4));
        if (arg0 > 0x200) {
            func_020e7498(q, arg1, arg3, arg4);
            func_020e73f8(q, arg1 + (q * 4), arg3, arg4);
            func_020e7498(q, arg1 + (q * 8), arg3, arg4);
            func_020e7498(q, arg1 + ((q * 3) << 2), arg3, arg4);
        } else if (q > 0x20) {
            func_020e71a4(arg0, arg1, arg3, arg4);
        } else {
            func_020e605c(arg0, arg1, arg3, arg4);
        }
        func_020e97f4(arg0, arg2, arg1);
        return;
    }
    if (arg0 > 8) {
        if (arg0 == 0x20) {
            func_020e59c4(arg1, arg4 + ((arg3 - 8) * 4));
            func_020e931c(arg1);
        } else {
            func_020e4e70(arg1, arg4);
            func_020e914c(arg1);
        }
        return;
    }
    if (arg0 == 8) {
        func_020e4aec(arg1);
        return;
    }
    if (arg0 == 4) {
        func_020e4a1c(arg1);
    }
}
