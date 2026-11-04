/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_021335d4;
extern u8 data_02133600;
extern u8 data_02134328;
extern u8 data_02134354;
extern u8 data_0213e434;
M2C_UNK func_0208bb98(void *, s32, s32, s32);
void *func_0208afd0(void *);

void *func_02094b28(void *arg0, s32 arg1, void *arg2) {
    u8 *a;
    s32 j;
    s32 v;
    u8 *pt;
    u32 flags;

    a = (u8 *) arg0;
    func_0208bb98(arg0, arg1, 0, 0);
    *(void **) a          = &data_021335d4;
    *(void **) (a + 0x4C) = &data_02133600;
    *(void **) (a + 0x50) = arg2;
    *(s32 *) (a + 0x54)   = *(s16 *) ((u8 *) func_0208afd0(arg2) + 0xE);
    *(u8 *) (a + 0x58)    = 0;
    *(u8 *) (a + 0x59)    = 1;
    *(void **) a          = &data_02134328;
    *(void **) (a + 0x4C) = &data_02134354;
    flags                 = **(u32 **) &data_0213e434;
    if ((flags & 0x20) == 0) {
        j = *(s32 *) (a + 0x8);
        if (j > *(s32 *) (a + 0xc)) {
            do {
                pt = a + (j - 1);
                v  = pt[0x10];
                pt = a + j;
                j -= 1;
                pt[0x10] = v;
            } while (j > *(s32 *) (a + 0xc));
        }
        a[*(s32 *) (a + 0xc) + 0x10] = 0;
        *(s32 *) (a + 0xc)           = *(s32 *) (a + 0xc) + 1;
        *(s32 *) (a + 0x8)           = *(s32 *) (a + 0x8) + 1;
    }
    return arg0;
}
