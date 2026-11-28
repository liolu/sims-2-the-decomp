/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Entry02049c74 {
    u8 unk0[4];
    u16 id;
    u8 unk6[6];
} Entry02049c74;

typedef struct Table02049c74 {
    Entry02049c74 entries[16];
    s32 unkC0;
} Table02049c74;

extern Table02049c74 data_0213d428[];
extern s32 data_027e0000;
void func_0204630c(void *, s32, u32);

void func_02049bfc(void) {
    u32 i;
    func_0204630c(&data_0213d428[data_027e0000], 0, sizeof(Table02049c74));
    for (i = 0; i < 16; i++) {
        data_0213d428[data_027e0000].entries[i].id = 0xFF;
    }
}
