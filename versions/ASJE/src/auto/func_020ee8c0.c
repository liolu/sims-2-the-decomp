/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020f5084(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020f52a4(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020f5638(M2C_UNK *, M2C_UNK *, s32, s32, s32); /* extern */
extern M2C_UNK data_027e1e0c;
extern M2C_UNK data_027e1e58;
extern M2C_UNK data_027e1ec8;
extern M2C_UNK data_027e1f3c;
extern M2C_UNK data_027e1f6c;

void func_020ee8c0(void) {
    func_020f5084(&data_027e1ec8, &data_027e1e58, &data_027e1f3c);
    func_020f5638(&data_027e1f3c, &data_027e1f3c, M2C_FIELD(&data_027e1e0c, s32 *, 0xEC),
                  M2C_FIELD(&data_027e1e0c, s32 *, 0xF0), M2C_FIELD(&data_027e1e0c, s32 *, 0xF4));
    func_020f52a4(&data_027e1f3c, &data_027e1f6c);
}
