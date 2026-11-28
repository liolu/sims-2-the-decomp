/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} U16S;

void func_0203d23c(s32 a, U16S b);
void func_0203c878(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02051dbc(U16S a);
void func_02051b54(s32 a, s32 b, s32 c);
s32 func_020524a8(s32 a);
void func_0205161c(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void *func_02073f54(s32 a);
void func_02050a80(void);
void func_0205134c(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02050970(u16 a);
void func_ov001_021497dc(u8 *a, s32 b);
extern u16 data_ov001_0214ac14;
extern u16 data_ov001_0214ac18;

void func_ov001_02149e3c(u8 *arg0, s32 arg1) {
    s32 r5;
    u8 *r4;

    *(s32 *) (arg0 + 0x48) = 1;
    *(s32 *) (arg0 + 0x44) = arg1;
    func_0203d23c(2, *(U16S *) &data_ov001_0214ac18);
    func_ov001_021497dc(arg0, 1);
    func_0203c878(0, 2, 7, 0x1c, 0xc);
    func_02051dbc(*(U16S *) &data_ov001_0214ac14);
    func_02051b54(3, 0, -1);
    func_0205161c(0x80, 0x80, 0x39, 0xee, func_020524a8(0x95e), 1);
    r5 = *(s32 *) (arg0 + 0x44);
    r4 = func_02073f54(((s32 *) (arg0 + 0x4c))[r5]);
    func_020524a8(((s32 *) (arg0 + 0x4c))[r5] + 0x43);
    func_02050a80();
    func_0205134c(0xc0, 0x36, 0x51, func_020524a8(0x95c), 0);
    func_020524a8(r4[3] + 0x43);
    func_02050a80();
    func_0205134c(0xf0, 0x36, 0x5e, func_020524a8(0x95d), 0);
    func_02050970(*(u16 *) r4);
    func_0205134c(0x120, 0xc8, 0x51, func_020524a8(0x1c), 2);
}
