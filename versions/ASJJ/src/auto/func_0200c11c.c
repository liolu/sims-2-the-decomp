typedef unsigned char u8;
typedef int s32;

void func_0200c11c(u8 *arg0, s32 *arg1) {
    volatile s32 *out = arg1;
    volatile s32 sp[10];
    volatile s32 *src = (volatile s32 *) arg0;
    s32 v;

    v      = -src[6];
    sp[0]  = v;
    sp[3]  = v;
    out[0] = v;
    v      = src[6];
    sp[4]  = v;
    out[1] = v;
    v      = -src[7];
    sp[1]  = v;
    sp[5]  = v;
    out[2] = v;
    v      = src[7];
    sp[6]  = v;
    out[3] = v;
    v      = -src[8];
    sp[2]  = v;
    sp[7]  = v;
    out[4] = v;
    v      = src[8];
    sp[8]  = v;
    out[5] = v;
}
