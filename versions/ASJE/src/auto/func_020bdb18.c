/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 v;
} W1;

M2C_UNK func_020bdce4(u8 *);                         /* extern */
M2C_UNK func_02015354(s32 *, s32);                  /* extern */
M2C_UNK func_020ae0f8(s32 *, u8 *, W1);            /* extern */
M2C_UNK func_020bdc30(s32 *, W1);                  /* extern */
M2C_UNK func_020670f4(u8 *, W1);                   /* extern */
M2C_UNK func_020f5d7c(s32, s32);                          /* extern */
M2C_UNK func_020f61b8(s32);                         /* extern */

void func_020bdb18(u8 *arg0) {
    s32 loc[12];
    s32 r;
    s32 t;

    if (((u32) (*(s32 *) (arg0 + 0x180) << 31)) >> 31 == 0) {
        return;
    }
    r = func_020bdce4(arg0 + 0x184);
    func_02015354(&loc[7], (r + 1) >> 1);
    func_02015354(&loc[11], 2);
    func_020ae0f8(&loc[10], arg0 + 0x178, *(W1 *) &loc[11]);
    func_020bdc30(&loc[9], *(W1 *) &loc[10]);
    func_020ae0f8(&loc[8], (u8 *) &loc[7], *(W1 *) &loc[9]);
    func_020670f4(arg0 + 0x1A8, *(W1 *) &loc[8]);
    loc[2]                  = 0x2000;
    loc[5]                  = 0x2000;
    loc[4]                  = *(s32 *) (arg0 + 0x1A8);
    t                       = func_020f5d7c(((*(s32 *) (arg0 + 0x18C) - *(s32 *) (arg0 + 0x184)) + 1 >> 1) << 12, loc[4]);
    loc[1]                  = (s32) (((s64) t * loc[5] + 0x800) >> 12);
    loc[6]                  = loc[1];
    r                       = func_020f61b8(loc[6]);
    loc[0]                  = r;
    loc[3]                  = r;
    *(s32 *) (arg0 + 0x17C) = r;
    *(u32 *) (arg0 + 0x180) = *(u32 *) (arg0 + 0x180) & ~1;
    *(u32 *) (arg0 + 0x180) = *(u32 *) (arg0 + 0x180) | 4;
}
