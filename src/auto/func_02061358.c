/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02079d58(void *, s32 *);               /* extern */
s32 func_0204c928(s32);
extern u8 *data_0213e434;

typedef struct {
    s32 w00;
    s32 w04;
    s32 w08;
    s32 w0c;
    s32 w10;
    s32 w14;
    s32 w18;
    u8 b1c;
    u8 b1d;
    u8 b1e;
    u8 b1f;
    s32 w20;
    u16 h24;
    u8 b26;
    u8 b27;
    s32 w28;
    s32 w2c;
    u16 h30;
    u16 h32;
    u8 b34;
    u8 b35;
    u8 b36;
    u8 pad37;
    s32 w38;
    u16 h3c;
    u8 pad3e[2];
    u8 pad40[4];
    u8 b44;
    u8 pad45[3];
    s32 w48;
} Blob48;

void func_02061358(void) {
    Blob48 b;

    b.w00 = 0x80000000;
    b.w04 = 0x80000000;
    b.w08 = 0x80000000;
    b.w20 = 0;
    b.w28 = 0x47;
    b.w48 = -1;
    b.h24 = 0;
    b.b26 = 1;
    b.b27 = 0;
    b.w0c = 0;
    b.w10 = 0;
    b.w14 = 0;
    b.w18 = 0;
    b.b1d = 0;
    b.b1c = 0;
    b.b1e = 0;
    b.b1f = 0;
    b.b44 = 0;
    b.h3c = 0;
    b.w2c = 0;
    b.h30 = 0;
    b.h32 = 0;
    b.b34 = 0;
    b.b35 = 1;
    b.b36 = 0;
    b.w38 = 0;
    b.w00 = *(s32 *) (data_0213e434 + 0x480C) + 0xA8C0;
    b.b35 = 1;
    b.w2c = 0x869;
    b.h32 = 9;
    if (func_0204c928(0x32) != 0) {
        b.h32 = 5;
    }
    b.h3c = 4;
    func_02079d58(data_0213e434 + 0x21DC, (s32 *) &b);
}
