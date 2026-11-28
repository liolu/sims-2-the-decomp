/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 pad[0x70];
    void *f70;
    void *f74;
    void *f78;
    u8 pad2[0x80 - 0x7c];
    s32 f80;
    s32 f84;
    s32 f88;
} Ctx;

extern Ctx data_02142ee0;

void func_020df62c(s32, s32, s32, s32, s32, s32, s32, s32);
void func_020df41c(u32);
void func_020e40bc(void);
void func_020e4028(void);
void func_020e3cfc(void);

s32 func_020e3c40(u32 flags, s32 en) {
    if (en == 0) {
        return 0;
    }
    if ((flags & 0xF) == 8) {
        func_020df62c(0xF, 10, 5, 0, 7, 3, 3, 3);
    } else {
        return 0;
    }
    data_02142ee0.f80 = 2;
    data_02142ee0.f70 = (void *) func_020e40bc;
    data_02142ee0.f74 = (void *) func_020e4028;
    data_02142ee0.f88 = 0;
    data_02142ee0.f84 = 1;
    data_02142ee0.f78 = (void *) func_020e3cfc;
    func_020df41c(flags & 0x70000000);
    return 1;
}
