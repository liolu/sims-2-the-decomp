/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_0201d10c(void *);
extern void func_0201d554(void *);
extern void func_0201d82c(void *);
extern void func_02019674(void *);
extern void func_0201a48c(void *);
extern void func_02018ac4(void *);
extern void func_020117e8();
extern s16 func_0202201c(void *, s32);

void func_02022b24(void *arg0) {
    u8 L0[0x3C];
    u8 L1[0x24];
    u8 L2[0x18];
    u8 L3[0x18];
    u8 L4[0x30];

    func_0201d10c(L0);
    func_0201d554(L1);
    func_0201d82c(L2);
    func_02019674(L3);
    func_0201a48c(L4);
    func_020117e8(*(void **) ((u8 *) arg0 + 4), 0x1E, L3, 0);
    func_020117e8(*(void **) ((u8 *) arg0 + 4), 0x22, L1, 0);
    *(u16 *) (L0 + 0x30) = 0x82;
    *(s16 *) (L0 + 0x30) = func_0202201c(arg0, 2);
    func_020117e8(*(void **) ((u8 *) arg0 + 4), 3, L0, 0);
    *(u16 *) (L2 + 0x12) = 0x82;
    func_020117e8(*(void **) ((u8 *) arg0 + 4), 0x23, L2, 0);
    *(u16 *) (L2 + 0x12) = 0xC9;
    *(u8 *) (L2 + 0x14)  = 1;
    func_020117e8(*(void **) ((u8 *) arg0 + 4), 0x23, L2, 0);
    *(s32 *) (L0 + 0x10) = -1;
    *(u16 *) (L0 + 0x30) = 0x81;
    func_020117e8(*(void **) ((u8 *) arg0 + 4), 3, L0, 0);
    *(u16 *) (L2 + 0x12) = 0xC8;
    func_020117e8(*(void **) ((u8 *) arg0 + 4), 0x23, L2, 0);
    *(u16 *) (L1 + 0x10) = 0x116;
    *(u16 *) (L1 + 0x1C) = 0x81;
    func_020117e8(*(void **) ((u8 *) arg0 + 4), 0x22, L1, 0);
    *(s32 *) (L0 + 0x10) = -1;
    *(u16 *) (L0 + 0x30) = 0x7A;
    func_020117e8(*(void **) ((u8 *) arg0 + 4), 3, L0, 0);
    *(s32 *) (L0 + 0x10) = (s32) func_0202201c(arg0, 3);
    *(u16 *) (L0 + 0x30) = 0x79;
    func_020117e8(*(void **) ((u8 *) arg0 + 4), 3, L0, 0);
    func_02018ac4(L4);
    func_02018ac4(L3);
    func_02018ac4(L2);
    func_02018ac4(L1);
    func_02018ac4(L0);
}
