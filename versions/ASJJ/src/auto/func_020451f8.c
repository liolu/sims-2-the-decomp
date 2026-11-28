/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 disabled;
    u8 pad;
    u16 cont;
    u16 old;
    u16 trg;
    u16 rel;
} Pad;

void func_02046398(void *p, s32 v, s32 n);

void func_020451f8(Pad *p) {
    u32 keys;
    if (p->disabled) {
        func_02046398(&p->cont, 0, 8);
        return;
    }
    keys    = (*(volatile u16 *) 0x04000130 | *(volatile u16 *) 0x027FFFA8) ^ 0x2FFF;
    p->old  = p->cont;
    p->cont = keys & 0x2FFF;
    if ((p->cont & 0x30) == 0x30) {
        p->cont &= ~0x10;
    }
    if ((p->cont & 0xC0) == 0xC0) {
        p->cont &= ~0x80;
    }
    p->trg = p->cont & (p->cont ^ p->old);
    p->rel = p->old & (p->cont ^ p->old);
}
