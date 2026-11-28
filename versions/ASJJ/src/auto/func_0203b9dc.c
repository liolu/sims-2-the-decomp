#include "m2c.h"

extern s32 data_027e0000;

s32 func_0203b9dc(s32 arg0) {
    return (data_027e0000 << 0x15) + 0x06000000 + (arg0 << 0xB);
}
