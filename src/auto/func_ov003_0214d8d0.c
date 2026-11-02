/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0210a774();
void func_02089d54(void *a);
void func_02046a58(void *a, void *b);
void func_02046844(void *a);
extern u8 data_ov003_02150b54;
extern u8 data_ov003_021509cc;
extern u8 data_0213e434;

void *func_ov003_0214d8d0(u8 *arg0) {
    u8 *temp_r5;
    u8 *temp_r4;
    s32 i;

    temp_r5            = arg0;
    temp_r4            = arg0 + 0x70;
    *(void **) temp_r5 = (void *) &data_ov003_02150b54;
    if (func_0210a774(temp_r4) != 0) {
        for (i = 0; i < 8; i++) {
            *(s8 *) (*(u8 **) &data_0213e434 + i + 0x53) = *(s8 *) (temp_r4 + i);
        }
    }
    func_02089d54(temp_r5 + 0x14);
    *(void **) temp_r5 = (void *) &data_ov003_021509cc;
    func_02046a58(temp_r5 + 8, (void *) &data_ov003_021509cc);
    func_02046844(temp_r5);
    return temp_r5;
}
