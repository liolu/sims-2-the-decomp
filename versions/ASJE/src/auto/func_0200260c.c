/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02018554(s32, void *);
void func_0204630c(void *, s32, s32);
void func_020519d8(s32, s32, s32);
void *func_020521e0(s32);
void func_0210a560(void *, void *);

extern void *data_0213e2f4;

void func_0200260c(u8 *arg0) {
    u8 buf[0x38];
    u8 *t;

    func_020519d8(0, 0, 0);
    func_0204630c(buf, 0, 0x32);
    if (*(u8 *) (arg0 + 0x2F4) == 0) {
        func_0210a560(buf, (u8 *) data_0213e2f4 + 0x53);
    } else {
        t = *(u8 **) ((u8 *) data_0213e2f4 + 0x479C);
        t = (u8 *) ((s32) t + 0x220);
        t = (u8 *) ((s32) t + 0x14);
        func_0210a560(buf, t);
    }
    func_0210a560(arg0 + 0x308, buf);
    func_02018554(*(s32 *) (arg0 + 0x350), buf);
    if (*(u8 *) (arg0 + 0x2F4) == 0) {
        func_0210a560(buf, func_020521e0(0x7E7));
    } else {
        t = *(u8 **) ((u8 *) data_0213e2f4 + 0x479C);
        t = (u8 *) ((s32) t + 0x264);
        t = (u8 *) ((s32) t + 0x14);
        func_0210a560(buf, t);
    }
    func_0210a560(arg0 + 0x320, buf);
    func_02018554(*(s32 *) (arg0 + 0x354), buf);
    *(u8 *) (arg0 + 0x3D4) = 0;
}
