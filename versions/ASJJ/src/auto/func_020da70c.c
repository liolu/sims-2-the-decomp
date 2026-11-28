/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 w[4];
} Q;
typedef struct {
    s32 o[3];
    s32 a;
    s32 n;
    Q e[3];
} B;

void func_020d9c90(void *, s32, s32, s32, s32);

void func_020da70c(s32 *out, s32 *in, s32 a2, s32 a3) {
    volatile s32 d[8];
    B b;
    s32 lr;
    s32 idx;
    s32 v1;
    s32 v2;
    s32 w;

    if (in[1] == 0) {
        out[0] = 0;
        out[1] = 0;
        out[2] = 0;
        return;
    }
    func_020d9c90(&b, in[0], in[1], a2, a3);
    in[9] = b.a;
    if (b.n > 0) {
        lr = 0;
        for (idx = 1; idx < b.n; idx++) {
            v1   = b.e[lr].w[1];
            v2   = b.e[idx].w[1];
            d[0] = v1;
            if (v2 > v1) {
                lr = idx;
            }
        }
        v1   = in[3];
        d[1] = v1;
        if (b.e[lr].w[1] < v1) {
            ((u8 *) in)[0x14] = 0;
        } else {
            w                 = b.e[lr].w[0];
            d[2]              = w;
            in[6]             = w;
            w                 = b.e[lr].w[1];
            d[3]              = w;
            in[7]             = w;
            w                 = b.e[lr].w[2];
            d[4]              = w;
            in[8]             = w;
            ((u8 *) in)[0x14] = 1;
        }
    } else {
        ((u8 *) in)[0x14] = 0;
    }
    w      = b.o[0];
    d[5]   = w;
    out[0] = w;
    w      = b.o[1];
    d[6]   = w;
    out[1] = w;
    w      = b.o[2];
    d[7]   = w;
    out[2] = w;
}
