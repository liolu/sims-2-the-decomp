/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 v;
} W;
typedef struct {
    W w;
    s32 a[6];
    s32 b[5];
    s32 c[3];
    s32 d[3];
} FR;

extern void func_0204b5a0(void);
void func_0204a59c(void *, W, void *, s32 *, s32, s32, s32);

u8 *func_0204a48c(u8 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    FR f;
    s32 x, y, z;

    f.a[0] = 0x28000;
    x      = arg1[0];
    f.c[0] = x;
    f.d[0] = x;
    y      = arg1[1];
    f.c[1] = y;
    f.d[1] = y;
    z      = arg1[2];
    f.c[2] = z;
    f.d[2] = z;
    f.w.v  = 0x1333;
    func_0204a59c(arg0, f.w, (void *) func_0204b5a0, f.d, 0x28000, arg2, arg3);
    *(s32 *) (arg0 + 0x1c8) = 1;
    *(s32 *) (arg0 + 0x1d0) = 0;
    f.a[1]                  = 0x28000;
    f.b[0]                  = 0x28000;
    *(s32 *) (arg0 + 0x20)  = 0x28000;
    f.a[2]                  = 0x400;
    f.b[1]                  = 0x400;
    *(s32 *) (arg0 + 0x2c)  = 0x400;
    f.a[3]                  = 0x800;
    f.b[2]                  = 0x800;
    *(s32 *) (arg0 + 0x30)  = 0x800;
    f.a[4]                  = 0x100;
    f.b[3]                  = 0x100;
    *(s32 *) (arg0 + 0x34)  = 0x100;
    f.a[5]                  = 0x1333;
    f.b[4]                  = 0x1333;
    *(s32 *) (arg0 + 0x40)  = 0x1333;
    return arg0;
}
