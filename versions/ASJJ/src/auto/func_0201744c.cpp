/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern "C" void *data_02139a84;
extern "C" s32 data_027e0000;
extern "C" void *data_0213d43c;
extern "C" void *data_0213df5c;
extern "C" void func_02016c10(void *p);

struct W {
    s32 v;
};

struct VO02017454 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
};

struct VA02017454 {
    virtual void f0();
    virtual void f1();
    virtual s32 f2(void *p, W a, W b);
};

extern "C" void func_0201744c(u8 *arg0) {
    volatile s32 sp[6];
    u8 *p1;
    u8 *m;
    u8 *p2;
    s32 x;
    s32 y;
    s32 r;
    s32 st;
    s32 w;
    s32 z;

    p1 = (u8 *) data_02139a84;
    if (*(s32 *) (p1 + (data_027e0000 << 5) + 0xdf0) != 0x32) {
        return;
    }
    m = (u8 *) data_0213d43c;
    if ((((u32) (m[0] << 29)) >> 31) != 0) {
        x                      = (s32) (*(u16 *) (m + 0x2a) << 12);
        sp[0]                  = x;
        sp[2]                  = x;
        *(s32 *) (arg0 + 0x80) = x;
        y                      = (s32) (*(u16 *) ((u8 *) data_0213d43c + 0x2c) << 12);
        sp[1]                  = y;
        sp[3]                  = y;
        *(s32 *) (arg0 + 0x84) = y;
        st                     = *(s32 *) (arg0 + 0x88);
        switch (st) {
            case 1:
                ((VO02017454 *) arg0)->f6();
                break;
            case 0:
                r = ((VA02017454 *) *(u8 **) (arg0 + 0x74))->f2(arg0, *(W *) (arg0 + 0x80), *(W *) (arg0 + 0x84));
                if (r == 0) {
                    *(s32 *) (arg0 + 0x88) = 2;
                } else {
                    x                      = *(s32 *) (arg0 + 0x80);
                    sp[4]                  = x;
                    *(s32 *) (arg0 + 0x78) = x;
                    y                      = *(s32 *) (arg0 + 0x84);
                    sp[5]                  = y;
                    *(s32 *) (arg0 + 0x7c) = y;
                    ((VO02017454 *) arg0)->f5();
                    *(s32 *) (arg0 + 0x88) = 1;
                }
                break;
            case 2:
                break;
        }
        goto done;
    }
    if (*(s32 *) (p1 + 0xdf0) != 0x32) {
        goto done;
    }
    if (*(s32 *) (p1 + 0xe10) != 0x32) {
        goto done;
    }
    p2 = (u8 *) data_0213df5c;
    w  = *(s32 *) p2;
    if ((w & 0x40) == 0 && (w & 0x80) == 0) {
        goto L20b4;
    }
    z = *(s32 *) (*(u8 *volatile *) &data_02139a84 + 0xdac);
    if (z != 0) {
        z = *(s32 *) ((u8 *) z + 4);
    } else {
        z = 0x32;
    }
    if (z == 0xc) {
        goto done;
    }
L20b4:
    st = *(s32 *) (arg0 + 0x88);
    if (st == 1) {
        ((VO02017454 *) arg0)->f7();
        r = ((VA02017454 *) *(u8 **) (arg0 + 0x74))->f2(arg0, *(W *) (arg0 + 0x80), *(W *) (arg0 + 0x84));
        if (r != 0) {
            arg0[0x8c] = 1;
            ((VO02017454 *) arg0)->f8();
        }
    }
    *(s32 *) (arg0 + 0x88) = 0;
done:
    func_02016c10(arg0);
}
