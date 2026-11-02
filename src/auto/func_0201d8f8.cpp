/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" void func_020f0dbc(void *, s32, s32);
extern "C" void func_0201d8f8(u8 *arg0) {
    s32 r2;
    u8 *p;
    u8 *q;
    u8 *t;
    *(s32 *) (arg0 + 0x3c) = 0;
    *(s32 *) (arg0 + 0x40) = *(s32 *) (arg0 + 0x34);
    if (*(s32 *) (arg0 + 0x28) == 0) {
        *(s32 *) (arg0 + 0x28) = *(s32 *) (arg0 + 4);
    }
    r2 = 0;
    p  = *(u8 **) (arg0 + 0x28);
    q  = *(u8 **) (p + 0x130);
    if (q != NULL) {
        if (*(u8 *) (q + 0x1c) != 0) {
            r2 = 1;
        }
    }
    *(u8 *) (arg0 + 0x44) = (u8) r2;
    p                     = *(u8 **) (arg0 + 0x28);
    t                     = *(u8 **) (p + 0x1a8);
    q                     = t + *(u16 *) (t + 0xe);
    func_020f0dbc(t + *(s32 *) (q + 0xc), 0, 0x1f0000);
}
