/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 x, y, z;
} V3;
typedef struct {
    u16 a;
    u8 b;
    u8 pad;
    s32 c, d, e, f;
    u8 g;
} S20;

void func_01ffabc8(void *, s32, s32);
void func_01ffac40(void *, void *);
void func_0200fb30(s32, s32, s32);
void func_020117e8(void *, s32, void *, void *);
void func_02018acc(void *);
void func_02018af8(void *, s32, void *, s32);
void func_020197ec(void *);
s32 func_02033828(void *, void *);
s32 func_02033a00(void *, void *);
s32 func_02033b98(void *, void *);
s32 func_02033d18(void *, void *);
s32 func_02033dec(void *, void *);
s32 func_02034030(void *, void *);
s32 func_02034198(void *, void *);
void func_020347d4(void *, s32);
void func_0203840c(void *);
void func_02048090(s32, s32, s32, s32, s32, s32);
void func_020480b0(s32, s32, s32, s32, s32);
void func_02048114(s32, s32, s32, s32, s32);
extern s32 data_02139e64;
extern u32 *data_0213e2f4;
extern u8 *data_0213e440;

s32 func_020342b0(u8 *arg0, s32 arg1, u8 *arg2) {
    u8 fr[0x5c];
    u8 *o;
    s32 t;
    V3 *p;

    switch (arg1) {
        case 4:
            return func_02034030(arg0, arg2);
        case 0:
            return 0;
        case 1:
            arg0[0x31] = arg2[0];
            return 2;
        case 0x11:
            arg0[0x32] = arg2[0];
            if (arg0[0x32] != 0) {
                func_01ffac40(*(u8 **) (arg0 + 4) + 0xe0, arg0);
                func_0203840c((fr + 0x10));
                func_020117e8(*(u8 **) (arg0 + 4), 0x11, (fr + 0x10), arg0);
                func_02048090(data_02139e64, 0x23, 1, 0, 0, 0);
                func_02018acc((fr + 0x10));
            } else {
                func_01ffabc8(*(u8 **) (arg0 + 4) + 0xe0, 0x11, 1);
            }
            return 2;
        case 7:
            if (arg0[0x31] == 0) {
                t = 1;
            } else {
                t = 0;
            }
            fr[0] = t;
            o     = *(u8 **) (arg0 + 4);
            if (o != 0) {
                func_02018af8(o + 0x128, 1, fr, 2);
            }
            return 2;
        case 9:
            return func_02033dec(arg0, arg2);
        case 0xc:
            return func_02033d18(arg0, arg2);
        case 0xd:
            return func_02033b98(arg0, arg2);
        case 0x14:
            func_020197ec((fr + 0x20));
            *(u8 **) (fr + 0x30) = arg2;
            func_020117e8(*(u8 **) (arg0 + 4), 4, (fr + 0x20), arg0);
            ((V3 *) (fr + 0x34))->x = 0;
            ((V3 *) (fr + 0x34))->y = 0;
            ((V3 *) (fr + 0x34))->z = 0;
            o                       = *(u8 **) (arg0 + 4);
            ((V3 *) (fr + 4))->x    = ((V3 *) (fr + 0x34))->x;
            ((V3 *) (o + 0x10))->x  = ((V3 *) (fr + 0x34))->x;
            ((V3 *) (fr + 4))->y    = ((V3 *) (fr + 0x34))->y;
            p                       = (V3 *) (o + 0x10);
            p->y                    = ((V3 *) (fr + 0x34))->y;
            ((V3 *) (fr + 4))->z    = ((V3 *) (fr + 0x34))->z;
            p->z                    = ((V3 *) (fr + 0x34))->z;
            func_02018acc((fr + 0x20));
            return 2;
        case 0xe:
            ((S20 *) (fr + 0x40))->a = *(u16 *) arg2;
            ((S20 *) (fr + 0x40))->b = arg2[2];
            ((S20 *) (fr + 0x40))->c = *(s32 *) (arg2 + 4);
            ((S20 *) (fr + 0x40))->d = *(s32 *) (arg2 + 8);
            ((S20 *) (fr + 0x40))->e = *(s32 *) (arg2 + 0xc);
            ((S20 *) (fr + 0x40))->f = *(s32 *) (arg2 + 0x10);
            ((S20 *) (fr + 0x40))->g = arg2[0x14];
            func_020117e8(*(u8 **) (arg0 + 4), 0x20, fr + 0x40, arg0);
            func_02018acc(fr + 0x40);
            return 2;
        case 0x10:
            return func_02033a00(arg0, arg2);
        case 0x13:
            func_0200fb30(*(s32 *) (data_0213e440 + 0xf8), arg2[0] != 0 ? 1 : 0, 0);
            return 2;
        case 0x18:
            *(s16 *) (arg0 + 0x7a) = *(s32 *) arg2;
            return 2;
        case 0x17:
            *(s16 *) (arg0 + 0x7c) = *(s32 *) arg2;
            return 2;
        case 0x1a:
            *(s16 *) (arg0 + 0x7e) = *(s32 *) arg2;
            return 2;
        case 0x1b:
            *(u8 **) (arg0 + 0x80) = arg2;
            return 2;
        case 0x21:
            return func_02034198(arg0, arg2);
        case 0x4b:
            func_02048114(data_02139e64, 2, 0xe, (s32) arg2, (s32) arg2 == 0xe ? 1 : 0);
            func_020480b0(data_02139e64, 0xc, 4, 0, 0);
            return 2;
        case 0x3f:
            *(s16 *) (arg0 + 0x78) = (s32) arg2;
            *data_0213e2f4 |= 0x80;
            return 2;
        case 0x41:
            if (arg2[0] != 0) {
                func_020347d4(arg0, 1);
            } else {
                func_020347d4(arg0, -1);
            }
            return 2;
        case 0x54:
            return func_02033828(arg0, arg2);
        case 0x55:
            *(u32 *) (arg2 + 4) |= 0x82;
            return 2;
        default:
            return 0;
    }
}
