/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u32 data_0213d7b0;
extern u32 data_0213e580;
extern u32 data_02139fa4;
extern u32 data_027e0000;

M2C_UNK func_0205871c();
M2C_UNK func_02018af8();

u32 func_02095168(u8 *arg0, u32 arg1) {
    u8 c;

    if (*(u32 *) ((u8 *) &data_0213d7b0 + 0xa4) == 0xffffffff) {
        func_0205871c(data_02139fa4, 0x6e1, 0xffffffff, 0, 0, 1);
        return 0;
    }
    arg1 = (u32) (arg0 + arg1);
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    *(u32 *) (*(u32 *) ((u8 *) data_02139fa4 + 0xdac) + 0x6c) = 2;
    c                                                         = *(u8 *) (arg1 + 0x10);
    switch (c) {
        case 0x29:
            func_02018af8(*(u32 *) (arg0 + 4) + 0x128, 0xa, *(u32 *) ((u8 *) data_0213e580 + 0xf8));
            break;
        case 0x2a:
            func_02018af8(*(u32 *) (arg0 + 4) + 0x128, 0xb, *(u32 *) ((u8 *) data_0213e580 + 0xf8));
            break;
    }
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    return 6;
}
