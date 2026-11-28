/* compiler: 1.2/sp2p3  */
/* func_0206e4f4 from sims-2-the/src/auto/func_0206e4f4.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef struct {
    s32 v;
} W;
struct VA {
    virtual void f0();
    virtual void f1();
    virtual s32 f2(u8 *, W, W);
};
extern "C" {
extern void func_020165b4(u8 *arg0, s32 arg1);
extern void func_0206f23c(u32 arg0, u32 arg1);
void func_0206e508(u8 *arg0) {
    VA *obj = *(VA **) (arg0 + 0x74);
    s32 n;

    if (obj->f2(arg0, *(W *) (arg0 + 0x80), *(W *) (arg0 + 0x84)) != 0) {
        func_020165b4(arg0, 1);
        n                      = *(s32 *) (arg0 + 0x94);
        *(s32 *) (arg0 + 0x94) = n - 1;
        if (n != 0) {
            return;
        }
        func_0206f23c(*(u32 *) (arg0 + 0x90), *(u16 *) (arg0 + 0xA));
        *(s32 *) (arg0 + 0x94) = 4;
        return;
    }
    func_020165b4(arg0, 0);
    *(s32 *) (arg0 + 0x94) = 0;
}
}
