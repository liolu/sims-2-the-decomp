/* compiler: 1.2/sp2p3  */
/* func_02019100 from sims-2-the/src/auto/func_02019100.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};
extern "C" {
extern u8 data_0212fc88[];
extern void func_0201872c(...);
extern void func_02018ac8(u8 *arg0);
extern void func_02018a98(u8 *arg0, s32 arg1);
u8 *func_020190f8(u8 *arg0, u8 *arg1) {
    u8 *p;
    volatile s32 fr[2];
    func_0201872c(arg0, arg1, arg0 + 0x18);
    *(u32 *) arg0 = (u32) data_0212fc88;
    p             = arg0 + 0x18;
    func_02018ac8(p);
    func_02018a98(p, 2);
    *(u32 *) (p + 0x10)    = 0;
    fr[0]                  = 0xA000;
    fr[1]                  = 0xA000;
    *(u32 *) (p + 0x14)    = 0xA000;
    *(u32 *) (arg0 + 0x34) = 0;
    *(u32 *) (arg0 + 0x38) = 0;
    *(u32 *) (arg0 + 0x3C) = 0;
    *(u16 *) (arg0 + 0x10) = 2;
    ((VA *) arg0)->f3(*(s32 *) (arg1 + 4));
    *(u16 *) (arg0 + 0x40) = 0;
    return arg0;
}
}
