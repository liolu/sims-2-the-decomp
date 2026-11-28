/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u8 func_02052210(void);
int func_02108100(char *, const char *, ...);
s32 func_020f5b84(s32, s32);
extern char data_0211f9c4[];
extern char data_02132678[];

void func_0207454c(char *out, s32 value) {
    char buf[12];
    char *p  = buf;
    char sep = data_0211f9c4[func_02052210()];
    s32 len  = func_02108100(p, data_02132678, value);
    s32 n    = func_020f5b84(len, 3);
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
