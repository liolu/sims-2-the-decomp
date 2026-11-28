/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Ent {
    s32 a;
    s32 b;
    s32 w;
} Ent;
typedef struct Nd {
    s32 p[4];
    Ent *e;
} Nd;

struct VO {
    virtual void f0();
    virtual void f1();
    virtual void f2(void *p);
    virtual void f3();
    virtual void f4(void *p);
};

extern "C" void func_020432a0(Nd **p);
extern "C" s32 func_02045620(void *p);
extern "C" s32 **func_02045630(void *p);
extern "C" void func_02043000(void *a, void *b);
extern "C" void func_020464b0(s32 k);
extern "C" void func_02046858(void *p);

extern "C" void func_02042c6c(u8 *arg0, s32 arg1) {
    Nd *sp0;
    Ent *temp_r1;
    s32 temp_r2;
    s32 n;
    s32 **r4;
    s32 *r7;

    sp0 = *(Nd **) (arg0 + 8);
    if ((u8 *) sp0 == arg0 + 4) {
        goto end1;
    }
    do {
        temp_r1 = sp0->e;
        temp_r2 = temp_r1->w;
        if ((((u32) (temp_r2 << 8)) >> 31) == 0) {
            if (arg1 == 0) {
                n = (s32) (((u32) (temp_r2 << 9)) >> 25);
                if (n != 0) {
                    n          = n - 1;
                    temp_r1->w = (temp_r2 & ~0x7F0000) | ((n & 0x7F) << 16);
                    goto skip;
                }
            }
            ((VO *) (arg0 + 12))->f2(temp_r1);
        }
    skip:
        func_020432a0(&sp0);
    } while ((u8 *) sp0 != arg0 + 4);

end1:
    if (func_02045620(arg0 + 12) == 0) {
        return;
    }
    do {
        r4 = func_02045630(arg0 + 12);
        r7 = *r4;
        func_02043000(arg0, (u8 *) r7 + 8);
        func_020464b0(*r7);
        func_02046858(r7);
        ((VO *) (arg0 + 12))->f4(r4);
    } while (func_02045620(arg0 + 12) != 0);
}
