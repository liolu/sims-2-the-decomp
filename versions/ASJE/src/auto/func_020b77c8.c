/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 a;
    s8 x;
    u8 y;
    u8 b;
    u8 c;
    u8 used;
} Ent;

typedef struct {
    u8 f0;
    u8 pad1[8];
    s8 f9;
    s8 fa;
    u8 pad2[0x30 - 0xb];
    Ent e[10];
} S;

extern S *data_0213f834;
extern u8 data_02126600[][4][4][8][8];
s32 func_0204cb3c(s32, s32);

void func_020b77c8(void) {
    u8 i;
    u8 n;
    u8 j;

    for (i = 0; i < 10; i++) {
        data_0213f834->e[i].used = 0;
    }
    n = 0;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if (data_02126600[data_0213f834->f0][data_0213f834->fa][data_0213f834->f9][j][i] == 2 && n < 10) {
                data_0213f834->e[n].used = 1;
                data_0213f834->e[n].x    = i << 4;
                data_0213f834->e[n].y    = j << 4;
                data_0213f834->e[n].b    = 1;
                data_0213f834->e[n].a    = func_0204cb3c(0, 1);
                data_0213f834->e[n].c    = 1;
                n++;
            }
        }
    }
}
