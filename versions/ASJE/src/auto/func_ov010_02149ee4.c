/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 a;
} U16One;

void func_02051b08(U16One);
void func_020519d8(s32, s32, s32);
void func_020519b4(s32);
void func_02084064(s32, s32, s32, s32);
u8 *func_020521e0(s32);
void func_020512c0(s32, s32, s32, u8 *, s32);
u8 *func_02051d18(s32, s32 *);
extern u8 data_ov010_021529d4[];

void func_ov010_02149ee4(u8 *arg0) {
    s32 b1[4];
    s32 b2[4];
    s32 b3[4];

    func_02051b08(*(U16One *) &data_ov010_021529d4);
    func_020519d8(3, 0, -1);
    func_020519b4(0xC);
    *(s32 *) (arg0 + 0x1C8) = 3;
    *(s32 *) (arg0 + 0x1CC) = 6;
    *(s32 *) (arg0 + 0x1D0) = 0x1A;
    *(s32 *) (arg0 + 0x1D4) = 8;
    func_02084064(*(s32 *) (arg0 + 0x1C8), *(s32 *) (arg0 + 0x1CC), *(s32 *) (arg0 + 0x1D0), *(s32 *) (arg0 + 0x1D4));
    func_020512c0(0x3E, 0x80, 0x3B, func_020521e0(0x6DD), 1);
    func_020519d8(3, arg0[0x1E7] == 0 ? 3 : 0, -1);
    func_020519b4(0xC);
    func_020512c0(0x32, 0x68, 0x53, func_02051d18(1, b1), 1);
    func_020519d8(3, arg0[0x1E7] == 1 ? 3 : 0, -1);
    func_020519b4(0xC);
    func_020512c0(0x36, 0x80, 0x53, func_02051d18(2, b2), 1);
    func_020519d8(3, arg0[0x1E7] == 2 ? 3 : 0, -1);
    func_020519b4(0xC);
    func_020512c0(0x3A, 0x98, 0x53, func_02051d18(3, b3), 1);
}
