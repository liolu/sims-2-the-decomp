/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020fb98c(void);
void func_020fb9a0(M2C_UNK);

extern s32 data_02145eb0;
extern s32 data_02145eb4;

void func_020fd500(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_020fb98c();
    if (data_02145eb4 == 0) {
        data_02145eb4 = arg0;
        data_02145eb0 = arg0;
    } else {
        *(M2C_UNK *) data_02145eb4 = arg0;
        data_02145eb4              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
    func_020fb9a0(temp_r0);
}
