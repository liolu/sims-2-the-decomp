/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_027e0000;
extern u8 *data_0213e0a8;
s32 func_02086d00(void *, void *, s32, s32, s32, s32, s32);

s32 func_020681e8(void) {
    s32 result = 0;
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    if (*(void **) (data_0213e0a8 + 0xF8) != NULL) {
        volatile s32 scale;
        scale = 0x2710000;
        if (func_02086d00(data_0213e0a8, *(void **) (data_0213e0a8 + 0xF8), 2, -1, 0x2710000, 9, 1) != 0) {
            result = 1;
        }
    }
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    return result;
}
