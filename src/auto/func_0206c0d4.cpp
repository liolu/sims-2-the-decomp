/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual s32 f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};

extern "C" {
void func_020d59bc(s32 a);
u16 func_020187ec(void *a);
s32 func_02066728(void *a);
void func_0206c73c(void *a);
extern s32 data_0213e434;
extern u8 *data_0213e580;

void func_0206c0d4(u8 *arg0) {
    VA *obj;

    if (arg0[0x94] == 0) {
        return;
    }
    func_020d59bc(0x16A);
    if (*(u16 *) (arg0 + 0xA) == 0) {
        arg0 = *(u8 **) (arg0 + 0x90);
        if (*(s32 *) (arg0 + 0x74) > -1) {
            if (func_020187ec((u8 *) *(s32 *) (data_0213e580 + 0xF8) + 0xE0) != 7) {
                return;
            }
            ((VA *) *(VA **) (arg0 + *(s32 *) (arg0 + 0x74) * 4 + 0x40))->f3(*(s32 *) (arg0 + 0x74));
            return;
        }
        obj = *(VA **) ((u8 *) data_0213e434 + *(s32 *) (arg0 + 0xE0) * 4 + 0x4000 + 0x670);
        if (func_02066728(obj) == 0) {
            return;
        }
        if (obj->f0() == 0) {
            return;
        }
        if (func_020187ec((u8 *) *(s32 *) (data_0213e580 + 0xF8) + 0xE0) != 7) {
            return;
        }
        obj->f1();
        return;
    }
    func_0206c73c(*(void **) (arg0 + 0x90));
}
}
