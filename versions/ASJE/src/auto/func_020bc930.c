/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020f6da8(s32);
void func_020f6cb4(s32);
void func_020f72e4(s32);
void func_020f7178(s32);
void func_020f6aa8(s32);
void func_020f6a2c(s32);
void func_020eda74(s32, s32, void *, s32, s32);
void func_020edc70(s32, void *, s32, s32);
void func_0203cee8(s32, s32);
void func_0203c4c8(void);
void func_020f6b54(s32);

void func_020bc930(u8 *arg0, u32 arg1, s32 arg2) {
    s32 base;

    if (arg1 != *(u16 *) (arg0 + 0x788)) {
        func_020f6da8(0);
        func_020f6cb4(0);
        func_020f72e4(0);
        func_020f7178(0);
        func_020f6aa8(0);
        func_020f6a2c(0);
        switch (arg1) {
            case 1:
                *(s32 *) (arg0 + 0x780) = arg2;
                func_020eda74(0x60000, *(s32 *) (arg0 + 0x780), arg0 + 0x200, 0x200, 1);
                func_020edc70(0x8000, arg0 + 0x400, 0x200, 1);
                func_0203cee8(0, 1);
                func_0203c4c8();
                func_020f6da8(0xB);
                func_020f6cb4(0x60);
                func_020f72e4(0x10);
                func_020f6aa8(4);
                func_020f6a2c(0x100);
                *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x10;
                *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | 0x10;
                break;
            case 2:
                *(s32 *) (arg0 + 0x780) = arg2;
                func_020eda74(0x40000, *(s32 *) (arg0 + 0x780), arg0 + 0x200, 0x200, 1);
                func_020edc70(0x8000, arg0 + 0x400, 0x200, 1);
                func_0203cee8(0, 1);
                func_0203c4c8();
                func_020f6da8(3);
                func_020f6cb4(0x60);
                func_020f72e4(0x10);
                func_020f6aa8(4);
                func_020f6a2c(8);
                *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x10;
                *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | 0x10;
                break;
            case 3:
                *(s32 *) (arg0 + 0x780) = arg2;
                func_020eda74(0x40000, *(s32 *) (arg0 + 0x780), arg0 + 0x200, 0x200, 1);
                func_020edc70(0x8000, arg0 + 0x400, 0x200, 1);
                func_0203cee8(0, 1);
                func_0203c4c8();
                func_020f6da8(3);
                func_020f6cb4(0x60);
                func_020f7178(0x10);
                func_020f6aa8(4);
                func_020f6a2c(8);
                *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x10;
                *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | 0x10;
                break;
            case 4:
                func_0203cee8(0, 0);
                func_0203c4c8();
                func_020f72e4(1);
                func_020f7178(2);
                *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x10;
                func_020f6aa8(4);
                func_020f6a2c(8);
                *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | 0x10;
                break;
            case 5:
                func_0203cee8(0, 0);
                func_0203c4c8();
                func_020f6b54(3);
                func_020f6aa8(4);
                func_020f6a2c(8);
                *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | 0x10;
                break;
        }
        *(u16 *) (arg0 + 0x788) = arg1;
    } else {
        if (*(s32 *) (arg0 + 0x780) == arg2) {
            return;
        }
        *(s32 *) (arg0 + 0x780) = arg2;
        base                    = 0x60000;
        if (arg1 == 2) {
            base = 0x40000;
        }
        func_020eda74(base, *(s32 *) (arg0 + 0x780), arg0 + 0x200, 0x200, 1);
        func_020edc70(0x8000, arg0 + 0x400, 0x200, 1);
    }
}
