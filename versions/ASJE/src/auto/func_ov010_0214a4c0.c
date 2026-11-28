/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} H16;

void func_02051b08(H16);
void func_020519d8(s32, s32, s32);
void func_020519b4(s32);
void *func_020521e0(s32);
void func_02083f54(u8 *, u8 *, s32 *, void *, s32, s32);
void func_02083f30(u8 *, u8 *, s32, s32);
void func_02084064(s32, s32, s32, s32);
s32 func_02051550(s32, s32, u8 *, s32, void *, s32);
void func_0203c7cc(s32, s32, s32, s32, s32);
void func_020512c0(s32, s32, s32, void *, s32);
extern s32 data_0213e2f4;
extern u16 data_ov010_021529d4;
extern u8 data_ov010_02152da0;

void func_ov010_0214a4c0(u8 *arg0) {
    H16 h;
    s32 spC;
    u8 r6;
    s32 r5;
    u8 *r4;
    void *var3;
    s32 r4s;

    r6  = arg0[0x1e6];
    spC = 0;
    h.v = data_ov010_021529d4;
    func_02051b08(*(H16 *) &data_ov010_021529d4);
    func_020519d8(3, 0, -1);
    func_020519b4(0xc);
    *(s32 *) (arg0 + 0x1d0) = 0;
    r5                      = r6 * 0x28;
    r4                      = arg0 + 0x15b + r5;
    *(s32 *) (arg0 + 0x1d4) = 0;
    if (!(r4[0] & 1)) {
        if (arg0[0x1ea] & 1) {
            var3 = func_020521e0(*(s32 *) (arg0 + r5 + 0x150));
        } else if (data_ov010_02152da0 != 0) {
            var3 = arg0 + 0x1f7 + r6 * 8;
        } else {
            var3 = (void *) (data_0213e2f4 + 0x53);
        }
    } else {
        var3 = func_020521e0(*(s32 *) (arg0 + r5 + 0x150));
    }
    func_02083f54(arg0 + 0x1d0, arg0 + 0x1d4, &spC, var3, 0, 0);
    func_02083f30(arg0 + 0x1c8, arg0 + 0x1cc, *(s32 *) (arg0 + 0x1d0), *(s32 *) (arg0 + 0x1d4));
    *(s32 *) (arg0 + 0x1d8) = *(s32 *) (arg0 + 0x1c8) * 8 + ((*(s32 *) (arg0 + 0x1d0) * 8) / 2);
    *(s32 *) (arg0 + 0x1dc) = (*(s32 *) (arg0 + 0x1d0) - 2) * 8;
    *(s32 *) (arg0 + 0x1e0) = (*(s32 *) (arg0 + 0x1cc) + 1) * 8 + 3;
    spC += 1;
    func_02083f54(arg0 + 0x1d0, arg0 + 0x1d4, &spC, func_020521e0(0x6b4), 0, 0);
    func_02083f30(arg0 + 0x1c8, arg0 + 0x1cc, *(s32 *) (arg0 + 0x1d0), *(s32 *) (arg0 + 0x1d4));
    *(s32 *) (arg0 + 0x1d8) = *(s32 *) (arg0 + 0x1c8) * 8 + ((*(s32 *) (arg0 + 0x1d0) * 8) / 2);
    *(s32 *) (arg0 + 0x1dc) = (*(s32 *) (arg0 + 0x1d0) - 2) * 8;
    *(s32 *) (arg0 + 0x1e0) = (*(s32 *) (arg0 + 0x1cc) + 1) * 8 + 3;
    func_02084064(*(s32 *) (arg0 + 0x1c8), *(s32 *) (arg0 + 0x1cc), *(s32 *) (arg0 + 0x1d0), *(s32 *) (arg0 + 0x1d4));
    if (!(r4[0] & 1)) {
        if (arg0[0x1ea] & 1) {
            var3 = func_020521e0(*(s32 *) (arg0 + r5 + 0x150));
        } else if (data_ov010_02152da0 != 0) {
            var3 = arg0 + 0x1f7 + r6 * 8;
        } else {
            var3 = (void *) (data_0213e2f4 + 0x53);
        }
    } else {
        var3 = func_020521e0(*(s32 *) (arg0 + r5 + 0x150));
    }
    r4s = func_02051550(0x3e, *(s32 *) (arg0 + 0x1d8), arg0 + 0x1e0, *(s32 *) (arg0 + 0x1dc), var3, 1);
    *(s32 *) (arg0 + 0x1e0) += 0xc;
    func_02051550(r4s, *(s32 *) (arg0 + 0x1d8), arg0 + 0x1e0, *(s32 *) (arg0 + 0x1dc), func_020521e0(0x6b4), 1);
    func_02051b08(h);
    func_020519d8(3, 0, -1);
    func_020519b4(0xc);
    func_0203c7cc(0, 0, 0, 0x20, 2);
    func_020512c0(0xa, 0x80, 2, func_020521e0(0x6cf), 1);
}
