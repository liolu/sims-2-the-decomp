/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk0213d920 {
    s32 flags;
    u8 unk4[0x1C];
} Unk0213d920;

extern s32 data_027e0000;
extern s32 data_027e0004;
extern Unk0213d920 data_0213d400[];

void func_0204edf4(void) {
    s32 screen                  = data_027e0000;
    u32 mask                    = data_027e0004 | (0x4000 << screen);
    u32 flags                   = data_0213d400[screen].flags | 6;
    data_027e0004               = mask;
    data_0213d400[screen].flags = flags;
}
