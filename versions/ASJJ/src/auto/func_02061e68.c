/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 w0, w1, w2, w3;
} Quad;
typedef struct {
    u8 a, b;
} P2;
void *func_02061e68(u8 *arg0, u8 *arg1) {
    u8 *temp_r4;
    u8 *temp_r0;
    *(s32 *) arg0          = *(s32 *) arg1;
    temp_r0                = arg1 + 4;
    temp_r4                = arg0 + 4;
    *(Quad *) (temp_r4)    = *(Quad *) (temp_r0);
    *(P2 *) (arg0 + 0x14)  = *(P2 *) (arg1 + 0x14);
    *(P2 *) (arg0 + 0x16)  = *(P2 *) (arg1 + 0x16);
    *(s32 *) (arg0 + 0x18) = *(s32 *) (arg1 + 0x18);
    *(u16 *) (arg0 + 0x1C) = *(u16 *) (arg1 + 0x1C);
    *(u8 *) (arg0 + 0x1E)  = *(u8 *) (arg1 + 0x1E);
    *(u8 *) (arg0 + 0x1F)  = *(u8 *) (arg1 + 0x1F);
    *(s32 *) (arg0 + 0x20) = *(s32 *) (arg1 + 0x20);
    return arg0;
}
