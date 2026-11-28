/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 id;
    u8 type;
    u8 pad;
} Ent;
typedef struct {
    u16 a;
    u16 b;
} P16;
typedef struct {
    u16 v;
} U16S;
typedef struct {
    u8 a;
    u8 b;
    u8 c;
    u8 d;
} P8;
typedef struct {
    Ent *list;
    u8 count;
    u8 pad[3];
} Tbl;

void func_0208272c(void *, s32);
void func_020d5880(void);
void *func_0208af58(s32);
void *func_0208af88(s32);
void *func_0208af70(s32);
void func_0203e1c4(s32, s32, s32, s32, s32, s32, P16, P8, s32);
void func_02016708(void *, void *);
void func_0203c7cc(s32, s32, s32, s32, s32);
void func_02051b08(U16S);
void func_020519d8(s32, s32, s32);
void func_02050a3c(u8 *);
void func_02073378(void *);
void func_02050948(void);
void *func_020521e0(s32);
u16 func_020512c0(u16, s32, s32, void *, s32);
void *func_02082798(void *);
s32 func_02051908(void *, u8 *);
void func_020515f4(u16, s32, s32, s32, void *, s32);
void func_020847e4(s32, s32);
void func_02001944(s32);
void func_020847fc(s32, s32);
void func_02001914(void);
void func_020645f4(u8 *, s32, s32);

extern Tbl data_0211f030[];
extern u8 *data_0213e2f4;
extern u8 *data_0213e440;
extern u16 data_ov015_0214a874;
extern P16 data_ov015_0214a8a0;
extern Tbl data_ov015_0214a8a4;

s32 func_ov015_02149b90(u8 *arg0) {
    P16 cur = data_ov015_0214a8a0;
    Tbl loc = data_ov015_0214a8a4;
    P16 z16;
    P8 z8;
    u8 buf[0x200];
    u8 *pb;
    u16 *ph;
    Tbl *tp;
    s32 idx;
    u32 val;
    u32 ty;
    u8 *ent;
    void *s;

    loc.list = (Ent *) &cur;
    tp       = &loc;
    if (arg0[0x41] == 0) {
        tp = &data_0211f030[*(u16 *) (arg0 + 0x34)];
    } else {
        cur.a          = *(u16 *) (arg0 + 0x34);
        *(u8 *) &cur.b = arg0[0x3C];
    }
    if (*(u16 *) (arg0 + 0x36) == 0) {
        ty = tp->list[*(u16 *) (arg0 + 0x36)].type;
        if (ty < 0x3F) {
            func_0208272c(data_0213e2f4 + 0x21DC + ty * 0x2C, 0);
            func_020d5880();
        }
    }
    if (*(u16 *) (arg0 + 0x36) < tp->count) {
        idx = *(u16 *) (arg0 + 0x36);
        val = tp->list[idx].id;
        if (arg0[0x3F] == 0) {
            if (*(u16 *) (arg0 + 0x34) == 0xBC) {
                idx = *(u16 *) ((u8 *) func_0208af58(0x1B) + 0xA);
            } else {
                ty = tp->list[idx].type;
                if (ty == 0x40) {
                    idx = *(u16 *) ((u8 *) func_0208af88(1) + 0xA);
                } else if (ty == 0x3F) {
                    idx = 0x1A5E;
                } else {
                    ent                   = data_0213e2f4 + 0x21DC + ty * 0x2C;
                    *(s32 *) (ent + 0x14) = *(s32 *) (ent + 0x14) | 1;
                    idx                   = *(u16 *) ((u8 *) func_0208af70(tp->list[*(u16 *) (arg0 + 0x36)].type) + 0xA);
                }
            }
            pb    = (u8 *) &z8;
            pb[0] = 0;
            pb[1] = 0;
            pb[2] = 0;
            pb[3] = 0;
            ph    = (u16 *) &z16;
            ph[0] = 0;
            ph[1] = 0;
            func_0203e1c4(2, idx, 1, 0x50, 0x50, 0xB0, z16, z8, 0);
        } else {
            ty = tp->list[idx].type;
            if (ty == 0x40) {
                func_02016708(*(void **) (arg0 + 0x30), func_0208af88(1));
                ent                = *(u8 **) (arg0 + 0x30);
                *(s32 *) (ent + 4) = *(s32 *) (ent + 4) | 1;
            } else if (ty == 0x3F) {
                ent                = *(u8 **) (arg0 + 0x30);
                *(s32 *) (ent + 4) = *(s32 *) (ent + 4) & ~1;
            } else {
                func_02016708(*(void **) (arg0 + 0x30), func_0208af70(ty));
                ent                = *(u8 **) (arg0 + 0x30);
                *(s32 *) (ent + 4) = *(s32 *) (ent + 4) | 1;
            }
        }
        func_0203c7cc(0, 1, 1, 0x1A, 0x1E);
        func_02051b08(*(U16S *) &data_ov015_0214a874);
        func_020519d8(3, 0, 0);
        func_02050a3c(data_0213e2f4 + 0x53);
        if (val == 0x545) {
            func_02073378(data_0213e2f4 + 0x41F8);
            func_02050948();
        }
        if (*(u16 *) (arg0 + 0x34) == 0xBC) {
            *(u16 *) (arg0 + 0x3A) = func_020512c0(*(u16 *) (arg0 + 0x3A), 0x50, 0xD, func_020521e0(0x792), 1);
        } else {
            ty = tp->list[*(u16 *) (arg0 + 0x36)].type;
            if (ty != 0x3F) {
                if (ty == 0x40) {
                    s = func_020521e0(0x141);
                } else {
                    s = func_02082798(data_0213e2f4 + 0x21DC + ty * 0x2C);
                }
                *(u16 *) (arg0 + 0x3A) = func_020512c0(*(u16 *) (arg0 + 0x3A), 0x50, 0xD, s, 1);
            }
        }
        if (val >= 0xA2D && val <= 0xA35) {
            func_02051908(func_020521e0(val), buf);
            func_020515f4(*(u16 *) (arg0 + 0x3A), 0xE, 0x28, 0x90, buf, 0);
        } else {
            func_020515f4(*(u16 *) (arg0 + 0x3A), 0xE, 0x28, 0x90, func_020521e0(val), 0);
        }
        *(u16 *) (arg0 + 0x36) = *(u16 *) (arg0 + 0x36) + 1;
        return 0;
    }
    if (arg0[0x3D] != 0) {
        func_020847e4(*(s32 *) (data_0213e440 + 0xFC), arg0[0x3D]);
    }
    if (arg0[0x3E] != 0) {
        func_02001944(0);
        func_020847fc(*(s32 *) (data_0213e440 + 0xFC), arg0[0x3E]);
        func_02001914();
    }
    if (*(u16 *) (arg0 + 0x38) != 0x58) {
        func_020645f4(data_0213e2f4, *(u16 *) (arg0 + 0x38), 1);
    }
    return 1;
}
