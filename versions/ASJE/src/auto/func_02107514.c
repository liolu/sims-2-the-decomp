/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0210724c();                            /* extern */
M2C_UNK func_02107348();                            /* extern */
M2C_UNK func_020fddd0();                            /* extern */
s32 func_020fdfb4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020fdfdc(M2C_UNK, M2C_UNK *);          /* extern */
extern s32 data_021493e8;
extern s32 data_021493ec;
extern M2C_UNK func_021072ac;
extern M2C_UNK func_0210730c;

void func_02107514(void) {
    if (data_021493e8 != 0) {
        return;
    }
    data_021493e8 = 1;
    func_0210724c();
    func_020fddd0();
    do {

    } while (func_020fdfb4(0xD, 1) == 0);
    func_020fdfdc(0xD, &func_0210730c);
    func_02107348();
    func_020fdfdc(0xD, NULL);
    func_020fdfdc(0xD, &func_021072ac);
    data_021493ec = 0;
}
