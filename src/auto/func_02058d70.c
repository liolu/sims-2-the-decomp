/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} U16One;
typedef struct {
    u16 a, b;
} U16Pair;
typedef struct {
    u8 a, b, c, d;
} U8Quad;
typedef struct {
    u16 x, y;
    U16Pair p1;
    U8Quad q1;
    U16Pair p2;
    U8Quad q2;
    u16 arr[6];
} Fr;

extern u16 data_02131da0;
extern u16 data_02131da4;
extern u16 data_02131da8[6];

extern void func_0203cfb0(s32);
extern void func_0203d208(s32, U16One);
extern s32 func_02052288(void);
extern void func_0203e23c(s32, u16, s32, s32, s32, s32, U16Pair, U8Quad, s32);

void func_02058d70(void) {
    Fr f;
    U8Quad *q;
    U16Pair *p;

    f.x      = data_02131da0;
    f.y      = data_02131da4;
    f.arr[0] = data_02131da8[0];
    f.arr[1] = data_02131da8[1];
    f.arr[2] = data_02131da8[2];
    f.arr[3] = data_02131da8[3];
    f.arr[4] = data_02131da8[4];
    f.arr[5] = data_02131da8[5];
    func_0203cfb0(0);
    func_0203d208(0, *(U16One *) &f.y);
    q    = &f.q1;
    q->a = 0;
    q->b = 0;
    q->c = 0;
    p    = &f.p1;
    q->d = 0;
    p->a = 0;
    p->b = 0;
    func_0203e23c(0, f.arr[func_02052288()], 1, 0, 0, 0x100, f.p1, f.q1, 1);
    func_0203d208(1, *(U16One *) &f.x);
    q    = &f.q2;
    q->a = 0;
    q->b = 0;
    q->c = 0;
    p    = &f.p2;
    q->d = 0;
    p->a = 0;
    p->b = 0;
    func_0203e23c(1, 0x1EC7, 0x28, 0, 0, 0x100, f.p2, f.q2, 0);
}
