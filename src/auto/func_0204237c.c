/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 pad[0x30];
    u16 a;
    u8 b;
    u8 c;
    u8 pad2[3];
    u8 d;
    u8 pad3[4];
} Blk;

s32 func_020523dc(void *);
void *func_0201d124(void *);
void func_020117e8(s32, s32, void *, s32);
void func_02018acc(void *);
extern u8 data_0213e580;

void func_0204237c(u8 *arg0, u8 *arg1) {
    Blk blk;
    u8 *obj;
    s32 var_r5;
    u8 idx;

    idx = arg1[0];
    *(volatile u8 *) (arg1 + 1);
    if (idx == 0xFF) {
        obj    = *(u8 **) &data_0213e580;
        var_r5 = *(s32 *) (obj + 0xF8);
    } else {
        var_r5 = func_020523dc(*(u8 **) (*(u8 **) (arg0 + 4) + 0x28) + idx * 8);
    }
    if (var_r5 == 0) {
        return;
    }
    func_0201d124(&blk);
    blk.a = arg1[2];
    blk.b = arg1[4];
    blk.c = arg1[3];
    blk.d = arg1[5];
    func_020117e8(var_r5, 3, &blk, 0);
    func_02018acc(&blk);
}
