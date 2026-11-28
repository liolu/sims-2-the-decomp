/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef u8 *(*AllocFn)(u32);
extern AllocFn data_02142b28;
extern u32 data_02142b2c;
u8 *func_020fae9c(s32, s32, u32);

void *func_020de3d0(u32 size) {
    u8 *p;
    u8 kind;
    u8 off;
    if (size == 0 || size == (u32) -1) {
        return NULL;
    }
    if (data_02142b28 != NULL && (p = data_02142b28(size + 0x40)) != NULL) {
        if (p == (u8 *) -1) {
            return NULL;
        }
        kind = 3;
    } else {
        p = func_020fae9c(0, -1, size + 0x40);
        if (p == NULL) {
            return NULL;
        }
        kind = 0;
    }
    off = 0x40 - ((u32) p & 0x1f);
    p += off;
    p[-1] = off;
    p[-2] = kind;
    if (kind == 3) {
        *(u32 *) (p - 8) = data_02142b2c;
    }
    return p;
}
