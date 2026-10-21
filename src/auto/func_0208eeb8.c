/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020509ac(u8);                          /* extern */
M2C_UNK func_0208afd0(u16);                         /* extern */
extern void *data_0213e434;

void func_0208eeb8(void *arg0) {
    func_020509ac(M2C_FIELD(data_0213e434, u8 *, 0x44BD));
    func_0208afd0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xA));
}
