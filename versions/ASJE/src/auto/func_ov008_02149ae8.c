/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020105d0(s32);
extern u8 data_0212f884;
extern s32 data_027e0000;
extern u8 data_027e0014;
extern u8 data_ov008_0214afe8;
extern u8 data_ov008_0214b010;
extern u8 data_ov008_0214b01c;
extern u8 data_ov008_0214b044;

void *func_ov008_02149ae8(void *arg0) {
    *(void **) arg0                 = &data_ov008_0214b01c;
    *(void **) ((u8 *) arg0 + 0x24) = &data_ov008_0214b044;
    *(void **) arg0                 = &data_ov008_0214afe8;
    *(void **) ((u8 *) arg0 + 0x24) = &data_ov008_0214b010;
    func_020105d0(data_027e0000 * 0x34 + (s32) &data_027e0014);
    *(void **) arg0 = &data_0212f884;
    return arg0;
}
