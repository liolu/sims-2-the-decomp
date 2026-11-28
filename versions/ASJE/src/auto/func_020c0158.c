/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c0158(void *arg0) {
    volatile s32 tmp[4];
    u8 sel;
    u8 *temp_r4;
    s32 *temp_ip;
    s32 v;
    sel     = *(u8 *) ((u8 *) arg0 + 0x168);
    temp_r4 = *(u8 **) (*(u8 **) ((u8 *) arg0 + 0x128) + 0x140);
    {
        u8 *t3  = temp_r4 + 0x1C;
        s32 lr  = *(s32 *) temp_r4;
        u8 *t4  = (u8 *) (*(u8 *) (temp_r4 + 0x14) * 4) + (u32) t3;
        temp_ip = (s32 *) ((u8 *) lr + (u32) t4 + ((*(s32 *) ((u8 *) arg0 + 0x15C)) * 8));
    }
    switch (sel) {
        case 0:
            v                              = *(s32 *) (temp_r4 + 8);
            tmp[0]                         = v;
            *(s32 *) ((u8 *) arg0 + 0x150) = ((*temp_ip - v) >> 13) - (*(s32 *) ((u8 *) arg0 + 0x10C) * 2);
            return;
        case 1:
            v                              = *(s32 *) (temp_r4 + 4);
            tmp[1]                         = v;
            *(s32 *) ((u8 *) arg0 + 0x14C) = ((*temp_ip - v) >> 13) - (*(s32 *) ((u8 *) arg0 + 0x108) * 2);
            return;
        case 2:
            v                              = *(s32 *) (temp_r4 + 8);
            tmp[2]                         = v;
            *(s32 *) ((u8 *) arg0 + 0x150) = (*temp_ip - v) >> 13;
            return;
        case 3:
            v                              = *(s32 *) (temp_r4 + 4);
            tmp[3]                         = v;
            *(s32 *) ((u8 *) arg0 + 0x14C) = (*temp_ip - v) >> 13;
            return;
        default:
            return;
    }
}
