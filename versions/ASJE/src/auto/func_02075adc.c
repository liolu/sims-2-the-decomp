/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a, b, c, wd;
} Dt;
typedef struct {
    s32 t;
    Dt d;
    u32 hr;
    s32 pad[3];
} Fr;

extern void *data_0213e2f4;
extern s32 func_020645cc(void *, s32);
extern void func_02075710(void *);
extern s32 func_0207596c(void *);
extern void func_020d972c(u32 *, s32 *);
extern void func_020d97e4(Dt *, s32 *);
extern s32 func_020f5b84(s32, s32);

void func_02075adc(s32 *arg0) {
    Fr f;
    s32 wd;
    s32 lim;
    s32 *p;
    u16 *ph;
    s32 *pc;
    s32 big;
    s32 now;
    if (func_020645cc(data_0213e2f4, 0x13) == 0) {
        return;
    }
    if (arg0[3] == -1) {
        arg0[0] = *(s32 *) ((u8 *) data_0213e2f4 + 0x480c);
        arg0[3] = 0;
    }
    f.t = *(s32 *) ((u8 *) data_0213e2f4 + 0x480c);
    func_020d97e4(&f.d, &f.t);
    wd = f.d.wd;
    if (wd == 6) {
        func_020d972c(&f.hr, &f.t);
        if (f.hr < 11) {
            f.t -= 0x93a80;
        }
    }
    while (wd != 6) {
        f.t -= 0x15180;
        wd -= 1;
        if (wd < 0) {
            wd = 6;
        }
    }
    if (f.t < 0) {
        f.t -= func_020f5b84(f.t + 0x80000000, 0x15180);
    } else {
        f.t -= func_020f5b84(f.t, 0x15180);
    }
    f.t += 0x9ab0;
    while (f.t > arg0[0] && arg0[3] < 2) {
        *(u16 *) (arg0 + 2) += func_0207596c(arg0);
        arg0[0] += 0x93a80;
        arg0[3]++;
    }
    if (f.t <= arg0[0]) {
        return;
    }
    if (arg0[1] + 0x93a80 > *(s32 *) ((u8 *) data_0213e2f4 + 0x480c)) {
        return;
    }
    func_02075710(arg0);
}
