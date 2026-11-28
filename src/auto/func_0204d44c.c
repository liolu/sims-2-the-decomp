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

extern void *data_0213d868;
extern Head data_0213d7b0;
extern Entry data_0213d7b8[3];

void *func_0204e1fc(void *, s32, s32);
u32 func_02046548(void *, s32, s32);
u8 func_0204e230(void *, s32, s32, s32);
void func_0204e5ec(void *, s32, s32, s32, Entry *, s32, s32, s32);

void func_0204d44c(void) {
    u32 max;
    s32 idx;
    s32 i;

    data_0213d7b0.x4 = func_02046548(func_0204e1fc(data_0213d868, 0, 0), 3, 4);
    max              = 0;
    idx              = -1;
    for (i = 0; i < 3; i++) {
        ((u8 *) &data_0213d7b0)[0x98 + i] = func_0204e230(data_0213d868, 0, i, 0);
        if (((u8 *) &data_0213d7b0)[0x98 + i]) {
            func_0204e5ec(data_0213d868, 0, i, 0, &data_0213d7b8[i], 0x30, 0, 0);
            if (data_0213d7b8[i].x0 > max) {
                max = data_0213d7b8[i].x0;
                idx = i;
            }
        }
    }
    ((Tail *) ((u8 *) &data_0213d7b0 + 0x98))->count = max + 1;
    ((Tail *) ((u8 *) &data_0213d7b0 + 0x98))->idx   = idx;
    data_0213d7b0.sel                                = idx >= 0 ? &data_0213d7b8[idx] : 0;
}
