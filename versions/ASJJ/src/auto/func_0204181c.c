/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct T {
    u8 pad[0x22];
    u8 b22;
    u8 pad23[0x28 - 0x23];
} T;
extern u8 *data_0213e0a8;
u8 *func_020525ec(void *, s32);
void *func_020282b8(void *);
s32 func_01ffaf28(void *, s32, s32);
void func_01ffabc8(void *, s32, s32);
void func_020117e8(void *, s32, T *, s32);
void func_02018ac4(void *);
void func_0204181c(u8 *o, u8 *k) {
    T t;
    u8 *p;
    u8 a = k[0];
    u8 b = k[1];
    if (a == 0xff) {
        p = *(u8 **) (data_0213e0a8 + 0xf8);
    } else {
        p = func_020525ec(*(u8 **) (*(u8 **) (o + 4) + 0x28) + a * 8, b);
    }
    if (p == NULL) {
        return;
    }
    func_020282b8(&t);
    t.b22 = 3;
    if (func_01ffaf28(p + 0xe0, 0x18, 0)) {
        func_01ffabc8(p + 0xe0, 0x18, 1);
    }
    func_020117e8(p, 0x18, &t, 0);
    func_02018ac4(&t);
}
