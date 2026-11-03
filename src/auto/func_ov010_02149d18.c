/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 lo : 4;
    u8 hi : 4;
} Nib;

extern u16 func_020c48e4(void);
extern u8 data_ov010_02152ee0;
extern u8 *data_0213d95c;
extern u8 *data_0213e434;

void func_ov010_02149d18(u8 *arg0) {
    u8 *obj;
    u8 *q;
    u8 *cell;
    s32 ix;
    s32 off;
    s32 cls;
    s32 e;
    s32 d;
    u8 ee;
    u8 bb;
    u16 w;

    obj = *(u8 **) (arg0 + 0x90);
    ix  = obj[0x1e6];
    off = ix * 40;
    if (obj[off + 0x15b] & 1) {
        return;
    }
    w = *(u16 *) (arg0 + 0xa);
    if (w < 0x2b) {
        return;
    }
    if (w > 0x2f) {
        return;
    }
    if (*(s32 *) (obj + 0xc) != 3) {
        return;
    }
    if (data_ov010_02152ee0 == 0) {
        bb = *data_0213d95c;
        if (((u32) (bb << 0x1b) >> 0x1f) != 0) {
            cls = 1;
        } else if (((u32) (bb << 0x1d) >> 0x1f) != 0) {
            cls = 2;
        } else if (((u32) (bb << 0x1a) >> 0x1f) != 0) {
            cls = 3;
        } else {
            goto zero_cls;
        }
    } else if (data_ov010_02152ee0 != 0) {
        q = *(u8 **) (data_0213e434 + 0x4000 + 0x79c);
        if ((s32) ix < 0) {
            ix = func_020c48e4();
        }
        cls = *(u8 *) (q + ix * 0x44 + 0x232);
    } else {
    zero_cls:
        cls = 0;
    }
    if (cls != 1) {
        return;
    }
    w                                                          = *(u16 *) (arg0 + 0xa);
    d                                                          = w - 0x25;
    *(u8 *) (*(u8 **) (*(u8 **) (arg0 + 0x90) + 0x1b4) + 0x9c) = d;
    e                                                          = d - 6;
    if ((*(u8 **) (arg0 + 0x90) + off)[e + 0x154] == 0xff) {
        return;
    }
    cell                                    = *(u8 **) (arg0 + 0x90) + 0x159;
    ee                                      = (u8) e;
    ((Nib *) (cell + off))->hi              = ee;
    *(s32 *) (*(u8 **) (arg0 + 0x90) + 0xc) = 4;
}
