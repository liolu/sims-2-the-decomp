/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0211e1f8[];
extern u8 data_0211e200[];
extern u8 data_0211e204[];

void func_020bbcf0(u8 *a, s32 b, u8 *c, s32 d, s32 e, s32 f);

void func_02029394(u8 *arg0) {
    u32 idx;

    func_020bbcf0(*(u8 **) (arg0 + 4) + 0x1A4, 1, data_0211e1f8, 8, 0, 0);
    idx = arg0[0x28];
    ((void (*)(void *, s32))(*(u32 *) (data_0211e200 + idx * 12)))(*(void **) (arg0 + 4), 1);
    idx = arg0[0x28];
    ((void (*)(void))(*(u32 *) (data_0211e204 + idx * 12)))();
    arg0[0x98] = 1;
}
