/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef unsigned char u8;

M2C_UNK func_020467cc();
M2C_UNK func_020469e0();
extern M2C_UNK data_ov003_0215088c;

M2C_UNK **func_ov003_0214a654(M2C_UNK **arg0) {
    *arg0 = &data_ov003_0215088c;
    func_020469e0((u8 *) arg0 + 8);
    func_020467cc(arg0);
    return arg0;
}
