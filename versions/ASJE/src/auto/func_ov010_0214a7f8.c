/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} U16One;

void func_02051b08(U16One a);
void func_020519d8(s32 a, s32 b, s32 c);
void func_020519b4(s32 a);
s32 func_020521e0(s32 a);
void func_02083f54(s32 *a, s32 *b, s32 *c, s32 d, s32 e, s32 f);
void func_02083f30(s32 *a, s32 *b, s32 c, s32 d);
void func_02084064(s32 a, s32 b, s32 c, s32 d);
s32 func_02051550(s32 a, s32 b, s32 *c, s32 d, s32 e, s32 f);

extern u8 data_ov010_02152da4;
extern u8 data_ov010_02152bd0[];
extern u8 data_ov010_021529d4[];

void func_ov010_0214a7f8(u8 *arg0, s32 arg1) {
    s32 w;
    s32 cnt;
    s32 i;
    s32 n  = 0;
    s32 r9 = 0x3e;
    s32 t;
    s32 q;
    u8 *ent = *(u8 **) (data_ov010_02152bd0 + data_ov010_02152da4 * 12);

    w   = *(s32 *) (ent + arg1 * 8);
    cnt = ent[arg1 * 8 + 4];

    func_02051b08(*(U16One *) data_ov010_021529d4);
    func_020519d8(3, 0, -1);
    func_020519b4(0xc);
    *(s32 *) (arg0 + 0x1d0) = 0;
    *(s32 *) (arg0 + 0x1d4) = 0;
    for (i = 0; i < cnt; i++) {
        {
            n = n + 1;
            q = func_020521e0(w + i);
            func_02083f54((s32 *) (arg0 + 0x1d0), (s32 *) (arg0 + 0x1d4), &n, q, 0, 0);
            func_02083f30((s32 *) (arg0 + 0x1c8), (s32 *) (arg0 + 0x1cc), *(s32 *) (arg0 + 0x1d0), *(s32 *) (arg0 + 0x1d4));
            *(s32 *) (arg0 + 0x1d8) = (*(s32 *) (arg0 + 0x1c8) << 3) + (*(s32 *) (arg0 + 0x1d0) << 3) / 2;
            *(s32 *) (arg0 + 0x1dc) = (*(s32 *) (arg0 + 0x1d0) - 2) << 3;
            *(s32 *) (arg0 + 0x1e0) = ((*(s32 *) (arg0 + 0x1cc) + 1) << 3) + 3;
        }
    }
    func_02084064(*(s32 *) (arg0 + 0x1c8), *(s32 *) (arg0 + 0x1cc), *(s32 *) (arg0 + 0x1d0), *(s32 *) (arg0 + 0x1d4));
    i = 0;
    if (cnt > 0) {
        do {
            q  = func_020521e0(w + i);
            r9 = func_02051550(r9, *(s32 *) (arg0 + 0x1d8), (s32 *) (arg0 + 0x1e0), *(s32 *) (arg0 + 0x1dc), q, 1);
            *(s32 *) (arg0 + 0x1e0) = *(s32 *) (arg0 + 0x1e0) + 0xc;
            i                       = i + 1;
        } while (i < cnt);
    }
}
