/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 *p[4];
    u8 pad0[0xb];
    u8 c[4];
    u8 d;
    u8 pad1[0xc];
} G;

typedef struct {
    u8 pad[0x38];
    G g[4];
} S;

void func_02049858(u8 *);
void func_02049b14(u8 *, s32);
void func_02016700(u8 *, s32);
void func_02051b54(s32, s32, s32);
s32 func_02051fe0(s32, s32 *);
void func_0201854c(s32, s32);
void func_020d54a8(s32);
extern s32 data_ov010_0215276c[];

void func_ov010_0214ad64(u8 *arg0, s32 arg1) {
    S *s;
    u8 r7;
    s32 i;
    s32 k;
    s32 buf[4];

    s  = (S *) arg0;
    r7 = arg0[0x1E6];
    for (i = 0; i < 4; i++) {
        if (s->g[arg1].p[i][0x80] != 0) {
            continue;
        }
        s->g[arg1].p[i][0x87] = r7;
        func_02049858(s->g[arg1].p[i]);
        if (s->g[arg1].p[i][0x87] == 0) {
            func_02049b14(s->g[arg1].p[i], 8);
        } else {
            func_02049b14(s->g[arg1].p[i], 7);
        }
        func_02016700(s->g[arg1].p[i], data_ov010_0215276c[r7]);
        *(u32 *) (s->g[arg1].p[i] + 4) |= 1;
        s->g[arg1].p[i][0x80] = 1;
        s->g[arg1].c[r7] += 1;
        (arg0 + 0x15A)[r7 * 0x28] += 1;
        s->g[arg1].d += 1;
        func_02051b54(3, 0xC, 0);
        for (k = 0; k < 3; k++) {
            func_0201854c(*(s32 *) (arg0 + 0x138), func_02051fe0(arg0[0x15A], buf));
            arg0 += 0x28;
        }
        func_020d54a8(0x261);
        return;
    }
}
