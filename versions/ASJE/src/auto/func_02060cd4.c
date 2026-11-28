/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e2f4;

M2C_UNK func_02077d3c();
M2C_UNK func_0208272c();
M2C_UNK func_02079ce0();

typedef struct {
    s32 a0, a4, a8, aC, a10, a14, a18;
    u8 b1c, b1d, b1e, b1f;
    s32 a20;
    u16 h24;
    u8 b26, b27;
    s32 a28, a2c;
    u16 h30, h32;
    u8 b34, b35, b36;
    s32 a38;
    u16 h3c;
    s32 a40;
    u8 b44;
    s32 a48;
} S;

void func_02060cd4(u32 arg0, u32 arg1) {
    S s;
    s.a0  = 0x80000000;
    s.a4  = 0x80000000;
    s.a8  = 0x80000000;
    s.a20 = 0;
    s.h24 = 0;
    s.b26 = 1;
    s.a28 = 0x47;
    s.a48 = -1;
    s.b27 = 0;
    s.aC  = 0;
    s.a10 = 0;
    s.a14 = 0;
    s.a18 = 0;
    s.b1d = 0;
    s.b1c = 0;
    s.b1e = 0;
    s.b1f = 0;
    s.b44 = 0;
    s.h3c = 0;
    s.a2c = 0;
    s.h30 = 0;
    s.h32 = 0;
    s.b34 = 0;
    s.b35 = 1;
    s.b36 = 0;
    s.a38 = 0;
    s.a0  = *(s32 *) (data_0213e2f4 + 0x4000 + 0x80c) + 0xe10;
    s.b36 = 1;
    s.b35 = 1;
    s.a2c = 0x86d;
    s.b34 = 1;
    s.h32 = *(u32 *) func_02077d3c(data_0213e2f4 + 0x21dc, arg0) & 0xff;
    s.h30 = arg0;
    s.a38 = 6;
    s.h3c = arg1;
    s.a48 = 0x849;
    s.a28 = func_0208272c(data_0213e2f4 + 0x21dc + arg0 * 0x2c, 5);
    s.a20 = 0x922;
    s.h24 = arg0;
    func_02079ce0(data_0213e2f4 + 0x21dc, &s);
}
