/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern M2C_UNK data_0211e5e8;
extern M2C_UNK data_0213d77c;
s32 func_0204e1b8(s32 unused, s32 arg1, s32 arg2, s32 arg3) {
    s32 cnt;
    void **tab;
    void *p;
    cnt = *(s32 *) ((u8 *) &data_0211e5e8 + (arg1 * 0x18));
    tab = *(void ***) ((u8 *) &data_0213d77c + (arg1 * 0x18));
    p   = tab[cnt * arg2 + arg3];
    if (p != NULL) {
        if ((*((u8 *) p + 0x12) & 1) == 0) {
            return 1;
        }
    }
    return 0;
}
