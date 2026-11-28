/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02048090(void *, s32, s32, s32, s32, s32);

extern void *data_02139e64;

void func_020422a4(void *arg0, u8 *arg1) {
    func_02048090(data_02139e64, 2, 0, 4, arg1[0], arg1[1]);
    func_02048090(data_02139e64, 12, 1, 0, 0, 0);
}
