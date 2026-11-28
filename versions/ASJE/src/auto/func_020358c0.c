/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    volatile s32 w[6];
    u8 buf[0x3c];
    s32 d[3];
} Fr;

extern u8 *data_0213e440;
extern u8 *data_0213e2f4;
extern s32 data_027e0000;
extern u8 data_027e0014;

void func_0201d0ac(...);
void func_02018acc(...);
s32 func_0200e1ac(...);
void func_020117e8(...);
void *func_020455a4(...);
void func_01ffc22c(...);
void func_02018af8(...);

void func_020358c0(u8 *arg0) {
    Fr f;
    u8 *n;
    u8 *e;
    u8 *o2;
    s32 *ov;
    s32 *ev;
    s32 x;
    s32 y;
    s32 z;
    s32 d0;
    s32 d1;
    s32 d2;
    s32 *rs;

    func_0201d0ac(f.buf);
    *(u16 *) (f.buf + 0x30) = 0x9C;
    *(s32 *) (f.buf + 0x10) = func_0200e1ac(*(u8 **) (data_0213e440 + 0xF8), 0x13);
    func_020117e8(*(u8 **) (arg0 + 4), 3, f.buf, arg0);
    n = (u8 *) func_020455a4(data_027e0000 * 0x34 + (s32) &data_027e0014);
    if (n != 0) {
        do {
            e = *(u8 **) n;
            if (*(u16 *) (e + 0xC) == 2 && *(s32 *) (data_0213e2f4 + *(u16 *) (e + 0xA) * 0x2C + 0x21EC) == 9) {
                f.w[1] = 0x384000;
                f.w[2] = 0x384000;
                o2     = *(u8 **) (arg0 + 4);
                ev     = (s32 *) (e + 0x78);
                ov     = (s32 *) (o2 + 0x78);
                z      = ov[2];
                f.w[5] = z;
                d2     = ev[2];
                y      = ov[1];
                f.w[4] = y;
                d2     = d2 - z;
                d1     = ev[1] - y;
                x      = *(s32 *) (o2 + 0x78);
                f.w[3] = x;
                d0     = *(s32 *) (e + 0x78) - x;
                f.d[0] = d0;
                f.d[1] = d1;
                f.d[2] = d2;
                rs     = (s32 *) &f;
                func_01ffc22c(rs, f.d);
                if (rs[0] < f.w[2]) {
                    func_02018af8(e + 0x128, 0x44, 0, 2);
                }
            }
            n = *(u8 **) (n + 4);
        } while (n != 0);
    }
    func_02018acc(f.buf);
}
