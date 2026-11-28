/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void func_020117e8(s32, s32, void *, s32);
extern void func_02018acc(void *);
extern void func_02019684(void *);
extern void func_0201a49c(void *);
extern void func_0201d0ac(void *);
extern void func_0201d4f4(void *);
extern void func_0201d7cc(void *);
extern s32 func_02021f5c(void *, s32);

void func_02022c18(void *arg0) {
    u8 blk[192];

    func_0201d0ac(blk + 0);
    func_0201d4f4(blk + 60);
    func_0201d7cc(blk + 96);
    func_02019684(blk + 120);
    func_0201a49c(blk + 144);
    *(s8 *) ((u8 *) arg0 + 0x40) = 1;
    func_020117e8(*(s32 *) ((u8 *) arg0 + 4), 0x1E, blk + 120, 0);
    *(s32 *) (blk + 16) = func_02021f5c(arg0, 3);
    *(s16 *) (blk + 48) = 0x79;
    func_020117e8(*(s32 *) ((u8 *) arg0 + 4), 3, blk + 0, 0);
    func_02018acc(blk + 144);
    func_02018acc(blk + 120);
    func_02018acc(blk + 96);
    func_02018acc(blk + 60);
    func_02018acc(blk + 0);
}
