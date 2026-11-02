/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206d438(s32, s32);

void func_0206c358(void *arg0) {
    volatile s32 tmp[5];
    s32 a;
    s32 d;
    s32 e;
    s32 f;
    if ((*(s32 *) ((u8 *) arg0 + 4) & 1) != 1) {
        return;
    }
    f                             = *(s32 *) ((u8 *) arg0 + 0x98);
    tmp[3]                        = f;
    e                             = *(s32 *) ((u8 *) arg0 + 0x94);
    tmp[4]                        = e;
    a                             = *(s32 *) ((u8 *) arg0 + 0x80) + e;
    tmp[0]                        = a;
    d                             = *(s32 *) ((u8 *) arg0 + 0x84) + f;
    tmp[1]                        = d;
    *(s32 *) ((u8 *) arg0 + 0x50) = a;
    d                             = tmp[1];
    tmp[2]                        = d;
    *(s32 *) ((u8 *) arg0 + 0x54) = d;
    func_0206d438(*(s32 *) ((u8 *) arg0 + 0x90), d);
}
