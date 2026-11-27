/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213e580;
s32 func_020870dc(s32, s32, s32, s32);
void func_01ffac40(void *, void *);
void func_0201d124(void *);
void func_020117e8(s32, s32, void *, void *);
void func_0201ca08(void *);
void func_02018acc(void *);

typedef struct {
    volatile s32 m[5];
    struct {
        u8 a[0x10];
        s32 k;
        u8 b[0x1c];
        u16 h;
        u8 c[0xa];
    } o1;
    struct {
        u8 a[0x10];
        s32 x, y;
        volatile s32 z;
        u8 b[0x8];
        s32 c;
        u8 d[0x10];
    } o2;
} FR;

void func_02025f04(void *arg0) {
    FR f;
    s32 p;
    s32 w78;
    s32 w7c;
    s32 w80;
    u8 *ip;
    s32 c;

    p                             = *(s32 *) &data_0213e580;
    *(s32 *) ((u8 *) arg0 + 0x44) = func_020870dc(p, *(s32 *) ((u8 *) arg0 + 4), 0xb, -1);
    if (*(s32 *) ((u8 *) arg0 + 0x44) == 0) {
        return;
    }
    func_01ffac40((void *) (*(s32 *) ((u8 *) arg0 + 4) + 0xe0), arg0);
    func_0201d124(&f.o1);
    f.o1.h = 0x55;
    f.o1.k = 0x246;
    func_020117e8(*(s32 *) ((u8 *) arg0 + 4), 3, &f.o1, arg0);
    func_0201ca08(&f.o2);
    c      = 0xc000;
    ip     = *(u8 **) ((u8 *) arg0 + 0x44) + 0x78;
    w78    = *(s32 *) ip;
    f.m[2] = w78;
    f.o2.x = w78;
    w7c    = *(s32 *) (ip + 4);
    f.m[3] = w7c;
    f.o2.y = w7c;
    w80    = *(s32 *) (ip + 8);
    f.m[4] = w80;
    f.o2.z = w80;
    f.m[0] = c;
    f.m[1] = c;
    f.o2.c = c;
    func_020117e8(*(s32 *) ((u8 *) arg0 + 4), 0x1b, &f.o2, arg0);
    func_02018acc(&f.o2);
    func_02018acc(&f.o1);
}
