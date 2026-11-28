/* compiler: 1.2/sp2p3  */
/* func_02017f6c from sims-2-the/src/auto/func_02017f6c.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef struct {
    s32 v;
} W;
struct VB {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
};
struct VA {
    virtual void f0();
    virtual void f1();
    virtual s32 f2(u8 *self, W a, W b);
};
typedef struct {
    s32 w[12];
} FR;
extern "C" {
extern u8 *data_02139e64;
extern s32 data_027e0000;
extern u8 *data_0213d81c;
extern void func_02017ae8(u8 *self);
extern void func_02016c18(u8 *self);
extern void func_02017f6c(u8 *arg0);
}
extern "C" void func_02017f6c(u8 *arg0) {
    FR f;
    u8 *q;
    s32 st;
    s32 v1;
    s32 v2;
    s32 *pd;
    s32 t;
    VA *ob;

    if (*(s32 *) (data_02139e64 + (data_027e0000 << 5) + 0xdf0) != 0x32) {
        return;
    }
    q = data_0213d81c;
    if (((u32) (q[0] << 29)) >> 31) {
        v1                     = *(u16 *) (q + 0x2a) << 12;
        f.w[0]                 = v1;
        f.w[4]                 = v1;
        *(s32 *) (arg0 + 0x80) = v1;
        q                      = data_0213d81c;
        v2                     = *(u16 *) (q + 0x2c) << 12;
        f.w[1]                 = v2;
        f.w[5]                 = v2;
        *(s32 *) (arg0 + 0x84) = v2;
        st                     = *(s32 *) (arg0 + 0x88);
        switch (st) {
            case 1:
                func_02017ae8(arg0);
                ((VB *) arg0)->f6();
                break;
            case 0:
                ob = *(VA **) (arg0 + 0x74);
                if (ob->f2(arg0, *(W *) (arg0 + 0x80), *(W *) (arg0 + 0x84)) != 0) {
                    t                      = *(s32 *) (arg0 + 0x80);
                    f.w[6]                 = t;
                    *(s32 *) (arg0 + 0x78) = t;
                    t                      = *(s32 *) (arg0 + 0x84);
                    f.w[7]                 = t;
                    *(s32 *) (arg0 + 0x7c) = t;
                    if (arg0[0xa8] & 1) {
                        t      = *(s32 *) (arg0 + 0x84);
                        f.w[9] = t;
                        f.w[2] = *(s32 *) (arg0 + 0x54) - t;
                        pd     = &f.w[2];
                    } else {
                        t       = *(s32 *) (arg0 + 0x80);
                        f.w[10] = t;
                        f.w[3]  = *(s32 *) (arg0 + 0x50) - t;
                        pd      = &f.w[3];
                    }
                    t                      = *pd;
                    f.w[8]                 = t;
                    *(s32 *) (arg0 + 0xa4) = t;
                    ((VB *) arg0)->f5();
                    *(s32 *) (arg0 + 0x88) = 1;
                } else {
                    *(s32 *) (arg0 + 0x88) = 2;
                }
                break;
            case 2:
                break;
        }
    } else {
        if (*(s32 *) (arg0 + 0x88) == 1) {
            ((VB *) arg0)->f7();
            ob = *(VA **) (arg0 + 0x74);
            if (ob->f2(arg0, *(W *) (arg0 + 0x80), *(W *) (arg0 + 0x84)) != 0) {
                ((VB *) arg0)->f8();
            }
        }
        *(s32 *) (arg0 + 0x88) = 0;
    }
    func_02016c18(arg0);
}
