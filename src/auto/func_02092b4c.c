/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e434;
extern s32 data_0213e6f4;

void func_02073364(void *);
void func_0206466c(u8 *, s32, s32);
void func_02092c7c(void *);

typedef struct {
    u8 pad0[8];
    s32 f8;
    s32 fc;
    u8 keys[16];
} Obj;

s32 func_02092b4c(Obj *o, s32 i) {
    u8 *base = data_0213e434;
    u8 c     = o->keys[i];
    s32 *p   = (s32 *) (base + 0x44c0);
    u8 *cnt  = base + 0x24;
    s32 rem  = 6 - *(s32 *) (base + 0x44c0);

    switch (c) {
        case '7':
            (*p)++;
            *cnt -= 1;
            func_02073364(base + 0x41f8);
            func_0206466c(data_0213e434, 3, 1);
            break;
        case '8':
            *p = 6;
            *cnt -= rem;
            func_02073364(base + 0x41f8);
            func_0206466c(data_0213e434, 3, 1);
            break;
        case '9':
            (*p)--;
            *(s32 *) (base + 0x41dc) = data_0213e6f4;
            break;
    }
    o->f8 = 0;
    o->fc = 0;
    func_02092c7c(o);
    return 4;
}
