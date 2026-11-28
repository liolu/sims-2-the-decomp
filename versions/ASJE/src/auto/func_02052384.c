/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a;
    u8 *p;
} Ent;
typedef struct {
    Ent *ents;
    u16 w4;
    u16 cnt;
} Hdr;
extern s32 func_02111fd4(s32, s32, s32, s32, void *, s32);
extern void func_02052480(void);

void func_02052384(Hdr *arg0, u8 *arg1, s16 arg2, u8 *arg3) {
    u16 k;
    u8 b;
    u8 *q;
    u32 i;

    arg0->cnt = arg3[3];
    arg0->w4  = arg2;
    if (arg0->cnt == 0) {
        return;
    }
    b = arg3[3];
    k = b & 3;
    if (k == 1) {
        k = 3;
    } else if (k == 2) {
        k = 2;
    } else if (k == 3) {
        k = 1;
    }
    q                     = arg3 + 4 + (u16) (b + k);
    arg0->ents            = (Ent *) func_02111fd4(*(s32 *) (arg1 + 0xC), arg0->cnt, 8, 0, (void *) func_02052480, 0);
    i                     = 0;
    *(s32 *) (arg1 + 0xC) = *(s32 *) (arg1 + 0xC) + (arg0->cnt * 8 + 8);
    if (arg0->cnt <= i) {
        return;
    }
    do {
        arg0->ents[i].p = q;
        q += arg3[4 + i];
        i++;
    } while (i < arg0->cnt);
}
