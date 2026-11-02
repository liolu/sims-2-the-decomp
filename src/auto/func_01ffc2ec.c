/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_01ffc328();

void func_01ffc2ec(s32 *arg0, s32 *arg1) {
    volatile s32 tmp[3];
    s32 v;

    v       = arg1[0];
    tmp[0]  = v;
    arg0[0] = v;
    v       = arg1[1];
    tmp[1]  = v;
    arg0[1] = v;
    v       = arg1[2];
    tmp[2]  = v;
    arg0[2] = v;
    func_01ffc328(arg0, v);
}
