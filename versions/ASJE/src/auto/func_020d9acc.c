/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 x, y, z;
} V3;
typedef struct {
    s32 s0;
    s32 s4;
    s32 s8;
    s32 sC;
    s32 s10;
    s32 *p14;
    s32 s18;
    s32 s1C;
    V3 v20;
    s32 o2c[0x18 / 4];
    V3 v44;
} Fr;

void func_01ffc54c(s32, s32, V3 *, s32 **);
void func_020d9f0c(s32 *, s32, s32 *);
void func_020da6cc(void *, s32, V3 *);

void func_020d9acc(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    Fr f;
    s32 z = 0;
    typedef enum {
        K2 = 0x2000
    } KE2;
    KE2 k2;
    f.v20.x = z;
    f.v20.y = -arg5;
    f.v20.z = z;
    func_01ffc54c(arg3, arg2, &f.v20, &f.p14);
    k2   = K2;
    f.s4 = k2;
    f.sC = k2;
    if (f.s1C < k2) {
        s32 w;
        typedef enum {
            K1 = 0x1000
        } KE1;
        KE1 k1;
        func_020d9f0c(&f.s0, arg2, f.p14 + 3);
        w       = 0;
        f.v44.x = w;
        f.v44.y = f.s0;
        f.v44.z = w;
        func_020da6cc(f.o2c, arg1, &f.v44);
        k1    = K1;
        f.s8  = k1;
        f.s10 = k1;
        if (*(s32 *) ((s32) f.o2c + 0x10) <= k1 || f.p14[4] < arg4) {
            *arg0 = 0;
            return;
        }
        *arg0 = f.s0;
        return;
    }
    *arg0 = 0;
}
