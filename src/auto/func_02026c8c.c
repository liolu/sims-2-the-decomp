/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_020269b4(void *a);
void func_020117e8(void *a, s32 b, void *c, void *d);
void *func_0201d124(void *a);
void func_02018acc(void *a);

void func_02026c8c(u8 *arg0) {
    u8 frame[0x98];
    u8 *p2;
    u8 *p3;

    *(s32 *) (frame + 0x44) = 0;
    *(s32 *) (frame + 0x48) = 0;
    *(s32 *) (frame + 0x4C) = 0;
    p2                      = *(u8 **) (arg0 + 4);
    *(s32 *) (p2 + 0x10)    = 0;
    p3                      = p2 + 0x10;
    *(s32 *) (frame + 0)    = *(s32 *) (frame + 0x48);
    *(s32 *) (p3 + 4)       = *(s32 *) (frame + 0x48);
    *(s32 *) (frame + 4)    = *(s32 *) (frame + 0x4C);
    *(s32 *) (p3 + 8)       = *(s32 *) (frame + 0x4C);
    func_020269b4(frame + 0x50);
    *(s32 *) (frame + 0x60) = *(s32 *) (arg0 + 0x28);
    func_020117e8(*(void **) (arg0 + 4), 8, frame + 0x50, arg0);
    func_0201d124(frame + 8);
    *(u16 *) (frame + 0x38) = 0xF9;
    *(u8 *) (frame + 0x3D)  = 0;
    *(s32 *) (frame + 0x24) = *(s32 *) (arg0 + 0x28);
    func_020117e8(*(void **) (arg0 + 4), 3, frame + 8, arg0);
    func_02018acc(frame + 8);
    func_02018acc(frame + 0x50);
}
