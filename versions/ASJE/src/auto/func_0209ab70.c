/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_027e0000;
extern u8 data_0213e440;

void func_020117e8(void *obj, s32 kind, void *buf, s32 zero);
void *func_02014eac(void *a, void *b);
void func_02018acc(void *p);
void func_02019cdc(void *p);
void func_0201c990(void *p);
void func_0202693c(void *p);
void func_020274a4(void *p);
s32 func_0208b6dc(void *a, s32 b);

typedef struct {
    volatile s32 s1[2];
    volatile s32 v1[3];
    volatile s32 v2[3];
    u8 buf20[0x38];
    u8 buf58[0x30];
    u8 buf88[0x34];
    u8 bufBC[0x48];
} Fr;

s32 func_0209ab70(u8 *arg0, s32 arg1) {
    Fr f;
    u8 *obj;
    s32 *v;
    s32 *r;
    s32 t0, t1, t2;

    if (*(u8 *) (arg0 + arg1 + 0x10) == 0x1c) {
        if (*(s32 *) &data_027e0000 == 0) {
            *(s32 *) &data_027e0000 = 1;
        } else {
            *(s32 *) &data_027e0000 = 0;
        }
        obj                                    = *(u8 **) &data_0213e440;
        obj                                    = *(u8 **) (obj + 0xf8);
        *(u8 **) (*(u8 **) (arg0 + 4) + 0x134) = obj;
        func_0202693c(f.bufBC);
        *(u8 **) (f.bufBC + 0x10) = *(u8 **) (arg0 + 4);
        *(s16 *) (f.bufBC + 0x1c) = 0;
        func_020117e8(obj, 8, f.bufBC, 0);
        func_020274a4(f.buf20);
        *(s32 *) (f.buf20 + 0x10) = 0x22;
        *(u8 **) (f.buf20 + 0x18) = *(u8 **) (arg0 + 4);
        func_020117e8(obj, 0x37, f.buf20, 0);
        func_02019cdc(f.buf58);
        v                         = (s32 *) (*(u8 **) (arg0 + 4) + 0x78);
        t0                        = v[0];
        f.v1[0]                   = t0;
        *(s32 *) (f.buf58 + 0x10) = t0;
        t1                        = v[1];
        f.v1[1]                   = t1;
        *(s32 *) (f.buf58 + 0x14) = t1;
        t2                        = v[2];
        f.v1[2]                   = t2;
        *(s32 *) (f.buf58 + 0x18) = t2;
        func_020117e8(obj, 0x10, f.buf58, 0);
        func_0201c990(f.buf88);
        f.s1[0]                   = 0x1000;
        f.s1[1]                   = 0x1000;
        *(s32 *) (f.buf88 + 0x24) = 0x1000;
        r                         = (s32 *) func_02014eac(*(u8 **) (arg0 + 4), obj + 0x78);
        v                         = r + 1;
        t0                        = v[0];
        f.v2[0]                   = t0;
        *(s32 *) (f.buf88 + 0x10) = t0;
        t1                        = v[1];
        f.v2[1]                   = t1;
        *(s32 *) (f.buf88 + 0x14) = t1;
        t2                        = v[2];
        f.v2[2]                   = t2;
        *(s32 *) (f.buf88 + 0x18) = t2;
        func_020117e8(obj, 0x1b, f.buf88, 0);
        if (*(s32 *) &data_027e0000 == 0) {
            *(s32 *) &data_027e0000 = 1;
        } else {
            *(s32 *) &data_027e0000 = 0;
        }
        func_02018acc(f.buf88);
        func_02018acc(f.buf58);
        func_02018acc(f.buf20);
        func_02018acc(f.bufBC);
        return 6;
    }
    return func_0208b6dc(arg0, arg1);
}
