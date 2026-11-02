/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov011_0214a040;
void func_02046b24(void *, s32, s32, s32, s32);

void *func_ov011_02149f94(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *p;
    p = (u8 *) arg0;
    func_02046b24(arg0, 33, arg1, arg2, arg3);
    *(u8 **) p        = &data_ov011_0214a040;
    *(s32 *) (p + 36) = 0;
    *(s32 *) (p + 40) = arg2;
    *(u16 *) (p + 44) = (u16) arg1;
    p[46]             = (u8) arg3;
    p[47]             = (u8) ((u32) arg3 >> 8);
    return arg0;
}
