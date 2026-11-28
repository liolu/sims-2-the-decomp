/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020f69d0(s32);
void func_020f68dc(s32);
void func_020f6f0c(s32);
void func_020f6da0(s32);
void func_020f66d0(s32);
void func_020f6654(s32);
void func_020ed69c(s32, s32, void *, s32, s32);
void func_020ed898(s32, void *, s32, s32);
void func_0203cf94(s32, s32);
void func_0203c574(void);
void func_020f677c(s32);

void func_020bc52c(u8 *arg0, u32 arg1, s32 arg2) {
    s32 base;

    if (arg1 != *(u16 *) (arg0 + 0x788)) {
        func_020f69d0(0);
        func_020f68dc(0);
        func_020f6f0c(0);
        func_020f6da0(0);
        func_020f66d0(0);
        func_020f6654(0);
        switch (arg1) {
            case 1:
                *(s32 *) (arg0 + 0x780) = arg2;
                func_020ed69c(0x60000, *(s32 *) (arg0 + 0x780), arg0 + 0x200, 0x200, 1);
                func_020ed898(0x8000, arg0 + 0x400, 0x200, 1);
                func_0203cf94(0, 1);
                func_0203c574();
                func_020f69d0(0xB);
                func_020f68dc(0x60);
                func_020f6f0c(0x10);
                func_020f66d0(4);
                func_020f6654(0x100);
                *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x10;
                *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | 0x10;
                break;
            case 2:
                *(s32 *) (arg0 + 0x780) = arg2;
                func_020ed69c(0x40000, *(s32 *) (arg0 + 0x780), arg0 + 0x200, 0x200, 1);
                func_020ed898(0x8000, arg0 + 0x400, 0x200, 1);
                func_0203cf94(0, 1);
                func_0203c574();
                func_020f69d0(3);
                func_020f68dc(0x60);
                func_020f6f0c(0x10);
                func_020f66d0(4);
                func_020f6654(8);
                *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x10;
                *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | 0x10;
                break;
            case 3:
                *(s32 *) (arg0 + 0x780) = arg2;
                func_020ed69c(0x40000, *(s32 *) (arg0 + 0x780), arg0 + 0x200, 0x200, 1);
                func_020ed898(0x8000, arg0 + 0x400, 0x200, 1);
                func_0203cf94(0, 1);
                func_0203c574();
                func_020f69d0(3);
                func_020f68dc(0x60);
                func_020f6da0(0x10);
                func_020f66d0(4);
                func_020f6654(8);
                *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x10;
                *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | 0x10;
                break;
            case 4:
                func_0203cf94(0, 0);
                func_0203c574();
                func_020f6f0c(1);
                func_020f6da0(2);
                *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x10;
                func_020f66d0(4);
                func_020f6654(8);
                *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | 0x10;
                break;
            case 5:
                func_0203cf94(0, 0);
                func_0203c574();
                func_020f677c(3);
                func_020f66d0(4);
                func_020f6654(8);
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
        func_020ed69c(base, *(s32 *) (arg0 + 0x780), arg0 + 0x200, 0x200, 1);
        func_020ed898(0x8000, arg0 + 0x400, 0x200, 1);
    }
}
