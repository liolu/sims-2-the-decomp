/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02018554(s32, void *);
void func_02046384(void *, s32, s32);
void func_02051a50(s32, s32, s32);
void *func_02052258(s32);
void func_0210a69c(void *, void *);

extern void *data_0213e434;

void func_0200260c(u8 *arg0) {
    u8 buf[0x38];
    u8 *t;

    func_02051a50(0, 0, 0);
    func_02046384(buf, 0, 0x32);
    if (*(u8 *) (arg0 + 0x2F4) == 0) {
        func_0210a69c(buf, (u8 *) data_0213e434 + 0x53);
    } else {
        t = *(u8 **) ((u8 *) data_0213e434 + 0x479C);
        t = (u8 *) ((s32) t + 0x220);
        t = (u8 *) ((s32) t + 0x14);
        func_0210a69c(buf, t);
    }
    func_0210a69c(arg0 + 0x308, buf);
    func_02018554(*(s32 *) (arg0 + 0x350), buf);
    if (*(u8 *) (arg0 + 0x2F4) == 0) {
        func_0210a69c(buf, func_02052258(0x7E7));
    } else {
        t = *(u8 **) ((u8 *) data_0213e434 + 0x479C);
        t = (u8 *) ((s32) t + 0x264);
        t = (u8 *) ((s32) t + 0x14);
        func_0210a69c(buf, t);
    }
    func_0210a69c(arg0 + 0x320, buf);
    func_02018554(*(s32 *) (arg0 + 0x354), buf);
    *(u8 *) (arg0 + 0x3D4) = 0;
}
