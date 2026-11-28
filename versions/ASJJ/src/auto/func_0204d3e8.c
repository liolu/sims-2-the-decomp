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

extern void *data_0213d348;
extern Head data_0213d290;
extern Entry data_0213d298[3];

void *func_0204e198(void *, s32, s32);
u32 func_0204655c(void *, s32, s32);
u8 func_0204e1cc(void *, s32, s32, s32);
void func_0204e588(void *, s32, s32, s32, Entry *, s32, s32, s32);

void func_0204d3e8(void) {
    u32 max;
    s32 idx;
    s32 i;

    data_0213d290.x4 = func_0204655c(func_0204e198(data_0213d348, 0, 0), 3, 4);
    max              = 0;
    idx              = -1;
    for (i = 0; i < 3; i++) {
        ((u8 *) &data_0213d290)[0x98 + i] = func_0204e1cc(data_0213d348, 0, i, 0);
        if (((u8 *) &data_0213d290)[0x98 + i]) {
            func_0204e588(data_0213d348, 0, i, 0, &data_0213d298[i], 0x30, 0, 0);
            if (data_0213d298[i].x0 > max) {
                max = data_0213d298[i].x0;
                idx = i;
            }
        }
    }
    ((Tail *) ((u8 *) &data_0213d290 + 0x98))->count = max + 1;
    ((Tail *) ((u8 *) &data_0213d290 + 0x98))->idx   = idx;
    data_0213d290.sel                                = idx >= 0 ? &data_0213d298[idx] : 0;
}
