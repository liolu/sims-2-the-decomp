/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020f6604(M2C_UNK);                     /* extern */
M2C_UNK func_020f9968(M2C_UNK);                     /* extern */
M2C_UNK func_020f9b40(M2C_UNK, M2C_UNK *);          /* extern */
extern s32 data_0213e55c;
extern M2C_UNK func_02071858;

void func_020482f8(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 0;
    if (data_0213e55c == 0) {
        func_020f6604(0);
        func_020f9968(2);
        *(u16 *) 0x04000004 &= ~0x10;
        return;
    }
    func_020f9b40(2, &func_02071858);
}
