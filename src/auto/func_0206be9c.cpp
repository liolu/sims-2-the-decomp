/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 v;
} W;
struct VA {
    virtual void f0();
    virtual void f1();
    virtual s32 f2(void *a, W b, W c);
};

extern "C" {
void func_02016708(void *, void *);
void func_020d59bc(s32);
extern u8 data_0211f8e0[];
extern u8 data_0211f8e8[];

void func_0206be9c(u8 *arg0) {
    if (arg0[0x94] != 0) {
        return;
    }
    if (*(s32 *) (*(u8 **) (*(u8 **) (arg0 + 0x90) + 0xC) + 0x6C) == 2) {
        return;
    }
    if (((VA *) *(void **) (arg0 + 0x74))->f2(arg0, *(W *) (arg0 + 0x80), *(W *) (arg0 + 0x84)) != 0) {
        if (arg0[0x95] != 0) {
            return;
        }
        arg0[0x95]             = 1;
        *(s32 *) (arg0 + 0x14) = (*(s32 *) (arg0 + 0x14) & ~0xF000) | 0x2000;
        func_02016708(arg0, data_0211f8e8);
        if ((*(s32 *) (arg0 + 4) & 1) != 1) {
            return;
        }
        func_020d59bc(0x161);
        return;
    }
    if (arg0[0x95] == 0) {
        return;
    }
    arg0[0x95]             = 0;
    *(s32 *) (arg0 + 0x14) = (*(s32 *) (arg0 + 0x14) & ~0xF000) | 0x1000;
    func_02016708(arg0, data_0211f8e0);
}
}
