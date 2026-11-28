/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Item {
    u8 id;
    u8 p[3];
} Item;
typedef struct Grp {
    Item it[21];
    s32 count;
} Grp;
typedef struct W {
    u8 pad0[0x5c];
    u8 k;
    u8 pad1[0x41f8 - 0x5d];
    Grp g[6];
} W;

extern W *data_0213e434;
s32 func_0207355c(void *, s32);
u16 *func_02073f6c(s32);
s16 *func_0208afd0(s32);

s32 func_020759e4(void) {
    s32 a = 0;
    s32 b;
    s32 i, k, j;
    for (i = 0; i < 33; i++) {
        if (func_0207355c((u8 *) data_0213e434 + 0x41f8, i) != 0) {
            a += *func_02073f6c(i);
        }
    }
    a /= 10;
    b = 0;
    for (k = 0; k < 6; k++) {
        for (j = 0; j < data_0213e434->g[k].count; j++) {
            b += func_0208afd0(data_0213e434->g[k].it[j].id)[7];
        }
    }
    b /= 200;
    a += b;
    return a - (a * (data_0213e434->k * 5)) / 100;
}
