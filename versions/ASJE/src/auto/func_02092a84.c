/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e2f4;
extern s32 data_0213e5b4;

void func_020732ec(void *);
void func_020645f4(u8 *, s32, s32);
void func_02092bb4(void *);

typedef struct {
    u8 pad0[8];
    s32 f8;
    s32 fc;
    u8 keys[16];
} Obj;

s32 func_02092a84(Obj *o, s32 i) {
    u8 *base = data_0213e2f4;
    u8 c     = o->keys[i];
    s32 *p   = (s32 *) (base + 0x44c0);
    u8 *cnt  = base + 0x24;
    s32 rem  = 6 - *(s32 *) (base + 0x44c0);

    switch (c) {
        case '7':
            (*p)++;
            *cnt -= 1;
            func_020732ec(base + 0x41f8);
            func_020645f4(data_0213e2f4, 3, 1);
            break;
        case '8':
            *p = 6;
            *cnt -= rem;
            func_020732ec(base + 0x41f8);
            func_020645f4(data_0213e2f4, 3, 1);
            break;
        case '9':
            (*p)--;
            *(s32 *) (base + 0x41dc) = data_0213e5b4;
            break;
    }
    o->f8 = 0;
    o->fc = 0;
    func_02092bb4(o);
    return 4;
}
