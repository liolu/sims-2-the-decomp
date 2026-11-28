/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_020bd6b8(void *, s32);
extern void func_020bd43c(void *, u32, s32, s32, s32);
extern void func_020bba14(u8 *, void *);
extern void func_020bd658(void *);

extern u8 data_0211dd6c[];
extern u8 data_02130e30[];
extern u8 data_0211dd64[];

void func_02030bc0(u8 *arg0) {
    s32 tmp[9];
    u8 *p = arg0;

    if (p[0x28] == 0) {
        return;
    }
    if (*(s32 *) (p + 0x34) <= 0) {
        return;
    }
    *(s32 *) (p + 0x34) = *(s32 *) (p + 0x34) - 1;
    if (*(s32 *) (p + 0x34) > 0) {
        return;
    }
    p[0x30] = p[0x30] + 1;
    if (p[0x30] >= data_0211dd6c[p[0x31]]) {
        p[0x30] = 0;
    }
    func_020bd6b8(tmp, 0xffff);
    func_020bd43c(tmp, *(u16 *) (*(u8 **) (data_02130e30 + p[0x31] * 4) + p[0x30] * 2), 0x20, 0x20, 4);
    func_020bba14(*(u8 **) (p + 4) + 0x1a4, tmp);
    *(s32 *) (p + 0x34) = data_0211dd64[p[0x31]];
    func_020bd658(tmp);
}
