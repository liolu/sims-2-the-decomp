/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_02133600;
extern u8 data_02134cfc;
extern u8 data_02134d28;
void *func_0208afd0(s32);
void func_0208bb98(void *, s32, s32, s32);

void *func_0209b000(u8 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 v;
    u8 *t;

    func_0208bb98(arg0, arg1, 0, 0);
    *(void **) (arg0 + 0x4c) = &data_02133600;
    *(s32 *) (arg0 + 0x50)   = arg2;
    *(s32 *) (arg0 + 0x54)   = (s32) * (s16 *) ((u8 *) func_0208afd0(arg2) + 0xe);
    *(u8 *) (arg0 + 0x58)    = 0;
    *(u8 *) (arg0 + 0x59)    = 1;
    *(void **) arg0          = &data_02134cfc;
    *(void **) (arg0 + 0x4c) = &data_02134d28;
    i                        = *(s32 *) (arg0 + 8);
    if (i > *(s32 *) (arg0 + 12)) {
        do {
            t = arg0 + (i - 1);
            v = t[0x10];
            t = arg0 + i;
            i -= 1;
            t[0x10] = v;
        } while (i > *(s32 *) (arg0 + 12));
    }
    arg0[*(s32 *) (arg0 + 12) + 0x10] = 0x1a;
    *(s32 *) (arg0 + 12) += 1;
    *(s32 *) (arg0 + 8) += 1;
    return arg0;
}
