/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02131d30;
s32 func_020f57ac(s32 a, s32 b);
void func_02017638(u8 *p);
void func_02046858(u8 *p);

void *func_0206bdc4(u8 *arg0) {
    u8 *r6;
    s32 idx;
    u16 r5;

    *(void **) arg0      = &data_02131d30;
    r5                   = *(u16 *) (arg0 + 0xA);
    r6                   = *(u8 **) (arg0 + 0x90) + 0x18;
    idx                  = func_020f57ac(*(s32 *) (r6 + 0x24) + *(s32 *) (r6 + 0x28), 9);
    ((s32 *) r6)[idx]    = r5;
    *(s32 *) (r6 + 0x28) = *(s32 *) (r6 + 0x28) + 1;
    func_02017638(arg0);
    func_02046858(arg0);
    return arg0;
}
