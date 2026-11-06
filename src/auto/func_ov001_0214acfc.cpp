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
    virtual void f9(s32 a);
};

extern "C" {

typedef struct {
    u16 v;
} W16;
typedef struct {
    s32 v;
} W32;
typedef struct {
    u16 a, b;
} S16;
typedef struct {
    u8 a, b, c, d;
} S8;

extern u8 data_ov001_0214b0f4;
extern u8 data_ov001_0214b100;
extern u8 data_ov001_0214b0fc;
extern u8 data_ov001_0214b0f8;
extern u8 *data_0213e434;
extern u8 data_0212fff8;
extern u8 data_ov001_0214b104;

void func_0203cfb0(s32);
void func_0203cec4(s32);
void func_0203d208(s32, W16);
void func_0203e23c(s32, s32, s32, s32, s32, s32, S16, S8, s32);
void func_0203de9c(W16, s32, s32, s32, s32, s32, s32, S16, S8, s32);
void func_0203cc08(s32, s32);
void func_02051b80(W16);
void func_02051a50(s32, s32, s32);
u8 *func_02052258(s32);
void func_02051338(s32, s32, s32, u8 *, s32);
void func_0203c844(s32, s32, s32, s32, s32);
void func_020509d4(s32);
u8 *func_0204688c(s32, s32, s32);
void func_02017768(u8 *, s32);
void func_020172bc(u8 *, W32);
void func_ov001_02149b8c(u8 *);
void func_ov001_0214a980(u8 *);

void func_ov001_0214acfc(u8 *arg0) {
    u8 fr[0x30];
    u8 *pb;
    u16 *ph;
    u8 *o;

    func_0203cfb0(0);
    func_0203cec4(0x1000);
    func_0203d208(3, *(W16 *) &data_ov001_0214b0f4);
    pb    = fr + 0x1c;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    ph    = (u16 *) (fr + 0x18);
    ph[0] = 0;
    ph[1] = 0;
    func_0203e23c(3, 0x3C9, 1, 0, 0, 0, *(S16 *) (fr + 0x18), *(S8 *) (fr + 0x1c), 0);
    pb    = fr + 0x24;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    ph    = (u16 *) (fr + 0x20);
    ph[0] = 0;
    ph[1] = 0;
    func_0203de9c(*(W16 *) &data_ov001_0214b100, 0x3C8, 1, 0, 0, 0, 0, *(S16 *) (fr + 0x20), *(S8 *) (fr + 0x24), 0);
    pb    = fr + 0x2c;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    ph    = (u16 *) (fr + 0x28);
    ph[0] = 0;
    ph[1] = 0;
    func_0203de9c(*(W16 *) &data_ov001_0214b0fc, 0x3C7, 1, 0, 0, 0, 0, *(S16 *) (fr + 0x28), *(S8 *) (fr + 0x2c), 0);
    *(u16 *) fr = *(u16 *) &data_ov001_0214b0f8;
    func_0203d208(0, *(W16 *) fr);
    func_0203cc08(0, 0);
    func_02051b80(*(W16 *) fr);
    func_02051a50(3, 0, 0);
    func_02051338(1, 0x80, 0xB, func_02052258(0x95A), 1);
    func_0203c844(0, 4, 4, 0x18, 2);
    func_020509d4(*(s32 *) (data_0213e434 + 0x2000 + 0xF60));
    func_02051338(0x40, 0x80, 0x24, func_02052258(0x95B), 1);
    o = func_0204688c(0xA0, 0, 4);
    if (o != 0) {
        func_02017768(o, 0);
        *(u8 **) o          = &data_0212fff8;
        *(u8 **) (o + 0x90) = &data_ov001_0214b104;
        *(s32 *) (o + 0x94) = 0;
        *(s32 *) (o + 0x98) = 0;
        o[0x9C]             = 1;
        o[0x9D]             = 0;
        ((VA *) o)->f9(o[0x9D]);
    }
    *(u8 **) (arg0 + 0x38)                   = o;
    *(s32 *) (fr + 4)                        = 0xEB000;
    *(s32 *) (fr + 16)                       = 0xEB000;
    *(s32 *) (*(u8 **) (arg0 + 0x38) + 0x50) = 0xEB000;
    *(s32 *) (fr + 8)                        = 0xAB000;
    *(s32 *) (fr + 20)                       = 0xAB000;
    *(s32 *) (*(u8 **) (arg0 + 0x38) + 0x54) = 0xAB000;
    *(s32 *) (fr + 12)                       = 0x10000;
    func_020172bc(*(u8 **) (arg0 + 0x38), *(W32 *) (fr + 12));
    func_ov001_02149b8c(arg0);
    func_ov001_0214a980(arg0);
}
}
