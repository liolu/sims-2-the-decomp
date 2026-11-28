/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020831a0(s32);                         /* extern */
M2C_UNK func_02085214();                            /* extern */
M2C_UNK func_02085cc4(void *);                      /* extern */
M2C_UNK func_02086090(void *, s32);                 /* extern */
extern void *data_02139e64;
extern s32 data_0213e42c;

void func_02087f6c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xFC) == 0) {
        return;
    }
    func_02085214();
    func_020831a0(data_0213e42c);
    func_02085cc4(arg0 + 0x100);
    if (M2C_FIELD(data_02139e64, s32 *, 0xDF0) != 0x32) {
        return;
    }
    func_02086090(arg0, M2C_FIELD(arg0, s32 *, 0xF8));
}
