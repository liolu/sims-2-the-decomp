/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02131f08;

typedef struct {
    u32 w[4];
} Blk16;

typedef struct {
    u8 a, b, c, d;
} P4;
void func_02046b24(void *a, s32 b, void *c, s32 d, s32 e);
void func_02046384(void *a, s32 b, s32 c);

void *func_0205ddfc(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    u8 p;
    u8 q;

    func_02046b24(arg0, 8, arg1, arg2, arg3);
    *(void **) arg0        = (void *) &data_02131f08;
    *(s32 *) (arg0 + 0x28) = (s32) 0x80000000;
    *(s32 *) (arg0 + 0x40) = 0;
    *(u16 *) (arg0 + 0x44) = 0;
    arg0[0x46]             = 1;
    arg0[0x47]             = 0;
    *(s32 *) (arg0 + 0x48) = 0x47;
    *(s32 *) (arg0 + 0x2C) = 0;
    *(s32 *) (arg0 + 0x30) = 0;
    *(s32 *) (arg0 + 0x34) = 0;
    *(s32 *) (arg0 + 0x38) = 0;
    arg0[0x3D]             = 0;
    arg0[0x3C]             = 0;
    arg0[0x3E]             = 0;
    arg0[0x3F]             = 0;
    if (arg1 != 0) {
        *(s32 *) (arg0 + 0x28)   = *(s32 *) arg1;
        *(Blk16 *) (arg0 + 0x2C) = *(Blk16 *) (arg1 + 4);
        *(P4 *) (arg0 + 0x3C)    = *(P4 *) (arg1 + 0x14);
        *(s32 *) (arg0 + 0x40)   = *(s32 *) (arg1 + 0x18);
        *(u16 *) (arg0 + 0x44)   = *(u16 *) (arg1 + 0x1C);
        arg0[0x46]               = arg1[0x1E];
        arg0[0x47]               = arg1[0x1F];
        *(s32 *) (arg0 + 0x48)   = *(s32 *) (arg1 + 0x20);
    } else {
        func_02046384(arg0 + 0x28, 0, 0x24);
        arg0[0x46] = 0;
    }
    arg0[0x24] = (u8) arg2;
    return arg0;
}
