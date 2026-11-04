/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020f6ee4(s32);
void func_020f6df0(s32);
void func_020f7420(s32);
void func_020f72b4(s32);
void func_020f6be4(s32);
void func_020f6b68(s32);
void func_020edbb0(s32, s32, void *, s32, s32);
void func_020eddac(s32, void *, s32, s32);
void func_0203cf60(s32, s32);
void func_0203c540(void);
void func_020f6c90(s32);

void func_020bc9f8(u8 *arg0, u32 arg1, s32 arg2) {
    s32 base;

    if (arg1 != *(u16 *) (arg0 + 0x788)) {
        func_020f6ee4(0);
        func_020f6df0(0);
        func_020f7420(0);
        func_020f72b4(0);
        func_020f6be4(0);
        func_020f6b68(0);
        switch (arg1) {
            case 1:
                *(s32 *) (arg0 + 0x780) = arg2;
                func_020edbb0(0x60000, *(s32 *) (arg0 + 0x780), arg0 + 0x200, 0x200, 1);
                func_020eddac(0x8000, arg0 + 0x400, 0x200, 1);
                func_0203cf60(0, 1);
                func_0203c540();
                func_020f6ee4(0xB);
                func_020f6df0(0x60);
                func_020f7420(0x10);
                func_020f6be4(4);
                func_020f6b68(0x100);
                *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x10;
                *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | 0x10;
                break;
            case 2:
                *(s32 *) (arg0 + 0x780) = arg2;
                func_020edbb0(0x40000, *(s32 *) (arg0 + 0x780), arg0 + 0x200, 0x200, 1);
                func_020eddac(0x8000, arg0 + 0x400, 0x200, 1);
                func_0203cf60(0, 1);
                func_0203c540();
                func_020f6ee4(3);
                func_020f6df0(0x60);
                func_020f7420(0x10);
                func_020f6be4(4);
                func_020f6b68(8);
                *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x10;
                *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | 0x10;
                break;
            case 3:
                *(s32 *) (arg0 + 0x780) = arg2;
                func_020edbb0(0x40000, *(s32 *) (arg0 + 0x780), arg0 + 0x200, 0x200, 1);
                func_020eddac(0x8000, arg0 + 0x400, 0x200, 1);
                func_0203cf60(0, 1);
                func_0203c540();
                func_020f6ee4(3);
                func_020f6df0(0x60);
                func_020f72b4(0x10);
                func_020f6be4(4);
                func_020f6b68(8);
                *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x10;
                *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | 0x10;
                break;
            case 4:
                func_0203cf60(0, 0);
                func_0203c540();
                func_020f7420(1);
                func_020f72b4(2);
                *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x10;
                func_020f6be4(4);
                func_020f6b68(8);
                *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | 0x10;
                break;
            case 5:
                func_0203cf60(0, 0);
                func_0203c540();
                func_020f6c90(3);
                func_020f6be4(4);
                func_020f6b68(8);
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
        func_020edbb0(base, *(s32 *) (arg0 + 0x780), arg0 + 0x200, 0x200, 1);
        func_020eddac(0x8000, arg0 + 0x400, 0x200, 1);
    }
}
