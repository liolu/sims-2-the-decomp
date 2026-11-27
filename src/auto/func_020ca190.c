/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e434;
extern u8 *data_02139fa4;
extern u8 data_021424cc;
extern u8 data_021424c4;
extern u8 data_021424c0;
extern u8 data_021424c8;
extern u8 data_0213d7b0;
extern u8 *data_0213d95c;
extern u8 data_0212799c;

void func_020c9f40(void);
s32 func_020c4070(u8 *a);
void func_02048108(u8 *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0204cc68(s32 a);
void func_020c7254(void);
s32 func_020c45f4(void);
void func_020c8164(void);
void func_02046844(u8 *a);
void func_020d59bc(s32 a);

static inline s32 hit(u8 *q) {
    // DECL-BEGIN
    u16 y   = *(u16 *) (q + 0x2c);
    u16 r26 = *(u16 *) (&data_0212799c + 0x26);
    u16 r24 = *(u16 *) (&data_0212799c + 0x24);
    u16 r22 = *(u16 *) (&data_0212799c + 0x22);
    u16 r20 = *(u16 *) (&data_0212799c + 0x20);
    u16 x   = *(u16 *) (q + 0x2a);
    // DECL-END
    if (x >= r20 && x < r20 + r24 && y >= r22 && y < r22 + r26) {
        return 1;
    }
    return 0;
}

static inline void fin(u8 *arg0) {
    u8 *st;
    *(s32 *) (arg0 + 0x24) = 0;
    func_02048108(data_02139fa4, 0x1e, 1, 0, 0, *(s32 *) (arg0 + 0x38));
    st = *(u8 **) (data_0213e434 + 0x4000 + 0x79c);
    if (st == 0) {
        return;
    }
    func_020c7254();
    if (func_020c45f4() == 0) {
        func_020c8164();
        while (func_020c45f4() == 0) {
        }
    }
    func_02046844(*(u8 **) (data_0213e434 + 0x4000 + 0x79c));
    *(s32 *) (data_0213e434 + 0x4000 + 0x79c) = 0;
}

void func_020ca190(u8 *arg0) {
    u8 *st;
    s32 kind;
    u8 *q;

    func_020c9f40();
    st = *(u8 **) (data_0213e434 + 0x4000 + 0x79c);
    st += 0x220;
    {
        typedef enum {
            O1C = 0x1c
        } OE;
        OE o = O1C;
        if (func_020c4070(st + o) <= 0) {
            func_02048108(data_02139fa4, 0x2e, 0, 0, 0, 0);
            func_02048108(data_02139fa4, 0x2d, 1, 0xa20, 0, 0);
            return;
        }
    }
    st   = *(u8 **) (data_0213e434 + 0x4000 + 0x79c);
    kind = *(s32 *) (st + 0x228);
    switch (kind) {
        case 3:
        case 4:
        case 5:
            func_0204cc68(*(u16 *) (st + 0x224));
            *(u16 *) &data_021424cc = *(u16 *) (*(u8 **) (data_0213e434 + 0x4000 + 0x79c) + 0x224);
            data_021424c4           = 3;
            data_021424c0           = 0;
            kind                    = *(s32 *) (*(u8 **) (data_0213e434 + 0x4000 + 0x79c) + 0x228);
            switch (kind) {
                case 3:
                    func_02048108(data_02139fa4, 0, 0, 0, 0, 0);
                    func_02048108(data_02139fa4, 0x10, 1, 1, 2, 0);
                    break;
                case 4:
                    func_02048108(data_02139fa4, 0x17, 0, 0, 0, 0);
                    func_02048108(data_02139fa4, 0x16, 1, 1, 2, data_021424c8);
                    break;
                case 5:
                    func_02048108(data_02139fa4, 0x2e, 0, 0, 0, 0);
                    *(s32 *) (&data_0213d7b0 + 0xa4) = *(s32 *) (arg0 + 0x38);
                    func_02048108(data_02139fa4, 0x30, 1, 5, 0, 0);
                    break;
            }
            return;
        case 6:
            fin(arg0);
            return;
        default:
            break;
    }
    q = data_0213d95c;
    if ((((u32) (q[0] << 27)) >> 31) == 0) {
        return;
    }
    if (!hit(q)) {
        return;
    }
    *(s32 *) (*(u8 **) (arg0 + 0x44) + 4) |= 1;
    *(s32 *) (*(u8 **) (arg0 + 0x48) + 4) &= ~1;
    func_020d59bc(0x160);
    fin(arg0);
}
