/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020519d8(s32 a, s32 b, s32 c);
void func_02108100();
s32 func_020512c0(s32 a, s32 b, s32 c, void *d, s32 e);
void *func_020521e0(s32 a);
void func_0207454c(void *a, s32 b);
void func_02050a3c(void *a);
void *func_020d91e4(void *a, void *b, void *c);
extern u8 data_0213d670;
extern u8 data_ov008_0214b0ec;
extern u8 data_ov008_0214b0b0;
extern u8 data_0213d708;
extern u8 data_0213d678;
extern u8 data_ov008_0214b0b4;

void func_ov008_0214a4f4(u8 *arg0, s32 arg1) {
    u8 buf[0x40];
    u8 *temp_r5;
    s32 temp_r4;

    temp_r4 = *(s32 *) ((u8 *) &data_ov008_0214b0ec + arg1 * 8) >> 0xC;
    if (*(s32 *) ((u8 *) &data_0213d670 + 0x9C) == arg1) {
        func_020519d8(4, 3, -1);
    } else {
        func_020519d8(4, 0, -1);
    }
    func_02108100(buf, &data_ov008_0214b0b0, arg1 + 1);
    *(s32 *) (arg0 + 0x74) = func_020512c0(*(s32 *) (arg0 + 0x74), 0x16, temp_r4 - 8, buf, 1);
    func_020519d8(3, 0, -1);
    if (*((u8 *) &data_0213d708 + arg1) == 0) {
        *(s32 *) (arg0 + 0x74) = func_020512c0(*(s32 *) (arg0 + 0x74), 0x48, temp_r4 - 5, func_020521e0(0xB), 0);
        return;
    }
    temp_r5 = (u8 *) &data_0213d678 + arg1 * 0x30;
    if (temp_r5[0x1C] != 0) {
        func_02108100(buf, temp_r5 + 0x1C);
    } else {
        func_02108100(buf, &data_ov008_0214b0b4);
    }
    *(s32 *) (arg0 + 0x74) = func_020512c0(*(s32 *) (arg0 + 0x74), 0x30, temp_r4 - 0xA, buf, 0);
    func_0207454c(buf, *(s32 *) (temp_r5 + 0x18));
    func_02050a3c(buf);
    *(s32 *) (arg0 + 0x74) = func_020512c0(*(s32 *) (arg0 + 0x74), 0x90, temp_r4 - 0xA, func_020521e0(0x1C), 0);
    *(s32 *) (arg0 + 0x74) = func_020512c0(*(s32 *) (arg0 + 0x74), 0x30, temp_r4 + 3, func_020521e0(temp_r5[0x2C] + 0x43), 0);
    *(s32 *) (arg0 + 0x74) =
        func_020512c0(*(s32 *) (arg0 + 0x74), 0x90, temp_r4 + 3, func_020d91e4(temp_r5 + 0x14, buf, func_020521e0(0x980)), 0);
}
