#include "m2c.h"
extern s32 data_027e0000;
void func_0203cf10(s32 arg0) {
    s32 temp_r1;
    temp_r1                         = data_027e0000 << 0xC;
    *(s32 *) (0x04000000 + temp_r1) = (arg0 | (*(s32 *) (0x04000000 + temp_r1) & ~0x1F00));
}
