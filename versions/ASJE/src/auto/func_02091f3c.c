/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02083ce8(u8 *, s32);
M2C_UNK func_0201d0ac(u8 *);
M2C_UNK func_0201d4f4(u8 *);
M2C_UNK func_0202693c(u8 *);
M2C_UNK func_02027650(u8 *);
M2C_UNK func_02026b70(u8 *);
M2C_UNK func_020286c4(u8 *);
M2C_UNK func_020117e8(u8 *, s32, u8 *, s32);
M2C_UNK func_02018acc(u8 *);
M2C_UNK func_02074b48(u8 *, s32);
M2C_UNK func_02067918(u8 *);

extern u8 data_0213e2f4;
extern u8 data_027e0000;
extern u8 data_0213e440;
extern u8 data_02139e64;

void func_02091f3c(u8 *arg0) {
    u8 frame[0x118];
    u8 *obj;
    u8 *p;
    s32 v;
    u32 w;
    u8 *b;
    u8 *p2;
    u8 *ip;

    {
        s32 un;
        func_02083ce8(*(u8 **) &data_0213e2f4 + 0x18, un);
    }

    if (*(u32 *) &data_027e0000 == 0) {
        *(u32 *) &data_027e0000 = 1;
    } else {
        *(u32 *) &data_027e0000 = 0;
    }

    func_0201d0ac(frame + 0xc);
    func_0201d4f4(frame + 0x48);
    func_0202693c(frame + 0xcc);
    func_02027650(frame + 0x6c);
    func_02026b70(frame + 0x88);
    func_020286c4(frame + 0xa4);

    *(s32 *) (frame + 0x98) = 0;
    obj                     = *(u8 **) (*(u8 **) &data_0213e440 + 0xf8);
    func_020117e8(obj, 0x26, frame + 0x88, 0);

    p = *(u8 **) (*(u8 **) &data_02139e64 + 0xdac);
    if (p != NULL) {
        v = *(s32 *) (p + 4);
    } else {
        v = 0x32;
    }
    if (v == 0xc) {
        *(s32 *) (p + 0x6c) = 2;
    }

    if (arg0[0xe] != 0) {
        *(u16 *) (frame + 0x58) = 0x14b;
        *(u16 *) (frame + 0x5a) = 0x14b;
        obj                     = *(u8 **) (*(u8 **) &data_0213e440 + 0xf8);
        func_020117e8(obj, 0x22, frame + 0x48, 0);

        *(u16 *) (frame + 0x3c) = 0x11;
        obj                     = *(u8 **) (*(u8 **) &data_0213e440 + 0xf8);
        func_020117e8(obj, 3, frame + 0xc, 0);

        *(u16 *) (frame + 0xb6) = 0x2a0;
        b                       = *(u8 **) &data_0213e440;
        *(u8 **) (frame + 0xc8) = *(u8 **) (b + 0xf8) + 0x144;
        func_020117e8(*(u8 **) (b + 0xf8), 0x2d, frame + 0xa4, 0);

        *(u8 *) (frame + 0xea)  = 1;
        *(s32 *) (frame + 0xf0) = 1;
        *(u16 *) (frame + 0xe8) = 0x3c;
        *(u16 *) (frame + 0xfc) = 0x10;
        *(s32 *) (frame + 0xf4) = 2;
        *(s32 *) (frame + 0xf8) = 0;
        obj                     = *(u8 **) (*(u8 **) &data_0213e440 + 0xf8);
        func_020117e8(obj, 8, frame + 0xcc, 0);

        b                       = *(u8 **) &data_0213e440;
        obj                     = *(u8 **) (b + 0xf8);
        ip                      = obj + 0x78;
        w                       = *(u32 *) (obj + 0x78);
        *(u32 *) (frame + 0)    = w;
        *(u32 *) (frame + 0xbc) = w;
        w                       = *(u32 *) (ip + 4);
        *(u32 *) (frame + 4)    = w;
        *(u32 *) (frame + 0xc0) = w;
        w                       = *(u32 *) (ip + 8);
        *(u16 *) (frame + 0xb6) = 1;
        *(u32 *) (frame + 8)    = w;
        *(u32 *) (frame + 0xc4) = w;
        func_020117e8(*(u8 **) (b + 0xf8), 0x2d, frame + 0xa4, 0);

        *(u16 *) (frame + 0x3c) = 0xf;
        obj                     = *(u8 **) (*(u8 **) &data_0213e440 + 0xf8);
        func_020117e8(obj, 3, frame + 0xc, 0);

        *(u16 *) (frame + 0x58) = 0x108;
        *(u16 *) (frame + 0x5a) = 0x107;
        obj                     = *(u8 **) (*(u8 **) &data_0213e440 + 0xf8);
        func_020117e8(obj, 0x22, frame + 0x48, 0);
    } else {
        func_02074b48(*(u8 **) &data_0213e2f4 + 0x2164, 0);

        *(u16 *) (frame + 0x3c) = 0x53;
        *(s32 *) (frame + 0x34) = 2;
        *(u8 *) (frame + 0x41)  = 0;
        *(s32 *) (frame + 0x30) = 0;
        obj                     = *(u8 **) (*(u8 **) &data_0213e440 + 0xf8);
        func_020117e8(obj, 3, frame + 0xc, 0);

        *(u16 *) (frame + 0x58) = 0x106;
        obj                     = *(u8 **) (*(u8 **) &data_0213e440 + 0xf8);
        func_020117e8(obj, 0x22, frame + 0x48, 0);
    }

    if (*(u32 *) &data_027e0000 == 0) {
        *(u32 *) &data_027e0000 = 1;
    } else {
        *(u32 *) &data_027e0000 = 0;
    }

    p2 = *(u8 **) (*(u8 **) &data_02139e64 + 0xdac);
    if (p2 != NULL) {
        w = *(u32 *) (p2 + 4);
    } else {
        w = 0x32;
    }
    if (w == 0xc) {
        func_02067918(p2);
    }

    func_02018acc(frame + 0xa4);
    func_02018acc(frame + 0x88);
    func_02018acc(frame + 0x6c);
    func_02018acc(frame + 0xcc);
    func_02018acc(frame + 0x48);
    func_02018acc(frame + 0xc);
}
