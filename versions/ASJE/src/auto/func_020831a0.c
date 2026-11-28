/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020467cc(s32);
s32 func_0204a4d8(s32);
M2C_UNK func_0204a92c(void);
extern void (*data_02121c7c[])(s32);

void func_020831a0(s32 *arg0) {
    u8 i;
    s32 t;
    s32 z;

    i = 0;
    z = 0;
    do {
        t = arg0[i];
        if (t != 0) {
            data_02121c7c[*(s32 *) (t + 0x1C8)](t);
            t = arg0[i];
            if (*(s32 *) (t + 0x44) == 0) {
                if (t != 0) {
                    func_0204a4d8(t);
                    func_020467cc(t);
                }
                arg0[i] = z;
            }
        }
        i += 1;
    } while (i < 2);
    func_0204a92c();
}
