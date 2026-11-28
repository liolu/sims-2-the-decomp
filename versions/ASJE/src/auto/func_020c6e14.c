/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 mode;
} State;

void func_020c8c24(void *, s32);
extern s32 data_02135a44[];
extern s32 data_02135b2c;
extern s32 data_02135b34;
extern u16 data_02140028;
extern State data_0214005c;

u16 func_020c6e14(void) {
    func_020c8c24(&data_02135b2c, data_02135a44[data_0214005c.mode]);
    data_0214005c.mode = 1;
    func_020c8c24(&data_02135b34, data_02135a44[data_0214005c.mode]);
    return data_02140028;
}
