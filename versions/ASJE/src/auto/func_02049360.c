/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct S {
    u8 pad[0x1308];
    u8 used[0x20];
    u8 count;
    u8 pad2[3];
} S;
extern s32 data_027e0000;
extern S data_0213add0[];
u16 func_02049360(void) {
    s32 off;
    u16 i;
    u16 n;
    S *s;
    off = data_027e0000 * sizeof(S);
    s   = (S *) ((u8 *) data_0213add0 + off);
    i   = 0;
    n   = 0x20;
    do {
        if (s->used[i] == 1) {
            i++;
        } else {
            data_0213add0->used[off + i] = 1;
            if (i >= (&data_0213add0->count)[off]) {
                (&data_0213add0->count)[off]++;
            }
            return i;
        }
    } while (--n);
    return i;
}
