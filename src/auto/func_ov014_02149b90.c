#include "m2c.h"

extern M2C_UNK data_0212f9c4;
extern M2C_UNK data_ov014_0214b5a4;

void func_ov014_02149b90(M2C_UNK **arg0) {
    *(M2C_UNK *volatile *) arg0 = &data_ov014_0214b5a4;
    *(M2C_UNK *volatile *) arg0 = &data_0212f9c4;
}
