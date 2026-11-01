/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void *func_020fbea0(void);
extern void func_020fa314(void *);
extern void func_020fa2a0(void *);
extern void func_020fbeb4(void *);

s32 func_020fa9bc(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r4;
    u8 *b;
    s32 cnt;
    s32 cap;

    b       = (u8 *) arg0;
    temp_r4 = func_020fbea0();
    cnt     = *(s32 *) (b + 8);
    cap     = *(s32 *) (b + 0x10);
    if (cnt <= cap) {
        for (;;) {
            if (!(arg2 & 1)) {
                func_020fbeb4(temp_r4);
                return 0;
            }
            func_020fa314(arg0);
            if (*(s32 *) (b + 8) > *(s32 *) (b + 0x10)) {
                break;
            }
        }
        cnt = *(s32 *) (b + 8);
    }
    *(s32 *) (b + 0xC)                                     = (*(s32 *) (b + 0xC) + cnt - 1) % cnt;
    *(s32 *) (*(u8 **) (b + 4) + (*(s32 *) (b + 0xC) * 4)) = arg1;
    *(s32 *) (b + 0x10)                                    = *(s32 *) (b + 0x10) + 1;
    func_020fa2a0(b + 2);
    func_020fbeb4(temp_r4);
    return 1;
}
