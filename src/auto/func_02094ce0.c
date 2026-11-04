/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213355c;
extern u8 data_02134394;

void func_02094ce0(void *arg0, void *arg1) {
    u8 *p = (u8 *) arg0;
    s32 i;
    s32 v;
    u8 *t;

    *(void **) p        = (void *) &data_0213355c;
    *(void **) (p + 4)  = arg1;
    *(s32 *) (p + 8)    = 0;
    *(s32 *) (p + 0xC)  = 0;
    *(s32 *) (p + 0x14) = 0;
    p[0x1c]             = 1;
    *(void **) p        = (void *) &data_02134394;
    i                   = *(s32 *) (p + 8);
    if (i > *(s32 *) (p + 0xC)) {
        do {
            t = p + (i - 1);
            v = t[0x10];
            t = p + i;
            i -= 1;
            t[0x10] = v;
        } while (i > *(s32 *) (p + 0xC));
    }
    p[0x10 + *(s32 *) (p + 0xC)] = 0x63;
    *(s32 *) (p + 0xC) += 1;
    *(s32 *) (p + 8) += 1;
}
