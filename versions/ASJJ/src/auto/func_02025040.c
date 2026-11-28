/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct T {
    u8 pad[0x20];
    s32 x20;
    u8 b24;
    u8 pad25[3];
} T;
void func_0201b020(T *);
s32 func_01ffaf28(void *, s32, s32);
void func_020117d8(s32, s32, T *, void *);
void func_02018ac4(void *);
void func_02025040(u8 *o) {
    volatile s32 v[2];
    T t;
    s32 n = *(s32 *) (o + 0x38);
    if (n > 0) {
        if (o[0x34] == 0) {
            *(s32 *) (o + 0x38) = n - 1;
        }
    }
    o[0x46] = 0;
    if (o[0x36] != 0) {
        return;
    }
    if (func_01ffaf28(*(u8 **) (o + 4) + 0xe0, 10, 0)) {
        return;
    }
    func_0201b020(&t);
    t.b24 = 0;
    v[0]  = 0x4cc;
    v[1]  = 0x4cc;
    t.x20 = 0x4cc;
    func_020117d8(*(s32 *) (o + 4), 10, &t, o);
    func_02018ac4(&t);
}
