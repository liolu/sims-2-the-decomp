/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VC0 {
    virtual void f0();
    virtual M2C_UNK f1();
};

struct Entry {
    u16 *def;
    u8 *obj;
    s32 x;
    s32 y;
    s32 pad;
};

extern "C" M2C_UNK func_02016708(...);
extern "C" M2C_UNK func_020168a4(...);
extern "C" void *func_020170c4(...);
extern "C" void *func_0204688c(...);
extern "C" M2C_UNK func_02049b00(...);
extern "C" u8 data_021177c4[];

extern "C" void func_02008b64(void *arg0, Entry *a, Entry *b) {
    volatile s32 fr[2];
    u8 i;
    void *p;
    u16 t;
    s32 v;

    for (i = 0; i < 10; i++) {
        p = a[i].obj;
        if (p != NULL) {
            if (p != NULL) {
                ((VC0 *) p)->f1();
            }
            a[i].obj = 0;
        }
        if (b[i].def != NULL) {
            p = func_0204688c(0x74, 0, 4);
            if (p != NULL) {
                p = func_020170c4(p, 0);
            }
            b[i].obj = (u8 *) p;
            t        = *b[i].def;
            if (t >= 9 && t <= 0x10) {
                func_02049b00(b[i].obj, 2);
            } else {
                func_02049b00(b[i].obj, 1);
            }
            func_02016708(b[i].obj, data_021177c4 + (*b[i].def * 8));
            func_020168a4(b[i].obj, 1);
            v                          = b[i].x;
            fr[0]                      = v;
            *(s32 *) (b[i].obj + 0x50) = v;
            v                          = b[i].y;
            fr[1]                      = v;
            *(s32 *) (b[i].obj + 0x54) = v;
        }
    }
}
