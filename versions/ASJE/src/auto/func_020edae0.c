/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020ed668(M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
s32 func_020ed6dc(s32, u32);                        /* extern */
M2C_UNK func_020ed72c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021430bc;
extern M2C_UNK data_021430c0;

void func_020edae0(void) {
    M2C_FIELD(&data_021430bc, s32 *, 4) =
        func_020ed6dc(M2C_FIELD(&data_021430bc, s32 *, 0xC), (u32) M2C_FIELD(&data_021430bc, u32 *, 0x10) >> 4);
    func_020ed72c(&data_021430bc);
    func_020ed668(&data_021430bc, &data_021430c0, 0, M2C_FIELD(&data_021430bc, s32 *, 8));
}
