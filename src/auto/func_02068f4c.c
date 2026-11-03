/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u16 func_020187ec(void *);
void func_020d59bc(s32);
void func_0205e148(void *);
void func_02048108(s32, s32, s32, s32, s32, s32);

extern void *data_0213e434;
extern void *data_0213e580;
extern s32 data_02139fa4;

void func_02068f4c(u8 *arg0) {
    s32 temp_r0;
    void *base;

    if (*(s32 *) data_0213e434 & 0x80) {
        return;
    }
    if ((*(s32 *) (arg0 + 4) & 1) != 1) {
        return;
    }
    if (*(s32 *) (*(u8 **) (arg0 + 0x90) + 0x6C) != 0) {
        return;
    }
    temp_r0 = *(s32 *) ((u8 *) data_0213e580 + 0xF8);
    if (temp_r0 == 0) {
        return;
    }
    if (func_020187ec((u8 *) temp_r0 + 0xE0) != 7) {
        return;
    }
    if (*((u8 *) data_0213e434 + 0x3035) == 0) {
        return;
    }
    func_020d59bc(0x16A);
    base = data_0213e434;
    if (*((u8 *) base + 0x31BE) != 0) {
        func_0205e148((u8 *) base + 0x3030);
        return;
    }
    func_02048108(data_02139fa4, 8, 1, 0, 0, 0);
}
