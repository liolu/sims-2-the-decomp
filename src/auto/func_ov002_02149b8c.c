/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213e580;
extern u8 data_027e0000;
extern u8 data_027e0014;
void func_0203c540(void);
void func_020105d0(void *);
void func_0200fb30(void *, s32, s32);

void func_ov002_02149b8c(void) {
    s32 v;
    u8 *t;
    u8 *p;
    func_0203c540();
    v = *(s32 *) &data_027e0000;
    t = &data_027e0014 + v * 52;
    func_020105d0(t);
    p = *(u8 **) &data_0213e580;
    func_0200fb30(*(void **) (p + 248), 0, 0);
}
