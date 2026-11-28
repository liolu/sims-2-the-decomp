/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} U16S;

void func_0203d190(s32 a, U16S b);
void func_0203c7cc(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02051b08(U16S a);
void func_020519d8(s32 a, s32 b, s32 c);
s32 func_020521e0(s32 a);
void func_020515f4(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void *func_02073ef4(s32 a);
void func_02050a3c(void);
void func_020512c0(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0205095c(u16 a);
void func_ov001_02149b78(u8 *a, s32 b);
extern u16 data_ov001_0214afb8;
extern u16 data_ov001_0214afbc;

void func_ov001_0214a1e0(u8 *arg0, s32 arg1) {
    s32 r5;
    u8 *r4;

    *(s32 *) (arg0 + 0x48) = 1;
    *(s32 *) (arg0 + 0x44) = arg1;
    func_0203d190(2, *(U16S *) &data_ov001_0214afbc);
    func_ov001_02149b78(arg0, 1);
    func_0203c7cc(0, 2, 7, 0x1c, 0xc);
    func_02051b08(*(U16S *) &data_ov001_0214afb8);
    func_020519d8(3, 0, -1);
    func_020515f4(0x80, 0x80, 0x39, 0xee, func_020521e0(0x95e), 1);
    r5 = *(s32 *) (arg0 + 0x44);
    r4 = func_02073ef4(((s32 *) (arg0 + 0x4c))[r5]);
    func_020521e0(((s32 *) (arg0 + 0x4c))[r5] + 0x43);
    func_02050a3c();
    func_020512c0(0xc0, 0x36, 0x51, func_020521e0(0x95c), 0);
    func_020521e0(r4[3] + 0x43);
    func_02050a3c();
    func_020512c0(0xf0, 0x36, 0x5e, func_020521e0(0x95d), 0);
    func_0205095c(*(u16 *) r4);
    func_020512c0(0x120, 0xc8, 0x51, func_020521e0(0x1c), 2);
}
