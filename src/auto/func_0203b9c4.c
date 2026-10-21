#include "m2c.h"

extern s32 data_027e0000;

s32 func_0203b9c4(s32 arg0) {
    return (data_027e0000 << 0x15) + 0x06000000 + (arg0 << 0xE);
}
