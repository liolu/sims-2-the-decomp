/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *func_020f0988(void *);
extern void func_020fa980(s32, s32);
extern void func_020f9014(void);
extern void func_020f8fa0(s32, s32, s32);
extern void func_020f8f48(void);
extern s32 func_020eca94(s32, s32, s32, s32);

s32 func_020bb824(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5) {
    u8 *o;
    u32 r1;
    u32 r2;
    u32 r4;
    u32 r7;
    if (*(u16 *) (arg0 + 0xE) & 1) {
        o = func_020f0988(*(void **) arg0);
        {
            u8 *src             = *(u8 **) (arg0 + 8);
            *(u32 *) (o + 8)    = *(u32 *) (src + 4);
            *(u32 *) (o + 0x18) = *(u32 *) (src + 8);
            *(u32 *) (o + 0x2C) = *(u32 *) (src + 0xC);
        }
    }
    o  = func_020f0988(*(void **) arg0);
    r2 = *(u32 *) (o + 0x2C);
    r1 = r2 & 0xFFFF;
    r4 = r1 << 3;
    o  = func_020f0988(*(void **) arg0);
    {
        u32 off  = *(u16 *) (o + 0x34);
        u8 *p2   = o + off;
        u32 off2 = *(u16 *) (p2 + 6);
        u32 val  = *(u16 *) (p2 + off2);
        u8 *addr = p2 + off2;
        r2       = *(u16 *) (addr + val * arg1 + 4);
        r7       = (r2 << 3) + arg4;
    }
    func_020f0988(*(void **) arg0);
    if (arg5 != 0) {
        func_020fa980(arg2, arg3);
        func_020f9014();
        func_020f8fa0(arg2, r4 + r7, arg3);
        func_020f8f48();
        return 1;
    }
    return func_020eca94(1, r4 + r7, arg2, arg3) != 0;
}
