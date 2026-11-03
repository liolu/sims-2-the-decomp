/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0201d124(void *);
void func_0201d56c(void *);
void func_020276c8(void *);
void func_02028c84(void *);
void *func_0204688c(s32, s32, s32);
void *func_02014c30(void *, s32);
void func_02011090(void *, s32, s32, s32, s32);
void func_020117e8(void *, s32, void *, s32);
void func_020d59bc(s32);
void func_02018acc(void *);

void func_02036c30(u8 *arg0) {
    u8 o4[0x3C];
    u8 o40[0x24];
    u8 o64[0x1C];
    u8 o80[0x1C];
    void *obj;
    s32 r5;

    func_0201d124(o4);
    func_0201d56c(o40);
    func_020276c8(o64);
    func_02028c84(o80);
    obj = func_0204688c(0x214, 0, 4);
    if (obj != 0) {
        obj = func_02014c30(obj, 0x11D);
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
    func_020d59bc(0xC9);
    *(s32 *) (arg0 + 0x34) = 1;
    *(s32 *) (arg0 + 0x38) = 0x28;
    func_02018acc(o80);
    func_02018acc(o64);
    func_02018acc(o40);
    func_02018acc(o4);
}
