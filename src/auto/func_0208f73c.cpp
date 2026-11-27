/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" {
extern u8 *data_0213e434;
extern u32 data_02139fa4;
extern u8 *data_0213e580;
extern u32 data_027e0000;

void func_0205871c(...);
s32 func_02081f88(...);
void func_02083dc8(...);
void func_0201d56c(...);
void func_020117e8(...);
void func_0201d124(...);
void func_02019cdc(...);
void func_02018acc(...);

s32 func_0208f73c(u8 *a0, s32 a1) {
    u8 fr[0xA0];
    u8 *g;
    u8 *q;
    s32 *p;
    s32 w0, w1, w2;
    s32 fz = 0;

    if (a0[a1 + 0x10] == 1) {
        g = data_0213e434;
        if (*(s32 *) (g + 0x215C) >= 6) {
            func_0205871c(data_02139fa4, 0x98B, 0x98A, 0, 0, 1);
            return fz;
        }
        *(s32 *) (a0 + 8)   = 0;
        *(s32 *) (a0 + 0xC) = 0;
        if (func_02081f88(data_0213e434 + 0x21DC, 0x867, -1) != 0) {
            func_02083dc8(data_0213e434 + 0x18, 0xFD);
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
            func_0201d56c(fr + 0x0C);
            func_020117e8(*(u32 *) (data_0213e580 + 0xF8), 0x22, fr + 0x0C, 0);
            func_0201d124(fr + 0x30);
            *(u16 *) (fr + 0x60) = 0x50;
            func_020117e8(*(u32 *) (data_0213e580 + 0xF8), 3, fr + 0x30, 0);
            *(s32 *) (fr + 0x20) = *(s32 *) (a0 + 4);
            func_020117e8(*(u32 *) (data_0213e580 + 0xF8), 0x22, fr + 0x0C, 0);
            func_02019cdc(fr + 0x6C);
            q                    = *(u8 **) (a0 + 4);
            p                    = (s32 *) (q + 0x78);
            w0                   = p[0];
            *(s32 *) (fr + 0x00) = w0;
            *(s32 *) (fr + 0x7C) = w0;
            w1                   = p[1];
            *(s32 *) (fr + 0x04) = w1;
            *(s32 *) (fr + 0x80) = w1;
            w2                   = p[2];
            *(s32 *) (fr + 0x08) = w2;
            *(s32 *) (fr + 0x84) = w2;
            func_020117e8(*(u32 *) (data_0213e580 + 0xF8), 0x10, fr + 0x6C, 0);
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
            func_02018acc(fr + 0x6C);
            func_02018acc(fr + 0x30);
            func_02018acc(fr + 0x0C);
        }
        *(s32 *) (*(u8 **) (a0 + 4) + 0x130) = 0;
        if (a0 != 0) {
            ((VA *) a0)->f1();
        }
        return fz;
    }
    return 0;
}
}
