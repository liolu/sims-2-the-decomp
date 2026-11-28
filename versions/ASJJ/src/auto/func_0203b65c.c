/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk02139414 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Unk02139414;

extern u32 data_027e0004;
extern Unk02139414 data_02138ef4;
s32 func_020f96dc(void);
void func_02102f58(u16);
void func_0203b540(void);
void func_0210377c(s32, s32, s32, void (*)(void), s32, s32);

void func_0203b65c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 id;
    data_027e0004 |= 0x400;
    id                 = func_020f96dc();
    data_02138ef4.unk4 = arg3;
    data_02138ef4.unk8 = arg4;
    data_02138ef4.unk0 = id;
    func_02102f58(id);
    func_0210377c(arg0, arg2, arg1, func_0203b540, 0, 1);
}
