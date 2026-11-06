/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 x, y;
} P2;
typedef struct {
    P2 p[8];
} T16;
typedef struct Ctl {
    u32 w[0x16];
} Ctl;
typedef struct Arr {
    Ctl *c[12];
} Arr;
typedef struct Info {
    u8 pad[0x24];
    struct {
        u8 a, b;
    } bt[0x28];
    u16 f74;
    u16 f76;
} Info;
typedef struct Obj {
    u32 vt;
    Info *info;
    Arr *arr;
    u8 pad[0x24];
    u32 f30;
    u32 f34;
    u16 f38;
    u16 f3a;
    u16 f3c;
    u16 f3e;
    u16 f40;
    u16 f42;
    u16 f44;
    u16 f46;
    u8 f48;
    u8 f49;
} Obj;

void func_02046acc(u8 *a, s32 b);
void func_02046384(u8 *a, s32 b, s32 c);
s32 func_0200df7c(s32 a, s32 b);
s32 func_0200ea1c(s32 a);
void func_02046944(u8 *a, void *b, s32 c);
void func_ov003_0214c6f8(u8 *a);
void func_ov003_0214a410(void *a, s32 b);
void func_ov003_0214ca6c(u8 *a, s32 b, s32 c);
extern u8 data_ov003_021509cc;
extern u8 data_ov003_02150b10;
extern u8 data_ov003_0214fa68;
extern u8 data_ov003_0214f9dc;
extern u8 data_ov003_0214fb28;
extern u8 data_ov003_0214fa30;
extern u8 data_ov003_0214f9c0;
extern u8 data_ov003_0214fad8;
extern u8 data_ov003_0214faa0;
extern u8 data_ov003_02150ae4;
extern u8 data_ov003_0214fbe4;

Obj *func_ov003_0214d114(Obj *arg0, Info *arg1) {
    volatile s32 fr[12];
    T16 buf;
    s32 r4;
    s32 v1;
    s32 v2;
    void *q;

    arg0->vt   = (u32) &data_ov003_021509cc;
    arg0->info = arg1;
    func_02046acc((u8 *) arg0 + 8, 0x20);
    arg0->vt  = (u32) &data_ov003_02150b10;
    arg0->f3c = 0;
    arg0->f3a = 0;
    arg0->f3e = arg0->info->bt[arg0->info->f76].a;
    arg0->f38 = arg0->info->bt[arg0->info->f76].b;
    arg0->f3a = arg0->f3e;
    if (arg0->f3a > 1) {
        arg0->f3a = arg0->f3a + 7;
    }
    arg0->f3a = arg0->f3a + arg0->f38;
    arg0->f40 = 0;
    arg0->f42 = 0;
    arg0->f48 = 0;
    arg0->f49 = 0x1e;
    func_02046384((u8 *) arg0 + 0x10, 0, 0x20);
    arg0->f44 = func_0200df7c(((s32 *) ((u8 *) arg0->info + 0x48))[arg0->info->f76], 0);
    arg0->f46 = func_0200ea1c(((s32 *) ((u8 *) arg0->info + 0x48))[arg0->info->f76]);
    func_02046944((u8 *) arg0 + 8, &data_ov003_0214fa68, 4);
    arg0->arr->c[2]->w[4] |= 0x10000000;
    arg0->arr->c[2]->w[1] &= ~1;
    arg0->f34 = (u32) &data_ov003_0214f9dc;
    arg0->f30 = (u32) &data_ov003_0214fb28;
    q         = &data_ov003_0214fa30;
    if (arg0->info->f76 == 0) {
        arg0->f34 = (u32) &data_ov003_0214f9c0;
        arg0->f30 = (u32) &data_ov003_0214fad8;
        q         = &data_ov003_0214faa0;
    }
    func_02046944((u8 *) arg0 + 8, q, 4);
    arg0->arr->c[4]->w[5] = (arg0->arr->c[4]->w[5] & ~0xc00) | 0x800;
    arg0->arr->c[5]->w[5] = (arg0->arr->c[5]->w[5] & ~0xc00) | 0x800;
    arg0->arr->c[6]->w[5] = (arg0->arr->c[6]->w[5] & ~0xc00) | 0x800;
    arg0->arr->c[7]->w[5] = (arg0->arr->c[7]->w[5] & ~0xc00) | 0x800;
    func_ov003_0214c6f8((u8 *) arg0);
    buf = *(T16 *) &data_ov003_02150ae4;
    r4  = func_0200ea1c(((s32 *) ((u8 *) arg0->info + 0x48))[arg0->info->f76]);
    if (r4 != -1) {
        func_0200ea1c(((s32 *) ((u8 *) arg0->info + 0x48))[arg0->info->f76]);
    }
    func_ov003_0214a410(arg0->info, (u16) r4);
    v1                       = buf.p[r4].x << 12;
    fr[4]                    = v1;
    fr[10]                   = v1;
    arg0->arr->c[0]->w[0x14] = v1;
    v2                       = buf.p[r4].y << 12;
    fr[5]                    = v2;
    fr[11]                   = v2;
    arg0->arr->c[0]->w[0x15] = v2;
    arg0->f3c                = func_0200df7c(((s32 *) ((u8 *) arg0->info + 0x48))[arg0->info->f76], 0);
    func_ov003_0214ca6c((u8 *) arg0, 1, arg0->f3e);
    arg0->arr->c[2]->w[1] &= ~1;
    arg0->arr->c[3]->w[1] &= ~1;
    if (arg0->f38 != 0) {
        arg0->arr->c[2]->w[1] |= 1;
    }
    if (arg0->f38 < 7) {
        arg0->arr->c[3]->w[1] |= 1;
    }
    if (arg0->info->f74 == 6) {
        func_02046944((u8 *) arg0 + 8, &data_ov003_0214fbe4, 4);
        arg0->arr->c[10]->w[1] &= ~1;
        arg0->arr->c[11]->w[1] &= ~1;
        fr[0]                     = 0x10000;
        fr[6]                     = 0x10000;
        arg0->arr->c[8]->w[0x14]  = 0x10000;
        fr[1]                     = 0x10000;
        fr[7]                     = 0x10000;
        arg0->arr->c[9]->w[0x14]  = 0x10000;
        fr[2]                     = 0x10000;
        fr[8]                     = 0x10000;
        arg0->arr->c[10]->w[0x14] = 0x10000;
        fr[3]                     = 0x10000;
        fr[9]                     = 0x10000;
        arg0->arr->c[11]->w[0x14] = 0x10000;
    }
    return arg0;
}
