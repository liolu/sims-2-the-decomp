/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef unsigned char u8;
typedef struct {
    u16 v;
} U16One;

extern u16 data_ov010_02152b14;
void func_02051b80(U16One v);
void func_02051a50(s32, s32, s32);
void func_02051a2c(s32);
s32 func_02052258(s32);
void func_020509d4(s32);
void func_02083fcc(void *, void *, void *, s32, s32, s32);
void func_02083fa8(void *, void *, s32, s32);
void func_020840dc(s32, s32, s32, s32);
s32 func_0205166c();

void func_ov010_0214a4b0(u8 *arg0) {
    s32 t8;
    s32 r4;

    t8                      = 0;
    *(s32 *) (arg0 + 0x1D0) = 0;
    *(s32 *) (arg0 + 0x1D4) = 0;
    arg0[0x1E9]             = arg0[0x1E9] + 1;
    func_02051b80(*(U16One *) &data_ov010_02152b14);
    func_02051a50(3, 0, -1);
    func_02051a2c(12);
    if (arg0[0x1E9] == 3) {
        r4 = func_02052258(0x6CB);
    } else {
        func_020509d4(arg0[0x1E9]);
        r4 = func_02052258(0x6CA);
    }
    func_02083fcc(arg0 + 0x1D0, arg0 + 0x1D4, &t8, r4, 0, 0);
    func_02083fa8(arg0 + 0x1C8, arg0 + 0x1CC, *(s32 *) (arg0 + 0x1D0), *(s32 *) (arg0 + 0x1D4));
    *(s32 *) (arg0 + 0x1D8) = (*(s32 *) (arg0 + 0x1C8) * 8) + ((*(s32 *) (arg0 + 0x1D0) * 8) / 2);
    *(s32 *) (arg0 + 0x1DC) = (*(s32 *) (arg0 + 0x1D0) - 2) * 8;
    *(s32 *) (arg0 + 0x1E0) = ((*(s32 *) (arg0 + 0x1CC) + 1) * 8) + 3;
    func_020840dc(*(s32 *) (arg0 + 0x1C8), *(s32 *) (arg0 + 0x1CC), *(s32 *) (arg0 + 0x1D0), *(s32 *) (arg0 + 0x1D4));
    func_0205166c(62, *(s32 *) (arg0 + 0x1D8), *(s32 *) (arg0 + 0x1E0), *(s32 *) (arg0 + 0x1DC), r4, 1);
}
