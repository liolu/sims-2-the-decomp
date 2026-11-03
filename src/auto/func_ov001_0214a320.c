/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} U16S;

void func_0203d208(s32 a, U16S b);
void func_0203c844(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02051b80(U16S a);
void func_02051a50(s32 a, s32 b, s32 c);
s32 func_02052258(s32 a);
void func_0205166c(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void *func_02073f6c(s32 a);
void func_02050ab4(void);
void func_02051338(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020509d4(u16 a);
void func_ov001_02149cb8(u8 *a, s32 b);
extern u16 data_ov001_0214b0f8;
extern u16 data_ov001_0214b0fc;

void func_ov001_0214a320(u8 *arg0, s32 arg1) {
    s32 r5;
    u8 *r4;

    *(s32 *) (arg0 + 0x48) = 1;
    *(s32 *) (arg0 + 0x44) = arg1;
    func_0203d208(2, *(U16S *) &data_ov001_0214b0fc);
    func_ov001_02149cb8(arg0, 1);
    func_0203c844(0, 2, 7, 0x1c, 0xc);
    func_02051b80(*(U16S *) &data_ov001_0214b0f8);
    func_02051a50(3, 0, -1);
    func_0205166c(0x80, 0x80, 0x39, 0xee, func_02052258(0x95e), 1);
    r5 = *(s32 *) (arg0 + 0x44);
    r4 = func_02073f6c(((s32 *) (arg0 + 0x4c))[r5]);
    func_02052258(((s32 *) (arg0 + 0x4c))[r5] + 0x43);
    func_02050ab4();
    func_02051338(0xc0, 0x36, 0x51, func_02052258(0x95c), 0);
    func_02052258(r4[3] + 0x43);
    func_02050ab4();
    func_02051338(0xf0, 0x36, 0x5e, func_02052258(0x95d), 0);
    func_020509d4(*(u16 *) r4);
    func_02051338(0x120, 0xc8, 0x51, func_02052258(0x1c), 2);
}
