/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_0213e580;
void func_0201d124(void *p);
void func_020276c8(void *p);
s32 func_02087268(s32 a, s32 b, s32 c);
void *func_0204688c(s32 a, s32 b, s32 c);
void *func_02014c30(void *p, s32 v);
void func_02018acc(void *p);
void func_020117e8(void *o, s32 a, void *p, s32 b);
void func_02011090(void *o, s32 a, s32 b, s32 c, s32 d);

void func_02034c3c(u8 *arg0) {
    u8 fr[0x74];
    u8 *o;
    u8 *p;
    s32 flag;
    s32 t;

    if (arg0[0x30] == 0) {
        return;
    }
    func_0201d124(fr + 0x18);
    func_020276c8(fr + 0x54);
    p                    = *(u8 **) (arg0 + 4);
    *(u16 *) (p + 0x1f8) = (u16) (*(u16 *) (p + 0x1f8) & ~0x40);
    if (func_02087268(data_0213e580, 0xb, 0x127) == 0) {
        o = func_0204688c(0x214, 0, 4);
        if (o != 0) {
            o = func_02014c30(o, 0x127);
        }
        {
            s32 *pq = (s32 *) (*(u8 **) (arg0 + 4) + 0x78);
            if (pq[0] != (*(s32 *) (fr + 0) = *(s32 *) (o + 0x78 + 0)) ||
                pq[1] != (*(s32 *) (fr + 4) = *(s32 *) (o + 0x78 + 4)) ||
                pq[2] != (*(s32 *) (fr + 8) = *(s32 *) (o + 0x78 + 8))) {
                flag = 1;
            } else {
                flag = 0;
            }
            if (flag != 0) {
                t                       = pq[0];
                *(s32 *) (fr + 0xc)     = t;
                *(s32 *) (o + 0x78 + 0) = t;
                t                       = pq[1];
                *(s32 *) (fr + 0x10)    = t;
                *(s32 *) (o + 0x78 + 4) = t;
                t                       = pq[2];
                *(s32 *) (fr + 0x14)    = t;
                *(s32 *) (o + 0x78 + 8) = t;
                o[0xdc]                 = 1;
            }
        }
        func_02011090(o, 0x8e, 0, 1, 0);
    }
    *(u8 **) (fr + 0x64) = *(u8 **) (arg0 + 4);
    *(u16 *) (fr + 0x68) = 0x28;
    func_020117e8(*(u8 **) (arg0 + 4), 0x21, fr + 0x54, 0);
    *(u8 **) (fr + 0x38) = *(u8 **) (arg0 + 4);
    *(u16 *) (fr + 0x48) = 0x8f;
    func_020117e8(*(u8 **) (arg0 + 4), 3, fr + 0x18, 0);
    *(u8 **) (fr + 0x64) = *(u8 **) (arg0 + 4);
    *(u16 *) (fr + 0x68) = 0x29;
    func_020117e8(*(u8 **) (arg0 + 4), 0x21, fr + 0x54, 0);
    *(u16 *) (fr + 0x48) = 0x8e;
    func_020117e8(*(u8 **) (arg0 + 4), 3, fr + 0x18, 0);
    arg0[0x30] = 0;
    func_02018acc(fr + 0x54);
    func_02018acc(fr + 0x18);
}
