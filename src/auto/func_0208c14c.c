/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213e434[];
extern u8 data_02139fa4[];
extern u8 data_0213e580[];

s32 func_02073674(void *a);
void func_0205871c(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_02085fd0(s32 a);
s32 func_020735cc(void *a);
s32 func_02077614(void *a);
s32 func_0208afe8(s32 a);
s32 func_02052258(s32 a);
void func_02050ab4(s32 a);
u8 func_02063ea8(void *a, s32 b);
void func_020269b4(void *a);
void func_020117e8(s32 a, s32 b, void *c, s32 d);
void func_02048108(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02018acc(void *a);

void func_0208c14c(u8 *arg0, s32 arg1) {
    u8 obj[0x48];
    s32 t;

    if (arg0[0xD] == 0) {
        return;
    }
    if (func_02073674(*(u8 **) data_0213e434 + 0x41F8) != 0) {
        func_0205871c(*(s32 *) data_02139fa4, 0x98C, -1, 0, 0, 1);
        return;
    }
    if (func_02085fd0(*(s32 *) data_0213e580) != 0) {
        func_0205871c(*(s32 *) data_02139fa4, 0x98D, -1, 0, 0, 1);
        return;
    }
    if (func_020735cc(*(u8 **) data_0213e434 + 0x41F8) != 0) {
        t = func_02077614(*(u8 **) data_0213e434 + 0x2F78);
        func_02050ab4(func_02052258(*(u16 *) (func_0208afe8(t) + 8)));
        func_0205871c(*(s32 *) data_02139fa4, 0x98F, -1, 0, 0, 1);
        return;
    }
    if (func_02063ea8(*(u8 **) data_0213e434 + 0x4620, *(s32 *) (*(u8 **) data_0213e580 + 0xF4)) != 0) {
        func_0205871c(*(s32 *) data_02139fa4, 0x98E, -1, 0, 0, 1);
        return;
    }
    func_020269b4(obj);
    func_020117e8(*(s32 *) (*(u8 **) data_0213e580 + 0xF8), 8, obj, 0);
    func_02048108(*(s32 *) data_02139fa4, 0x14, 1, 1, arg1, 0);
    func_02018acc(obj);
}
