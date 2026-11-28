/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" void *func_020468a0(s32, s32, s32);
extern "C" u8 data_0212fa9c[];
extern "C" u8 data_0212fa3c[];

extern "C" void func_020172b4(void *arg0, volatile s32 arg1, s32 arg2, s32 arg3) {
    void *temp_r0;
    void *temp_r0_2;
    volatile s32 sp0;
    volatile s32 sp4;
    s32 t;
    u64 v;

    temp_r0 = *(void **) ((u8 *) arg0 + 0x74);
    if (temp_r0 != NULL) {
        *(s32 *) ((u8 *) temp_r0 + 4) = *(s32 *) ((u8 *) temp_r0 + 4) - 1;
        if ((*(s32 *) ((u8 *) temp_r0 + 4) == 0) && (temp_r0 != NULL)) {
            ((VA *) temp_r0)->f1();
        }
    }
    temp_r0_2 = func_020468a0(0xC, 0, 4);
    if (temp_r0_2 != NULL) {
        sp0                             = arg1;
        *(void **) temp_r0_2            = (void *) data_0212fa9c;
        *(s32 *) ((u8 *) temp_r0_2 + 4) = 1;
        *(void **) temp_r0_2            = (void *) data_0212fa3c;
        t                               = arg1;
        v                               = (s64) sp0 * (s64) t;
        v += 0x800;
        sp4                             = t;
        *(u32 *) ((u8 *) temp_r0_2 + 8) = (u32) (v >> 12);
    }
    *(void **) ((u8 *) arg0 + 0x74) = temp_r0_2;
}
