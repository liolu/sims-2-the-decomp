/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02011c20();
M2C_UNK func_02045604();
extern M2C_UNK data_0212fd44;
M2C_UNK **func_02014d10(M2C_UNK **arg0) {
    func_02011c20();
    *arg0 = &data_0212fd44;
    func_02045604((u8 *) arg0 + 0xE0, 5);
    return arg0;
}
