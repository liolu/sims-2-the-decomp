/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020379ac(void *);                         /* extern */
void func_020117e8(s32, s32, void *, s32);          /* extern */
void func_02018acc(void *);                         /* extern */
extern void *data_0213e580;
extern void *data_02139fa4;
extern s32 data_0211fb40;
extern s32 data_0211fb54;

void func_020746f4(u8 *arg0) {
    s32 v6;
    s32 v4;
    s32 f;
    s32 t;
    u8 *q;
    s32 buf[8];

    v4 = *(s32 *) ((u8 *) data_0213e580 + 0xF8);
    v6 = *(s32 *) ((u8 *) data_0213e580 + 0xF4);
    func_020379ac(buf);
    q = *(u8 **) ((u8 *) data_02139fa4 + 0xDAC);
    if (q != 0) {
        t = *(s32 *) (q + 4);
    } else {
        t = 0x32;
    }
    f = (t == 0x2A);
    if (arg0[0x75] != 0 || f != 0) {
        buf[4] = 9;
        buf[5] = (f != 0) ? 0x15 : 0x11;
    } else {
        if (v6 == 0xA) {
            buf[4] = 6;
            buf[5] = 0x11;
        } else if (*(s32 *) (arg0 + 0x50) == -1) {
            buf[4] = 0;
            buf[5] = 0x11;
        } else {
            buf[4] = ((s32 *) &data_0211fb40)[*(s32 *) (arg0 + 0x50)];
            buf[5] = ((s32 *) &data_0211fb54)[*(s32 *) (arg0 + 0x50)];
        }
    }
    func_020117e8(v4, 0x33, buf, 0);
    func_02018acc(buf);
}
