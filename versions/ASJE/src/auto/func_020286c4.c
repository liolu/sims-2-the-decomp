/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02018ad0(void);
void func_02018aa0(void *, s32);
extern u8 data_021392c8;

void *func_020286c4(u8 *arg0) {
    volatile s32 fr[2];
    s32 a;
    s32 b;
    s32 c;

    func_02018ad0();
    *(s32 *) (arg0 + 0x18) = 0;
    *(s32 *) (arg0 + 0x1C) = 0;
    *(s32 *) (arg0 + 0x20) = 0;
    func_02018aa0(arg0, 0x2D);
    *(s16 *) (arg0 + 0x10) = 0x2A;
    *(s16 *) (arg0 + 0x12) = 0x2A0;
    a                      = *(s32 *) (&data_021392c8 + 0);
    *(s32 *) (arg0 + 0x18) = a;
    b                      = *(s32 *) (&data_021392c8 + 4);
    fr[0]                  = b;
    *(s32 *) (arg0 + 0x1C) = b;
    c                      = *(s32 *) (&data_021392c8 + 8);
    fr[1]                  = c;
    *(s32 *) (arg0 + 0x20) = c;
    *(s32 *) (arg0 + 0x24) = 0;
    *(s8 *) (arg0 + 0x14)  = 0;
    return arg0;
}
