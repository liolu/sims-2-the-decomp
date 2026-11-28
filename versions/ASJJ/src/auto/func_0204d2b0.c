/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213d290[];

void func_02046398(u8 *a, s32 b, s32 c);

void func_0204d2b0(void) {
    u8 *p;
    u16 *q;
    s32 cnt;
    u16 sum;
    u32 used;

    func_02046398(*(u8 **) (data_0213d290 + 4), 0, 0xAA0);
    p                               = *(u8 **) (data_0213d290 + 4);
    used                            = *(u32 *) (data_0213d290 + 4) - (u32) p;
    sum                             = 0;
    *(u32 *) (data_0213d290 + 0xA8) = (u32) p;
    *(u32 *) (data_0213d290 + 0xAC) = 0;
    *(u32 *) (data_0213d290 + 0xB0) = used;
    *(u32 *) (data_0213d290 + 0xB4) = (used * 100) / 0xAA0;
    *(u16 *) (p + 0xA00 + 0x9E)     = 0;
    q                               = (u16 *) p;
    cnt                             = 0x550;
    do {
        sum = sum + *q++;
        cnt--;
    } while (cnt > 0);
    *(u16 *) (p + 0xA00 + 0x9E) = (u16) (-sum);
}
