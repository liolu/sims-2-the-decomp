/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s16 a;
    u8 b;
    u8 c;
    s16 d;
    u8 e;
    u8 f;
} Loc;

void func_02050af0(s32 p, s32 n);
void func_020509e8(s32 p, s32 n);
s32 func_02052258(void);
void func_02048108(s32, s32, s32, s32, s32, s32);
extern s32 data_02139fa4;
extern s32 data_0213e434;
extern void *data_0213e580;

void func_0205e148(u8 *arg0) {
    Loc loc;
    u8 i;
    u8 *ent;
    u8 flags;
    u16 ev;

    if (arg0[0x18e] == 0) {
        return;
    }
    i = 0;
    do {
        if (i == 0 && *(s32 *) (arg0 + i * 4 + 0x174) == 0) {
            func_02050af0(data_0213e434 + 0x53, 0);
        } else if (*(u8 *) ((arg0 + i) + 0x184) != 0 || *(s32 *) (arg0 + 0x174 + i * 4) == 0) {
            func_020509e8(*(s32 *) (arg0 + 0x174 + i * 4), i);
        } else {
            func_02050af0(func_02052258(), i);
        }
        i += 1;
    } while (i < 4);
    ent = (u8 *) ((s32) * (u16 *) (arg0 + 0x18c) * 0x2c + (data_0213e434 + 0x21dc));
    if (*(s32 *) (ent + 0x10) != 9 && *(s32 *) (ent + 0x10) != 7 && *(s32 *) (ent + 0x10) != 8) {
        *(s32 *) (ent + 0x14) |= 1;
    }
    flags = loc.f;
    ev    = *(u16 *) (arg0 + 0x18c);
    loc.f = (flags & ~1) | 1;
    loc.e = (u8) ev;
    loc.f = loc.f & ~2;
    loc.d = 0x58;
    loc.f = loc.f | 4;
    loc.a = (s16) * (s32 *) (arg0 + 0x188);
    loc.b = 0;
    loc.c = 0;
    func_02048108(data_02139fa4, 0xE, 1, *(s32 *) ((u8 *) data_0213e580 + 0xf8), *(s32 *) &loc.a, *(s32 *) &loc.d);
    arg0[0x18e] = 0;
}
