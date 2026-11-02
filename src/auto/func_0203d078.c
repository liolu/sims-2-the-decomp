#include "m2c.h"
extern s32 data_027e0000;
void func_0203d078(s32 arg0) {
    s32 temp_r0;
    temp_r0                         = data_027e0000 << 0xC;
    *(s32 *) (0x04000000 + temp_r0) = (s32) (~(0x100 << arg0) & *(s32 *) (0x04000000 + temp_r0));
}
