/* compiler: 1.2/sp2p3  */
/* func_0203f878 from sims-2-the/src/auto/func_0203f878.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32);
};
extern "C" {
extern s32 data_027e0000;
extern u8 data_0213971c[];
s32 func_0203f8e0(s32 arg0) {
    VA *o = (VA *) (data_0213971c + data_027e0000 * 0x34);
    o->f3(arg0);
    return arg0;
}
}
