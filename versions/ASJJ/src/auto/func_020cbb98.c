#include "m2c.h"

extern M2C_UNK data_0212f4c4;
extern M2C_UNK data_02136668;
extern M2C_UNK data_02136688;

void func_020cbb98(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02136668;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &data_02136688;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_0212f4c4;
}
