/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e580;
extern u8 data_02139fb4;

typedef struct {
    s32 v;
} W;
extern s32 func_0204cb08();
extern void func_0204ab38(void *, void *, void *, W, s32, s32, s32, s32);

void func_02049cdc(u8 *arg0) {
    volatile s32 fr[39];
    s32 *q;
    s32 one;
    s32 zero;
    s32 v, w, r;
    u32 idx;
    s32 t;

    q                   = (s32 *) (*(u8 **) (data_0213e580 + 0xF8) + 0x78);
    v                   = q[0];
    fr[18]              = v;
    *(s32 *) arg0       = v;
    v                   = q[1];
    fr[19]              = v;
    *(s32 *) (arg0 + 4) = v;
    v                   = q[2];
    fr[20]              = v;
    *(s32 *) (arg0 + 8) = v;
    v                   = 0x1000;
    fr[0]               = v;
    fr[9]               = v;
    *(s32 *) (arg0 + 0x18) += 0x1000;
    v      = *(s32 *) (arg0 + 0x1C);
    fr[17] = v;
    if (*(s32 *) (arg0 + 0x18) < v) {
        return;
    }
    one  = 0x199;
    zero = 0;
    do {
        fr[30] = zero;
        fr[31] = zero;
        fr[32] = zero;
        fr[27] = zero;
        fr[28] = zero;
        fr[29] = zero;
        fr[36] = one;
        fr[37] = one;
        fr[38] = one;
        fr[30] = one;
        fr[21] = one;
        fr[31] = one;
        fr[22] = one;
        fr[32] = one;
        t      = *(s32 *) (arg0 + 0x38) >> 12;
        r      = func_0204cb08(0 - t, t);
        v      = r << 12;
        fr[2]  = v;
        fr[23] = v;
        w      = *(s32 *) arg0 + v;
        fr[1]  = w;
        fr[10] = w;
        fr[27] = w;
        v      = *(s32 *) (arg0 + 0x3C);
        fr[4]  = v;
        fr[24] = v;
        w      = *(s32 *) (arg0 + 4) + v;
        fr[3]  = w;
        fr[11] = w;
        fr[28] = w;
        t      = *(s32 *) (arg0 + 0x38) >> 12;
        r      = func_0204cb08(0 - t, t);
        v      = r << 12;
        fr[6]  = v;
        fr[25] = v;
        w      = *(s32 *) (arg0 + 8) + v;
        fr[5]  = w;
        fr[12] = w;
        fr[29] = w;
        fr[33] = zero;
        fr[34] = zero;
        fr[35] = zero;
        fr[7]  = zero;
        fr[13] = zero;
        fr[33] = zero;
        fr[8]  = zero;
        fr[14] = zero;
        fr[35] = zero;
        v      = *(s32 *) ((u8 *) &data_02139fb4 + 0x10);
        fr[15] = v;
        fr[34] = v;
        idx    = func_0204cb08(0, *(u8 *) (arg0 + 0x1CC)) & 0xFF;
        func_0204ab38((void *) &fr[27], (void *) &fr[33], (void *) &fr[30], *(W *) (arg0 + 0x20), *(s32 *) (arg0 + 0x28),
                      *(u16 *) (arg0 + idx * 2 + 0x24), (s32) arg0, idx);
        v                      = *(s32 *) (arg0 + 0x1C);
        fr[16]                 = v;
        *(s32 *) (arg0 + 0x18) = *(s32 *) (arg0 + 0x18) - v;
        v                      = *(s32 *) (arg0 + 0x1C);
        fr[26]                 = v;
    } while (*(s32 *) (arg0 + 0x18) >= v);
}
