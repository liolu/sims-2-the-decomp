/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_021315b0;
void func_0201d0ac(void *);
void func_0201d4f4(void *);
void func_020117e8(void *, s32, void *, s32);
void func_02011090(void *, s32, s32, s32, s32);
void func_02018acc(void *);
void func_0201866c(void *);

void *func_02039b50(void *arg0) {
    u8 fr[0x64];

    *(u8 **) arg0 = &data_021315b0;
    func_0201d0ac(fr);
    *(s32 *) (fr + 0x20) = *(s32 *) ((u8 *) arg0 + 4);
    *(u16 *) (fr + 0x30) = 0;
    fr[0x33]             = 1;
    fr[0x36]             = 1;
    func_020117e8(*(void **) ((u8 *) arg0 + 4), 3, fr, 0);
    func_0201d4f4(fr + 0x3C);
    func_020117e8(*(void **) ((u8 *) arg0 + 4), 0x22, fr + 0x3C, 0);
    fr[0x33]             = 0;
    fr[0x36]             = 0;
    *(u16 *) (fr + 0x30) = 0x4C;
    func_020117e8(*(void **) ((u8 *) arg0 + 4), 3, fr, 0);
    func_02011090(*(void **) (*(u8 **) ((u8 *) arg0 + 4) + 0x1C), 0x87, 0, 1, 1);
    func_02018acc(fr + 0x3C);
    func_02018acc(fr);
    func_02018acc((u8 *) arg0 + 0x18);
    func_0201866c(arg0);
    return arg0;
}
