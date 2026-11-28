/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_02027324(void *);
void func_01ffac40(void *, void *);
void *func_020468a0(s32, s32, s32);
s32 func_020b2910(void *, void *, s32);
void func_02018af0(void *, s32, void *, s32);
void func_020b8c88(void *);
void func_020117e8(void *, s32, void *, void *);
void func_0204813c(s32, s32, s32, void *, s32);
void func_020b1070(void *);
void func_02018ac4(void *);
extern s32 data_02139a84;

s32 func_02033dc4(u8 *arg0, u8 *arg1) {
    s32 sp4[6];
    void *r4;

    func_02027324(sp4);
    func_01ffac40(*(u8 **) (arg0 + 4) + 0xE0, arg0);
    r4 = func_020468a0(0x124, 3, 4);
    if (r4 != 0) {
        r4 = (void *) func_020b2910(r4, *(void **) (arg0 + 4), (s32) arg1);
    }
    sp4[4] = (s32) r4;
    func_02018af0(arg1 + 0x128, 8, *(void **) (arg0 + 4), 2);
    func_020b8c88(*(u8 **) (arg0 + 4) + 0x14C);
    sp4[4] = (s32) r4;
    sp4[5] = 0xC;
    func_020117e8(*(void **) (arg0 + 4), 0xD, sp4, arg0);
    func_0204813c(data_02139a84, 0x1F, 0, r4, 0);
    func_020b1070(r4);
    func_02018ac4(sp4);
    return 2;
}
