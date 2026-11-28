/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u32 x0;
    u8 pad[0x2C];
} Entry;

typedef struct {
    Entry *sel;
    u32 x4;
} Head;

typedef struct {
    u8 flags[4];
    s32 idx;
    u32 count;
} Tail;

extern void *data_0213d728;
extern Head data_0213d670;
extern Entry data_0213d678[3];

void *func_0204e184(void *, s32, s32);
u32 func_020464d0(void *, s32, s32);
u8 func_0204e1b8(void *, s32, s32, s32);
void func_0204e574(void *, s32, s32, s32, Entry *, s32, s32, s32);

void func_0204d3d4(void) {
    u32 max;
    s32 idx;
    s32 i;

    data_0213d670.x4 = func_020464d0(func_0204e184(data_0213d728, 0, 0), 3, 4);
    max              = 0;
    idx              = -1;
    for (i = 0; i < 3; i++) {
        ((u8 *) &data_0213d670)[0x98 + i] = func_0204e1b8(data_0213d728, 0, i, 0);
        if (((u8 *) &data_0213d670)[0x98 + i]) {
            func_0204e574(data_0213d728, 0, i, 0, &data_0213d678[i], 0x30, 0, 0);
            if (data_0213d678[i].x0 > max) {
                max = data_0213d678[i].x0;
                idx = i;
            }
        }
    }
    ((Tail *) ((u8 *) &data_0213d670 + 0x98))->count = max + 1;
    ((Tail *) ((u8 *) &data_0213d670 + 0x98))->idx   = idx;
    data_0213d670.sel                                = idx >= 0 ? &data_0213d678[idx] : 0;
}
