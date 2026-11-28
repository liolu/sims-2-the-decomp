/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02124798[];
extern u8 data_0212479c[];
extern u8 data_021247a4[];
extern u8 data_021247c0[];
extern u8 data_021247dc[];
extern u8 data_02124800[];
extern u8 data_02124824[];
extern u8 data_02124864[];
extern u8 data_021248a4[];
extern u8 data_021248e4[];

void func_0209f400(u8 *arg0, s32 arg1, u32 arg2) {
    if (arg1 == 0) {
        arg0[0x24] = 0;
        arg0[0x2D] = arg2;
        arg0[0x2C] = 1;
        switch (arg2) {
            case 0:
                *(u8 **) (arg0 + 0x28) = data_0212479c;
                break;
            case 1:
                *(u8 **) (arg0 + 0x28) = data_021247c0;
                break;
            case 2:
                *(u8 **) (arg0 + 0x28) = data_02124800;
                break;
            case 3:
                *(u8 **) (arg0 + 0x28) = data_02124824;
                break;
            case 4:
                *(u8 **) (arg0 + 0x28) = data_02124864;
                break;
        }
    } else {
        arg0[0x2E] = 0;
        arg0[0x35] = arg2;
        arg0[0x34] = 1;
        switch (arg2) {
            case 0:
                *(u8 **) (arg0 + 0x30) = data_02124798;
                break;
            case 1:
                *(u8 **) (arg0 + 0x30) = data_021247a4;
                break;
            case 2:
                *(u8 **) (arg0 + 0x30) = data_021247dc;
                break;
            case 3:
                *(u8 **) (arg0 + 0x30) = data_021248a4;
                break;
            case 4:
                *(u8 **) (arg0 + 0x30) = data_021248e4;
                break;
        }
    }
}
