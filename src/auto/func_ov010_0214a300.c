/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} H16;

void func_02050ab4(u8 *);
void func_0205166c(s32, s32, s32, s32, void *, s32);
void func_02051a2c(s32);
void func_02051a50(s32, s32, s32);
void func_02051b80(H16);
void *func_02052258(s32);
void func_02083fa8(u8 *, u8 *, s32, s32);
void func_02083fcc(u8 *, u8 *, s32 *, void *, s32, s32);
void func_020840dc(s32, s32, s32, s32);
s32 func_ov010_0214a1bc(u8 *, u8);
extern s32 data_0213e434;
extern u16 data_ov010_02152b14;
extern u8 data_ov010_02152ee0;

void func_ov010_0214a300(u8 *arg0) {
    s32 sp8;
    u8 r5;
    u8 *obj;
    void *var;
    void *r4;

    r5                      = arg0[0x1e6];
    sp8                     = 0;
    *(s32 *) (arg0 + 0x1d0) = 0;
    *(s32 *) (arg0 + 0x1d4) = 0;
    func_02051b80(*(H16 *) &data_ov010_02152b14);
    func_02051a50(3, 0, -1);
    func_02051a2c(0xc);
    obj = arg0 + r5 * 0x28;
    if (!(obj[0x15b] & 1)) {
        if (arg0[0x1ea] & 1) {
            var = func_02052258(*(s32 *) (obj + 0x150));
        } else if (data_ov010_02152ee0 != 0) {
            var = arg0 + 0x1f7 + r5 * 8;
        } else {
            var = (void *) (data_0213e434 + 0x53);
        }
    } else {
        var = func_02052258(*(s32 *) (obj + 0x150));
    }
    func_02050ab4(var);
    r4 = func_02052258(0x6cc);
    func_02083fcc(arg0 + 0x1d0, arg0 + 0x1d4, &sp8, r4, 0xe, 0xc);
    func_02083fa8(arg0 + 0x1c8, arg0 + 0x1cc, *(s32 *) (arg0 + 0x1d0), *(s32 *) (arg0 + 0x1d4));
    *(s32 *) (arg0 + 0x1d8) = *(s32 *) (arg0 + 0x1c8) * 8 + 0xe + (*(s32 *) (arg0 + 0x1d0) * 8 - 0xe) / 2;
    *(s32 *) (arg0 + 0x1dc) = (*(s32 *) (arg0 + 0x1d0) - 2) * 8 - 0xe;
    *(s32 *) (arg0 + 0x1e0) = (*(s32 *) (arg0 + 0x1cc) + 1) * 8 + 3;
    func_020840dc(*(s32 *) (arg0 + 0x1c8), *(s32 *) (arg0 + 0x1cc), *(s32 *) (arg0 + 0x1d0), *(s32 *) (arg0 + 0x1d4));
    func_0205166c(0x3e, *(s32 *) (arg0 + 0x1d8), *(s32 *) (arg0 + 0x1e0), *(s32 *) (arg0 + 0x1dc), r4, 1);
    *(s32 *) (arg0 + 0x1b8) = func_ov010_0214a1bc(arg0, r5);
}
