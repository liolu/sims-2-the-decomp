/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u16 func_020c481c(void);
M2C_UNK func_020d5880(s32);
extern u8 *data_0213d81c;
extern u8 *data_0213e2f4;
extern u8 data_ov010_02152da0;

void func_ov010_02149d3c(u8 *arg0) {
    s32 mode;
    s32 b;
    s32 tmp;
    s32 ip;
    u8 *q;
    s32 id;
    s32 n;
    s32 found;
    u8 *ctx;
    u8 *base;
    s32 i;
    u8 *slot;
    s32 fl;

    ctx = *(u8 **) (arg0 + 0x90);
    id  = *(u8 *) (ctx + 0x1E6);
    if ((*(u8 *) (ctx + id * 0x28 + 0x15B) & 1) != 0) {
        return;
    }
    if (*(u16 *) (arg0 + 0xA) < 7) {
        return;
    }
    if (*(u16 *) (arg0 + 0xA) > 0xC) {
        return;
    }
    if (*(s32 *) (ctx + 0xC) != 1) {
        return;
    }
    if (data_ov010_02152da0 == 0) {
        b = *data_0213d81c;
        if (((u32) (b << 27)) >> 31 != 0) {
            mode = 1;
        } else if (((u32) (b << 29)) >> 31 != 0) {
            mode = 2;
        } else if (((u32) (b << 26)) >> 31 != 0) {
            mode = 3;
        } else {
            goto zero;
        }
    } else if (data_ov010_02152da0 != 0) {
        base = *(u8 **) (data_0213e2f4 + 0x479C);
        if (id < 0) {
            id = func_020c481c();
        }
        mode = *(u8 *) (base + id * 0x44 + 0x232);
    } else {
    zero:
        mode = 0;
    }
    if (mode != 1) {
        return;
    }
    tmp                = *(u16 *) (arg0 + 0xA);
    q                  = *(u8 **) (*(u8 **) (arg0 + 0x90) + 0x1B4);
    n                  = tmp - 7;
    *(s8 *) (q + 0x9C) = n;
    ctx                = *(u8 **) (arg0 + 0x90);
    found              = 0;
    slot               = ctx + n * 0x2C;
    fl                 = *(u8 *) (slot + 0x58) & 1;
    if (fl == 0) {
        for (i = 0; i < 4; i++) {
            if (*(u8 *) (((u8 **) slot)[i + 14] + 0x80) == 0) {
                found = 1;
                break;
            }
        }
    }
    if (found != 0) {
        if ((*(u8 *) (ctx + (u32) n * 0x2C + 0x58) & 1) == 0) {
            *(s32 *) (ctx + 0xC) = 2;
            return;
        }
    }
    func_020d5880(0x171);
}
