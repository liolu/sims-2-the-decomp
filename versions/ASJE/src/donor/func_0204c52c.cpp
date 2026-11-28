/* compiler: 1.2/sp2p3  */
/* func_0204c5a4 from sims-2-the/src/auto/func_0204c5a4.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2(void *);
};
extern "C" {
extern s32 func_020f5d7c(s32, s32);
extern u8 data_0213d614[];
extern u8 data_0213d64c;
void *func_0204c52c(void *arg0, void *arg1, void *arg2, volatile s32 arg3, volatile s32 arg4, ...) {
    volatile s32 fr[14];
    u8 *p = (u8 *) arg0;
    s32 a, g, h;

    *(s32 *) (p + 0)    = 0;
    *(s32 *) (p + 4)    = 0;
    *(s32 *) (p + 8)    = 0;
    *(s32 *) (p + 0xc)  = 0;
    *(s32 *) (p + 0x10) = 0;
    *(s32 *) (p + 0x14) = 0;
    if (data_0213d64c > 0x19) {
        return arg0;
    }
    a                   = *(s32 *) ((u8 *) arg1 + 0);
    fr[5]               = a;
    *(s32 *) (p + 0)    = a;
    a                   = *(s32 *) ((u8 *) arg1 + 4);
    fr[6]               = a;
    *(s32 *) (p + 4)    = a;
    a                   = *(s32 *) ((u8 *) arg1 + 8);
    fr[7]               = a;
    *(s32 *) (p + 8)    = a;
    a                   = *(s32 *) ((u8 *) arg2 + 0);
    fr[8]               = a;
    *(s32 *) (p + 0xc)  = a;
    a                   = *(s32 *) ((u8 *) arg2 + 4);
    fr[9]               = a;
    *(s32 *) (p + 0x10) = a;
    a                   = *(s32 *) ((u8 *) arg2 + 8);
    fr[10]              = a;
    *(s32 *) (p + 0x14) = a;
    *(s32 *) (p + 0x18) = arg3;
    *(s32 *) (p + 0x1c) = arg4;
    g                   = func_020f5d7c(0x1000, arg3);
    fr[0]               = g;
    fr[3]               = g;
    *(s32 *) (p + 0x20) = g;
    h                   = *(s32 *) (p + 0x1c);
    fr[11]              = h;
    a                   = *(s32 *) (p + 0x18) - h;
    fr[2]               = a;
    fr[12]              = a;
    g                   = func_020f5d7c(0x1000, a);
    fr[1]               = g;
    fr[4]               = g;
    *(s32 *) (p + 0x24) = g;
    ((VA *) data_0213d614)->f2(arg0);
    data_0213d64c++;
    return arg0;
}
}
