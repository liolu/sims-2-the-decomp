/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_021315b0;

void *func_0201d0ac(void *p);
void func_020117e8(void *o, s32 k, void *a, s32 f);
void func_0201d4f4(void *p);
void func_02011090(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02018acc(void *p);
void func_0201866c(void *p);
void func_020467cc(void *p);

void *func_02039a70(void *arg0) {
    u8 sp4[0x3C];
    u8 sp40[0x28];

    *(void **) arg0 = &data_021315b0;
    func_0201d0ac(sp4);
    *(void **) (sp4 + 0x20) = *(void **) ((u8 *) arg0 + 4);
    *(s16 *) (sp4 + 0x30)   = 0;
    *(u8 *) (sp4 + 0x33)    = 1;
    *(u8 *) (sp4 + 0x36)    = 1;
    func_020117e8(*(void **) ((u8 *) arg0 + 4), 3, sp4, 0);
    func_0201d4f4(sp40);
    func_020117e8(*(void **) ((u8 *) arg0 + 4), 0x22, sp40, 0);
    *(u8 *) (sp4 + 0x33)  = 0;
    *(u8 *) (sp4 + 0x36)  = 0;
    *(s16 *) (sp4 + 0x30) = 0x4C;
    func_020117e8(*(void **) ((u8 *) arg0 + 4), 3, sp4, 0);
    func_02011090(*(s32 *) (*(u8 **) ((u8 *) arg0 + 4) + 0x1C), 0x87, 0, 1, 1);
    func_02018acc(sp40);
    func_02018acc(sp4);
    func_02018acc((u8 *) arg0 + 0x18);
    func_0201866c(arg0);
    func_020467cc(arg0);
    return arg0;
}
