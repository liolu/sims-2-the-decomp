/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213f968;
extern u8 data_02126360;
extern u8 data_021262a0;
extern u8 data_0212622c;
extern u8 data_0212624c;
extern u8 data_0212626c;

void func_020b644c(u8 a, u8 b, void *c, s32 d);
void func_020b63b0(u8 a, s32 b, void *c, s32 d);
u8 *func_02051d90(s32 a, void *b);

void func_020b6718(void) {
    u8 col;
    u8 *p;
    u8 col2;
    s32 c2;
    u8 *p2;
    s32 k;
    s32 n;
    s32 c;

    func_020b644c(0x38, 0x38, (u8 *) &data_02126360 + (*(s32 *) (*(u8 **) &data_0213f968 + 0x40) << 5), 2);
    if (*(s32 *) (*(u8 **) &data_0213f968 + 0x3c) == 4) {
        func_020b644c(0x28, 0x40, (u8 *) &data_021262a0 + ((*(s32 *) (*(u8 **) &data_0213f968 + 0x40) % 2) << 5), 1);
    } else {
        func_020b644c(0x2c, 0x44, (u8 *) &data_021262a0 + ((*(s32 *) (*(u8 **) &data_0213f968 + 0x40) % 2) << 5), 1);
    }
    k = 0;
    n = *(s32 *) (*(u8 **) &data_0213f968 + 0x3c) << 4;
    if (n > 0) {
        do {
            func_020b644c((u8) k, (u8) (0x80 - n), &data_0212622c, 1);
            k += 0x10;
            n = *(s32 *) (*(u8 **) &data_0213f968 + 0x3c) << 4;
        } while (k < n);
    }
    if (n < 0x80) {
        do {
            func_020b644c((u8) n, (u8) (0x80 - n), &data_0212624c, 1);
            n += 0x10;
        } while (n < 0x80);
    }
    p   = func_02051d90(*(s32 *) (*(u8 **) &data_0213f968 + 0x20), *(u8 **) &data_0213f968 + 0x24);
    c   = *p;
    col = 2;
    if (c != 0) {
        s32 one  = 1;
        s32 five = 5;
        s32 two  = 2;
        do {
            if (c >= 0x30 && c <= 0x39) {
                func_020b63b0(col, two, (u8 *) &data_0212626c + (c - 0x30) * five, one);
                col += 4;
            }
            p++;
            c = *p;
        } while (c != 0);
    }
    p2   = func_02051d90(*(s32 *) (*(u8 **) &data_0213f968 + 0x1c), *(u8 **) &data_0213f968 + 0x24);
    c2   = *p2;
    col2 = 0x4b;
    if (c2 != 0) {
        s32 one  = 1;
        s32 five = 5;
        s32 two  = 2;
        do {
            if (c2 >= 0x30 && c2 <= 0x39) {
                func_020b63b0(col2, two, (u8 *) &data_0212626c + (c2 - 0x30) * five, one);
                col2 += 4;
            }
            p2++;
            c2 = *p2;
        } while (c2 != 0);
    }
}
