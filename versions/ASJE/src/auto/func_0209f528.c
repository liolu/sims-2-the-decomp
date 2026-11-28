/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02124b30[];
extern u8 data_02124b34[];
extern u8 data_02124b3c[];
extern u8 data_02124b58[];
extern u8 data_02124b74[];
extern u8 data_02124b98[];
extern u8 data_02124bbc[];
extern u8 data_02124bfc[];
extern u8 data_02124c3c[];
extern u8 data_02124c7c[];

void func_0209f528(u8 *arg0, s32 arg1, u32 arg2) {
    if (arg1 == 0) {
        arg0[0x24] = 0;
        arg0[0x2D] = arg2;
        arg0[0x2C] = 1;
        switch (arg2) {
            case 0:
                *(u8 **) (arg0 + 0x28) = data_02124b34;
                break;
            case 1:
                *(u8 **) (arg0 + 0x28) = data_02124b58;
                break;
            case 2:
                *(u8 **) (arg0 + 0x28) = data_02124b98;
                break;
            case 3:
                *(u8 **) (arg0 + 0x28) = data_02124bbc;
                break;
            case 4:
                *(u8 **) (arg0 + 0x28) = data_02124bfc;
                break;
        }
    } else {
        arg0[0x2E] = 0;
        arg0[0x35] = arg2;
        arg0[0x34] = 1;
        switch (arg2) {
            case 0:
                *(u8 **) (arg0 + 0x30) = data_02124b30;
                break;
            case 1:
                *(u8 **) (arg0 + 0x30) = data_02124b3c;
                break;
            case 2:
                *(u8 **) (arg0 + 0x30) = data_02124b74;
                break;
            case 3:
                *(u8 **) (arg0 + 0x30) = data_02124c3c;
                break;
            case 4:
                *(u8 **) (arg0 + 0x30) = data_02124c7c;
                break;
        }
    }
}
