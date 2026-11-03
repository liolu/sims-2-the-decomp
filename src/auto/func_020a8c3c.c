/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} V3w;

M2C_UNK func_02046844();
M2C_UNK func_0204681c(void *);
M2C_UNK func_020d508c();

void func_020a8c3c(void *arg0) {
    u8 *a;
    u8 *obj1;
    u8 *d;
    u8 *obj2;
    u8 *d2;
    void **tbl;
    s32 i;

    a                      = (u8 *) arg0;
    obj1                   = *(u8 **) (*(u8 **) (a + 0x99C));
    d                      = obj1 + 0x24;
    *(s32 *) (obj1 + 0x24) = *(s32 *) (a + 0x9F0);
    d[4]                   = a[0x9F4];
    d[5]                   = a[0x9F5];
    d[6]                   = a[0x9F6];
    d[7]                   = a[0x9F7];
    *(s32 *) (d + 8)       = *(s32 *) (a + 0x9F8);
    *(s32 *) (d + 0xC)     = *(s32 *) (a + 0x9FC);
    *(s32 *) (d + 0x10)    = *(s32 *) (a + 0xA00);
    *(s32 *) (d + 0x14)    = *(s32 *) (a + 0xA04);
    *(s32 *) (d + 0x18)    = *(s32 *) (a + 0xA08);
    *(s32 *) (d + 0x1C)    = *(s32 *) (a + 0xA0C);
    d[0x20]                = a[0xA10];
    d[0x21]                = a[0xA11];
    d[0x22]                = a[0xA12];
    d[0x23]                = a[0xA13];
    obj2                   = *(u8 **) (*(u8 **) (a + 0x99C) + 4);
    obj2[0xA0]             = a[0xA14];
    d2                     = obj2 + 0xA0;
    d2[1]                  = a[0xA15];
    d2[2]                  = a[0xA16];
    d2[3]                  = a[0xA17];
    *(u16 *) (d2 + 4)      = *(u16 *) (a + 0xA18);
    *(s8 *) (d2 + 6)       = *(s8 *) (a + 0xA1A);
    d2[7]                  = a[0xA1B];
    d2[8]                  = a[0xA1C];
    d2[9]                  = a[0xA1D];
    d2[0xA]                = a[0xA1E];
    d2[0xB]                = a[0xA1F];
    *(s32 *) (d2 + 0xC)    = *(s32 *) (a + 0xA20);
    *(s32 *) (d2 + 0x10)   = *(s32 *) (a + 0xA24);
    *(V3w *) (d2 + 0x14)   = *(V3w *) (a + 0xA28);
    tbl                    = *(void ***) (a + 0x9A8);
    for (i = 0; i < 5; i++) {
        if (tbl[i] != NULL) {
            func_02046844();
        }
    }
    func_0204681c(tbl);
    *(s32 *) (a + 0x9A8) = 0;
    func_020d508c();
}
