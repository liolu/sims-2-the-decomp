/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02124c6c[];
extern u8 data_02124c70[];
extern u8 data_02124c78[];
extern u8 data_02124c94[];
extern u8 data_02124cb0[];
extern u8 data_02124cd4[];
extern u8 data_02124cf8[];
extern u8 data_02124d38[];
extern u8 data_02124d78[];
extern u8 data_02124db8[];

void func_0209f5f0(u8 *arg0, s32 arg1, u32 arg2) {
    if (arg1 == 0) {
        arg0[0x24] = 0;
        arg0[0x2D] = arg2;
        arg0[0x2C] = 1;
        switch (arg2) {
            case 0:
                *(u8 **) (arg0 + 0x28) = data_02124c70;
                break;
            case 1:
                *(u8 **) (arg0 + 0x28) = data_02124c94;
                break;
            case 2:
                *(u8 **) (arg0 + 0x28) = data_02124cd4;
                break;
            case 3:
                *(u8 **) (arg0 + 0x28) = data_02124cf8;
                break;
            case 4:
                *(u8 **) (arg0 + 0x28) = data_02124d38;
                break;
        }
    } else {
        arg0[0x2E] = 0;
        arg0[0x35] = arg2;
        arg0[0x34] = 1;
        switch (arg2) {
            case 0:
                *(u8 **) (arg0 + 0x30) = data_02124c6c;
                break;
            case 1:
                *(u8 **) (arg0 + 0x30) = data_02124c78;
                break;
            case 2:
                *(u8 **) (arg0 + 0x30) = data_02124cb0;
                break;
            case 3:
                *(u8 **) (arg0 + 0x30) = data_02124d78;
                break;
            case 4:
                *(u8 **) (arg0 + 0x30) = data_02124db8;
                break;
        }
    }
}
