/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov003_0215003c;
extern u8 data_ov003_02150044;
extern u8 data_ov003_0215004c;
extern u8 data_ov003_02150054;
extern u8 data_ov003_0215005c;
extern u8 data_ov003_02150064;
void func_ov003_0214ef00(s32 a, u8 *b, s32 c);

void func_ov003_0214f0d4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *p;
    u8 *base;

    switch (arg1) {
        case 0:
            base = *(u8 **) ((u8 *) &data_ov003_0215003c + arg0 * 0x30);
            p    = base + arg2 * 6;
            func_ov003_0214ef00(arg0, p, arg3);
            return;
        case 1:
            base = *(u8 **) ((u8 *) &data_ov003_02150044 + arg0 * 0x30);
            p    = base + arg2 * 6;
            func_ov003_0214ef00(arg0, p, arg3);
            return;
        case 2:
            base = *(u8 **) ((u8 *) &data_ov003_0215004c + arg0 * 0x30);
            p    = base + arg2 * 12;
            func_ov003_0214ef00(arg0, p, arg3);
            func_ov003_0214ef00(arg0, p + 6, arg3);
            return;
        case 3:
            base = *(u8 **) ((u8 *) &data_ov003_02150054 + arg0 * 0x30);
            p    = base + arg2 * 12;
            func_ov003_0214ef00(arg0, p, arg3);
            func_ov003_0214ef00(arg0, p + 6, arg3);
            return;
        case 4:
            base = *(u8 **) ((u8 *) &data_ov003_0215005c + arg0 * 0x30);
            p    = base + arg2 * 12;
            func_ov003_0214ef00(arg0, p, arg3);
            func_ov003_0214ef00(arg0, p + 6, arg3);
            return;
        case 5:
            base = *(u8 **) ((u8 *) &data_ov003_02150064 + arg0 * 0x30);
            p    = base + arg2 * 12;
            func_ov003_0214ef00(arg0, p, arg3);
            func_ov003_0214ef00(arg0, p + 6, arg3);
            return;
        default:
            return;
    }
}
