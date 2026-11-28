/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_021330c0;
extern u8 data_021330ec;
extern u8 data_02133e14;
extern u8 data_02133e40;
extern u8 data_0213df5c;
M2C_UNK func_0208ba60(void *, s32, s32, s32);
void *func_0208aebc(void *);

void *func_0209491c(void *arg0, s32 arg1, void *arg2) {
    u8 *a;
    s32 j;
    s32 v;
    u8 *pt;
    u32 flags;

    a = (u8 *) arg0;
    func_0208ba60(arg0, arg1, 0, 0);
    *(void **) a          = &data_021330c0;
    *(void **) (a + 0x4C) = &data_021330ec;
    *(void **) (a + 0x50) = arg2;
    *(s32 *) (a + 0x54)   = *(s16 *) ((u8 *) func_0208aebc(arg2) + 0xE);
    *(u8 *) (a + 0x58)    = 0;
    *(u8 *) (a + 0x59)    = 1;
    *(void **) a          = &data_02133e14;
    *(void **) (a + 0x4C) = &data_02133e40;
    flags                 = **(u32 **) &data_0213df5c;
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
