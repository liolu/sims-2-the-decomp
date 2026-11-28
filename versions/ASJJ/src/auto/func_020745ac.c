/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u8 func_020524d8(void);
int func_02107d28(char *, const char *, ...);
s32 func_020f57ac(s32, s32);
extern char data_0211f62c[];
extern char data_021322a8[];

void func_020745ac(char *out, s32 value) {
    char buf[12];
    char *p  = buf;
    char sep = data_0211f62c[func_020524d8()];
    s32 len  = func_02107d28(p, data_021322a8, value);
    s32 n    = func_020f57ac(len, 3);
    if (n == 0) {
        n = 3;
    }
    while (n-- != 0) {
        *out++ = *p++;
        len--;
    }
    while (len != 0) {
        *out++ = sep;
        *out++ = *p++;
        *out++ = *p++;
        *out++ = *p++;
        len -= 3;
    }
    *out = 0;
}
