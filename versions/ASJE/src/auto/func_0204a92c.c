/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_020eea34(void *p);
extern void func_020eea5c(void *p);
extern void func_020fca74(void *a, void *b);
extern void func_01ffba84(void *a, void *b);
extern void func_020f56a4(void *a, void *b);
extern void func_020bd540(void *p);

extern u32 data_0213d5c0;
extern u8 **data_0213d5b0;
extern u8 data_027e1160;
extern u32 data_027e1e0c[];
extern u8 data_027e1ec8;

typedef s32 (*Fn)(u8 *);

void func_0204a92c(void) {
    u32 i;
    u32 tmp[17];
    u8 *r9;
    u8 *t;

    for (i = 0; i < data_0213d5c0;) {
        t = data_0213d5b0[i];
        if (((Fn) * (u32 *) (t + 0x3c))(t) != 0) {
            t                            = data_0213d5b0[i];
            data_0213d5c0                = data_0213d5c0 - 1;
            data_0213d5b0[i]             = data_0213d5b0[data_0213d5c0];
            data_0213d5b0[data_0213d5c0] = t;
        } else {
            r9 = data_0213d5b0[i];
            func_020eea34(r9 + 0x18);
            func_020eea5c(r9);
            func_020fca74(&data_027e1160, tmp);
            func_01ffba84(tmp, r9 + 0x24);
            func_020f56a4(tmp, &data_027e1ec8);
            data_027e1e0c[0x3f] &= ~0xA4u;
            func_020bd540(*(u8 **) (r9 + 0x40) + 0x48 + r9[0x44] * 0xC0);
            i++;
        }
    }
}
