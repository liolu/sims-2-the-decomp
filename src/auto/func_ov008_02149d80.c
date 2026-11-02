/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020105d0(s32);
M2C_UNK func_02046844(void *);
extern u8 data_0212f9c4;
extern s32 data_027e0000;
extern u8 data_027e0014;
extern u8 data_ov008_0214b128;
extern u8 data_ov008_0214b150;
extern u8 data_ov008_0214b1c4;
extern u8 data_ov008_0214b1ec;

void *func_ov008_02149d80(void *arg0) {
    *(void **) arg0                 = &data_ov008_0214b1c4;
    *(void **) ((u8 *) arg0 + 0x24) = &data_ov008_0214b1ec;
    *(void **) arg0                 = &data_ov008_0214b128;
    *(void **) ((u8 *) arg0 + 0x24) = &data_ov008_0214b150;
    func_020105d0(data_027e0000 * 0x34 + (s32) &data_027e0014);
    *(void **) arg0 = &data_0212f9c4;
    func_02046844(arg0);
    return arg0;
}
