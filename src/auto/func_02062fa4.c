/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e434;

s32 func_020827a4();
void func_02079d58();

typedef enum {
    ZV = 0
} ZE;
typedef enum {
    HIV = 0x80000000
} HE;

typedef struct {
    s32 w0, w4, w8, wc, w10, w14, w18;
    u8 b1c, b1d, b1e, b1f;
    s32 w20;
    u16 h24;
    u8 b26, b27;
    s32 w28, w2c;
    u16 h30, h32;
    u8 b34, b35, b36, b37;
    s32 w38;
    u16 h3c, h3e;
    u8 b40, b41, b42, b43;
    u8 b44, b45, b46, b47;
    s32 w48;
} FR;

void func_02062fa4(u32 arg0) {
    FR f;
    u8 *base;
    ZE z;
    s32 one;
    HE hi;
    s32 k47;
    s32 m1;

    hi    = HIV;
    one   = 1;
    z     = ZV;
    k47   = 0x47;
    m1    = -1;
    base  = data_0213e434;
    f.w0  = hi;
    f.w4  = hi;
    f.w8  = hi;
    f.w20 = z;
    f.h24 = 0;
    f.b26 = one;
    f.b27 = 0;
    f.w28 = k47;
    f.wc  = z;
    f.w10 = z;
    f.w14 = z;
    f.w18 = z;
    f.b1d = 0;
    f.b1c = 0;
    f.b1e = 0;
    f.b1f = 0;
    f.b44 = 0;
    f.w48 = m1;
    f.h3c = 0;
    f.w2c = z;
    f.h30 = 0;
    f.h32 = 0;
    f.b34 = 0;
    f.b35 = one;
    f.b36 = 0;
    f.w38 = z;
    f.w0  = *(s32 *) (base + 0x480c) + 0xe10;
    f.b36 = one;
    f.b35 = one;
    f.w2c = 0x877;
    f.b34 = one;
    f.h32 = 9;
    f.h30 = arg0;
    f.w38 = 3;
    f.w48 = 0x841;
    f.h3c = 4;
    f.w28 = func_020827a4(data_0213e434 + 0x21dc + arg0 * 0x2c, 7);
    f.w20 = 0x91c;
    f.h24 = arg0;
    func_02079d58(data_0213e434 + 0x21dc, &f);
}
