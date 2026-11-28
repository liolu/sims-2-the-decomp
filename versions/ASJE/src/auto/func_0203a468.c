/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_02011090(void *, s32, s32, s32, s32);
extern void func_020117e8(void *, s32, void *, ...);
extern void func_0201866c(void *);
extern void func_02018acc(void *);
extern void func_0201d0ac(void *);
extern void func_0201d4f4(void *);
extern u8 data_021315f8;

void *func_0203a468(void *arg0) {
    u8 sp4[60];
    u8 sp40[40];

    *(void **) arg0 = &data_021315f8;
    func_0201d0ac(sp4);
    *(void **) (sp4 + 32) = *(void **) ((u8 *) arg0 + 4);
    *(s16 *) (sp4 + 48)   = 0;
    sp4[51]               = 1;
    sp4[54]               = 1;
    func_020117e8(*(void **) ((u8 *) arg0 + 4), 3, sp4, 0);
    func_0201d4f4(sp40);
    func_020117e8(*(void **) ((u8 *) arg0 + 4), 0x22, sp40, 0);
    *(s16 *) (sp4 + 48) = 0x4C;
    sp4[51]             = 0;
    sp4[54]             = 0;
    *(s32 *) (sp4 + 16) = 0x115;
    func_020117e8(*(void **) ((u8 *) arg0 + 4), 3, sp4, 0);
    func_02011090(*(void **) (*(u8 **) ((u8 *) arg0 + 4) + 0x1C), 0x88, 0, 1, 0);
    func_02018acc(sp40);
    func_02018acc(sp4);
    func_02018acc((u8 *) arg0 + 0x18);
    func_0201866c(arg0);
    return arg0;
}
