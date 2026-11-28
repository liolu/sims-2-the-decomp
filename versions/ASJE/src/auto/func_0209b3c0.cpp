/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2(void *b);
};

extern "C" void *func_02046814(s32, s32, s32);                 /* extern */
extern "C" void *func_0209b1d8(void *);                             /* extern */
extern "C" void *func_0209b290(void *);                             /* extern */
extern "C" void *func_0209b704(void *);                             /* extern */
extern "C" void *func_0209b91c(void *);                             /* extern */
extern "C" void *func_0209b944(void *);                             /* extern */

extern "C" void *func_0209b3c0(void *arg0, void *arg1, void *arg2, s32 arg3) {
    volatile s32 sp[6];
    void *var_r4;
    s32 v;

    var_r4 = NULL;
    switch (arg3) {
        case 0:
            var_r4 = func_02046814(0x1C, 3, 4);
            if (var_r4 != NULL) {
                var_r4 = func_0209b944(var_r4);
            }
            break;
        case 1:
            var_r4 = func_02046814(0x1C, 3, 4);
            if (var_r4 != NULL) {
                var_r4 = func_0209b290(var_r4);
            }
            break;
        case 18:
            var_r4 = func_02046814(0x20, 3, 4);
            if (var_r4 != NULL) {
                var_r4 = func_0209b91c(var_r4);
            }
            break;
        case 19:
            var_r4 = func_02046814(0x20, 3, 4);
            if (var_r4 != NULL) {
                var_r4 = func_0209b704(var_r4);
            }
            break;
        case 21:
            break;
        default:
            var_r4 = func_02046814(0x1C, 3, 4);
            if (var_r4 != NULL) {
                var_r4 = func_0209b1d8(var_r4);
            }
            break;
    }
    if (var_r4 != NULL) {
        *(s8 *) ((u8 *) var_r4 + 0x18)  = (s8) arg3;
        v                               = *(s32 *) arg1;
        sp[0]                           = v;
        *(s32 *) var_r4                 = v;
        v                               = *(s32 *) ((u8 *) arg1 + 4);
        sp[1]                           = v;
        *(s32 *) ((u8 *) var_r4 + 4)    = v;
        v                               = *(s32 *) ((u8 *) arg1 + 8);
        sp[2]                           = v;
        *(s32 *) ((u8 *) var_r4 + 8)    = v;
        v                               = *(s32 *) arg2;
        sp[3]                           = v;
        *(s32 *) ((u8 *) var_r4 + 0xC)  = v;
        v                               = *(s32 *) ((u8 *) arg2 + 4);
        sp[4]                           = v;
        *(s32 *) ((u8 *) var_r4 + 0x10) = v;
        v                               = *(s32 *) ((u8 *) arg2 + 8);
        sp[5]                           = v;
        *(s32 *) ((u8 *) var_r4 + 0x14) = v;
        if ((u32) (arg3 - 0x12) <= 1U) {
            ((VA *) ((u8 *) arg0 + 0x34))->f2(var_r4);
        } else {
            ((VA *) arg0)->f2(var_r4);
        }
    }
    return var_r4;
}
