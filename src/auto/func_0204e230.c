/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern M2C_UNK data_0211e724;
extern M2C_UNK data_0213d8bc;
s32 func_0204e230(s32 unused, s32 arg1, s32 arg2, s32 arg3) {
    s32 cnt;
    void **tab;
    void *p;
    cnt = *(s32 *) ((u8 *) &data_0211e724 + (arg1 * 0x18));
    tab = *(void ***) ((u8 *) &data_0213d8bc + (arg1 * 0x18));
    p   = tab[cnt * arg2 + arg3];
    if (p != NULL) {
        if ((*((u8 *) p + 0x12) & 1) == 0) {
            return 1;
        }
    }
    return 0;
}
