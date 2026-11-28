/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    volatile s32 t1;
    volatile s32 v[3];
    volatile s32 old[3];
    volatile s32 nw[3];
    volatile s32 t2;
    s32 cur[3];
} FR;

void *func_02052364(s32, s32);
void func_02052b90(s32 *, u8);
extern u8 *data_0213e440;

void func_0204254c(u8 *arg0, u8 *arg1) {
    s32 rv;
    FR fr;
    u8 *obj;
    u8 b0;
    u8 b1;
    s32 x;
    s32 a;
    s32 c;
    s32 d;
    s32 chg;
    s32 v1;

    b0 = arg1[0];
    b1 = arg1[1];
    if (b0 == 0xFF) {
        obj = *(u8 **) (data_0213e440 + 0xF8);
    } else {
        obj = func_02052364(*(s32 *) (*(u8 **) (arg0 + 4) + 0x28) + b0 * 8, b1);
    }
    if (obj == 0) {
        return;
    }
    func_02052b90(&rv, arg1[2]);
    x         = rv;
    fr.t1     = x;
    a         = *(s32 *) (obj + 0x84);
    fr.t2     = a;
    fr.v[0]   = a;
    fr.cur[0] = a;
    fr.v[1]   = x;
    fr.cur[1] = x;
    c         = *(s32 *) (obj + 0x8C);
    fr.v[2]   = c;
    fr.cur[2] = c;
    d         = 0;
    chg       = 0;
    if ((v1 = *(s32 *) (obj + 0x84), fr.old[0] = v1, fr.cur[0] == v1)) {
        if ((v1 = *(s32 *) (obj + 0x88), fr.old[1] = v1, fr.cur[1] == v1)) {
            chg = 1;
        }
    }
    if (chg != 0) {
        if ((v1 = *(volatile s32 *) (obj + 0x8C), fr.old[2] = v1, fr.cur[2] == v1)) {
            d = 1;
        }
    }
    if (d != 0) {
        return;
    }
    fr.nw[0]              = fr.cur[0];
    *(s32 *) (obj + 0x84) = fr.cur[0];
    fr.nw[1]              = fr.cur[1];
    *(s32 *) (obj + 0x88) = fr.cur[1];
    fr.nw[2]              = fr.cur[2];
    *(s32 *) (obj + 0x8C) = fr.cur[2];
    obj[0xDC]             = 1;
}
