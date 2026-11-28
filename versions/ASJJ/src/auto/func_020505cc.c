/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct OSOwnerInfo {
    u8 language;
    u8 favoriteColour;
    u8 month;
    u8 day;
    u16 nickName[11];
    u16 nickNameLength;
    u16 comment[26];
    u16 commentLength;
} OSOwnerInfo;

void func_020fbadc(OSOwnerInfo *info);
void func_0203f130(s32 resource, s32 offset, s32 index, s32 count);
void func_0203f288(s32 resource, s32 offset, s32 index, s32 count);
s32 func_0203e9f4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u16 arg5, s32 arg6, s32 arg7);

void func_020505cc(s32 ch, s32 idx, s32 mode) {
    OSOwnerInfo info;
    s32 n;
    s32 two;
    s32 ext;
    s32 p;

    two = 0;
    ext = 0;
    if (ch >= 0x20 && ch < 0x26) {
        n  = 3;
        ch = (ch - 0x20) * n + 0x80;
    } else {
        ch += 0x10;
        if (ch == 0x2d) {
            func_020fbadc(&info);
            ch = info.favoriteColour + 0x10;
        } else if (ch >= 0x26 && ch < 0x2d) {
            ch -= 0x26;
            ext = 1;
        }
        n   = 1;
        two = n;
    }
    if (mode != 0) {
        p = idx + 1;
        func_0203f130(0xd2c, ch << 1, p, n);
        if (two) {
            func_0203f130(0xd2c, 0x1fe, idx + 2, 1);
        }
    } else {
        p = idx + 1;
        func_0203f288(0xd2c, ch << 1, p, n);
        if (two) {
            func_0203f288(0xd2c, 0x1fe, idx + 2, 1);
        }
    }
    if (ext) {
        func_0203e9f4(p, 1, 10, 0, (mode == 1 ? 4 : 0) | 0x19, 0xd2c, (ch - 0x10) << 1, 2);
    }
}
