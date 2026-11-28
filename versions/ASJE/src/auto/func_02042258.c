/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_02048090(s32, s32, s32, s32, s32, s32);
extern M2C_UNK data_02139e64;

void func_02042258(s32 unused, u8 *arg1) {
    s32 f = 0;
    if (arg1[0] != 2) {
        f = 1;
    }
    func_02048090(*(s32 *) &data_02139e64, arg1[0], f, arg1[1], arg1[2], 0);
}
