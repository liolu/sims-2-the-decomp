/* compiler: 1.2/sp2p3 */
#include "m2c.h"
/* func_020b7af0: three digit-table parse loops over strings from func_02051d90 */
extern void func_020b72a8();
extern void func_020b71ec();
extern u8 *func_02051d90();
extern u8 data_0213f974;
extern u8 data_021266bc;
extern u8 data_02126628;
extern u8 data_02126688;

void func_020b7af0(void) {
    u8 x2;
    u8 *p2;
    u8 x;
    u8 *p;
    u8 *g;
    u8 *e;
    u8 i;
    s32 c;

    g = *(u8 **) &data_0213f974;
    func_020b72a8(g[0xb], g[0xc], (u8 *) &data_021266bc + *(s8 *) (g + 8) * 32, 2);
    g               = *(u8 **) &data_0213f974;
    *(s8 *) (g + 8) = *(s8 *) (g + 8) + 1;
    g               = *(u8 **) &data_0213f974;
    if (*(s8 *) (g + 8) >= 2) {
        *(s8 *) (g + 8) = 0;
    }
    for (i = 0; i < 4; i++) {
        e = *(u8 **) &data_0213f974 + i * 5;
        if (e[0x13] != 0) {
            func_020b72a8(e[0xf], e[0x10], (u8 *) &data_02126628, 3);
        }
    }
    g = *(u8 **) &data_0213f974;
    p = func_02051d90(*(s32 *) (g + 0x24), g + 0x6c);
    x = 2;
    c = p[0];
    if (c != 0) {
        do {
            if (c >= 0x30 && c <= 0x39) {
                func_020b71ec(x, 2, (u8 *) &data_02126688 + (c - 0x30) * 5, 2);
                x = x + 4;
            }
            p = p + 1;
            c = p[0];
        } while (c != 0);
    }
    g  = *(u8 **) &data_0213f974;
    p2 = func_02051d90(*(s32 *) (g + 0x28), g + 0x6c);
    x2 = 2;
    c  = p2[0];
    if (c != 0) {
        do {
            if (c >= 0x30 && c <= 0x39) {
                func_020b71ec(x2, 0x20, (u8 *) &data_02126688 + (c - 0x30) * 5, 2);
                x2 = x2 + 4;
            }
            p2 = p2 + 1;
            c  = p2[0];
        } while (c != 0);
    }
    g  = *(u8 **) &data_0213f974;
    p2 = func_02051d90(*(s8 *) (g + 0x2c), g + 0x7c);
    x  = 2;
    c  = p2[0];
    if (c == 0) {
        return;
    }
    do {
        if (c >= 0x30 && c <= 0x39) {
            func_020b71ec(x, 0xe, (u8 *) &data_02126688 + (c - 0x30) * 5, 2);
            x = x + 4;
        }
        p2 = p2 + 1;
        c  = p2[0];
    } while (c != 0);
}
