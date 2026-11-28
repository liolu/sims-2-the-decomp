/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern M2C_UNK data_0213e0a8;
M2C_UNK func_02031eec(M2C_UNK, void *);
void func_02085f5c(void *arg0) {
    s32 t;
    t = M2C_FIELD(*(u8 **) &data_0213e0a8, s32 *, 0xF8);
    if (t != 0) {
        func_02031eec(t, arg0);
    }
}
