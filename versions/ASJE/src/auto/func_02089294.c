/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020519d8(s32 a, s32 b, s32 c);
void *func_02018578(volatile s32 *a);
void func_020168a4(void *a, s32 b);
u8 func_0205182c(volatile s32 *a);

void func_02089294(void *arg0, u8 *arg1) {
    u8 *p;
    volatile s32 sp[6];
    volatile u8 *sb;
    s32 r1;
    s32 r0;
    void *obj;

    p = (u8 *) arg0;
    if (p[0xBC] >= p[0xBD]) {
        return;
    }
    *(volatile u8 *) &sp[0]       = arg1[0];
    *((volatile u8 *) &sp[0] + 1) = 0;
    (p + p[0xBC])[0x5C]           = *(volatile u8 *) &sp[0];
    (p + (p[0xBC] + 1))[0x5C]     = 0;
    func_020519d8(3, 0, 0);
    sp[1]                                                        = (s32) sp;
    obj                                                          = func_02018578(&sp[1]);
    *(void **) (p + p[0xBC] * 4 + 0x18)                          = obj;
    r1                                                           = (*(s16 *) (p + 0x72)) << 12;
    sp[2]                                                        = r1;
    sp[4]                                                        = r1;
    *(s32 *) ((u8 *) *(void **) (p + p[0xBC] * 4 + 0x18) + 0x50) = r1;
    r1                                                           = (*(s16 *) (p + 0x74)) << 12;
    sp[3]                                                        = r1;
    sp[5]                                                        = r1;
    *(s32 *) ((u8 *) *(void **) (p + p[0xBC] * 4 + 0x18) + 0x54) = r1;
    func_020168a4(*(void **) (p + p[0xBC] * 4 + 0x18), p[0xC0]);
    (p + p[0xBC])[0xAC] = func_0205182c(sp);
    *(s16 *) (p + 0x72) = (s16) ((*(s16 *) (p + 0x72)) + (p + p[0xBC])[0xAC]);
    p[0xBC]             = p[0xBC] + 1;
}
