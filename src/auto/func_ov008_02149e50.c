/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov008_0214b128;
extern u8 data_ov008_0214b150;
extern u8 data_0212f9c4;
extern u8 data_027e0000;
extern u8 data_027e0014;
void func_020105d0(void *);
void func_02046844(void *);

void *func_ov008_02149e50(void *arg0) {
    u8 *p;
    s32 v;
    u8 *t;
    p                 = (u8 *) arg0;
    *(u8 **) p        = &data_ov008_0214b128;
    *(u8 **) (p + 36) = &data_ov008_0214b150;
    v                 = *(s32 *) &data_027e0000;
    t                 = &data_027e0014 + v * 52;
    func_020105d0(t);
    *(u8 **) p = &data_0212f9c4;
    func_02046844(arg0);
    return arg0;
}
