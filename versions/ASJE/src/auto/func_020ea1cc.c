/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

void func_020e9ec8(s32 q, void *st, s32 *tmp);
void func_020e9dc4(s32 n, void *st, s32 *p);
void func_020e47fc(s32 n, s32 *buf, s32 r4, s32 *p);
void func_020e9afc(s32 n, s32 *buf, void *st8, s32 q, s32 *tmp);
void func_020e472c(s32 n, s32 *buf, s32 r4, s32 *p);
void func_020e9c60(s32 n, s32 *buf, void *st8, s32 q, s32 *tmp);
void func_020e490c(s32 n, s32 *buf, s32 r4, s32 *p);

void func_020ea1cc(s32 n, s32 lvl, s32 *buf, s32 *st, s32 *tmp) {
    s32 q;
    s32 r4;
    s32 i;
    s32 last;
    s32 j;
    s32 a0;
    s32 a1;
    s32 m;
    s32 k;
    s32 ip;
    s32 fp;
    s32 x;
    s32 y;

    q = st[0];
    if (n > (q << 2)) {
        q = n >> 2;
        func_020e9ec8(q, st, tmp);
    }
    r4 = st[1];
    if (n > r4) {
        r4 = n;
        func_020e9dc4(n, st, tmp + q);
    }
    if (lvl < 0) {
        j    = n - 1;
        last = buf[j];
        for (i = n - 2; i >= 2; i -= 2) {
            m      = i - 1;
            k      = i + 1;
            fp     = buf[i] - buf[m];
            buf[k] = fp;
            buf[i] = buf[i] + buf[m];
        }
        buf[1] = buf[0] - last;
        buf[0] = buf[0] + last;
        if (n > 4) {
            func_020e47fc(n, buf, r4, tmp + q);
            func_020e9afc(n, buf, (void *) (st + 2), q, tmp);
        } else if (n == 4) {
            func_020e9afc(n, buf, (void *) (st + 2), q, tmp);
        }
    }
    func_020e472c(n, buf, r4, tmp + q);
    if (lvl < 0) {
        return;
    }
    if (n > 4) {
        func_020e9c60(n, buf, (void *) (st + 2), q, tmp);
        func_020e490c(n, buf, r4, tmp + q);
    } else if (n == 4) {
        func_020e9c60(n, buf, (void *) (st + 2), q, tmp);
    }
    a1     = buf[1];
    a0     = buf[0];
    buf[0] = a0 + a1;
    last   = a0 - a1;
    for (i = 2; i < n; i += 2) {
        k      = i + 1;
        x      = buf[i];
        y      = buf[k];
        m      = i - 1;
        buf[m] = x - y;
        buf[i] = buf[i] + buf[k];
    }
    k      = n - 1;
    buf[k] = last;
}
