/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0211dce4[];
extern u8 data_0211dcec[];
extern u8 data_0211dcf0[];

void func_020bb824(u8 *a, s32 b, u8 *c, s32 d, s32 e, s32 f);

void func_020293d0(u8 *arg0) {
    u32 idx;

    func_020bb824(*(u8 **) (arg0 + 4) + 0x1A4, 1, data_0211dce4, 8, 0, 0);
    idx = arg0[0x28];
    ((void (*)(void *, s32))(*(u32 *) (data_0211dcec + idx * 12)))(*(void **) (arg0 + 4), 1);
    idx = arg0[0x28];
    ((void (*)(void))(*(u32 *) (data_0211dcf0 + idx * 12)))();
    arg0[0x98] = 1;
}
