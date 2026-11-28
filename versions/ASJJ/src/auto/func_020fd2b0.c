/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020fd01c(void);
M2C_UNK func_020fd18c(M2C_UNK);
M2C_UNK func_020fd5e4(M2C_UNK);

void func_020fd2b0(s32 arg0) {
    if (func_020fd18c(arg0) != 0) {
        return;
    }
    do {

    } while (func_020fd5e4(0) != 0);
    if (func_020fd18c(arg0) != 0) {
        return;
    }
    func_020fd01c();
    if (func_020fd18c(arg0) != 0) {
        return;
    }
    do {
        func_020fd5e4(1);
    } while (func_020fd18c(arg0) == 0);
}
