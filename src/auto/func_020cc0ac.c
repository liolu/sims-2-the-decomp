#include "m2c.h"

extern M2C_UNK data_0212f9c4;
extern M2C_UNK data_02136b7c;
extern M2C_UNK data_02136b9c;

void func_020cc0ac(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02136b7c;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &data_02136b9c;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_0212f9c4;
}
