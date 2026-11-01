/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern M2C_UNK data_0213d9b8;
extern M2C_UNK data_0213dab8;
extern s32 data_027e0000;
void func_0204fdec(void) {
    u32 i;
    u32 *a;
    u32 *b;
    a = (u32 *) ((u8 *) &data_0213d9b8 + (data_027e0000 << 7));
    b = (u32 *) ((u8 *) &data_0213dab8 + (data_027e0000 << 7));
    for (i = 0; i < 0x20; i++) {
        a[i] = a[i] & b[i];
        b[i] = 0xFFFFFFFF;
    }
}
