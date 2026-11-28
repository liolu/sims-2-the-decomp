/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 pad[0xa];
    u16 first;
    u16 last;
    u8 pad2[0x14 - 0xe];
    u8 *widths;
} Font;

typedef struct {
    u8 pad[8];
    Font *small;
    Font *big;
    u8 pad2[0x44 - 0x10];
} Ctx;

extern s32 data_027e0000;
extern Ctx data_0213d698[];
extern u8 data_0213d7a8[][0x40];

s32 func_020519a8(u8 *s);

static inline s32 GetWidth(Font *f, u32 code) {
    s32 w = 0;
    if (code != 0) {
        w = code - f->first;
        if (w >= 0 && w <= f->last - f->first) {
            w = f->widths[w];
        } else {
            w = f->widths[1];
        }
    }
    return w;
}

s32 func_020519a8(u8 *s) {
    Font *f;
    u32 c;
    s32 sum;
    u32 b;
    sum = 0;
    c   = *s;
    while (c != 0) {
        if (c == 0x40) {
            c = *++s;
            sum += func_020519a8(data_0213d7a8[c - 0x31]);
        } else {
            if (c >= 0xf0) {
                b = *++s;
                f = data_0213d698[data_027e0000].big;
                c = (u16) (b + (b << 8));
            } else {
                f = data_0213d698[data_027e0000].small;
            }
            sum += GetWidth(f, c);
        }
        c = *++s;
    }
    return sum;
}
