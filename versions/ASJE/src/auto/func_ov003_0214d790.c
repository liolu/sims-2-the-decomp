/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0210a638();
void func_02089cdc(void *a);
void func_020469e0(void *a, void *b);
void func_020467cc(void *a);
extern u8 data_ov003_02150a14;
extern u8 data_ov003_0215088c;
extern u8 data_0213e2f4;

void *func_ov003_0214d790(u8 *arg0) {
    u8 *temp_r5;
    u8 *temp_r4;
    s32 i;

    temp_r5            = arg0;
    temp_r4            = arg0 + 0x70;
    *(void **) temp_r5 = (void *) &data_ov003_02150a14;
    if (func_0210a638(temp_r4) != 0) {
        for (i = 0; i < 8; i++) {
            *(s8 *) (*(u8 **) &data_0213e2f4 + i + 0x53) = *(s8 *) (temp_r4 + i);
        }
    }
    func_02089cdc(temp_r5 + 0x14);
    *(void **) temp_r5 = (void *) &data_ov003_0215088c;
    func_020469e0(temp_r5 + 8, (void *) &data_ov003_0215088c);
    func_020467cc(temp_r5);
    return temp_r5;
}
