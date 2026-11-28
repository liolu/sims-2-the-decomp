/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 data_0213e2f4;
void func_02061d74(void *a, void *b);
void func_02061cfc(void *a, void *b);

typedef struct {
    s32 w[9];
} B36;
typedef struct {
    s32 a;
    s32 b;
    B36 c;
    s32 x2c;
    u16 h30;
    u16 h32;
    u8 b34;
    u8 b35;
    u8 b36;
    s32 x38;
    u16 h3c;
    s32 x40;
    u8 b44;
    s32 x48;
} E;

void func_02061b68(s32 arg0) {
    u8 i;
    E loc;
    u8 *src;
    u8 *dst;
    s32 off;

    i = 0;
    do {
        off = i * 0x4c;
        src = (u8 *) data_0213e2f4 + 0x2be8 + off;
        func_02061d74(&loc.a, src);
        func_02061d74(&loc.b, src + 4);
        func_02061cfc(&loc.c, src + 8);
        loc.x2c = *(s32 *) (src + 0x2c);
        loc.h30 = *(u16 *) (src + 0x30);
        loc.h32 = *(u16 *) (src + 0x32);
        loc.b34 = src[0x34];
        loc.b35 = src[0x35];
        loc.b36 = src[0x36];
        loc.x38 = *(s32 *) (src + 0x38);
        loc.h3c = *(u16 *) (src + 0x3c);
        loc.x40 = *(s32 *) (src + 0x40);
        loc.b44 = src[0x44];
        loc.x48 = *(s32 *) (src + 0x48);
        if (loc.b35 != 0 && loc.h30 == arg0) {
            dst                    = (u8 *) data_0213e2f4 + 0x21dc + off;
            loc.b35                = 0;
            *(s32 *) (dst + 0xa0c) = loc.a;
            *(s32 *) (dst + 0xa10) = loc.b;
            *(B36 *) (dst + 0xa14) = loc.c;
            *(s32 *) (dst + 0xa38) = loc.x2c;
            *(u16 *) (dst + 0xa3c) = loc.h30;
            *(u16 *) (dst + 0xa3e) = loc.h32;
            dst[0xa40]             = loc.b34;
            dst[0xa41]             = loc.b35;
            dst[0xa42]             = loc.b36;
            *(s32 *) (dst + 0xa44) = loc.x38;
            *(u16 *) (dst + 0xa48) = loc.h3c;
            *(s32 *) (dst + 0xa4c) = loc.x40;
            dst[0xa50]             = loc.b44;
            *(s32 *) (dst + 0xa54) = loc.x48;
        }
        i = i + 1;
    } while (i < 10);
}
