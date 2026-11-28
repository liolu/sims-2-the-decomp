/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02046830(s32);

void func_02045638(u8 *arg0) {
    u8 n;
    u8 i;
    s32 *q;

    n = (s32) * (u16 *) (arg0 + 0x28) / (s32) arg0[0x32];
    i = 0;
    if (n != 0) {
        do {
            if (((s32 *) (arg0 + 0xc))[i] != 0) {
                func_02046830(((s32 *) (arg0 + 0xc))[i]);
                ((s32 *) (arg0 + 0xc))[i] = 0;
            }
            i += 1;
        } while ((u32) i < (u32) n);
    }
    *(s32 *) (arg0 + 8)    = 0;
    *(s32 *) (arg0 + 4)    = *(s32 *) (arg0 + 8);
    *(u16 *) (arg0 + 0x28) = 0;
    *(u16 *) (arg0 + 0x2a) = 0;
    *(u16 *) (arg0 + 0x2e) = 0;
    arg0[0x33]             = 0;
    *(u16 *) (arg0 + 0x30) = 2;
}
