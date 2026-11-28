/* compiler: 1.2/sp2p3  */
/* func_02040c1c from sims-2-the/src/auto/func_02040c1c.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
struct Fx32 {
    s32 v;
    Fx32() {}
    Fx32(s32 x) :
        v(x) {}
    Fx32 &operator=(Fx32 b) {
        v = b.v;
        return *this;
    }
};
struct Vec3 {
    Fx32 x, y, z;
    Vec3() {}
    Vec3(const Fx32 &ax, const Fx32 &ay, const Fx32 &az) :
        x(ax),
        y(ay),
        z(az) {}
    Vec3 &operator=(const Vec3 &b) {
        x = b.x;
        y = b.y;
        z = b.z;
        return *this;
    }
};
typedef struct {
    s32 v;
} W;
struct G {
    u8 pad[0x23c];
    s32 p;
    Vec3 v;
};
extern "C" {
extern s32 func_02084814(void *);
extern s32 func_02052318(s32, s32);
extern u8 func_02052310(s32);
extern void func_020b9b5c(void *, s32, u8, W);
extern s32 func_02052364(s32, u8);
extern G data_02139e74;
extern u8 data_0213e440;
void func_02040ba4(u8 *arg0, u8 *arg1) {
    s32 r;
    s32 p;
    s32 a;
    u8 b;
    u8 b2;
    u8 b3;
    u8 b4;
    W w;

    b2  = arg1[2];
    r   = func_02084814(*(void **) (*(u8 **) &data_0213e440 + 0xFC));
    p   = *(s32 *) (*(u8 **) (r + 4) + 0x34) + b2 * 8;
    w.v = *(u16 *) arg1 << 12;
    a   = func_02052318(p, 0);
    b   = func_02052310(p);
    func_020b9b5c(&data_02139e74, a, b, w);
    b3 = arg1[3];
    b4 = arg1[4];
    if (b3 == 0xFF) {
        r = *(s32 *) (*(u8 **) &data_0213e440 + 0xF8);
    } else {
        r = func_02052364(*(s32 *) (*(u8 **) (arg0 + 4) + 0x28) + (b3 * 8), b4);
    }
    if (r == 0) {
        return;
    }
    data_02139e74.p = r + 0x78;
    data_02139e74.v = Vec3(Fx32(0), Fx32(0xB000), Fx32(0));
}
}
