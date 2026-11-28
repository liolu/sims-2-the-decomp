/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 func_0200e1ac(s32, s32);
extern void func_020117e8(s32, s32, void *, s32);
extern void func_02018ac4(void *);
extern void func_0201d10c(void *);
extern void func_02027708(void *);
extern void func_02037380(void *);
extern void *data_0213e0a8;

void func_02036f38(void *arg0) {
    u8 blk[88];

    func_0201d10c(blk + 0);
    func_02027708(blk + 60);
    *(s16 *) (blk + 80) = 0x4B;
    *(s32 *) (blk + 76) = *(s32 *) ((u8 *) arg0 + 4);
    *(s32 *) (blk + 84) = *(s32 *) ((u8 *) arg0 + 0x2C);
    func_020117e8(*(s32 *) ((u8 *) arg0 + 4), 0x21, blk + 60, 0);
    *(s16 *) (blk + 48) = 0x6B;
    *(s8 *) (blk + 51)  = 0;
    *(s32 *) (blk + 16) = func_0200e1ac(*(s32 *) ((u8 *) data_0213e0a8 + 0xF8), 0xE);
    func_020117e8(*(s32 *) ((u8 *) arg0 + 4), 3, blk + 0, 0);
    func_02037380(arg0);
    func_02018ac4(blk + 60);
    func_02018ac4(blk + 0);
}
