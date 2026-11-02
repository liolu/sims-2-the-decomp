#include "m2c.h"

extern M2C_UNK data_0212f9c4;
extern M2C_UNK data_ov010_02152ec8;

void func_ov010_02152784(M2C_UNK **arg0) {
    *(M2C_UNK *volatile *) arg0 = &data_ov010_02152ec8;
    *(M2C_UNK *volatile *) arg0 = &data_0212f9c4;
}
