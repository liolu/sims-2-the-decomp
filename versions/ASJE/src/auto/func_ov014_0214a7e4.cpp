/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
};
typedef struct {
    s32 v;
} W;

extern "C" void *func_02046814(s32, s32, s32);
extern "C" void func_02017768(void *, u16);
extern "C" void func_02017380(void *, W, W, W, s32);
extern "C" void func_02016708(void *, void *);
extern "C" u8 data_ov014_0214b218[];
extern "C" u8 data_ov014_0214b4a8[];

extern "C" void func_ov014_0214a7e4(void *arg0) {
    s32 fr[7];
    void *obj;
    void *o2;
    s32 temp_r6;
    s32 *q;

    obj = func_02046814(0x94, 0, 4);
    if (obj != NULL) {
        temp_r6 = *(s32 *) ((u8 *) arg0 + 8);
        func_02017768(obj, (u16) * (s32 *) ((u8 *) arg0 + 4));
        *(void **) obj               = (void *) data_ov014_0214b4a8;
        *(s32 *) ((u8 *) obj + 0x90) = temp_r6;
        *(s32 *) ((u8 *) obj + 0x10) = (*(s32 *) ((u8 *) obj + 0x10) & ~0xC00) | 0x400;
    }
    *(void **) ((u8 *) arg0 + 0xC) = obj;
    o2                             = *(void **) ((u8 *) arg0 + 0xC);
    *(s32 *) ((u8 *) o2 + 0x14)    = *(s32 *) ((u8 *) o2 + 0x14) & ~0xF000;
    fr[3]                          = 0x20000;
    fr[2]                          = 0x20000;
    fr[1]                          = 0;
    fr[0]                          = 0;
    func_02017380(*(void **) ((u8 *) arg0 + 0xC), *(W *) (fr + 0), *(W *) (fr + 1), *(W *) (fr + 2), 0x20000);
    func_02016708(*(void **) ((u8 *) arg0 + 0xC), (void *) data_ov014_0214b218);
    fr[4] = 0xD4000;
    fr[5] = 0x9000;
    o2    = *(void **) ((u8 *) arg0 + 0xC);
    q     = (s32 *) ((u8 *) o2 + 0x50);
    q[0]  = fr[4];
    fr[6] = fr[5];
    q[1]  = fr[5];
    ((VA *) arg0)->f1();
}
