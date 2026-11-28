/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020431b8(void **, M2C_UNK, s16 *);
typedef struct {
    s32 w0;
    s32 w1;
    u32 lo : 16;
    u32 cnt : 7;
    u32 flag : 1;
    u32 hi : 8;
} S;
s32 func_02042dac(M2C_UNK arg0, s16 arg1, s32 arg2) {
    void *sp4;
    s16 sp0;
    S *o;
    sp0 = arg1;
    func_020431b8(&sp4, arg0, &sp0);
    o = (S *) M2C_FIELD(sp4, void **, 0x10);
    if (arg2 != 0) {
        if (o->flag == 0) {
            o->flag = 1;
            o->cnt  = 1;
        } else {
            o->cnt = o->cnt + 1;
        }
    } else {
        if (o->flag == 0) {
            o->cnt = 10;
        }
    }
    return o->w0;
}
