/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 pad[8];
    s16 f8;
} S14;

typedef struct {
    u8 pad[0x44c0];
    s32 v;
} Big;

extern S14 data_02133ed4;
extern Big *data_0213e2f4;

S14 *func_02092b84(void) {
    data_02133ed4.f8 = data_0213e2f4->v + 0x7A8;
    return &data_02133ed4;
}
