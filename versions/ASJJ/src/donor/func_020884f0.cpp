/* compiler: 1.2/sp2p3  */
/* func_02088610 from sims-2-the/src/auto/func_02088610.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
struct VC0 {
    virtual void f0();
    virtual void f1();
};
extern "C" {
extern void func_02011090(...);
extern void func_020117d0(...);
extern void *func_02014c28(...);
extern void *func_020468a0(...);
extern void func_02088174(...);
extern void func_0208824c(...);
void func_020884f0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4) {
    s32 var_r4;
    s32 var_r9;
    u32 b;
    u32 a2;
    void *o;
    u8 *var_r0;
    u8 *r1;
    u8 *r2;

    b = (u32) (*(u16 *) (arg0 + 4) << 0x1F) >> 0x1F;
    if (b != 0 && b == 1) {
        o = *(void **) arg0;
        if (o != ((void *) 0)) {
            if (o != ((void *) 0)) {
                ((VC0 *) o)->f1();
            }
            *(void **) arg0 = 0;
        }
        *(u16 *) (arg0 + 4) = (u16) (*(u16 *) (arg0 + 4) & ~1);
    }
    var_r4 = 0x135;
    switch (arg2) {
        case 3:
            var_r4 = 0;
            var_r9 = arg3 + 0x10B;
            break;
        default:
            var_r9 = 0x10A;
            break;
    }
    var_r0 = (u8 *) func_020468a0(0x214, 3, 4);
    if (var_r0 != ((void *) 0)) {
        var_r0 = (u8 *) func_02014c28(var_r0, var_r9);
    }
    *(u8 **) arg0 = var_r0;
    r1            = *(u8 **) arg0;
    if (r1 == ((void *) 0)) {
        return;
    }
    *(s16 *) (r1 + 0xC) = 0xE;
    r2                  = *(u8 **) arg0;
    *(s32 *) (r2 + 4)   = *(s32 *) (r2 + 4) & ~4;
    func_020117d0(*(void **) arg0, 0);
    if (var_r4 != 0x135) {
        func_02011090(*(void **) arg0, var_r4, 0, 1, 0);
    }
    a2                  = (u16) arg2;
    *(u16 *) (arg0 + 4) = (u16) ((*(u16 *) (arg0 + 4) & ~1) | 1);
    *(u16 *) (arg0 + 4) = (u16) ((*(u16 *) (arg0 + 4) & ~0x1E) | ((a2 & 0xF) * 2));
    *(s16 *) (arg0 + 6) = arg3;
    *(u16 *) (arg0 + 8) = arg4;
    if (((u32) (*(u16 *) (arg0 + 4) << 0x1B) >> 0x1C) == 1) {
        *(s16 *) (arg0 + 0xA) = 0x10;
    }
    func_02088174(arg0, arg1 + 0x78);
    func_0208824c(arg0);
}
}
