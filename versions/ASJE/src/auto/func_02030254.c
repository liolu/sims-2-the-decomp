/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02018af8(s32, M2C_UNK, void *, M2C_UNK);
M2C_UNK func_02073bac(void *, s32);
extern s32 data_0213e2f4;

s32 func_02030254(void *arg0, s32 arg1, s32 arg2) {
    s32 key;
    s32 e;
    s32 i;
    u8 *base;
    s32 n;
    void *o;

    switch (arg1) {
        case 0xA:
            func_02018af8(arg2 + 0x128, 0x10, *(void **) ((u8 *) arg0 + 4), 2);
            return 0;
        case 0:
            base = (u8 *) (data_0213e2f4 + 0x41F8);
            n    = *(s32 *) (base + *(s32 *) (base + 0x2E0) * 0x58 + 0x54);
            key  = *(s32 *) ((u8 *) arg0 + 4);
            i    = 0;
            if (n > 0) {
                do {
                    e = ((s32 *) base)[i + 0xB9];
                    if (e == key) {
                        goto found;
                    }
                    i += 1;
                } while (i < n);
            }
            i = -1;
        found:
            func_02073bac(base, i);
            o                       = *(void **) ((u8 *) arg0 + 4);
            *(s32 *) ((u8 *) o + 4) = *(s32 *) ((u8 *) o + 4) | 0x82;
            return 0;
    }
    return 0;
}
