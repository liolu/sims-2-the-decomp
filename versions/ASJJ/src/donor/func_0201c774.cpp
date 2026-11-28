/* compiler: 1.2/sp2p3  */
/* func_0201c78c from sims-2-the/src/auto/func_0201c78c.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef double f64;
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
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};
struct C {
    void *vptr;
    s32 f4;
    u8 p8[8];
    s16 f10;
    u8 p12[6];
    u8 sub[0x20];
    s32 f38;
    u8 p3c[8];
    u16 f44;
    u8 p46[6];
    Vec3 pos;
    Fx32 scale;
    s8 f5c;
    u8 p5d[3];
    s32 f60;
    u8 f64;
    u8 f65;
    u8 p66[2];
    s32 f68;
    s32 f6c;
    s32 f70;
    s32 f74;
    s32 f78;
    s32 f7c;
    s32 f80;
    s32 f84;
    s32 f88;
    s32 f8c;
    s32 f90;
    s32 f94;
    s32 f98;
    s32 f9c;
    u8 fa0;
    u8 fa1;
};
extern "C" {
extern void func_0201872c(void *, void *, void *);
extern void func_0201c9f0(void *);
extern u32 func_0200aac4(s32, s32);
extern void func_02011090(s32, s32, s32, s32, s32);
extern u8 data_0212fe90;
extern s32 data_027e1104;
C *func_0201c774(C *self, void *arg1) {
    func_0201872c(self, arg1, self->sub);
    self->vptr = &data_0212fe90;
    func_0201c9f0(self->sub);
    self->pos.x.v = 0;
    self->pos.y.v = 0;
    self->pos.z.v = 0;
    self->f6c     = 0;
    self->f70     = 0;
    self->f74     = 0;
    self->f78     = 0;
    self->f7c     = 0;
    self->f80     = 0;
    self->f88     = 0;
    self->f8c     = 0;
    self->f90     = 0;
    self->f94     = 0;
    self->f98     = 0;
    self->f9c     = 0;
    self->f10     = 0x1b;
    ((VA *) self)->f3(*(s32 *) ((u8 *) arg1 + 4));
    if (self->f38 == 0) {
        self->f38 = self->f4;
    }
    self->pos   = Vec3(Fx32(0), Fx32(0), Fx32(0));
    self->scale = Fx32(-0x2000);
    self->f5c   = -1;
    self->f60   = 0;
    if (self->f44 == 0x135) {
        self->f44 = func_0200aac4(self->f38, 0);
    }
    func_02011090(self->f38, self->f44, 1, 1, 0);
    self->f65 = 1;
    self->f68 = data_027e1104;
    self->f84 = 0;
    self->fa1 = 0;
    return self;
}
}
