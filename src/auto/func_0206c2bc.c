/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020d59bc(s32);
M2C_UNK func_0206cd70(s32, u16, s32);

void func_0206c2bc(void *arg0) {
    volatile s32 tmp[6];
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    func_020d59bc(0x16A);
    a                             = *(s32 *) ((u8 *) arg0 + 0x7C);
    tmp[3]                        = a;
    b                             = *(s32 *) ((u8 *) arg0 + 0x78);
    tmp[4]                        = b;
    c                             = *(s32 *) ((u8 *) arg0 + 0x50) - b;
    tmp[0]                        = c;
    d                             = *(s32 *) ((u8 *) arg0 + 0x54) - a;
    tmp[1]                        = d;
    *(s32 *) ((u8 *) arg0 + 0x94) = c;
    e                             = tmp[1];
    tmp[2]                        = e;
    *(s32 *) ((u8 *) arg0 + 0x98) = e;
    func_0206cd70(*(s32 *) ((u8 *) arg0 + 0x90), *(u16 *) ((u8 *) arg0 + 0x0A), a);
}
