/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020ff830();                            /* extern */
extern s32 data_02147a78;

void func_020ff760(s32 arg0) {
    if (data_02147a78 != 0) {
        return;
    }
    data_02147a78 = 1;
    func_020ff830(arg0);
}
