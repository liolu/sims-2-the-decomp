/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_02018aa8(void *p);
void func_02028bb8(u8 *arg0, u8 *arg1) {
    volatile s32 t;
    s32 v;
    func_02018aa8(arg0 + 0x18);
    v                      = *(s32 *) (arg1 + 0x10);
    t                      = v;
    *(s32 *) (arg0 + 0x28) = v;
    *(s32 *) (arg0 + 0x2C) = *(s32 *) (arg1 + 0x14);
    *(u8 *) (arg0 + 0x30)  = *(u8 *) (arg1 + 0x18);
}
