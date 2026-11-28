/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Buffers0203f0c8 {
    u16 *src;
    u16 *dst;
} Buffers0203f0c8;

typedef struct Unk02139810 {
    Buffers0203f0c8 buffers0;
    Buffers0203f0c8 buffers1;
} Unk02139810;

extern Unk02139810 data_021392f0[];
extern s32 data_027e0000;
s32 func_02044580(s32);
void func_020fc55c(s32, void *, s32);
void func_02046270(s32, void *, void *, s32, s32);

void func_0203f130(s32 resource, s32 offset, s32 index, s32 count) {
    s32 data                 = func_02044580(resource);
    Buffers0203f0c8 *buffers = &data_021392f0[data_027e0000].buffers1;
    u16 *src                 = buffers->src + index;
    func_020fc55c(data + offset, src, count * 2);
    func_02046270(3, src, buffers->dst + index, count * 2, 0x10);
}
