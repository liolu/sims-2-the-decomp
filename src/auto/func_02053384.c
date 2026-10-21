/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046844(M2C_UNK **);                  /* extern */
extern M2C_UNK data_02131a24;
extern void *data_0213e3d4;

M2C_UNK **func_02053384(M2C_UNK **arg0) {
    *arg0 = &data_02131a24;
    M2C_FIELD(data_0213e3d4, M2C_UNK(**)(void **, M2C_UNK **), 0xC)(&data_0213e3d4, arg0);
    func_02046844(arg0);
    return arg0;
}
