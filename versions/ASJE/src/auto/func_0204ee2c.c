/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk0213d920 {
    s32 flags;
    u8 unk4[0x1C];
} Unk0213d920;

extern s32 data_027e0000;
extern s32 data_027e0004;
extern Unk0213d920 data_0213d7e0[];

void func_0204ee2c(void) {
    s32 screen                  = data_027e0000;
    u32 mask                    = data_027e0004 | (0x4000 << screen);
    u32 flags                   = data_0213d7e0[screen].flags | 5;
    data_027e0004               = mask;
    data_0213d7e0[screen].flags = flags;
}
