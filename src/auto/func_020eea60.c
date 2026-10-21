/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020f53e0(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_027e1e0c;
extern M2C_UNK data_027e1e58;
extern M2C_UNK data_027e1f0c;

M2C_UNK *func_020eea60(void) {
    if (!(M2C_FIELD(&data_027e1e0c, s32 *, 0xFC) & 8)) {
        func_020f53e0(&data_027e1e58, &data_027e1f0c);
        M2C_FIELD(&data_027e1e0c, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_027e1e0c, s32 *, 0xFC) | 8);
    }
    return &data_027e1f0c;
}
