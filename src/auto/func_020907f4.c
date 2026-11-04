/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 func_02077a48(void *a, s32 b);
extern s32 func_02083d1c(void *a, s32 b);
extern u8 data_0213355c;
extern u8 data_02133cc4;
extern s32 data_0213e434;

void *func_020907f4(void *arg0, s32 arg1) {
    u8 *p = (u8 *) arg0;
    s32 i;
    s32 v;
    u8 *t;
    *(u8 **) arg0                 = &data_0213355c;
    *(s32 *) ((u8 *) arg0 + 4)    = arg1;
    *(s32 *) ((u8 *) arg0 + 8)    = 0;
    *(s32 *) ((u8 *) arg0 + 0xC)  = 0;
    *(s32 *) ((u8 *) arg0 + 0x14) = 0;
    *((u8 *) arg0 + 0x1C)         = 1;
    *(u8 **) arg0                 = &data_02133cc4;
    if (func_02077a48(*(u8 **) &data_0213e434 + 0x2F78, 0x1A) != 0) {
        if (func_02083d1c(*(u8 **) &data_0213e434 + 0x18, 0x26) != 6) {
            i = *(s32 *) ((u8 *) arg0 + 8);
            if (i > *(s32 *) ((u8 *) arg0 + 0xC)) {
                do {
                    t = (u8 *) arg0 + (i - 1);
                    v = t[0x10];
                    t = p + i;
                    i -= 1;
                    t[0x10] = v;
                } while (i > *(s32 *) ((u8 *) arg0 + 0xC));
            }
            p[0x10 + *(s32 *) ((u8 *) arg0 + 0xC)] = 0x1F;
            *(s32 *) ((u8 *) arg0 + 0xC)           = *(s32 *) ((u8 *) arg0 + 0xC) + 1;
            *(s32 *) ((u8 *) arg0 + 8)             = *(s32 *) ((u8 *) arg0 + 8) + 1;
        }
    }
    return arg0;
}
