/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} U16One_02058b3c;

extern u8 data_0211e8bc;

void func_02001944(s32 a);
void func_02001914(void);
u16 func_0203d130(void *p);
void func_0203d15c(void *p, U16One_02058b3c v);
void func_02058d08(u8 *p, void *q, u16 v);
void func_0203c9f4(void *p, u16 a, s32 b);
void func_0203c8cc(void *p, u16 a, s32 b, s32 c);
s32 func_02044538(s32 a);

void func_02058b3c(u8 *arg0) {
    u16 loc[2];

    func_02001944(1);
    loc[0] = func_0203d130(*(void **) (arg0 + 0xd90));
    loc[1] = loc[0];
    func_02058d08(arg0 + 6, &data_0211e8bc, loc[0]);
    *(u16 *) (arg0 + 6) = (u16) ((*(u16 *) (arg0 + 6) & ~0x1c) | (((u16) * (s32 *) (arg0 + 0xd94) & 7) << 2));
    *(u16 *) (arg0 + 6) = (u16) ((*(u16 *) (arg0 + 6) & ~0x1f00) | (((u16) * (s32 *) (arg0 + 0xd98) & 0x1f) << 8));
    *(u16 *) (arg0 + 6) = *(u16 *) (arg0 + 6) & ~3;
    func_0203d15c(*(void **) (arg0 + 0xd90), *(U16One_02058b3c *) (arg0 + 6));
    func_0203c9f4(*(void **) (arg0 + 0xd90), (u16) * (s32 *) (arg0 + 0xd9c), 0);
    func_0203c8cc(*(void **) (arg0 + 0xd90), (u16) (*(s32 *) (arg0 + 0xd9c) + 1), 0x12, func_02044538(0x21e7));
    func_0203c8cc(*(void **) (arg0 + 0xd90), (u16) (*(s32 *) (arg0 + 0xd9c) + 0x13), 9, func_02044538(0x21eb));
    func_0203c8cc(*(void **) (arg0 + 0xd90), (u16) (*(s32 *) (arg0 + 0xd9c) + 0x1c), 9, func_02044538(0x21e9));
    func_0203c8cc(*(void **) (arg0 + 0xd90), (u16) (*(s32 *) (arg0 + 0xd9c) + 0x25), 9, func_02044538(0x21e5));
    func_0203c8cc(*(void **) (arg0 + 0xd90), (u16) (*(s32 *) (arg0 + 0xd9c) + 0x2e), 9, func_02044538(0x21e3));
    func_0203d15c(*(void **) (arg0 + 0xd90), *(U16One_02058b3c *) &loc[1]);
    func_02001914();
}
