/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020fd3f4(void);
M2C_UNK func_020fd4c4(void);
M2C_UNK func_020fd524(void);
void func_020fd718(M2C_UNK);
M2C_UNK func_020fd9bc(M2C_UNK);

void func_020fd5f8(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_020fd524();
    if (temp_r0 >= arg0) {
        return;
    }
    if ((s32) (temp_r0 + func_020fd4c4()) >= arg0) {
        do {

        } while (func_020fd9bc(0) != 0);
        if (func_020fd524() >= arg0) {
            return;
        }
        goto block_8;
    }
    func_020fd718(1);
block_8:
    func_020fd3f4();
    do {
        func_020fd9bc(1);
    } while (func_020fd524() < arg0);
}
