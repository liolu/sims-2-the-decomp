/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02107730(M2C_UNK);                     /* extern */
M2C_UNK func_02111be8();                            /* extern */
extern M2C_UNK (*data_02149604)();
extern s32 data_0214960c;

void func_02107864(M2C_UNK arg0) {
    if (data_0214960c == 0) {
        func_02111be8();
        if (data_02149604 != NULL) {
            data_02149604();
            data_02149604 = NULL;
        }
    }
    func_02107730(arg0);
}
