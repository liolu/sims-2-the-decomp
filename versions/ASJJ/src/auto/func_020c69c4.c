/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 mode;
} State;

void func_020c87d4(void *, s32);
extern s32 data_02135670[];
extern s32 data_02135758;
extern s32 data_02135760;
extern u16 data_0213fc90;
extern State data_0213fcc4;

u16 func_020c69c4(void) {
    func_020c87d4(&data_02135758, data_02135670[data_0213fcc4.mode]);
    data_0213fcc4.mode = 1;
    func_020c87d4(&data_02135760, data_02135670[data_0213fcc4.mode]);
    return data_0213fc90;
}
