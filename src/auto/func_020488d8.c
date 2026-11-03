/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_01ffb598(void);
void func_01ffb700(void);

void func_020488d8(u8 *arg0, volatile s32 arg1, s32 arg2, s32 arg3) {
    *(s32 *) (arg0 + 0x24) = arg1;
    if (arg2 == 0) {
        func_01ffb700();
        return;
    }
    func_01ffb598();
}
