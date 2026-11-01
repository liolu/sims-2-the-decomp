#include "m2c.h"

void func_02064180(u8 *arg0) {
    arg0 = arg0 + 0x4000;
    if (*(s32 *) (arg0 + 0x810) == (s32) 0x80000000) {
        *(s32 *) (arg0 + 0x810) = *(s32 *) (arg0 + 0x80C);
    }
}
