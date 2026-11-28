/* compiler: 1.2/sp2p3  */
/* func_0202df6c from sims-2-the/src/auto/func_0202df6c.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
struct VA {
    virtual void f0();
    virtual void f1();
};
extern "C" {
extern void func_020117e8(...);
extern void func_02018acc(...);
extern void func_02037934(...);
extern void *data_02139e64;
extern void *data_0213e440;
void func_0202def4(void *arg0) {
    s32 buf[8];
    VA *o;
    s32 a;
    s32 b;
    if (*(u8 *) ((u8 *) arg0 + 0x2D) == 0) {
        return;
    }
    if (*(s32 *) ((u8 *) data_02139e64 + 8) != 0) {
        return;
    }
    func_02037934(buf);
    a      = 7;
    b      = 14;
    buf[4] = a;
    buf[5] = b;
    func_020117e8(*(s32 *) ((u8 *) data_0213e440 + 0xF8), 0x33, buf, 0);
    *(s8 *) ((u8 *) arg0 + 0x13) = 1;
    o                            = *(VA **) ((u8 *) (*(void **) ((u8 *) arg0 + 4)) + 0x130);
    if (o != ((void *) 0)) {
        if (o != ((void *) 0)) {
            o->f1();
        }
    }
    func_02018acc(buf);
}
}
