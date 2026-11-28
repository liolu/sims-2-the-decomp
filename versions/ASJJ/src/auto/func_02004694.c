/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 data_027e0000;
extern u8 *data_02138d30;
extern s32 data_02117198[];
void func_02004694(void) {
    volatile s32 fr[3];
    u8 *obj;
    s32 *p;
    s32 cur;
    s32 t;
    obj = data_02138d30;
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    p = *(s32 **) (obj + 0x34C);
    if (p != 0) {
        t     = p[0x60 / 4];
        fr[0] = t;
        p[0x50 / 4] += t;
        p     = *(s32 **) (obj + 0x34C);
        t     = p[0x64 / 4];
        fr[1] = t;
        p[0x54 / 4] += t;
    }
    cur = *(s32 *) (obj + 0x2E8);
    if (cur > 0) {
        *(s32 *) (obj + 0x2E8) = cur - 1;
    }
    ((void (*)(void))(data_02117198[obj[0x2EE]]))();
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
}
