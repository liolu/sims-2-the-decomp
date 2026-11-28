/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u16 func_020c7004();
void func_020c3f44(void *, s32);
void func_020c3f7c(void *);
u16 func_020c481c(s32);
s32 func_020c3fe0(void *);

extern u8 data_0213d670;
extern u8 data_0213d694;
extern void *data_0213e2f4;
extern u16 data_0214001c;

s32 func_020c43fc(void) {
    u8 *p;
    u8 *q;
    u16 temp_r6;
    s32 var_r7;
    s32 temp;
    u16 idx;

    p = *(u8 **) ((u8 *) data_0213e2f4 + 0x479C);
    if (p != NULL) {
        q                   = p + 0x420;
        *(u16 *) (q + 0x24) = func_020c7004();
        func_020c3f44(q + 0x14, *(s32 *) ((u8 *) &data_0213d670 + 0xA4) * 0x30 + (s32) &data_0213d694);
        func_020c3f7c(q + 0x1C);
        temp_r6       = data_0214001c;
        data_0214001c = *(u16 *) (*(u8 **) ((u8 *) data_0213e2f4 + 0x479C) + 0x244);
        var_r7        = 0;
        do {
            if (temp_r6 & (1 << var_r7)) {
                idx  = var_r7;
                temp = *(u16 *) (*(u8 **) ((u8 *) data_0213e2f4 + 0x479C) + 0x244) & (1 << idx);
                if (temp == 0 && var_r7 != func_020c481c(temp)) {
                    return 1;
                }
            }
            var_r7 += 1;
        } while (var_r7 < 4);
        return func_020c3fe0(*(u8 **) ((u8 *) data_0213e2f4 + 0x479C));
    }
    data_0214001c = 0;
    return 0;
}
