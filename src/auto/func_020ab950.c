/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020ab950(u8 **src, u8 *a, u8 *b, u8 *c, u8 *d, u8 *e, u8 *f) {
    s32 v;
    u8 *s;

    *a   = 0xFF;
    *b   = 0xFF;
    *c   = 0xFF;
    *d   = 0xFF;
    *e   = 0xFF;
    *f   = 0xFF;
    s    = *src;
    *src = s + 1;
    v    = *s;
    if (v == 0) {
        return;
    }
    *a = v & 0x3F;
    switch (v >> 6) {
        case 0:
            break;
        case 1:
            *d = *(*src)++;
            break;
        case 2:
            *b = *(*src)++;
            if (**src != 0) {
                *c = **src;
            }
            (*src)++;
            if (*b & 0x80) {
                *d = *(*src)++;
                *b &= 0x7F;
            }
            break;
        case 3:
            *e = *(*src)++;
            *f = *(*src)++;
            if (*e & 0x20) {
                *b = *(*src)++;
            }
            if (*e & 0x40) {
                *c = *(*src)++;
            }
            if (*e & 0x80) {
                *d = *(*src)++;
            }
            *e &= 0x1F;
            break;
    }
}
