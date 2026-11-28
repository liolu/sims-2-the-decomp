/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_020e4644(s32);
void func_020e4684(s32);
void func_020e4a98(s32, s32);
void func_020e55ec(s32, s32);
void func_020e5c84(s32, s32, s32, s32);
void func_020e6dcc(s32, s32, s32, s32);
void func_020e7020(s32, s32, s32, s32);
void func_020e70c0(s32, s32, s32, s32);
void func_020e7170(s32, s32, s32);
void func_020e8cec(s32);
void func_020e8dbc(s32);
void func_020e906c(s32, s32, s32);

void func_020e9724(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 q;

    if (arg0 > 0x20) {
        q = arg0 >> 2;
        func_020e7170(arg0, arg1, arg4 + ((arg3 - q) * 4));
        if (arg0 > 0x200) {
            func_020e70c0(q, arg1, arg3, arg4);
            func_020e7020(q, arg1 + (q * 4), arg3, arg4);
            func_020e70c0(q, arg1 + (q * 8), arg3, arg4);
            func_020e70c0(q, arg1 + ((q * 3) << 2), arg3, arg4);
        } else if (q > 0x20) {
            func_020e6dcc(arg0, arg1, arg3, arg4);
        } else {
            func_020e5c84(arg0, arg1, arg3, arg4);
        }
        func_020e906c(arg0, arg2, arg1);
        return;
    }
    if (arg0 > 8) {
        if (arg0 == 0x20) {
            func_020e55ec(arg1, arg4 + ((arg3 - 8) * 4));
            func_020e8dbc(arg1);
        } else {
            func_020e4a98(arg1, arg4);
            func_020e8cec(arg1);
        }
        return;
    }
    if (arg0 == 8) {
        func_020e4684(arg1);
        return;
    }
    if (arg0 == 4) {
        func_020e4644(arg1);
    }
}
