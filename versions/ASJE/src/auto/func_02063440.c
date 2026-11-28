/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e2f4;

s32 func_0208272c();
void func_02079ce0();

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
    s32 w4c;
} FR;

void func_02063440(u32 arg0) {
    FR f;
    u8 *ptr;
    u8 *base;
    s32 z;
    HE hi;

    z     = 0;
    hi    = HIV;
    base  = data_0213e2f4;
    ptr   = base + 0x21dc + arg0 * 0x2c;
    f.w28 = 0x47;
    f.w48 = -1;
    f.w0  = hi;
    f.w4  = hi;
    f.w8  = hi;
    f.w20 = z;
    f.h24 = z;
    f.b26 = 1;
    f.b27 = z;
    f.wc  = z;
    f.w10 = z;
    f.w14 = z;
    f.w18 = z;
    f.b1d = z;
    f.b1c = z;
    f.b1e = z;
    f.b1f = z;
    f.b44 = z;
    f.h3c = z;
    f.w2c = z;
    f.h30 = z;
    f.h32 = z;
    f.b34 = z;
    f.b35 = 1;
    f.b36 = z;
    f.w38 = z;
    f.w0  = *(s32 *) (base + 0x480c) + 0x5460;
    f.b36 = 1;
    f.b35 = 1;
    f.b34 = z;
    f.w2c = 0x859;
    f.w48 = 0x83e;
    f.w28 = func_0208272c(ptr, 7, 1, z);
    f.w20 = 0x919;
    f.h24 = arg0;
    func_02079ce0(data_0213e2f4 + 0x21dc, &f, 0x21dc, data_0213e2f4);
}
