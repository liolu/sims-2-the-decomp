/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0209e9ac(u8, u8, u8 *, u8);             /* extern */
M2C_UNK func_0209f0e8(void);                         /* extern */
extern u8 *data_0213e6d0;
extern u8 data_02124b2c;

void func_0209efcc(void) {
    s32 flag;
    u8 j;
    u8 i;
    u8 *p;
    u8 *row;

    flag = 0;
    for (j = 0; j < 8; j++) {
        for (i = 0; i < 4; i++) {
            u32 off = i << 2;
            row     = (u8 *) ((j << 4) + (u32) data_0213e6d0);
            p       = row + (i << 2);
            if (p[3] != 0) {
                flag = 1;
                func_0209e9ac(*(u8 *) (off + (u32) row), p[1], &data_02124b2c, p[2]);
            }
        }
    }
    if (flag != 0) {
        return;
    }
    *(u16 *) (data_0213e6d0 + 0x8C) = 0x3C;
    *(u16 *) (data_0213e6d0 + 0x8E) = 0x70;
    data_0213e6d0[0x90]             = 0;
    data_0213e6d0[0x91]             = 0;
    data_0213e6d0[0x92]             = 1;
    func_0209f0e8();
    if (data_0213e6d0[0x98] != 0) {
        return;
    }
    {
        u32 v;
        *(s32 *) (data_0213e6d0 + 0x80) = *(s32 *) (data_0213e6d0 + 0x80) + 0x19;
        v                               = *(u32 *) (data_0213e6d0 + 0x80);
        if (v >= *(u32 *) (data_0213e6d0 + 0x84)) {
            *(u32 *) (data_0213e6d0 + 0x84) = v;
        }
    }
}
