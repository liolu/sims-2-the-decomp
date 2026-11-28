/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_0201d10c(void *);
M2C_UNK func_0201d554(void *);
M2C_UNK func_0201d82c(void *);
M2C_UNK func_02019674(void *);
M2C_UNK func_0201a48c(void *);
M2C_UNK func_020117e8(void *, s32, void *, s32);
M2C_UNK func_0202201c(void *, s32);
M2C_UNK func_02018ac4(void *);

void func_02022a48(void *arg0) {
    u8 frame[0xC0];
    u8 *a;

    a = (u8 *) arg0;
    func_0201d10c(frame + 0x0);
    func_0201d554(frame + 0x3C);
    func_0201d82c(frame + 0x60);
    func_02019674(frame + 0x78);
    func_0201a48c(frame + 0x90);
    func_020117e8(*(void **) (a + 0x4), 0x1E, frame + 0x78, 0);
    func_020117e8(*(void **) (a + 0x4), 0x22, frame + 0x3C, 0);
    *(s32 *) (frame + 0x10) = func_0202201c(a, 0x3);
    *(u16 *) (frame + 0x30) = 0x7E;
    func_020117e8(*(void **) (a + 0x4), 0x3, frame + 0x0, 0);
    *(u16 *) (frame + 0x58) = 0;
    *(u16 *) (frame + 0x4C) = 0x114;
    func_020117e8(*(void **) (a + 0x4), 0x22, frame + 0x3C, 0);
    func_02018ac4(frame + 0x90);
    func_02018ac4(frame + 0x78);
    func_02018ac4(frame + 0x60);
    func_02018ac4(frame + 0x3C);
    func_02018ac4(frame + 0x0);
}
