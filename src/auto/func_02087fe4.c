/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02083218(s32);                         /* extern */
M2C_UNK func_0208528c();                            /* extern */
M2C_UNK func_02085d3c(void *);                      /* extern */
M2C_UNK func_02086108(void *, s32);                 /* extern */
extern void *data_02139fa4;
extern s32 data_0213e56c;

void func_02087fe4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xFC) == 0) {
        return;
    }
    func_0208528c();
    func_02083218(data_0213e56c);
    func_02085d3c(arg0 + 0x100);
    if (M2C_FIELD(data_02139fa4, s32 *, 0xDF0) != 0x32) {
        return;
    }
    func_02086108(arg0, M2C_FIELD(arg0, s32 *, 0xF8));
}
