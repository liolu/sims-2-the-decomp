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

void func_020497cc(u8 *);
void func_02049a88(u8 *, s32);
void func_02016708(u8 *, s32);
void func_020519d8(s32, s32, s32);
s32 func_02051d18(s32, s32 *);
void func_02018554(s32, s32);
void func_020d5880(s32);
extern s32 data_ov010_02152b0c[];

void func_ov010_0214b104(u8 *arg0, s32 arg1) {
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
        func_020497cc(s->g[arg1].p[i]);
        if (s->g[arg1].p[i][0x87] == 0) {
            func_02049a88(s->g[arg1].p[i], 8);
        } else {
            func_02049a88(s->g[arg1].p[i], 7);
        }
        func_02016708(s->g[arg1].p[i], data_ov010_02152b0c[r7]);
        *(u32 *) (s->g[arg1].p[i] + 4) |= 1;
        s->g[arg1].p[i][0x80] = 1;
        s->g[arg1].c[r7] += 1;
        (arg0 + 0x15A)[r7 * 0x28] += 1;
        s->g[arg1].d += 1;
        func_020519d8(3, 0xC, 0);
        for (k = 0; k < 3; k++) {
            func_02018554(*(s32 *) (arg0 + 0x138), func_02051d18(arg0[0x15A], buf));
            arg0 += 0x28;
        }
        func_020d5880(0x261);
        return;
    }
}
