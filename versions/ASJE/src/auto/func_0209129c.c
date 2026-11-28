/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02050934(s32);                         /* extern */
M2C_UNK func_0208af58(u16);                         /* extern */
extern void *data_0213e2f4;

void func_0209129c(void *arg0) {
    func_02050934(M2C_FIELD(data_0213e2f4, s32 *, 0x44C8));
    func_0208af58(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xA));
}
