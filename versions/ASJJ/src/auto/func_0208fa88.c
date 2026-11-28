/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213e0a8;

void func_020269fc(void *, void *);
void func_0201c9f0(void *);
void func_0202755c(void *);
void func_0201d10c(void *);
void *func_02014ea4(void *, void *);
void func_020117e8(void *, s32, void *, void *);
void func_02018ac4(void *);
s32 func_0208b640(void *, s32);

s32 func_0208fa88(u8 *arg0, s32 arg1) {
    u8 f[0x108];
    u8 *base;
    u8 *r5;
    u8 *r4;
    s32 v1;
    s32 k = 0x1000;

    if (arg0[arg1 + 0x10] == 0x52) {
        base = *(u8 **) &data_0213e0a8;
        r5   = *(u8 **) (base + 0xF8);
        func_020269fc(f + 0xBC, base);
        func_0201c9f0(f + 0x14);
        func_0202755c(f + 0x48);
        func_0201d10c(f + 0x80);
        r4                  = func_02014ea4(*(void **) (arg0 + 0x4), r5 + 0x78);
        *(u16 *) (f + 0xB0) = 0x1A;
        *(s32 *) (f + 0xA0) = (s32) r5;
        *(u8 *) (f + 0xB3)  = 0;
        func_020117e8(r5, 3, f + 0x80, 0);
        *(u16 *) (f + 0xD8) = 0;
        *(s32 *) (f + 0xCC) = *(s32 *) (arg0 + 0x4);
        *(u16 *) (f + 0xEC) = 0x19;
        func_020117e8(r5, 8, f + 0xBC, 0);
        *(u16 *) (f + 0xB0) = 0x18;
        func_020117e8(r5, 3, f + 0x80, 0);
        *(s32 *) (f + 0x58) = 0x28;
        *(s32 *) (f + 0x5C) = 1;
        func_020117e8(r5, 0x37, f + 0x48, 0);
        v1                  = *(s32 *) (r4 + 0x4);
        *(s32 *) (f + 0x8)  = v1;
        *(s32 *) (f + 0x24) = v1;
        v1                  = *(s32 *) (r4 + 0x8);
        *(s32 *) (f + 0xC)  = v1;
        *(s32 *) (f + 0x28) = v1;
        r4                  = *(u8 **) (r4 + 0xC);
        *(s32 *) (f + 0x10) = (s32) r4;
        *(s32 *) (f + 0x2C) = (s32) r4;
        *(s32 *) (f + 0x0)  = k;
        *(s32 *) (f + 0x4)  = k;
        *(s32 *) (f + 0x38) = k;
        *(u8 *) (f + 0x42)  = 0;
        func_020117e8(r5, 0x1B, f + 0x14, 0);
        func_02018ac4(f + 0x80);
        func_02018ac4(f + 0x48);
        func_02018ac4(f + 0x14);
        func_02018ac4(f + 0xBC);
        return 6;
    }
    return func_0208b640(arg0, arg1);
}
