#include "m2c.h"

extern M2C_UNK data_0212f9c4;
extern M2C_UNK data_ov012_0214a9bc;

void func_ov012_02149b40(M2C_UNK **arg0) {
    *(M2C_UNK *volatile *) arg0 = &data_ov012_0214a9bc;
    *(M2C_UNK *volatile *) arg0 = &data_0212f9c4;
}
