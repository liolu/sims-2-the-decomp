/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02039810(u8 *);
void func_02018af8(u8 *, s32, u8 *, s32);
void func_02018acc(u8 *);

s32 func_02028d3c(u8 *arg0, u8 *arg1) {
    u8 sp[0xB0];
    u16 code;

    code = *(u16 *) (*(u8 **) (arg0 + 4) + 0xA);
    if (((code >= 0xD1) && (code <= 0xDC)) || ((code >= 0xDD) && (code <= 0xE8))) {
        func_02039810(sp);
        *(u8 **) (sp + 0x44) = *(u8 **) (arg0 + 4);
        *(u16 *) (sp + 0x4C) = 0xC;
        *(u16 *) (sp + 0x4E) = 0xD;
        *(u16 *) (sp + 0x54) = 0xE;
        sp[0x27]             = 1;
        sp[0x35]             = 0;
        *(u16 *) (sp + 0x36) = 0xD1;
        *(u16 *) (sp + 0x38) = 0x3C;
        *(u16 *) (sp + 0x3A) = 0;
        *(u16 *) (sp + 0x48) = 0xFB;
        func_02018af8(arg1 + 0x128, 0xD, sp, 2);
        func_02018acc(sp);
    } else if ((code >= 0x6A) && (code <= 0x7F)) {
        func_02039810(sp + 0x58);
        *(u8 **) (sp + 0x58 + 0x44) = *(u8 **) (arg0 + 4);
        *(u16 *) (sp + 0x58 + 0x4C) = 0x135;
        *(u16 *) (sp + 0x58 + 0x4E) = 0x135;
        *(u16 *) (sp + 0x58 + 0x54) = 0x93;
        sp[0x58 + 0x27]             = 1;
        sp[0x58 + 0x35]             = 0;
        *(u16 *) (sp + 0x58 + 0x36) = 0x6A;
        func_02018af8(arg1 + 0x128, 0xD, sp + 0x58, 2);
        func_02018acc(sp + 0x58);
    }
    return 0;
}
