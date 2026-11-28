/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fad58(void *, s32);                 /* extern */
M2C_UNK func_020fc4c0(s32, void *, void *, s32);   /* extern */
M2C_UNK func_020fcc90(void *);                      /* extern */
M2C_UNK func_020fce40(void *);                      /* extern */
M2C_UNK func_01ff8000(void *, void *, void *);              /* extern */

typedef struct {
    u32 lo : 4;
    u32 t : 4;
    u32 sz : 24;
} HD;

u32 func_02042970(void *arg0, void *arg1) {
    HD *hd = (HD *) arg0;
    u32 temp_r2;
    u32 sp0;
    u32 i;
    u32 n;

    temp_r2 = hd->t & ~8;
    sp0     = hd->sz;
    switch (temp_r2) {
        case 0:
            func_020fad58(arg0, sp0 + 4);
            func_020fc4c0(3, (u8 *) arg0 + 4, arg1, sp0);
            break;
        case 1:
            func_020fcc90(arg0);
            break;
        case 3:
            func_020fce40(arg0);
            break;
        case 6:
            func_01ff8000((u8 *) arg0 + 4, arg1, &sp0);
            break;
        case 2:
        case 4:
        case 5:
        case 7:
        case 8:
            break;
    }
    if (hd->t & 8) {
        i = 1;
        n = sp0 >> 1;
        if (n > 1) {
            do {
                ((u16 *) arg1)[i] = ((u16 *) arg1)[i] + ((u16 *) arg1)[i - 1];
                i++;
            } while (i < n);
        }
    }
    return hd->sz;
}
