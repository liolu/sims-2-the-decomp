/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02016708(void *, s32);
void func_020165bc(void *, u8);

void func_ov010_02152740(void *arg0, s32 arg1) {
    s32 t                         = *(s32 *) ((u8 *) arg0 + 0x14);
    s32 u                         = *(s32 *) ((u8 *) arg0 + 0x94);
    t                             = (t & ~0xF000) | ((u & 0xF) << 0xC);
    *(s32 *) ((u8 *) arg0 + 0x14) = t;
    func_02016708(arg0, *(s32 *) ((u8 *) arg0 + 0x90) + arg1 * 8);
    func_020165bc(arg0, (u8) * (s32 *) ((u8 *) arg0 + 0x98));
}
