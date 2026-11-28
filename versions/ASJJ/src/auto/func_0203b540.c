/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020f9734(u16);
M2C_UNK func_02102f48(u16);
s32 func_02102fa8();
typedef struct {
    s32 a;
    void (*fn)(s32);
    s32 arg;
    s8 c;
} S;
extern S data_02138ef4;
extern s32 data_027e0004;
void func_0203b540(void) {
    data_02138ef4.c = (func_02102fa8() == 0);
    func_02102f48((u16) data_02138ef4.a);
    func_020f9734((u16) data_02138ef4.a);
    data_027e0004 &= ~0x400;
    if (data_02138ef4.fn != NULL) {
        data_02138ef4.fn(data_02138ef4.arg);
    }
}
