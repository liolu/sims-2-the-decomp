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

extern Unk02139810 data_021396d0[];
extern s32 data_027e0000;
s32 func_020444f4(s32);
void func_020fc934(s32, void *, s32);
void func_020461e4(s32, void *, void *, s32, s32);

void func_0203f050(s32 resource, s32 offset, s32 index, s32 count) {
    s32 data                 = func_020444f4(resource);
    Buffers0203f0c8 *buffers = &data_021396d0[data_027e0000].buffers1;
    u16 *src                 = buffers->src + index;
    func_020fc934(data + offset, src, count * 2);
    func_020461e4(3, src, buffers->dst + index, count * 2, 0x10);
}
