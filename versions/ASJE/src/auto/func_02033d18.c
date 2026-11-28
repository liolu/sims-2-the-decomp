/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_0202726c(void *);
void func_01ffac40(void *, void *);
void *func_02046814(s32, s32, s32);
s32 func_020b2a00(void *, void *, s32);
void func_02018af8(void *, s32, void *, s32);
void func_020b908c(void *);
void func_020117e8(void *, s32, void *, void *);
void func_020480b0(s32, s32, s32, void *, s32);
void func_020b1160(void *);
void func_02018acc(void *);
extern s32 data_02139e64;

s32 func_02033d18(u8 *arg0, u8 *arg1) {
    s32 sp4[6];
    void *r4;

    func_0202726c(sp4);
    func_01ffac40(*(u8 **) (arg0 + 4) + 0xE0, arg0);
    r4 = func_02046814(0x124, 3, 4);
    if (r4 != 0) {
        r4 = (void *) func_020b2a00(r4, *(void **) (arg0 + 4), (s32) arg1);
    }
    sp4[4] = (s32) r4;
    func_02018af8(arg1 + 0x128, 8, *(void **) (arg0 + 4), 2);
    func_020b908c(*(u8 **) (arg0 + 4) + 0x14C);
    sp4[4] = (s32) r4;
    sp4[5] = 0xC;
    func_020117e8(*(void **) (arg0 + 4), 0xD, sp4, arg0);
    func_020480b0(data_02139e64, 0x1F, 0, r4, 0);
    func_020b1160(r4);
    func_02018acc(sp4);
    return 2;
}
