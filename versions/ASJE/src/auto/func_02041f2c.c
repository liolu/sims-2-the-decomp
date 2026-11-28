/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0211f030;
extern s32 data_02139e64;
extern void *data_0213e440;

typedef struct {
    u16 type;
    u8 a;
    u8 b;
    u16 w;
    u8 c;
    u8 f0 : 1;
    u8 f1 : 1;
    u8 f2 : 1;
    u8 rest : 5;
} MsgS;
typedef union {
    MsgS s;
    s32 w[2];
} Msg;
void func_02048090();

void func_02041f2c(void *unused0, u8 *arg1) {
    Msg m;
    u8 temp_r0;

    temp_r0 = arg1[0];
    if ((temp_r0 == 3) || (temp_r0 == 0x23) || (temp_r0 == 0xA6)) {
        func_02048090(data_02139e64, 0x21, 1, *(u16 *) (*(u8 **) ((u8 *) &data_0211f030 + (temp_r0 * 8))),
                      *(s32 *) ((u8 *) data_0213e440 + 0xF8), arg1[1] | (arg1[2] << 8));
        return;
    }
    m.s.f0   = 0;
    m.s.c    = 0x3F;
    m.s.w    = 0x58;
    m.s.f1   = 1;
    m.s.type = temp_r0;
    m.s.f2   = 0;
    m.s.a    = arg1[1];
    m.s.b    = arg1[2];
    func_02048090(data_02139e64, 0xE, 1, *(s32 *) ((u8 *) data_0213e440 + 0xF8), m.w[0], m.w[1]);
}
