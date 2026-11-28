/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_02131524;
extern void *data_0213defc;

M2C_UNK **func_0205355c(M2C_UNK **arg0) {
    *arg0 = &data_02131524;
    M2C_FIELD(data_0213defc, M2C_UNK(**)(void **, M2C_UNK **), 0xC)(&data_0213defc, arg0);
    return arg0;
}
