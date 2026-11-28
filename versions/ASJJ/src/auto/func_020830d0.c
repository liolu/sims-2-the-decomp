/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02046858(s32);
s32 func_0204a564(s32);
M2C_UNK func_0204a9b8(void);
extern void (*data_021218e4[])(s32);

void func_020830d0(s32 *arg0) {
    u8 i;
    s32 t;
    s32 z;

    i = 0;
    z = 0;
    do {
        t = arg0[i];
        if (t != 0) {
            data_021218e4[*(s32 *) (t + 0x1C8)](t);
            t = arg0[i];
            if (*(s32 *) (t + 0x44) == 0) {
                if (t != 0) {
                    func_0204a564(t);
                    func_02046858(t);
                }
                arg0[i] = z;
            }
        }
        i += 1;
    } while (i < 2);
    func_0204a9b8();
}
