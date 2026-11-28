/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 func_02103380(void);
extern void func_02103320(u16);
extern void func_020f9b0c(u16);
extern s32 func_020f9ab4(void);
extern void func_02103330(u16);
extern s32 func_02103a84(s32, s32, s32, void *, s32, s32);
extern u8 data_021392d4;
extern s32 data_027e0004;
extern void func_0203b494(void);

void func_0203b378(void) {
    s32 f;
    s32 w;
    s32 b20;
    s32 b1c;
    s32 w0;

    if (func_02103380() == 0) {
        f = 1;
    } else {
        f = 0;
    }
    w                              = *(s32 *) (&data_021392d4);
    *(u8 *) (&data_021392d4 + 0xC) = f;
    func_02103320((u16) w);
    func_020f9b0c((u16) * (s32 *) (&data_021392d4));
    data_027e0004 &= ~0x400;
    if (*(s32 *) (&data_021392d4 + 4) != 0) {
        ((void (*)(s32)) * (s32 *) (&data_021392d4 + 4))(*(s32 *) (&data_021392d4 + 8));
    }
    if (*(u8 *) (&data_021392d4 + 0xC) == 0) {
        if (*(s32 *) (&data_021392d4 + 0x1C) == 0) {
            return;
        }
        ((void (*)(s32)) * (s32 *) (&data_021392d4 + 0x1C))(*(s32 *) (&data_021392d4 + 0x20));
        return;
    }
    b20 = *(s32 *) (&data_021392d4 + 0x20);
    b1c = *(s32 *) (&data_021392d4 + 0x1C);
    data_027e0004 |= 0x400;
    w0                            = func_020f9ab4();
    *(s32 *) (&data_021392d4)     = w0;
    *(s32 *) (&data_021392d4 + 4) = b1c;
    *(s32 *) (&data_021392d4 + 8) = b20;
    func_02103330((u16) w0);
    func_02103a84(*(s32 *) (&data_021392d4 + 0x10), *(s32 *) (&data_021392d4 + 0x18), *(s32 *) (&data_021392d4 + 0x14),
                  (void *) func_0203b494, 0, 1);
}
