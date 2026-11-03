/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_02139e8c;
extern void *data_0213e580;

s32 func_020187ec(u8 *p);
void func_0201d124(u8 *p);
void func_020117e8(u32 obj, s32 a, u8 *p, s32 b);
void func_02018acc(u8 *p);

void func_0202f4b0(u8 *arg0) {
    u8 buf[0x78];
    s32 r4;

    if (arg0[0x2C] == 0) {
        return;
    }
    r4 = *(s32 *) ((u8 *) data_0213e580 + 0xF8);
    if ((*(u16 *) ((u8 *) data_02139e8c + 6) & 0x20) != 0) {
        if (func_020187ec((u8 *) (r4 + 0xE0)) == 8) {
            func_0201d124(buf);
            *(u16 *) (buf + 0x30) = 0x39;
            func_020117e8(r4, 3, buf, 0);
            func_02018acc(buf);
            return;
        }
    }
    if ((*(u16 *) ((u8 *) data_02139e8c + 6) & 0x40) == 0) {
        return;
    }
    if (func_020187ec((u8 *) (r4 + 0xE0)) != 8) {
        return;
    }
    func_0201d124(buf + 0x3C);
    *(u16 *) (buf + 0x6C) = 0x3A;
    func_020117e8(r4, 3, buf + 0x3C, 0);
    func_02018acc(buf + 0x3C);
}
