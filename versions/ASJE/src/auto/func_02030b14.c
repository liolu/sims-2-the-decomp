/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_020bdabc(void *, s32);
extern void func_020bd840(void *, u32, s32, s32, s32);
extern void func_020bbe18(u8 *, void *);
extern void func_020bda5c(void *);

extern u8 data_0211e144[];
extern u8 data_021311f0[];
extern u8 data_0211e13c[];

void func_02030b14(u8 *arg0) {
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
    if (p[0x30] >= data_0211e144[p[0x31]]) {
        p[0x30] = 0;
    }
    func_020bdabc(tmp, 0xffff);
    func_020bd840(tmp, *(u16 *) (*(u8 **) (data_021311f0 + p[0x31] * 4) + p[0x30] * 2), 0x20, 0x20, 4);
    func_020bbe18(*(u8 **) (p + 4) + 0x1a4, tmp);
    *(s32 *) (p + 0x34) = data_0211e13c[p[0x31]];
    func_020bda5c(tmp);
}
