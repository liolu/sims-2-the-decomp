/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u16 func_020187ec(void *);
void func_020d5880(s32);
void func_0205e0d0(void *);
void func_02048090(s32, s32, s32, s32, s32, s32);

extern void *data_0213e2f4;
extern void *data_0213e440;
extern s32 data_02139e64;

void func_02068ed4(u8 *arg0) {
    s32 temp_r0;
    void *base;

    if (*(s32 *) data_0213e2f4 & 0x80) {
        return;
    }
    if ((*(s32 *) (arg0 + 4) & 1) != 1) {
        return;
    }
    if (*(s32 *) (*(u8 **) (arg0 + 0x90) + 0x6C) != 0) {
        return;
    }
    temp_r0 = *(s32 *) ((u8 *) data_0213e440 + 0xF8);
    if (temp_r0 == 0) {
        return;
    }
    if (func_020187ec((u8 *) temp_r0 + 0xE0) != 7) {
        return;
    }
    if (*((u8 *) data_0213e2f4 + 0x3035) == 0) {
        return;
    }
    func_020d5880(0x16A);
    base = data_0213e2f4;
    if (*((u8 *) base + 0x31BE) != 0) {
        func_0205e0d0((u8 *) base + 0x3030);
        return;
    }
    func_02048090(data_02139e64, 8, 1, 0, 0, 0);
}
