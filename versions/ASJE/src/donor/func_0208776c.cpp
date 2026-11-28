/* compiler: 1.2/sp2p3  */
/* func_020877e4 from sims-2-the/src/auto/func_020877e4.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2(void *);
};
extern "C" {
extern s32 func_020daadc(void *);
extern struct VA *func_0200b8ac(void *);
extern void func_020d9910(void *, void *, void *);
extern void func_020dad0c(void *, void *);
extern void func_020dad14(void *, void *);
extern void func_020dac14(void *, void *, void *, s32);
typedef struct {

    volatile s32 w[17];
    s32 a[6];
    s32 in[3];
    s32 out[3];
} FR;
void func_0208776c(void *arg0, void *arg1) {
    FR f;
    u8 *r5 = (u8 *) arg0;
    u8 *r4 = (u8 *) arg1;
    u8 *temp;
    struct VA *r6;
    s32 r3;
    s32 r2;
    s32 z;
    s32 z2;
    s32 m;
    enum {
        ZZ = 0
    } zz;
    enum {
        ZY = 0
    } zy;
    s32 t1;
    s32 t2;
    s32 t3;

    temp = *(u8 **) (r5 + 0xfc);
    if (temp == ((void *) 0)) {
        return;
    }
    if (*(s32 *) (temp + 0x38) == 0) {
        return;
    }
    if (func_020daadc(r4 + 0x34) == 0 && (*(u32 *) (r4 + 4) & 0x40000) != 0x40000) {
        if (*(s32 *) (r5 + 0xf4) == 0x13) {
            m                    = -0x800;
            f.w[0]               = m;
            f.w[2]               = m;
            *(s32 *) (r4 + 0x14) = m;
        } else {
            m                    = -0x300;
            f.w[1]               = m;
            f.w[3]               = m;
            *(s32 *) (r4 + 0x14) = m;
        }
    }
    zz     = ZZ;
    z      = zz;
    f.w[4] = z;
    f.w[9] = z;
    r3     = 1;
    r2     = r3;
    if (*(s32 *) (r4 + 0x10) == z) {
        f.w[5]  = z;
        f.w[10] = z;
        if (*(s32 *) (r4 + 0x14) == z) {
            r2 = z;
        }
    }
    if (r2 == 0) {
        zy      = ZY;
        z2      = zy;
        f.w[6]  = z2;
        f.w[11] = z2;
        if (*(s32 *) (r4 + 0x18) == z2) {
            r3 = z2;
        }
    }
    if (r3 == 0) {
        return;
    }
    r6 = func_0200b8ac(r4 + 0x24);
    if (r6 == ((void *) 0)) {
        return;
    }
    r6->f2((void *) &f.a[0]);
    func_020d9910((void *) &f.a[0], (void *) ((u8 *) r6 + 4), (void *) &f.a[0]);
    func_020dad0c(r4 + 0x34, (void *) &f.a[0]);
    if ((*(u32 *) (r4 + 4) & 0x100) != 0x100) {
        func_020dad14(r4 + 0x34, r6);
    }
    t1      = *(s32 *) (r4 + 0x10);
    f.w[14] = t1;
    f.in[0] = t1;
    t2      = *(s32 *) (r4 + 0x14);
    f.w[15] = t2;
    f.in[1] = t2;
    t3      = *(s32 *) (r4 + 0x18);
    f.w[16] = t3;
    f.in[2] = t3;
    func_020dac14((void *) &f.out[0], r4 + 0x34, r4 + 0x10, *(s32 *) (*(u8 **) (r5 + 0xfc) + 0x38));
    *(s32 *) (r4 + 0x10) = f.out[0];
    t2                   = f.out[1];
    f.w[12]              = t2;
    *(s32 *) (r4 + 0x14) = t2;
    t3                   = f.out[2];
    f.w[13]              = t3;
    *(s32 *) (r4 + 0x18) = t3;
    if (*(u16 *) (r4 + 0xa) != 0x37) {
        return;
    }
    t1                   = f.in[0];
    f.w[7]               = t1;
    *(s32 *) (r4 + 0x10) = t1;
    t3                   = f.in[2];
    f.w[8]               = t3;
    *(s32 *) (r4 + 0x18) = t3;
}
}
