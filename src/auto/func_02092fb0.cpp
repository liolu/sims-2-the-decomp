/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
};
extern "C" {

extern s32 data_027e0000;
extern s32 data_0213e434;
extern u8 data_0213e580;

void func_02074538(...);
void func_02019684(...);
void func_02026be8(...);
void func_0201d56c(...);
void func_020117e8(...);
void func_0201d124(...);
void func_02018acc(...);
void func_02019cdc(...);

s32 func_02092fb0(u8 *arg0, s32 arg1) {
    u8 fr[0xd0];
    u8 *q;
    u8 *obj;
    u8 *v0p;
    void **vt;
    s32 v0;
    s32 v1;
    s32 v2;

    s32 ret;

    if (*(u8 *) (arg0 + arg1 + 0x10) == 0x53) {
        if (data_027e0000 == 0) {
            data_027e0000 = 1;
        } else {
            data_027e0000 = 0;
        }
        func_02074538(data_0213e434 + 0x45e4);
        func_02019684(fr + 0xc);
        q                             = *(u8 **) (arg0 + 4);
        *(volatile s32 *) (fr + 0x1c) = (s32) q;
        func_02026be8(fr + 0x24, q);
        func_0201d56c(fr + 0x40);
        *(volatile s32 *) (fr + 0x34) = 0;
        obj                           = *(u8 **) (*(u8 **) &data_0213e580 + 0xf8);
        func_020117e8(obj, 0x26, fr + 0x24, 0);
        func_0201d124(fr + 0x64);
        *(volatile u16 *) (fr + 0x94) = 0xbc;
        obj                           = *(u8 **) (*(u8 **) &data_0213e580 + 0xf8);
        func_020117e8(obj, 3, fr + 0x64, 0);
        obj = *(u8 **) (*(u8 **) &data_0213e580 + 0xf8);
        func_020117e8(obj, 0x22, fr + 0x40, 0);
        obj = *(u8 **) (*(u8 **) &data_0213e580 + 0xf8);
        func_020117e8(obj, 0x1e, fr + 0xc, 0);
        *(volatile u16 *) (fr + 0x94) = 0xbd;
        obj                           = *(u8 **) (*(u8 **) &data_0213e580 + 0xf8);
        func_020117e8(obj, 3, fr + 0x64, 0);
        *(volatile u16 *) (fr + 0x50) = 0x120;
        obj                           = *(u8 **) (*(u8 **) &data_0213e580 + 0xf8);
        func_020117e8(obj, 0x22, fr + 0x40, 0);
        *(volatile u16 *) (fr + 0x94) = 0xbb;
        obj                           = *(u8 **) (*(u8 **) &data_0213e580 + 0xf8);
        func_020117e8(obj, 3, fr + 0x64, 0);
        func_02019cdc(fr + 0xa0);
        q                             = *(u8 **) (arg0 + 4);
        v0p                           = q + 0x78;
        v0                            = *(s32 *) (q + 0x78);
        *(volatile s32 *) (fr + 0)    = v0;
        *(volatile s32 *) (fr + 0xb0) = v0;
        v1                            = *(s32 *) (v0p + 4);
        *(volatile s32 *) (fr + 0x4)  = v1;
        *(volatile s32 *) (fr + 0xb4) = v1;
        v2                            = *(s32 *) (v0p + 8);
        *(volatile s32 *) (fr + 0x8)  = v2;
        *(volatile s32 *) (fr + 0xb8) = v2;
        obj                           = *(u8 **) (*(u8 **) &data_0213e580 + 0xf8);
        func_020117e8(obj, 0x10, fr + 0xa0, 0);
        if (data_027e0000 == 0) {
            data_027e0000 = 1;
        } else {
            data_027e0000 = 0;
        }
        *(s32 *) (arg0 + 8)   = 0;
        *(s32 *) (arg0 + 0xc) = 0;
        func_02018acc(fr + 0xa0);
        func_02018acc(fr + 0x64);
        func_02018acc(fr + 0x40);
        func_02018acc(fr + 0x24);
        func_02018acc(fr + 0xc);
        q                    = *(u8 **) (arg0 + 4);
        *(s32 *) (q + 0x130) = 0;
        if (arg0 != 0) {
            obj = arg0;
            ((VA *) obj)->f1();
        }
        ret = 6;
    } else {
        ret = 0;
    }
    return ret;
}
}
