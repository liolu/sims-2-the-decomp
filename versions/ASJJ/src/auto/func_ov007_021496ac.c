/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_027e0000;
void func_0203c574(void);

void func_ov007_021496ac(void) {
    s32 *p;
    s32 v;
    func_0203c574();
    v = *(s32 *) &data_027e0000;
    if (v == 0) {
        *(s32 *) &data_027e0000 = 1;
    } else {
        *(s32 *) &data_027e0000 = 0;
    }
    func_0203c574();
    v = *(s32 *) &data_027e0000;
    if (v == 0) {
        *(s32 *) &data_027e0000 = 1;
    } else {
        *(s32 *) &data_027e0000 = 0;
    }
}
