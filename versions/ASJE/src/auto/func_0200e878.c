/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_0200dc20(void *, s32, u16);
extern u8 data_0212fa84;
typedef struct {
    u16 a, b, c, d;
} H4;

void func_0200e878(void *arg0, u16 arg1, s32 arg2) {
    H4 tbl;
    volatile u16 *ctl;
    volatile s32 *num;
    volatile s32 *den;
    volatile s32 *res;

    if ((arg2 == 0) && (*(u16 *) ((u8 *) arg0 + 0x226) == arg1)) {
        return;
    }
    *(u16 *) ((u8 *) arg0 + 0x226) = arg1;
    tbl                            = *(H4 *) &data_0212fa84;
    ctl                            = (volatile u16 *) 0x4000280;
    num                            = (volatile s32 *) 0x4000290;
    den                            = (volatile s32 *) 0x4000298;
    res                            = (volatile s32 *) 0x40002a0;
    *ctl                           = 0;
    *num                           = arg1;
    den[0]                         = 5;
    den[1]                         = 0;
    while (*ctl & 0x8000) {
    }
    func_0200dc20(arg0, 3, ((u16 *) &tbl)[*res]);
}
