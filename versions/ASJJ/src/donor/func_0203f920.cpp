/* compiler: 1.2/sp2p3  */
/* func_0203f8b8 from sims-2-the/src/auto/func_0203f8b8.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef struct {
    s32 v;
} W;
struct Obj {
    virtual void f0();
    virtual void f1();
    virtual void f2(void *a);
    u8 pad[0x30];
};
extern "C" {
extern void func_0203f690(void *, W, s32, s32);
extern u8 data_0213971c[];
extern s32 data_027e0000;
void *func_0203f920(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    W z;

    *(s32 *) arg0          = arg3;
    *(s32 *) (arg0 + 4)    = arg1;
    *(s32 *) (arg0 + 8)    = arg2;
    *(s32 *) (arg0 + 0x10) = arg4;
    *(s8 *) (arg0 + 0x14)  = 1;
    z.v                    = 0;
    func_0203f690(arg0, z, 1, z.v);
    ((Obj *) (data_0213971c + data_027e0000 * 0x34))->f2(arg0);
    return arg0;
}
}
