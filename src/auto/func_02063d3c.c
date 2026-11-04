/* compiler: 1.2/sp2p3 */
typedef unsigned char u8;
typedef int s32;
typedef unsigned int u32;

extern s32 data_0213e580;

s32 func_0209b380(s32 a, s32 b);
s32 func_0204cbb4(s32 a, s32 b);
s32 func_0209b3e0(s32 a, s32 b, u8 c);
void func_0209b190(s32 a, s32 *b);
u8 *func_0204688c(s32 a, s32 b, s32 c);
u8 *func_02014c30(u8 *a, s32 b);

void func_02063d3c(u8 *arg0, s32 arg1) {
    volatile s32 dead[6];
    s32 loc[3];
    u8 *p;
    u8 *obj;
    u8 b;
    s32 t;
    s32 t2;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 var_r1;

    p = arg0 + 4;
    b = p[arg1];
    if ((u32) b >= 0xA) {
        return;
    }
    p[arg1] = b + 1;
    if (arg1 != *(s32 *) arg0) {
        return;
    }
    t = func_0209b380(data_0213e580, 2);
    if (t <= 0) {
        return;
    }
    t2     = func_0209b3e0(data_0213e580, 2, (u8) func_0204cbb4(0, t - 1));
    loc[0] = 0;
    loc[1] = 0;
    loc[2] = 0;
    func_0209b190(t2, loc);
    obj = func_0204688c(0x214, 3, 4);
    if (obj != 0) {
        obj = func_02014c30(obj, 0x104);
    }
    v0      = *(s32 *) (obj + 0x78);
    dead[0] = v0;
    if (loc[0] != v0 || (v1 = *(s32 *) (obj + 0x7C), dead[1] = v1, loc[1] != v1) ||
        (v2 = *(s32 *) (obj + 0x80), dead[2] = v2, loc[2] != v2)) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 == 0) {
        return;
    }
    dead[3]               = loc[0];
    *(s32 *) (obj + 0x78) = loc[0];
    dead[4]               = loc[1];
    *(s32 *) (obj + 0x7C) = loc[1];
    dead[5]               = loc[2];
    *(s32 *) (obj + 0x80) = loc[2];
    *(u8 *) (obj + 0xDC)  = 1;
}
