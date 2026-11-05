/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02011090(void *a, s32 b, s32 c, s32 d);
void func_0201b038(u8 *p);
void func_020117d8(void *a, s32 b, u8 *c, u8 *d);
void func_02018acc(u8 *p);

void func_0203015c(u8 *arg0) {
    volatile s32 sp0;
    u8 blk[0x28];

    sp0 = 0;
    func_02011090(*(void **) (arg0 + 4), 3, 0, 1);
    func_0201b038(blk);
    blk[0x24] = 0;
    blk[0x25] = 0;
    func_020117d8(*(void **) (arg0 + 4), 10, blk, arg0);
    func_02018acc(blk);
}
