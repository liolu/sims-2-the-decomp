/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020105d0(s32);
M2C_UNK func_02046858(void *);
extern u8 data_0212f4c4;
extern s32 data_027e0000;
extern u8 data_027e0014;
extern u8 data_ov008_0214ac48;
extern u8 data_ov008_0214ac70;
extern u8 data_ov008_0214acb0;
extern u8 data_ov008_0214acd8;

void *func_ov008_021496d0(void *arg0) {
    *(void **) arg0                 = &data_ov008_0214acb0;
    *(void **) ((u8 *) arg0 + 0x24) = &data_ov008_0214acd8;
    *(void **) arg0                 = &data_ov008_0214ac48;
    *(void **) ((u8 *) arg0 + 0x24) = &data_ov008_0214ac70;
    func_020105d0(data_027e0000 * 0x34 + (s32) &data_027e0014);
    *(void **) arg0 = &data_0212f4c4;
    func_02046858(arg0);
    return arg0;
}
