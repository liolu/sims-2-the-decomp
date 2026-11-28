/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020105d0(s32);
M2C_UNK func_020467cc(void *);
extern u8 data_0212f884;
extern s32 data_027e0000;
extern u8 data_027e0014;
extern u8 data_ov008_0214afe8;
extern u8 data_ov008_0214b010;
extern u8 data_ov008_0214b084;
extern u8 data_ov008_0214b0ac;

void *func_ov008_02149c40(void *arg0) {
    *(void **) arg0                 = &data_ov008_0214b084;
    *(void **) ((u8 *) arg0 + 0x24) = &data_ov008_0214b0ac;
    *(void **) arg0                 = &data_ov008_0214afe8;
    *(void **) ((u8 *) arg0 + 0x24) = &data_ov008_0214b010;
    func_020105d0(data_027e0000 * 0x34 + (s32) &data_027e0014);
    *(void **) arg0 = &data_0212f884;
    func_020467cc(arg0);
    return arg0;
}
