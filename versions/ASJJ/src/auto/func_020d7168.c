/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 p0;
    s32 p4;
    u16 gen;
    u8 id;
    u8 low : 1;
    u8 st : 6;
    u8 top : 1;
    u8 pad[0x10];
    s32 h1c;
    u8 pad2[0x44 - 0x20];
} Ent;

extern Ent data_02142414[];
extern u8 data_0214299c;

void func_020d6c18(s32 x);
void func_020fd220(s32 x);
s32 func_020fce8c(s32 a, s32 b, s32 c, s32 d);
s32 func_020fd1e0(void);
void func_020464b0(void);

void func_020d7168(u32 idx, s32 mode) {
    Ent *e;
    s32 ok;
    volatile u32 pad[1];

    if (idx == 0xffffffff) {
        return;
    }
    e = &data_02142414[idx & 0xff];
    if (idx != 0xffffffff && (idx & 0xff) < 0x10 && e->p0 != 0 && e->gen == (idx >> 8) && e->st <= 1) {
        ok = 1;
    } else {
        ok = 0;
    }
    if (ok) {
        if (e->low == 1) {
            if (e->st == 0) {
                func_020fd220(1);
                func_020fce8c(1 << e->id, 0, 0, 0);
                e->h1c = func_020fd1e0();
            }
            if (mode != 0) {
                if (mode == 1) {
                    e->st = 3;
                }
            } else {
                e->st = 2;
            }
        } else {
            func_020d6c18(e->id);
            (&data_0214299c)[e->id] = 3;
            if (e->p0 != 0) {
                func_020464b0();
                e->p0 = 0;
            }
        }
    } else {
        if (mode == 1) {
            if (e->st == 0) {
                e->st = 1;
            }
        }
    }
}
