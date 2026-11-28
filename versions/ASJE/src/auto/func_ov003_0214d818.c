/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov003_02150a14[];
extern u8 data_ov003_0215088c[];
extern u8 *data_0213e2f4;
s32 func_0210a638(void *arg0);
void func_02089cdc(void *arg0);
void func_020469e0(void *arg0);

u8 *func_ov003_0214d818(u8 *p) {
    s8 *s;
    s32 i;

    s          = (s8 *) (p + 0x70);
    *(u8 **) p = data_ov003_02150a14;
    if (func_0210a638(s) != 0) {
        for (i = 0; i < 8; i++) {
            (*(u8 **) &data_0213e2f4)[i + 0x53] = s[i];
        }
    }
    func_02089cdc(p + 0x14);
    *(u8 **) p = data_ov003_0215088c;
    func_020469e0(p + 8);
    return p;
}
