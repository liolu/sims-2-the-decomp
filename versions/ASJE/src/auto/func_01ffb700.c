/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s16 data_0212b220[];

static inline s32 Idx(s32 v) {
    return (s32) (((u32) ((((s64) v * 0x28be60db9391LL) + 0x80000000000LL) >> 32) << 4) >> 16);
}
static inline s32 Mul(s32 a, s32 b) {
    return (s32) ((((s64) a * b) + 0x800) >> 12);
}

void func_01ffb700(s32 *arg0) {
    volatile s32 f[22];
    s32 a1, s1, m1, a2, s2, a3, c2, m2, m3, x, c3, y, a4, z;
    a1      = arg0[8];
    s1      = data_0212b220[(u32) ((Idx(a1) >> 4) * 2 + 1)];
    f[13]   = a1;
    f[1]    = s1;
    f[14]   = s1;
    m1      = Mul(arg0[5], s1);
    f[0]    = m1;
    f[9]    = m1;
    arg0[4] = m1;
    a2      = arg0[8];
    f[15]   = a2;
    s2      = data_0212b220[(Idx(a2) >> 4) * 2];
    f[2]    = s2;
    f[10]   = s2;
    a3      = arg0[9];
    f[16]   = a3;
    c2      = data_0212b220[(Idx(a3) >> 4) * 2];
    f[5]    = c2;
    f[17]   = c2;
    m2      = Mul(arg0[5], s2);
    m3      = Mul(m2, c2);
    f[4]    = m3;
    f[18]   = m3;
    x       = arg0[0] + m3;
    f[3]    = x;
    f[11]   = x;
    arg0[2] = x;
    a4      = arg0[9];
    f[19]   = a4;
    c3      = data_0212b220[(u32) ((Idx(a4) >> 4) * 2 + 1)];
    f[8]    = c3;
    f[20]   = c3;
    y       = Mul(m2, c3);
    f[7]    = y;
    f[21]   = y;
    z       = arg0[1];
    z       = z + y;
    f[6]    = z;
    f[12]   = z;
    arg0[3] = z;
}
