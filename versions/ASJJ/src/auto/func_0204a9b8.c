/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_020ee65c(void *p);
extern void func_020ee684(void *p);
extern void func_020fc69c(void *a, void *b);
extern void func_01ffba84(void *a, void *b);
extern void func_020f52cc(void *a, void *b);
extern void func_020bd13c(void *p);

extern u32 data_0213d1e0;
extern u8 **data_0213d1d0;
extern u8 data_027e1160;
extern u32 data_027e1e0c[];
extern u8 data_027e1ec8;

typedef s32 (*Fn)(u8 *);

void func_0204a9b8(void) {
    u32 i;
    u32 tmp[17];
    u8 *r9;
    u8 *t;

    for (i = 0; i < data_0213d1e0;) {
        t = data_0213d1d0[i];
        if (((Fn) * (u32 *) (t + 0x3c))(t) != 0) {
            t                            = data_0213d1d0[i];
            data_0213d1e0                = data_0213d1e0 - 1;
            data_0213d1d0[i]             = data_0213d1d0[data_0213d1e0];
            data_0213d1d0[data_0213d1e0] = t;
        } else {
            r9 = data_0213d1d0[i];
            func_020ee65c(r9 + 0x18);
            func_020ee684(r9);
            func_020fc69c(&data_027e1160, tmp);
            func_01ffba84(tmp, r9 + 0x24);
            func_020f52cc(tmp, &data_027e1ec8);
            data_027e1e0c[0x3f] &= ~0xA4u;
            func_020bd13c(*(u8 **) (r9 + 0x40) + 0x48 + r9[0x44] * 0xC0);
            i++;
        }
    }
}
