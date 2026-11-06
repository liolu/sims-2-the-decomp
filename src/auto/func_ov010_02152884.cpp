/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9(s32);
};
extern "C" {

typedef struct {
    u16 v;
} Fh;
typedef struct {
    s32 v;
} F32;
typedef struct {
    s32 x;
    s32 y;
} Vec;
typedef struct {
    u16 a;
    u16 b;
} S16;
typedef struct {
    u8 a;
    u8 b;
    u8 c;
    u8 d;
} S8;

extern u8 data_ov010_02152d94;
extern u8 data_ov010_02152d90;
extern u8 data_ov010_02152d98;
extern u8 data_0212fff8;
extern u8 *data_02139fa4;

void func_0203d208(s32, Fh);
void func_0203cc08(s32, s32);
void func_0203e23c(s32, s32, s32, s32, s32, s32, S16, S8, s32);
void func_02051b80(Fh);
void func_02051a50(s32, s32, s32);
u8 *func_02052258(s32);
void func_0205166c(s32, s32, s32, s32, s32, s32);
void func_0203f144(s32, s32, s32);
u8 *func_0204688c(s32, s32, s32);
void func_02017768(u8 *, s32);
void func_020172bc(u8 *, F32);

void func_ov010_02152884(u8 *arg0) {
    Fh h14;
    s32 fr[8];
    S8 *p8;
    S16 *p16;
    u8 *p;
    u8 *r4;
    s32 v;

    func_0203d208(3, *(Fh *) &data_ov010_02152d94);
    h14 = *(Fh *) &data_ov010_02152d90;
    func_0203d208(0, h14);
    func_0203cc08(0, 0);
    p8     = (S8 *) &fr[6];
    p8->a  = 0;
    p8->b  = 0;
    p8->c  = 0;
    p8->d  = 0;
    p16    = (S16 *) &fr[5];
    p16->a = 0;
    p16->b = 0;
    func_0203e23c(3, 0x1040, 1, 0, 0, 0, *(S16 *) &fr[5], *(S8 *) &fr[6], 0);
    func_02051b80(h14);
    func_02051a50(3, 0, 0);
    func_0205166c(1, 0x80, 0x20, 0xf0, (s32) func_02052258(0x6b3), 1);
    p = *(u8 **) (data_02139fa4 + 0xda8);
    v = p ? *(s32 *) (p + 4) : 0x32;
    if (v != 2) {
        return;
    }
    func_0203f144(0x1a39, 0x10, 0x10);
    func_0203f144(0x1a36, 0x20, 0x10);
    r4 = func_0204688c(0xa0, 3, 4);
    if (r4 != 0) {
        func_02017768(r4, 0);
        *(u8 **) r4          = &data_0212fff8;
        *(u8 **) (r4 + 0x90) = &data_ov010_02152d98;
        *(s32 *) (r4 + 0x94) = 1;
        *(s32 *) (r4 + 0x98) = 0;
        r4[0x9c]             = 1;
        r4[0x9d]             = 0;
        ((VA *) r4)->f9(r4[0x9d]);
    }
    *(u8 **) (arg0 + 0x24) = r4;
    ((F32 *) (&fr[0]))->v  = 0x20000;
    func_020172bc(*(u8 **) (arg0 + 0x24), *(F32 *) (&fr[0]));
    ((Vec *) (&fr[1]))->x                    = 0xee000;
    ((Vec *) (&fr[3]))->x                    = 0xee000;
    *(s32 *) (*(u8 **) (arg0 + 0x24) + 0x50) = 0xee000;
    ((Vec *) (&fr[1]))->y                    = 0xae000;
    ((Vec *) (&fr[3]))->y                    = 0xae000;
    *(s32 *) (*(u8 **) (arg0 + 0x24) + 0x54) = 0xae000;
}
}
