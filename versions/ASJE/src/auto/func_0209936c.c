/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02018af8(void *, M2C_UNK, void *, M2C_UNK); /* extern */
s32 func_0208b6dc();                                /* extern */
M2C_UNK func_020d5880(M2C_UNK);                     /* extern */
extern void *data_0213e2f4;
extern void *data_0213e440;
extern s32 data_027e0000;

s32 func_0209936c(void *arg0, s32 arg1) {
    if (M2C_FIELD((arg0 + arg1), u8 *, 0x10) == 0x18) {
        if (((s32) M2C_FIELD(data_0213e2f4, s32 *, 0x2F60) >= 1) &&
            (M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x134) == NULL)) {
            func_020d5880(0xFC);
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
            M2C_FIELD(M2C_FIELD(data_0213e440, void **, 0xF8), void **, 0x134) = (void *) M2C_FIELD(arg0, void **, 4);
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x134) = (void *) M2C_FIELD(data_0213e440, void **, 0xF8);
            func_02018af8(M2C_FIELD(arg0, void **, 4) + 0x128, 0xA, M2C_FIELD(data_0213e440, void **, 0xF8), 2);
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
            return 6;
        }
        return 0;
    }
    return func_0208b6dc(arg0, arg1);
}
