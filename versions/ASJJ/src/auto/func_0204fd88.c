/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern M2C_UNK data_0213d498;
extern M2C_UNK data_0213d598;
extern s32 data_027e0000;
void func_0204fd88(void) {
    u32 i;
    u32 *a;
    u32 *b;
    a = (u32 *) ((u8 *) &data_0213d498 + (data_027e0000 << 7));
    b = (u32 *) ((u8 *) &data_0213d598 + (data_027e0000 << 7));
    for (i = 0; i < 0x20; i++) {
        a[i] = a[i] & b[i];
        b[i] = 0xFFFFFFFF;
    }
}
