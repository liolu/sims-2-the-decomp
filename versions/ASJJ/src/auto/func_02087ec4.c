/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020830d0(s32);                         /* extern */
M2C_UNK func_02085164();                            /* extern */
M2C_UNK func_02085c14(void *);                      /* extern */
M2C_UNK func_02085ff0(void *, s32);                 /* extern */
extern void *data_02139a84;
extern s32 data_0213e094;

void func_02087ec4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xFC) == 0) {
        return;
    }
    func_02085164();
    func_020830d0(data_0213e094);
    func_02085c14(arg0 + 0x100);
    if (M2C_FIELD(data_02139a84, s32 *, 0xDF0) != 0x32) {
        return;
    }
    func_02085ff0(arg0, M2C_FIELD(arg0, s32 *, 0xF8));
}
