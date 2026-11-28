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

extern Ctx data_02142b40;

void func_020df254(s32, s32, s32, s32, s32, s32, s32, s32);
void func_020df044(u32);
void func_020e3ce4(void);
void func_020e3c50(void);
void func_020e3924(void);

s32 func_020e3868(u32 flags, s32 en) {
    if (en == 0) {
        return 0;
    }
    if ((flags & 0xF) == 8) {
        func_020df254(0xF, 10, 5, 0, 7, 3, 3, 3);
    } else {
        return 0;
    }
    data_02142b40.f80 = 2;
    data_02142b40.f70 = (void *) func_020e3ce4;
    data_02142b40.f74 = (void *) func_020e3c50;
    data_02142b40.f88 = 0;
    data_02142b40.f84 = 1;
    data_02142b40.f78 = (void *) func_020e3924;
    func_020df044(flags & 0x70000000);
    return 1;
}
