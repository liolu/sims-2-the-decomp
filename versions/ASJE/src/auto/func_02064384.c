/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_020734e4(void *, s32);
void func_0209b770(void *);
void func_020d5544(s32, void *);
void func_02064384(u8 *obj, u8 *arg) {
    u8 id;
    if (func_020734e4(obj + 0x41f8, arg[0x19]) != 0 || *(s32 *) (obj + 0x4418 + arg[0x19] * 4) > *(s32 *) (obj + 0x480c)) {
        obj[0x4820] = 0x21;
        func_0209b770(arg);
        return;
    }
    id = arg[0x19];
    if (obj[0x4820] == id) {
        return;
    }
    if (id == 0x1c) {
        return;
    }
    if (id == 0x15) {
        return;
    }
    obj[0x4820] = id;
    func_020d5544(0xcc, arg);
}
