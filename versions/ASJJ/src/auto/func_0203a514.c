/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_02011090(void *, s32, s32, s32, s32);
extern void func_020117e8(void *, s32, void *, ...);
extern void func_02018664(void *);
extern void func_02018ac4(void *);
extern void func_0201d10c(void *);
extern void func_0201d554(void *);
extern u8 data_02131238;

void *func_0203a514(void *arg0) {
    u8 sp4[60];
    u8 sp40[40];

    *(void **) arg0 = &data_02131238;
    func_0201d10c(sp4);
    *(void **) (sp4 + 32) = *(void **) ((u8 *) arg0 + 4);
    *(s16 *) (sp4 + 48)   = 0;
    sp4[51]               = 1;
    sp4[54]               = 1;
    func_020117e8(*(void **) ((u8 *) arg0 + 4), 3, sp4, 0);
    func_0201d554(sp40);
    func_020117e8(*(void **) ((u8 *) arg0 + 4), 0x22, sp40, 0);
    *(s16 *) (sp4 + 48) = 0x4C;
    sp4[51]             = 0;
    sp4[54]             = 0;
    *(s32 *) (sp4 + 16) = 0x115;
    func_020117e8(*(void **) ((u8 *) arg0 + 4), 3, sp4, 0);
    func_02011090(*(void **) (*(u8 **) ((u8 *) arg0 + 4) + 0x1C), 0x88, 0, 1, 0);
    func_02018ac4(sp40);
    func_02018ac4(sp4);
    func_02018ac4((u8 *) arg0 + 0x18);
    func_02018664(arg0);
    return arg0;
}
