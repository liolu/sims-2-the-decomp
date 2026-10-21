/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001914();                            /* extern */
M2C_UNK func_02001944(M2C_UNK);                     /* extern */
M2C_UNK func_02018520(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02018554(s32, s32);                    /* extern */
s32 func_02052258(s32);                             /* extern */
extern M2C_UNK data_021176f4;

void func_02008804(void *arg0) {
    u8 temp_r1;

    func_02001944(0);
    temp_r1 = M2C_FIELD(arg0, u8 *, 0x2F1);
    if (((temp_r1 == 1) && (M2C_FIELD(arg0, u8 *, 0x2F4) == 1)) || ((temp_r1 == 0) && (M2C_FIELD(arg0, u8 *, 0x2F4) == 2))) {
        func_02018554(M2C_FIELD(arg0, s32 *, 0x360), func_02052258(M2C_FIELD(&data_021176f4, s32 *, 0x24)));
    } else if ((temp_r1 == 0) || (M2C_FIELD(arg0, u8 *, 0x2F2) == 1) || (M2C_FIELD(arg0, u8 *, 0x2F0) == 6) ||
               ((temp_r1 == 1) && (M2C_FIELD(arg0, u8 *, 0x2F4) == 2))) {
        func_02018554(M2C_FIELD(arg0, s32 *, 0x360),
                      func_02052258(*((M2C_UNK *) ((s8 *) &data_021176f4 + (M2C_FIELD(arg0, u8 *, 0x2F0) * 4)))));
    } else {
        func_02018554(M2C_FIELD(arg0, s32 *, 0x360), func_02052258(M2C_FIELD(&data_021176f4, s32 *, 0x24)));
    }
    func_02018520(M2C_FIELD(arg0, s32 *, 0x360), 0x80, 0x16);
    func_02001914();
}
