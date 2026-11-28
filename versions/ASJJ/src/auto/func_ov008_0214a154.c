/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02051b54(s32 a, s32 b, s32 c);
void func_02107d28();
s32 func_0205134c(s32 a, s32 b, s32 c, void *d, s32 e);
void *func_020524a8(s32 a);
void func_020745ac(void *a, s32 b);
void func_02050a80(void *a);
void *func_020d8e0c(void *a, void *b, void *c);
extern u8 data_0213d290;
extern u8 data_ov008_0214ad4c;
extern u8 data_ov008_0214ad10;
extern u8 data_0213d328;
extern u8 data_0213d298;
extern u8 data_ov008_0214ad14;

void func_ov008_0214a154(u8 *arg0, s32 arg1) {
    u8 buf[0x40];
    u8 *temp_r5;
    s32 temp_r4;

    temp_r4 = *(s32 *) ((u8 *) &data_ov008_0214ad4c + arg1 * 8) >> 0xC;
    if (*(s32 *) ((u8 *) &data_0213d290 + 0x9C) == arg1) {
        func_02051b54(4, 3, -1);
    } else {
        func_02051b54(4, 0, -1);
    }
    func_02107d28(buf, &data_ov008_0214ad10, arg1 + 1);
    *(s32 *) (arg0 + 0x74) = func_0205134c(*(s32 *) (arg0 + 0x74), 0x16, temp_r4 - 8, buf, 1);
    func_02051b54(3, 0, -1);
    if (*((u8 *) &data_0213d328 + arg1) == 0) {
        *(s32 *) (arg0 + 0x74) = func_0205134c(*(s32 *) (arg0 + 0x74), 0x48, temp_r4 - 5, func_020524a8(0xB), 0);
        return;
    }
    temp_r5 = (u8 *) &data_0213d298 + arg1 * 0x30;
    if (temp_r5[0x1C] != 0) {
        func_02107d28(buf, temp_r5 + 0x1C);
    } else {
        func_02107d28(buf, &data_ov008_0214ad14);
    }
    *(s32 *) (arg0 + 0x74) = func_0205134c(*(s32 *) (arg0 + 0x74), 0x30, temp_r4 - 0xA, buf, 0);
    func_020745ac(buf, *(s32 *) (temp_r5 + 0x18));
    func_02050a80(buf);
    *(s32 *) (arg0 + 0x74) = func_0205134c(*(s32 *) (arg0 + 0x74), 0x90, temp_r4 - 0xA, func_020524a8(0x1C), 0);
    *(s32 *) (arg0 + 0x74) = func_0205134c(*(s32 *) (arg0 + 0x74), 0x30, temp_r4 + 3, func_020524a8(temp_r5[0x2C] + 0x43), 0);
    *(s32 *) (arg0 + 0x74) =
        func_0205134c(*(s32 *) (arg0 + 0x74), 0x90, temp_r4 + 3, func_020d8e0c(temp_r5 + 0x14, buf, func_020524a8(0x980)), 0);
}
