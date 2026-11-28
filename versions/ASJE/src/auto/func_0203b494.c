/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020f9b0c(u16);
M2C_UNK func_02103320(u16);
s32 func_02103380();
typedef struct {
    s32 a;
    void (*fn)(s32);
    s32 arg;
    s8 c;
} S;
extern S data_021392d4;
extern s32 data_027e0004;
void func_0203b494(void) {
    data_021392d4.c = (func_02103380() == 0);
    func_02103320((u16) data_021392d4.a);
    func_020f9b0c((u16) data_021392d4.a);
    data_027e0004 &= ~0x400;
    if (data_021392d4.fn != NULL) {
        data_021392d4.fn(data_021392d4.arg);
    }
}
