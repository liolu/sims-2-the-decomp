/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov013_02149f1c(void *a, void *b, s32 c, s32 d);

void func_ov013_0214a100(void *arg0) {
    u8 *a = (u8 *) arg0;
    volatile s32 tmp[3];
    s32 v80;
    s32 v84;
    s32 t;
    u16 w;
    u8 *p;

    p = *(u8 **) (a + 0x4AC);
    if (p[0xDC] != 0) {
        if (*(u16 *) (a + 0xA) != *(u16 *) (p + 0xDE)) {
            return;
        }
    }
    if (p[0xDD] == 0) {
        return;
    }
    if ((u32) * (s32 *) (a + 0x4A0) > 1) {
        return;
    }
    v80                  = *(s32 *) (a + 0x80);
    v84                  = *(s32 *) (a + 0x84);
    tmp[0]               = v80;
    tmp[1]               = v84;
    *(s32 *) (a + 0x90)  = v80;
    t                    = tmp[1];
    tmp[2]               = t;
    *(s32 *) (a + 0x94)  = t;
    p                    = *(u8 **) (a + 0x4AC);
    p[0xDC]              = 1;
    w                    = *(u16 *) (a + 0xA);
    p                    = *(u8 **) (a + 0x4AC);
    *(u16 *) (p + 0xDE)  = w;
    *(s32 *) (a + 0x4A0) = 1;
    func_ov013_02149f1c(arg0, p, w, 1);
}
