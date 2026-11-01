/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 data_0213d794;
extern s32 data_0213d7a0;
extern u32 *data_0213d7a4;

s32 func_0204cb08(s32 arg0, s32 arg1) {
    s32 temp_r1_2;
    u32 *temp_lr;
    u32 temp_ip;
    u32 temp_ip_2;
    u32 temp_ip_3;
    u32 temp_r1;
    u32 masked;

    temp_r1_2     = data_0213d794 - 1;
    data_0213d794 = temp_r1_2;
    if (temp_r1_2 < 0) {
        data_0213d794 = 0x26F;
        data_0213d7a4 = (u32 *) (data_0213d7a0 + 4);
    }
    temp_lr       = data_0213d7a4;
    data_0213d7a4 = temp_lr + 1;
    temp_ip       = *temp_lr;
    temp_ip_2     = temp_ip ^ (temp_ip >> 0xB);
    temp_ip_3     = temp_ip_2 ^ (0x9D2C5680 & (temp_ip_2 << 7));
    temp_r1       = temp_ip_3 ^ (0xEFC60000 & (temp_ip_3 << 0xF));
    masked        = (temp_r1 ^ (temp_r1 >> 0x12)) & 0x7FFF;
    return arg0 + ((s32) (masked * (u32) ((arg1 - arg0) + 1)) >> 0xF);
}
