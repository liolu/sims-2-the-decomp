/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov003_02150b54[];
extern u8 data_ov003_021509cc[];
extern u8 *data_0213e434;
s32 func_0210a774(void *arg0);
void func_02089d54(void *arg0);
void func_02046a58(void *arg0);

u8 *func_ov003_0214d958(u8 *p) {
    s8 *s;
    s32 i;

    s          = (s8 *) (p + 0x70);
    *(u8 **) p = data_ov003_02150b54;
    if (func_0210a774(s) != 0) {
        for (i = 0; i < 8; i++) {
            (*(u8 **) &data_0213e434)[i + 0x53] = s[i];
        }
    }
    func_02089d54(p + 0x14);
    *(u8 **) p = data_ov003_021509cc;
    func_02046a58(p + 8);
    return p;
}
