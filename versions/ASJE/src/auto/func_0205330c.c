/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467cc(M2C_UNK **);                  /* extern */
extern M2C_UNK data_021318e4;
extern void *data_0213e294;

M2C_UNK **func_0205330c(M2C_UNK **arg0) {
    *arg0 = &data_021318e4;
    M2C_FIELD(data_0213e294, M2C_UNK(**)(void **, M2C_UNK **), 0xC)(&data_0213e294, arg0);
    func_020467cc(arg0);
    return arg0;
}
