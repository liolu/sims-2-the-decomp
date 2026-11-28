/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020fd01c(void);
M2C_UNK func_020fd0ec(void);
M2C_UNK func_020fd14c(void);
void func_020fd340(M2C_UNK);
M2C_UNK func_020fd5e4(M2C_UNK);

void func_020fd220(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_020fd14c();
    if (temp_r0 >= arg0) {
        return;
    }
    if ((s32) (temp_r0 + func_020fd0ec()) >= arg0) {
        do {

        } while (func_020fd5e4(0) != 0);
        if (func_020fd14c() >= arg0) {
            return;
        }
        goto block_8;
    }
    func_020fd340(1);
block_8:
    func_020fd01c();
    do {
        func_020fd5e4(1);
    } while (func_020fd14c() < arg0);
}
