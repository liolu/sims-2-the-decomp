/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02051a50(s32 a, s32 b, s32 c);
void func_0210823c();
s32 func_02051338(s32 a, s32 b, s32 c, void *d, s32 e);
void *func_02052258(s32 a);
void func_020745c4(void *a, s32 b);
void func_02050ab4(void *a);
void *func_020d9320(void *a, void *b, void *c);
extern u8 data_0213d7b0;
extern u8 data_ov008_0214b22c;
extern u8 data_ov008_0214b1f0;
extern u8 data_0213d848;
extern u8 data_0213d7b8;
extern u8 data_ov008_0214b1f4;

void func_ov008_0214a634(u8 *arg0, s32 arg1) {
    u8 buf[0x40];
    u8 *temp_r5;
    s32 temp_r4;

    temp_r4 = *(s32 *) ((u8 *) &data_ov008_0214b22c + arg1 * 8) >> 0xC;
    if (*(s32 *) ((u8 *) &data_0213d7b0 + 0x9C) == arg1) {
        func_02051a50(4, 3, -1);
    } else {
        func_02051a50(4, 0, -1);
    }
    func_0210823c(buf, &data_ov008_0214b1f0, arg1 + 1);
    *(s32 *) (arg0 + 0x74) = func_02051338(*(s32 *) (arg0 + 0x74), 0x16, temp_r4 - 8, buf, 1);
    func_02051a50(3, 0, -1);
    if (*((u8 *) &data_0213d848 + arg1) == 0) {
        *(s32 *) (arg0 + 0x74) = func_02051338(*(s32 *) (arg0 + 0x74), 0x48, temp_r4 - 5, func_02052258(0xB), 0);
        return;
    }
    temp_r5 = (u8 *) &data_0213d7b8 + arg1 * 0x30;
    if (temp_r5[0x1C] != 0) {
        func_0210823c(buf, temp_r5 + 0x1C);
    } else {
        func_0210823c(buf, &data_ov008_0214b1f4);
    }
    *(s32 *) (arg0 + 0x74) = func_02051338(*(s32 *) (arg0 + 0x74), 0x30, temp_r4 - 0xA, buf, 0);
    func_020745c4(buf, *(s32 *) (temp_r5 + 0x18));
    func_02050ab4(buf);
    *(s32 *) (arg0 + 0x74) = func_02051338(*(s32 *) (arg0 + 0x74), 0x90, temp_r4 - 0xA, func_02052258(0x1C), 0);
    *(s32 *) (arg0 + 0x74) = func_02051338(*(s32 *) (arg0 + 0x74), 0x30, temp_r4 + 3, func_02052258(temp_r5[0x2C] + 0x43), 0);
    *(s32 *) (arg0 + 0x74) =
        func_02051338(*(s32 *) (arg0 + 0x74), 0x90, temp_r4 + 3, func_020d9320(temp_r5 + 0x14, buf, func_02052258(0x980)), 0);
}
