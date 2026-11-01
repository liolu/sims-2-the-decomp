/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_020e60f4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 a;
    s32 t;
    if (arg0 == 0x80) {
        a = arg3 + ((arg2 - 8) * 4);
        func_020e5b00(arg1, a);
        t = arg3 + ((arg2 - 0x20) * 4);
        func_020e519c(arg1 + 0x80, t);
        func_020e5b00(arg1 + 0x100, a);
        func_020e519c(arg1 + 0x180, t);
        return;
    }
    t = arg3 + ((arg2 - 0x10) * 4);
    func_020e4fac(arg1, t);
    func_020e4cb8(arg1 + 0x40, t);
    func_020e4fac(arg1 + 0x80, t);
    func_020e4cb8(arg1 + 0xC0, t);
}
