/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" void *func_0208c310(s32 a, s32 b);
extern "C" void *func_02112108(void *a, void *b, void *c, s32 d);
extern "C" u8 data_0212fca8[];
extern "C" u8 data_0213266c[];
extern "C" s32 data_0211d714[];
extern "C" s8 data_0211d71c[];
extern "C" s32 data_0211f898[];
extern "C" u8 *data_0213e440;

extern "C" s32 func_0207395c(u8 *arg0, s32 arg1, s32 arg2) {
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

    P  = data_0213e440;
    r7 = arg0 + arg1 * 0x58;
    if (*(s32 *) (P + 0xF4) == data_0211f898[arg1]) {
        return 0;
    }
    if (*(s32 *) (r7 + 0x54) == 0) {
        return 0;
    }
    byte = *(u8 *) (r7 + arg2 * 4);
    k    = 0;
    ent  = data_0211d714;
    while (*ent != 0x14B) {
        if (byte == *ent) {
            break;
        }
        ent += 3;
        k++;
    }
    tk = k * 12;
    if (*(s32 *) ((u8 *) data_0211d714 + tk) == 0x14B || (r6 = *(s8 *) ((u8 *) data_0211d71c + tk)) < 0) {
        return 0;
    }
    obj = (VA *) func_0208c310(byte, 0);
    res = (u8 *) obj;
    if (obj != 0) {
        res = (u8 *) func_02112108(obj, data_0212fca8, data_0213266c, -1);
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
