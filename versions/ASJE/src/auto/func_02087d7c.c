/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *volatile data_0213e2f4;

s32 func_02073f14(s32 a);
u16 func_020c3f00(s32 a);
s32 func_02044560(s32 a);
s32 func_02046814(s32 a, s32 b, s32 c);
s32 func_02014c30(s32 a, s32 b);
void func_020c1dec(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02044480(s32 a);
void func_02087b0c(void *a);

void func_02087d7c(void *arg0) {
    u8 *P;
    u8 *r9;
    s32 idx;
    s32 u;
    s32 r8;
    s32 i;
    s32 t;

    P                             = data_0213e2f4;
    idx                           = func_02073f14(*(s32 *) ((u8 *) arg0 + 0xF4));
    *(s32 *) (P + 0x4000 + 0x4D8) = idx;
    idx                           = *(s32 *) (P + 0x4000 + 0x4D8);
    if (idx != -1) {
        r9 = P + 0x41F8 + idx * 0x58;
        u  = func_020c3f00(idx);
        r8 = func_02044560(u);
        {
            for (i = 0; i < *(s32 *) (r9 + 0x54); i++) {
                t = func_02046814(0x214, 0, 4);
                if (t != 0) {
                    t = func_02014c30(t, r9[i * 4]);
                }
                ((s32 *) (P + 0x4000 + 0x4DC))[i] = t;
                func_020c1dec(t, r9[i * 4 + 1], r9[i * 4 + 2], r9[i * 4 + 3], r8);
            }
        }
        func_02044480(u);
    }
    P = data_0213e2f4;
    if (*(u8 *) (P + 0x2000 + 0xF78) != 0) {
        return;
    }
    t = *(s32 *) ((u8 *) arg0 + 0xF4);
    if (t != 3 && t != 0xD) {
        return;
    }
    func_02087b0c(arg0);
}
