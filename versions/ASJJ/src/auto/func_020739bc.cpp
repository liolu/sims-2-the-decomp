/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" void *func_0208c238(s32 a, s32 b);
extern "C" void *func_02111d30(void *a, void *b, void *c, s32 d);
extern "C" u8 data_0212f8e8[];
extern "C" u8 data_0213229c[];
extern "C" s32 data_0211d33c[];
extern "C" s8 data_0211d344[];
extern "C" s32 data_0211f500[];
extern "C" u8 *data_0213e0a8;

extern "C" s32 func_020739bc(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *P;
    u8 *r7;
    volatile s32 *ent;
    s32 tk;
    s32 k;
    s32 byte;
    s32 r6;
    VA *obj;
    u8 *res;
    s32 r8;
    s32 r4;

    P  = data_0213e0a8;
    r7 = arg0 + arg1 * 0x58;
    if (*(s32 *) (P + 0xF4) == data_0211f500[arg1]) {
        return 0;
    }
    if (*(s32 *) (r7 + 0x54) == 0) {
        return 0;
    }
    byte = *(u8 *) (r7 + arg2 * 4);
    k    = 0;
    ent  = data_0211d33c;
    while (*ent != 0x14B) {
        if (byte == *ent) {
            break;
        }
        ent += 3;
        k++;
    }
    tk = k * 12;
    if (*(s32 *) ((u8 *) data_0211d33c + tk) == 0x14B || (r6 = *(s8 *) ((u8 *) data_0211d344 + tk)) < 0) {
        return 0;
    }
    obj = (VA *) func_0208c238(byte, 0);
    res = (u8 *) obj;
    if (obj != 0) {
        res = (u8 *) func_02111d30(obj, data_0212f8e8, data_0213229c, -1);
    }
    r4 = *(s32 *) (res + 0x2C);
    r8 = (*(s32 *) (res + 0x30) == 1);
    if (obj != 0) {
        obj->f1();
    }
    *(u8 *) (r7 + (arg2 << 2))    = (u8) (r6 + 6 + r8 * 3);
    *(s32 *) (r7 + 0x38 + r4 * 4) = *(s32 *) (r7 + 0x38 + r4 * 4) - 1;
    *(s32 *) (r7 + 0x38)          = *(s32 *) (r7 + 0x38) + 1;
    return 1;
}
