/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 w[9];
} Blk9;

void func_02079d58(u8 *arg0, u8 *arg1) {
    u8 i;
    s32 off;
    u8 *ip;
    u8 *fl;
    u8 *q;
    u8 *r3p;
    u8 *w;
    s32 cnt;

    for (i = 0; i < 10; i++) {
        off = (s32) i * 0x4C;
        ip  = arg0 + off;
        if (ip[0xA41] == 0) {
            *(s32 *) (ip + 0xA0C)   = *(s32 *) (arg1 + 0);
            *(s32 *) (ip + 0xA10)   = *(s32 *) (arg1 + 4);
            *(Blk9 *) (ip + 0xA14)  = *(Blk9 *) (arg1 + 8);
            w                       = ip + 0xA00;
            *(s32 *) (ip + 0xA38)   = *(s32 *) (arg1 + 0x2C);
            *(u16 *) (w + 0x3C)     = *(u16 *) (arg1 + 0x30);
            *(u16 *) (w + 0x3E)     = *(u16 *) (arg1 + 0x32);
            fl                      = arg0 + 0xA41;
            q                       = arg0 + 0xA4C;
            r3p                     = arg0 + 0xA50;
            ip[0xA40]               = arg1[0x34];
            fl[off]                 = arg1[0x35];
            ip[0xA42]               = arg1[0x36];
            *(s32 *) (ip + 0xA44)   = *(s32 *) (arg1 + 0x38);
            *(u16 *) (w + 0x48)     = *(u16 *) (arg1 + 0x3C);
            *(s32 *) (q + off)      = *(s32 *) (arg1 + 0x40);
            r3p[off]                = arg1[0x44];
            *(s32 *) (ip + 0xA54)   = *(s32 *) (arg1 + 0x48);
            fl[off]                 = 1;
            cnt                     = *(s32 *) (arg0 + 0x9DC);
            *(s32 *) (arg0 + 0x9DC) = cnt + 1;
            *(s32 *) (q + off)      = cnt;
            r3p[off]                = 1;
            arg0[0xD08]             = 1;
            return;
        }
    }
}
