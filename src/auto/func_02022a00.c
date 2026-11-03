/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_0201d124(void *);
M2C_UNK func_0201d56c(void *);
M2C_UNK func_0201d844(void *);
M2C_UNK func_02019684(void *);
M2C_UNK func_0201a49c(void *);
M2C_UNK func_020117e8(void *, s32, void *, s32);
M2C_UNK func_02021fd4(void *, s32);
M2C_UNK func_02018acc(void *);

void func_02022a00(void *arg0) {
    u8 frame[0xC0];
    u8 *a;

    a = (u8 *) arg0;
    func_0201d124(frame + 0x0);
    func_0201d56c(frame + 0x3C);
    func_0201d844(frame + 0x60);
    func_02019684(frame + 0x78);
    func_0201a49c(frame + 0x90);
    func_020117e8(*(void **) (a + 0x4), 0x1E, frame + 0x78, 0);
    func_020117e8(*(void **) (a + 0x4), 0x22, frame + 0x3C, 0);
    *(s32 *) (frame + 0x10) = func_02021fd4(a, 0x3);
    *(u16 *) (frame + 0x30) = 0x7E;
    func_020117e8(*(void **) (a + 0x4), 0x3, frame + 0x0, 0);
    *(u16 *) (frame + 0x58) = 0;
    *(u16 *) (frame + 0x4C) = 0x114;
    func_020117e8(*(void **) (a + 0x4), 0x22, frame + 0x3C, 0);
    func_02018acc(frame + 0x90);
    func_02018acc(frame + 0x78);
    func_02018acc(frame + 0x60);
    func_02018acc(frame + 0x3C);
    func_02018acc(frame + 0x0);
}
