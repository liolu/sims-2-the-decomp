/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0201d10c(void *);
void func_0201d554(void *);
void func_02027708(void *);
void func_02028cbc(void *);
void *func_020468a0(s32, s32, s32);
void *func_02014c28(void *, s32);
void func_02011090(void *, s32, s32, s32, s32);
void func_020117e8(void *, s32, void *, s32);
void func_020d54a8(s32);
void func_02018ac4(void *);

void func_02036c64(u8 *arg0) {
    u8 o4[0x3C];
    u8 o40[0x24];
    u8 o64[0x1C];
    u8 o80[0x1C];
    void *obj;
    s32 r5;

    func_0201d10c(o4);
    func_0201d554(o40);
    func_02027708(o64);
    func_02028cbc(o80);
    obj = func_020468a0(0x214, 0, 4);
    if (obj != 0) {
        obj = func_02014c28(obj, 0x11D);
    }
    *(void **) (*(u8 **) (arg0 + 4) + 0x20) = obj;
    func_02011090(obj, 0x85, 0, 1, 0);
    func_02011090(obj, 0xC8, 0, 1, 0);
    func_02011090(obj, 0xC9, 0, 1, 0);
    *(u16 *) (o64 + 0x14) = 0x4B;
    *(s32 *) (o64 + 0x10) = *(s32 *) (arg0 + 4);
    *(s32 *) (o64 + 0x18) = *(s32 *) (arg0 + 0x2C);
    r5                    = *(s32 *) (*(u8 **) (arg0 + 4) + 0x1C);
    *(u16 *) (o4 + 0x30)  = 0x84;
    *(s32 *) (o4 + 0x20)  = r5;
    func_020117e8((void *) r5, 0x34, o80, 0);
    func_020117e8((void *) r5, 0x21, o64, 0);
    func_020117e8((void *) r5, 3, o4, 0);
    func_020d54a8(0xC9);
    *(s32 *) (arg0 + 0x34) = 1;
    *(s32 *) (arg0 + 0x38) = 0x28;
    func_02018ac4(o80);
    func_02018ac4(o64);
    func_02018ac4(o40);
    func_02018ac4(o4);
}
