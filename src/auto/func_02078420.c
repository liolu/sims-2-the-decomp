/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct E {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fc;
    s32 f10;
    u32 f14;
    u16 f18;
    u8 f1a;
    u8 f1b;
    u8 f1c;
    u8 f1d;
    u8 p1e[6];
    s32 f24;
    u8 f28;
    u8 p29[3];
} E;
typedef struct G {
    s32 f0;
    u8 f4;
    u8 f5;
    u8 p6[2];
} G;
typedef struct H {
    u8 p0[0x35];
    u8 f35;
    u8 f36;
    u8 p37[0x4c - 0x37];
} H;
typedef struct M {
    u16 f0;
    u8 p2[10];
} M;
typedef struct W {
    E e[57];
    s32 f9cc;
    s32 f9d0;
    s32 f9d4;
    s32 f9d8;
    u8 p9dc[4];
    s32 f9e0;
    G g[5];
    H h[10];
    u8 fd04;
    u8 fd05;
    u16 fd06;
    u8 fd08;
    u8 fd09;
    u8 fd0a;
    u8 fd0b;
    M m[10];
} W;
typedef struct D {
    s32 f0;
    u8 p4[16];
} D;
extern D data_02132904[];

void func_02078420(W *w) {
    s32 i;
    u8 j;
    u8 k;
    s32 l;
    s32 m;

    for (i = 0; i < 57; i++) {
        w->e[i].f18 = i;
    }
    w->f9cc = 0;
    w->f9e0 = 0x3f;
    w->fd05 = 0;
    for (j = 0; j < 5; j++) {
        w->g[j].f4 = 0x3f;
        w->g[j].f0 = 0x21;
        w->g[j].f5 = 0;
    }
    for (k = 0; k < 10; k++) {
        w->h[k].f35 = 0;
        w->h[k].f36 = 0;
    }
    w->fd08 = 0;
    w->f9d0 = 10;
    w->f9d8 = 2;
    w->f9d4 = 2;
    w->fd09 = 0;
    w->fd0a = 0;
    w->fd0b = 0;
    w->fd06 = 0x3f;
    w->fd04 = 0;
    for (l = 0; l < 10; l++) {
        w->m[l].f0 = 0;
    }
    for (m = 0; m < 57; m++) {
        w->e[m].f1a = 0;
        w->e[m].f1b = 3;
        w->e[m].f1c = 0;
        w->e[m].f1d = 0;
        w->e[m].f14 = 0;
        w->e[m].f28 = 0;
        w->e[m].f4  = 0x21;
        w->e[m].f8  = 0x21;
        w->e[m].fc  = -1;
        w->e[m].f10 = 0;
        w->e[m].f0  = 0x80000000;
        w->e[m].f24 = 0;
        w->e[m].f14 &= ~1;
        w->e[m].f10 = data_02132904[m].f0;
    }
}
