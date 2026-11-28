/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020fa980(M2C_UNK, M2C_UNK);
void func_020fc058(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020fc164(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_020461fc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_020fa980(arg2, arg3);
    if (arg4 == 0x20) {
        func_020fc164(arg0, arg2, arg1, arg3);
        return;
    }
    func_020fc058(arg0, arg2, (s32) (u16) arg1, arg3);
}
