/* compiler: 1.2/sp2p3  */
/* func_020248c4 from sims-2-the/src/auto/func_020248c4.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef long s32;
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(int);
};
extern "C" {
extern void func_02018734(...);
extern void func_02018aa0(...);
extern void func_02018ad0(...);
extern int data_02130508;
void *func_0202484c(void *arg0, void *arg1) {
    u8 *p = (u8 *) arg0;
    func_02018734(arg0, arg1, p + 0x18);
    u8 *q       = p + 0x18;
    *(int **) p = &data_02130508;
    func_02018ad0(q);
    func_02018aa0(q, 0x2F);
    *(s32 *) (p + 0x30) = 0;
    *(s32 *) (p + 0x34) = 0;
    *(s32 *) (p + 0x38) = 0;
    *(s16 *) (p + 0x10) = 0x2F;
    ((VA *) arg0)->f3(*(s32 *) ((u8 *) arg1 + 4));
    p[0x28]             = 0;
    *(s8 *) (p + 0x29)  = -1;
    p[0x2B]             = 0;
    p[0x3C]             = 0;
    p[0x2C]             = 0;
    p[0x3D]             = 0;
    p[0x41]             = 0;
    p[0x3E]             = 0;
    p[0x3F]             = 0;
    p[0x40]             = 0;
    *(s32 *) (p + 0x44) = 0;
    *(s16 *) (p + 0x48) = 0;
    return arg0;
}
}
