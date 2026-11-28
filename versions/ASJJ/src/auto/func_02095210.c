/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02082d58(void *arg0, u16 arg1);
extern u8 data_02133048[];
extern u8 data_02133fa4[];
extern s32 data_0213df5c;

void *func_02095210(void *arg0, void *arg1) {
    u8 *p = (u8 *) arg0;
    s32 i;
    s32 v;
    u8 *t;

    *(u8 **) p          = data_02133048;
    *(void **) (p + 4)  = arg1;
    *(s32 *) (p + 8)    = 0;
    *(s32 *) (p + 0xC)  = 0;
    *(s32 *) (p + 0x14) = 0;
    *(s8 *) (p + 0x1C)  = 1;
    *(u8 **) p          = data_02133fa4;
    if (func_02082d58((u8 *) data_0213df5c + 0x2FAC, *(u16 *) ((u8 *) arg1 + 0xA)) != 0xD8) {
        i = *(s32 *) (p + 8);
        if (i > *(s32 *) (p + 0xC)) {
            do {
                t = p + (i - 1);
                v = t[0x10];
                t = p + i;
                i -= 1;
                t[0x10] = v;
            } while (i > *(s32 *) (p + 0xC));
        }
        p[*(s32 *) (p + 0xC) + 0x10] = 6;
        *(s32 *) (p + 0xC)           = *(s32 *) (p + 0xC) + 1;
        *(s32 *) (p + 8)             = *(s32 *) (p + 8) + 1;
    }
    return p;
}
