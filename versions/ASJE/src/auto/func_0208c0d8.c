/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213e2f4[];
extern u8 data_02139e64[];
extern u8 data_0213e440[];

s32 func_020735fc(void *a);
void func_020586a4(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_02085f58(s32 a);
s32 func_02073554(void *a);
s32 func_0207759c(void *a);
s32 func_0208af70(s32 a);
s32 func_020521e0(s32 a);
void func_02050a3c(s32 a);
u8 func_02063e30(void *a, s32 b);
void func_0202693c(void *a);
void func_020117e8(s32 a, s32 b, void *c, s32 d);
void func_02048090(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02018acc(void *a);

void func_0208c0d8(u8 *arg0, s32 arg1) {
    u8 obj[0x48];
    s32 t;

    if (arg0[0xD] == 0) {
        return;
    }
    if (func_020735fc(*(u8 **) data_0213e2f4 + 0x41F8) != 0) {
        func_020586a4(*(s32 *) data_02139e64, 0x98C, -1, 0, 0, 1);
        return;
    }
    if (func_02085f58(*(s32 *) data_0213e440) != 0) {
        func_020586a4(*(s32 *) data_02139e64, 0x98D, -1, 0, 0, 1);
        return;
    }
    if (func_02073554(*(u8 **) data_0213e2f4 + 0x41F8) != 0) {
        t = func_0207759c(*(u8 **) data_0213e2f4 + 0x2F78);
        func_02050a3c(func_020521e0(*(u16 *) (func_0208af70(t) + 8)));
        func_020586a4(*(s32 *) data_02139e64, 0x98F, -1, 0, 0, 1);
        return;
    }
    if (func_02063e30(*(u8 **) data_0213e2f4 + 0x4620, *(s32 *) (*(u8 **) data_0213e440 + 0xF4)) != 0) {
        func_020586a4(*(s32 *) data_02139e64, 0x98E, -1, 0, 0, 1);
        return;
    }
    func_0202693c(obj);
    func_020117e8(*(s32 *) (*(u8 **) data_0213e440 + 0xF8), 8, obj, 0);
    func_02048090(*(s32 *) data_02139e64, 0x14, 1, 1, arg1, 0);
    func_02018acc(obj);
}
