/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_02133600;
extern void *data_02134c80;
extern void *data_02134cac;
void func_0208bb98(void *, s32, s32, s32);
void *func_0208afd0(s32);

void *func_0209ade4(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *) arg0;
    s32 i;
    s32 v;
    u8 *t;

    func_0208bb98(arg0, arg1, 0, 0);
    *(void **) (p + 0x4C) = &data_02133600;
    *(s32 *) (p + 0x50)   = arg2;
    *(s32 *) (p + 0x54)   = *(s16 *) ((u8 *) func_0208afd0(arg2) + 0xE);
    p[0x58]               = 0;
    p[0x59]               = 1;
    *(void **) p          = &data_02134c80;
    *(void **) (p + 0x4C) = &data_02134cac;
    i                     = *(s32 *) (p + 8);
    if (i > *(s32 *) (p + 0xC)) {
        do {
            t = p + (i - 1);
            v = t[0x10];
            t = p + i;
            i -= 1;
            t[0x10] = v;
        } while (i > *(s32 *) (p + 0xC));
    }
    p[0x10 + *(s32 *) (p + 0xC)] = 0x1C;
    *(s32 *) (p + 0xC) += 1;
    *(s32 *) (p + 8) += 1;
    return arg0;
}
