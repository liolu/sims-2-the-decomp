/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02133048;
extern u8 data_02134124;
extern s32 data_0213df5c;

void func_02096b38(u8 *arg0, s32 arg1) {
    s32 i;
    s32 v;
    u8 *t;

    *(u32 *) arg0          = (u32) &data_02133048;
    *(s32 *) (arg0 + 4)    = arg1;
    *(s32 *) (arg0 + 8)    = 0;
    *(s32 *) (arg0 + 0xC)  = 0;
    *(s32 *) (arg0 + 0x14) = 0;
    *(u8 *) (arg0 + 0x1C)  = 1;
    *(u32 *) arg0          = (u32) &data_02134124;
    if (!(*(volatile s32 *) data_0213df5c & 0x20)) {
        i = *(s32 *) (arg0 + 8);
        if (i > *(s32 *) (arg0 + 0xC)) {
            do {
                t = arg0 + (i - 1);
                v = t[0x10];
                t = arg0 + i;
                i -= 1;
                t[0x10] = v;
            } while (i > *(s32 *) (arg0 + 0xC));
        }
        *(u8 *) (arg0 + *(s32 *) (arg0 + 0xC) + 0x10) = 0x35;
        *(s32 *) (arg0 + 0xC)                         = *(s32 *) (arg0 + 0xC) + 1;
        *(s32 *) (arg0 + 8)                           = *(s32 *) (arg0 + 8) + 1;
        return;
    }
    i = *(s32 *) (arg0 + 8);
    if (i > *(s32 *) (arg0 + 0xC)) {
        do {
            t = arg0 + (i - 1);
            v = t[0x10];
            t = arg0 + i;
            i -= 1;
            t[0x10] = v;
        } while (i > *(s32 *) (arg0 + 0xC));
    }
    *(u8 *) (arg0 + *(s32 *) (arg0 + 0xC) + 0x10) = 0x36;
    *(s32 *) (arg0 + 0xC)                         = *(s32 *) (arg0 + 0xC) + 1;
    *(s32 *) (arg0 + 8)                           = *(s32 *) (arg0 + 8) + 1;
}
