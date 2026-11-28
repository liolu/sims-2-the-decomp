#include "m2c.h"

extern u8 data_0213e080;

void func_ov000_0214be98(s32 arg0) {
    u32 *tbl                    = *(u32 **) &data_0213e080;
    *(volatile u32 *) 0x4001040 = tbl[arg0];
}
