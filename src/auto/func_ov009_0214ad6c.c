/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} U16One;

extern u16 data_ov009_0214c054;
extern u8 data_027e20d0;

void func_02016688(void *a, s32 b, s32 c);
void func_0203d208(s32 a, U16One b);
void *func_02052258(s32 a);
void *func_02018578(void *a);
void func_02018520(void *a, s32 b, s32 c);
void func_020165bc(void *, s32);

void func_ov009_0214ad6c(u8 *arg0, s32 arg1, s32 arg2) {
    void *loc[2];
    s32 *q;

    func_02016688(*(void **) (arg0 + 0x38), 0x1abb, 0);
    q = *(s32 **) (arg0 + 0x38);
    q[1] |= 0x10;
    func_0203d208(1, *(U16One *) &data_ov009_0214c054);
    if (arg2 != 0) {
        loc[0]                   = func_02052258(0x488);
        *(void **) (arg0 + 0x4c) = func_02018578(loc);
        func_02018520(*(void **) (arg0 + 0x4c), 0x80, 0x30);
        loc[0]                   = func_02052258(0x48c + arg1 * 2);
        *(void **) (arg0 + 0x50) = func_02018578(loc);
        func_02018520(*(void **) (arg0 + 0x50), 0x80, 0x44);
        loc[0] = func_02052258(0x48d + arg1 * 2);
        if (*(u8 *) loc[0] != 0 && ((u8 *) loc[0])[1] != 0) {
            *(void **) (arg0 + 0x54) = func_02018578(loc);
            func_02018520(*(void **) (arg0 + 0x54), 0x80, 0x58);
        } else {
            *(void **) (arg0 + 0x54) = 0;
        }
        *(s32 *) (arg0 + 0x58) = 0;
    } else {
        *(s32 *) (arg0 + 0x4c)   = 0;
        loc[1]                   = func_02052258(0x489);
        *(void **) (arg0 + 0x50) = func_02018578(&loc[1]);
        func_02018520(*(void **) (arg0 + 0x50), 0x80, 0x30);
        loc[1]                   = func_02052258(0x48a);
        *(void **) (arg0 + 0x54) = func_02018578(&loc[1]);
        func_02018520(*(void **) (arg0 + 0x54), 0x80, 0x44);
        *(s32 *) (arg0 + 0x58) = 0;
    }
    *(u8 *) (arg0 + 0x12) = 1;
    q                     = *(s32 **) (arg0 + 0x28);
    if (q != 0) {
        q[1] &= ~1;
    }
    *(s32 *) &data_027e20d0 = 0;
    if (*(u8 *) (arg0 + 0x12) == 1) {
        return;
    }
    *(u16 *) (*(u8 **) (arg0 + 0x38) + 0x24) = 0xffff;
    q                                        = *(s32 **) (arg0 + 0x38);
    q[1] &= ~0x10;
    func_020165bc(*(void **) (arg0 + 0x38), 0);
}
