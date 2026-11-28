/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 *buf;
    s32 x4;
    s32 x8;
    volatile s32 flags;
    u8 pad10[0x590 - 0x10];
    u8 x590;
    u8 pad591[0x5C0 - 0x591];
    s32 x5c0;
    u8 pad5c4[0x5F0 - 0x5C4];
    s32 x5f0;
    u8 pad5f4[0x65C - 0x5F4];
    s32 x65c;
} S848;

typedef struct {
    u8 pad[0x60];
    volatile s16 x60;
    u16 x62;
} SE48;

void func_02046398(void *, s32, s32);
void func_020d7e9c(void);
void func_020fccc0(s32, s32, void *, s32, s32, s32, s32, s32, s32, s32);
void func_020fcdfc(s32, s32, s32, void *, s32);
void func_020fd220(s32);
extern S848 data_02142368;
extern u8 data_02142930[];
extern u8 data_02142960[];
extern SE48 data_02142968;
void func_020d69c0(void);

void func_020d898c(void) {
    if (!(data_02142368.flags & 4)) {
        return;
    }
    func_02046398(data_02142368.buf, 0, 0x2000);
    data_02142968.x60  = 0x800;
    data_02142368.x4   = 0;
    data_02142368.x65c = 0;
    data_02142368.flags |= 8;
    if (data_02142368.x590 != 7) {
        data_02142368.x5c0 = 0;
        func_02046398(data_02142930, 0, 0x20);
        data_02142368.x5f0 = 0;
        func_02046398(data_02142960, 0, 0x20);
    }
    func_020fd220(7);
    func_020fccc0(0, 1, data_02142368.buf, 1, 0, 0x400, 0x7F, 0, data_02142968.x62, 0);
    func_020fccc0(2, 1, data_02142368.buf + 0x1000, 1, 0, 0x400, 0x7F, 0, data_02142968.x62, 0x7F);
    func_020d7e9c();
    func_020fcdfc(0, 0, 0, func_020d69c0, 0);
}
