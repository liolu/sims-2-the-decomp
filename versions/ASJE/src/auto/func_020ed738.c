/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 w[12];
} S48;

extern s32 data_02138938;
extern s32 data_021430a0[];
extern s32 data_021430a4;
extern s32 data_021430a8;

void func_020ed72c(void *p);
s32 func_020ed6dc(s32 a, s32 b);
void func_020ed668(void *p, void *q, s32 r2, s32 r3);

void func_020ed738(void) {
    S48 arr = *(S48 *) &data_02138938;
    u32 n;
    u32 half;
    u32 d;
    u32 i;
    u32 m;
    s32 *q;
    s32 t;
    s32 u;
    s32 *g = data_021430a0;

    n    = g[4];
    d    = g[3] - (n + (n >> 1));
    half = n >> 1;
    q    = arr.w;
    for (i = 0; i < 4; i++) {
        if (i == 0 || i == 2) {
            if (q[0] != 0 && n != 0) {
                m = q[0];
                if (m > n) {
                    m = n;
                }
                q[2] = q[2] + m;
                n    = n - m;
                q[0] = q[0] - m;
            }
        }
        q = q + 3;
    }
    arr.w[3] = arr.w[3] - half;
    q        = arr.w;
    for (i = 0; i < 4; i++) {
        if (q[0] != 0 && d != 0) {
            m = q[0];
            if (m > d) {
                m = d;
            }
            q[1] = q[1] + m;
            d    = d - m;
            q[0] = q[0] - m;
        }
        q = q + 3;
    }
    func_020ed72c(data_021430a0);
    func_020ed72c(&data_021430a4);
    data_021430a0[2] = func_020ed6dc(data_021430a0[5], (u32) data_021430a0[6] >> 4);
    t                = arr.w[2];
    if (t != 0) {
        func_020ed668(&data_021430a4, &data_021430a8, 0, t);
    }
    t = arr.w[1];
    u = arr.w[2];
    if (t != 0) {
        func_020ed668(data_021430a0, &data_021430a8, u, t);
    }
    t = arr.w[8];
    if (t != 0) {
        func_020ed668(&data_021430a4, &data_021430a8, 0x40000, t);
    }
    t = arr.w[7];
    u = arr.w[8] + 0x40000;
    if (t != 0) {
        func_020ed668(data_021430a0, &data_021430a8, u, t);
    }
    t = arr.w[10];
    if (t != 0) {
        func_020ed668(data_021430a0, &data_021430a8, 0x60000, t);
    }
    t = arr.w[4];
    if (t != 0) {
        func_020ed668(data_021430a0, &data_021430a8, half + 0x20000, t);
    }
}
