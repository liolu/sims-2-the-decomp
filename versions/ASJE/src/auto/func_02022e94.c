/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0201c990(void *);                      /* extern */
M2C_UNK func_0201d0ac(void *);                      /* extern */
M2C_UNK func_02019cdc(void *);                      /* extern */
M2C_UNK func_0201d4f4(void *);                      /* extern */
M2C_UNK func_0201d7cc(void *);                      /* extern */
M2C_UNK func_01ffabc8(void *, s32, s32);            /* extern */
M2C_UNK func_01ffac40(void *, void *);              /* extern */
M2C_UNK func_02027650(void *);                      /* extern */
M2C_UNK func_020117e8();                            /* extern */
M2C_UNK func_02018acc(void *);                      /* extern */
s32 func_02021f5c(void *, s32);                     /* extern */

void func_02022e94(u8 *arg0, s32 arg1) {
    u8 fr[0x104];
    s32 t;

    func_0201c990(fr + 0x08);
    func_0201d0ac(fr + 0x3C);
    func_02019cdc(fr + 0x78);
    func_0201d4f4(fr + 0xA8);
    func_0201d7cc(fr + 0xCC);
    *(s32 *) (arg0 + 0x44) = arg1;
    func_01ffabc8((void *) (arg1 + 0xE0), 5, 1);
    func_01ffac40(*(u8 **) (arg0 + 4) + 0xE0, arg0);
    func_02027650(fr + 0xE4);
    *(s32 *) (fr + 0xFC) = arg1;
    *(s32 *) (fr + 0xF4) = *(s32 *) (arg0 + 4);
    *(s16 *) (fr + 0xF8) = 0x23;
    func_020117e8(*(s32 *) (arg0 + 4), 0x21, fr + 0xE4, arg0);
    func_020117e8(*(s32 *) (arg0 + 4), 0x22, fr + 0xA8, arg0);
    *(s16 *) (fr + 0x6C) = 0xB3;
    t                    = func_02021f5c(arg0, 1);
    *(s32 *) (fr + 0x4C) = t;
    func_020117e8(*(s32 *) (arg0 + 4), 3, fr + 0x3C, arg0);
    *(s16 *) (fr + 0xDE) = 0xB3;
    func_020117e8(*(s32 *) (arg0 + 4), 0x23, fr + 0xCC, arg0);
    *(s16 *) (fr + 0xBA) = 0x122;
    *(s16 *) (fr + 0xB8) = 0x123;
    func_020117e8(*(s32 *) (arg0 + 4), 0x22, fr + 0xA8, arg0);
    *(s16 *) (fr + 0xF8) = 0x24;
    func_020117e8(*(s32 *) (arg0 + 4), 0x21, fr + 0xE4, arg0);
    *(s32 *) (fr + 0xA0) = arg1;
    *(s16 *) (fr + 0x94) = 0x135;
    func_020117e8(*(s32 *) (arg0 + 4), 0x10, fr + 0x78, arg0);
    *(s16 *) (fr + 0x34) = 3;
    *(s32 *) (fr + 0x24) = arg1;
    *(s32 *) (fr + 0x00) = 0xC000;
    *(s32 *) (fr + 0x04) = 0xC000;
    *(s32 *) (fr + 0x2C) = 0xC000;
    func_020117e8(*(s32 *) (arg0 + 4), 0x1B, fr + 0x08, arg0);
    *(s32 *) (fr + 0x4C) = -1;
    *(s16 *) (fr + 0x6C) = 0;
    *(u8 *) (fr + 0x6F)  = 1;
    func_020117e8(arg1, 3, fr + 0x3C, 0);
    func_02018acc(fr + 0xE4);
    func_02018acc(fr + 0xCC);
    func_02018acc(fr + 0xA8);
    func_02018acc(fr + 0x78);
    func_02018acc(fr + 0x3C);
    func_02018acc(fr + 0x08);
}
