#include "m2c.h"
void func_020745a0(u8 *arg0) {
    u8 i = 0;
    do {
        *(s8 *) (arg0 + i * 2 + 1) = 0;
        i += 1;
    } while ((u32) i < 0x1E);
}
