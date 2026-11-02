#include "m2c.h"
void func_020e9288(s32 *arg0) {
    s32 a8;
    s32 a12;
    s32 a24;
    s32 a28;
    s32 a32;
    s32 a36;
    s32 a48;
    s32 a52;

    a8       = arg0[2];
    a12      = arg0[3];
    a24      = arg0[6];
    a28      = arg0[7];
    a36      = arg0[9];
    a48      = arg0[12];
    a52      = arg0[13];
    a32      = arg0[8];
    arg0[2]  = a32;
    arg0[3]  = a36;
    arg0[6]  = a48;
    arg0[7]  = a52;
    arg0[8]  = a8;
    arg0[9]  = a12;
    arg0[12] = a24;
    arg0[13] = a28;
}
