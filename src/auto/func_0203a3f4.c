/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02131738;

void func_0201d124(void *);
void func_0201d56c(void *);
void func_020117e8(void *, s32, void *, s32);
void func_02011090(void *, s32, s32, s32, s32);
void func_02018acc(void *);
void func_0201866c(void *);
void func_02046844(void *);

void *func_0203a3f4(u8 *arg0) {
    u8 A[0x3C];
    u8 B[0x24];

    *(u32 *) arg0 = (u32) &data_02131738;
    func_0201d124(A);
    *(s32 *) (A + 0x20) = *(s32 *) (arg0 + 4);
    *(u16 *) (A + 0x30) = 0;
    *(u8 *) (A + 0x33)  = 1;
    *(u8 *) (A + 0x36)  = 1;
    func_020117e8(*(void **) (arg0 + 4), 3, A, 0);
    func_0201d56c(B);
    func_020117e8(*(void **) (arg0 + 4), 0x22, B, 0);
    *(u16 *) (A + 0x30) = 0x4C;
    *(u8 *) (A + 0x33)  = 0;
    *(u8 *) (A + 0x36)  = 0;
    *(s32 *) (A + 0x10) = 0x115;
    func_020117e8(*(void **) (arg0 + 4), 3, A, 0);
    func_02011090(*(void **) (*(u8 **) (arg0 + 4) + 0x1C), 0x88, 0, 1, 0);
    func_02018acc(B);
    func_02018acc(A);
    func_02018acc(arg0 + 0x18);
    func_0201866c(arg0);
    func_02046844(arg0);
    return arg0;
}
