/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 func_021034bc(void);
extern void func_0210345c(u16);
extern void func_020f9c48(u16);
extern s32 func_020f9bf0(void);
extern void func_0210346c(u16);
extern s32 func_02103bc0(s32, s32, s32, void *, s32, s32);
extern u8 data_02139414;
extern s32 data_027e0004;
extern void func_0203b50c(void);

void func_0203b3f0(void) {
    s32 f;
    s32 w;
    s32 b20;
    s32 b1c;
    s32 w0;

    if (func_021034bc() == 0) {
        f = 1;
    } else {
        f = 0;
    }
    w                              = *(s32 *) (&data_02139414);
    *(u8 *) (&data_02139414 + 0xC) = f;
    func_0210345c((u16) w);
    func_020f9c48((u16) * (s32 *) (&data_02139414));
    data_027e0004 &= ~0x400;
    if (*(s32 *) (&data_02139414 + 4) != 0) {
        ((void (*)(s32)) * (s32 *) (&data_02139414 + 4))(*(s32 *) (&data_02139414 + 8));
    }
    if (*(u8 *) (&data_02139414 + 0xC) == 0) {
        if (*(s32 *) (&data_02139414 + 0x1C) == 0) {
            return;
        }
        ((void (*)(s32)) * (s32 *) (&data_02139414 + 0x1C))(*(s32 *) (&data_02139414 + 0x20));
        return;
    }
    b20 = *(s32 *) (&data_02139414 + 0x20);
    b1c = *(s32 *) (&data_02139414 + 0x1C);
    data_027e0004 |= 0x400;
    w0                            = func_020f9bf0();
    *(s32 *) (&data_02139414)     = w0;
    *(s32 *) (&data_02139414 + 4) = b1c;
    *(s32 *) (&data_02139414 + 8) = b20;
    func_0210346c((u16) w0);
    func_02103bc0(*(s32 *) (&data_02139414 + 0x10), *(s32 *) (&data_02139414 + 0x18), *(s32 *) (&data_02139414 + 0x14),
                  (void *) func_0203b50c, 0, 1);
}
