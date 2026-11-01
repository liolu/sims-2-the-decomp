/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02071be8 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0207/func_02071be8.c (license: MIT), reused
 * by tools/donor_match.py */
typedef struct Ctx {
    int f0;
    int f4;
    char rest[0x18 - 8];
} Ctx;
typedef struct Src Src;
extern void func_02111a58(int handle, Ctx *ctx);
extern void func_02111ea8(void);
extern void func_02110518(Src *s, Ctx *ctx);
extern int func_02110cc4(Src *s, Ctx *ctx);
extern unsigned char *func_021109ec(Src *s, Ctx *ctx, int *out);
extern unsigned char *_Z22__DecodeUnsignedNumberPcPm(unsigned char *p, int *out);
extern unsigned char *func_021107a8(unsigned char *p, int *out);
extern void func_02110e18(Src *s, Ctx *ctx, unsigned char *p);
extern void func_0211097c(Src *s, int off, int add);
extern void func_02110444(Src *s, Ctx *ctx, int n);
struct Src {
    int f0;
    char p4[8];
    int fc;
    int f10;
};
void func_02110898(struct Src *s) {
    int local0;
    Ctx ctx;
    volatile int blk[3];
    unsigned char *q;
    func_02111a58(s->f10, &ctx);
    if (ctx.f4 == 0) {
        func_02111ea8();
    }
    func_02110518(s, &ctx);
    if (s->f0 != 0) {
        s->fc = 0;
    } else {
        s->fc = func_02110cc4(s, &ctx);
    }
    q      = func_021109ec(s, &ctx, &local0);
    blk[0] = q[1] | (q[2] << 8) | (q[3] << 16) | (q[4] << 24);
    func_021107a8(_Z22__DecodeUnsignedNumberPcPm(q + 5, (int *) &blk[1]), (int *) &blk[2]);
    func_02110e18(s, &ctx, q);
    func_0211097c(s, blk[2], local0);
    func_02110444(s, &ctx, ctx.f0 + blk[1]);
}
