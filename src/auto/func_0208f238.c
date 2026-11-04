/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02133600;
extern u8 data_02133a50;
extern u8 data_02133a7c;

void func_0208bb98(u8 *a, void *b, s32 c, s32 d);
void *func_0208afd0(void *a);

u8 *func_0208f238(u8 *arg0, void *arg1, void *arg2) {
    s32 v;
    u8 *t;
    u8 *p = (u8 *) arg0;
    void *pc;
    s32 i;
    volatile s32 pad;
    func_0208bb98(arg0, arg1, 0, 0);
    *(void **) (arg0 + 0x4c) = &data_02133600;
    *(void **) (arg0 + 0x50) = arg2;
    pc                       = func_0208afd0(arg2);
    *(s32 *) (arg0 + 0x54)   = *(s16 *) ((u8 *) pc + 0xe);
    arg0[0x58]               = 0;
    arg0[0x59]               = 1;
    *(void **) arg0          = &data_02133a50;
    *(void **) (arg0 + 0x4c) = &data_02133a7c;
    i                        = *(s32 *) (arg0 + 8);
    if (i > *(s32 *) (arg0 + 0xc)) {
        do {
            t = p + (i - 1);
            v = t[0x10];
            t = p + i;
            i -= 1;
            t[0x10] = v;
        } while (i > *(s32 *) (arg0 + 0xc));
    }
    arg0[0x10 + *(s32 *) (arg0 + 0xc)] = 0x19;
    *(s32 *) (arg0 + 0xc) += 1;
    *(s32 *) (arg0 + 8) += 1;
    return arg0;
}
