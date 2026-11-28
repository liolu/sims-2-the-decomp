/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020645cc(void *, s32);
s32 func_020734e4(void *, s32);
s32 func_02073530(void *, s32);
u16 *func_02073ef4(s32);
extern u8 *data_0213e2f4;

void func_ov001_02149a4c(void *arg0) {
    u8 *a = (u8 *) arg0;
    s32 i;
    s32 *cnt;
    s32 idx;
    s32 n;

    *(s32 *) (a + 0x40) = 0;
    if (func_020645cc(data_0213e2f4, 9) != 0 && func_020734e4(data_0213e2f4 + 0x41F8, 4) == 0) {
        idx                           = *(s32 *) (a + 0x40);
        *(s32 *) (a + 0x40)           = idx + 1;
        *(s32 *) (a + 0x4C + idx * 4) = 4;
        return;
    }
    if (func_020645cc(data_0213e2f4, 0x13) == 0) {
        return;
    }
    i = 0;
    do {
        if (func_02073ef4(i)[0] != 0 && func_02073530(data_0213e2f4 + 0x41F8, i) != 0 &&
            func_020734e4(data_0213e2f4 + 0x41F8, i) == 0 &&
            *((s32 *) (data_0213e2f4 + 0x4000) + i + 0x106) < *(s32 *) (data_0213e2f4 + 0x4000 + 0x80C)) {
            cnt                           = (s32 *) (a + 0x40);
            n                             = *cnt;
            idx                           = *(s32 *) (a + 0x40);
            *cnt                          = n + 1;
            *(s32 *) (a + 0x4C + idx * 4) = i;
        }
        i++;
    } while (i < 0x21);
}
