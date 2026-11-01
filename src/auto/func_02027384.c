/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02139fa4[];

void func_02048108(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);

void func_02027384(u8 *arg0) {
    if (*(s32 *) (arg0 + 0x28) != 0x32) {
        func_02048108(*(u32 *) data_02139fa4, *(u32 *) (arg0 + 0x28), *(u32 *) (arg0 + 0x2C), *(u32 *) (arg0 + 0x30),
                      *(u32 *) (arg0 + 0x34), *(u32 *) (arg0 + 0x38));
    }
    if (*(s32 *) (arg0 + 0x3C) != 0x32) {
        func_02048108(*(u32 *) data_02139fa4, *(u32 *) (arg0 + 0x3C), *(u32 *) (arg0 + 0x40), *(u32 *) (arg0 + 0x44),
                      *(u32 *) (arg0 + 0x48), *(u32 *) (arg0 + 0x4C));
    }
    arg0[0x13] = 1;
}
