#include "m2c.h"

extern M2C_UNK data_0212f9c4;
extern M2C_UNK data_ov017_0214c658;

void func_ov017_02149b40(M2C_UNK **arg0) {
    *(M2C_UNK *volatile *) arg0 = &data_ov017_0214c658;
    *(M2C_UNK *volatile *) arg0 = &data_0212f9c4;
}
