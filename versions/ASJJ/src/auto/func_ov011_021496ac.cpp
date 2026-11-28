/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual ~VA();
    virtual void f1();
};

extern "C" void func_02018af0(void *a, s32 b, void *c, s32 d);
extern "C" void func_02084734(void *a, s32 b);
extern "C" void func_02001944(s32 a);
extern "C" void func_0208474c(void *a, s32 b);
extern "C" void func_02001914(void);
extern "C" u8 *data_0213e0a8;

extern "C" void func_ov011_021496ac(u8 *arg0) {
    VA *o;

    o = *(VA **) (arg0 + 0x24);
    if (o != 0) {
        delete o;
        *(VA **) (arg0 + 0x24) = 0;
    }
    if (*(void **) (arg0 + 0x28) != 0) {
        func_02018af0((u8 *) *(void **) (arg0 + 0x28) + 0x128, 2, 0, 2);
    }
    if (arg0[0x2E] != 0) {
        func_02084734(*(void **) (data_0213e0a8 + 0xFC), arg0[0x2E]);
    }
    if (arg0[0x2F] != 0) {
        func_02001944(0);
        func_0208474c(*(void **) (data_0213e0a8 + 0xFC), arg0[0x2F]);
        func_02001914();
    }
}
