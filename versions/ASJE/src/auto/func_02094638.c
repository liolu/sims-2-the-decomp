/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467cc(M2C_UNK **);                  /* extern */
M2C_UNK func_0208af9c();                            /* extern */
extern M2C_UNK data_02134188;

M2C_UNK **func_02094638(M2C_UNK **arg0) {
    *arg0 = &data_02134188;
    func_0208af9c();
    func_020467cc(arg0);
    return arg0;
}
