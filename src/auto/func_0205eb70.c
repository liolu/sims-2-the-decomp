/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0205eb70(void *arg0, u8 arg1, u8 arg2) {
    M2C_FIELD(arg0, u8 *, 7) = (u8) M2C_FIELD(arg0, u8 *, 6);
    M2C_FIELD(arg0, u8 *, 9) = (u8) M2C_FIELD(arg0, u8 *, 8);
    M2C_FIELD(arg0, u8 *, 6) = arg1;
    if ((M2C_FIELD(arg0, u8 *, 8) != 0) && (M2C_FIELD(arg0, u8 *, 6) != 2)) {
        M2C_FIELD(arg0, u8 *, 8) = 0U;
    }
    if (M2C_FIELD(arg0, u8 *, 6) == 2) {
        M2C_FIELD(arg0, u8 *, 8) = arg2;
    }
}
