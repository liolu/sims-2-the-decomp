/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 f0, f1, f2, f3, f4, f5, f6, f7;
} E8;
typedef struct {
    E8 e[12];
} G60;
typedef struct {
    u16 f0;
    u8 pad[0x16];
} E18;
typedef struct {
    E18 e[12];
} G120;

extern G60 data_021396f0[];
extern u32 data_027e0000;
extern G120 data_021398b0[];
extern u32 data_021396b0[];
extern void func_0203e5d0(E18 *);

void func_0203ecf4(void) {
    u32 j;
    u32 v;
    u32 i;
    E8 *p;
    for (i = 0; i < 12; i++) {
        u8 b7;
        u8 b8;
        p  = &data_021396f0[data_027e0000].e[i];
        b7 = p->f0;
        if ((b7 & 1) != 0) {
            if (p->f2 == 0) {
                if ((b7 & 0x20) != 0) {
                    if (p->f4 == p->f3) {
                        p->f4 = p->f5;
                    } else {
                        p->f4 = p->f4 - 1;
                    }
                } else {
                    if (p->f4 == p->f5) {
                        p->f4 = p->f3;
                    } else {
                        p->f4 = p->f4 + 1;
                    }
                }
                b8 = p->f0;
                if ((b8 & 0x10) != 0) {
                    if ((b8 & 0x20) != 0) {
                        if (p->f4 == p->f3) {
                            p->f0 = b8 ^ 0x20;
                        }
                    } else {
                        if (p->f4 == p->f5) {
                            p->f0 = b8 ^ 0x20;
                        }
                    }
                }
                p->f0 = p->f0 | 2;
                p->f2 = p->f1;
            } else {
                p->f2 = p->f2 - 1;
            }
        }
    }
    v = 0;
    j = 0;
    do {
        if (v > data_021396b0[data_027e0000]) {
            return;
        }
        if ((data_021398b0[data_027e0000].e[j].f0 & 1) != 0) {
            func_0203e5d0(&data_021398b0[data_027e0000].e[j]);
            v = (v + 1) & 0xFF;
        }
        j++;
    } while (j < 12);
}
