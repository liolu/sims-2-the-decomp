/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void func_020117e8(s32, s32, void *, s32);
extern void func_02018ac4(void *);
extern void func_02019674(void *);
extern void func_0201a48c(void *);
extern void func_0201d10c(void *);
extern void func_0201d554(void *);
extern void func_0201d82c(void *);
extern s32 func_0202201c(void *, s32);

void func_02022cd8(void *arg0) {
    u8 blk[192];

    func_0201d10c(blk + 0);
    func_0201d554(blk + 60);
    func_0201d82c(blk + 96);
    func_02019674(blk + 120);
    func_0201a48c(blk + 144);
    *(s8 *) ((u8 *) arg0 + 0x40) = 1;
    func_020117e8(*(s32 *) ((u8 *) arg0 + 4), 0x1E, blk + 120, 0);
    *(s32 *) (blk + 16) = func_0202201c(arg0, 3);
    *(s16 *) (blk + 48) = 0x79;
    func_020117e8(*(s32 *) ((u8 *) arg0 + 4), 3, blk + 0, 0);
    func_02018ac4(blk + 144);
    func_02018ac4(blk + 120);
    func_02018ac4(blk + 96);
    func_02018ac4(blk + 60);
    func_02018ac4(blk + 0);
}
