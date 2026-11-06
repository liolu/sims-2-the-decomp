/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 a;
} U16One;

typedef struct {
    u16 a;
    u16 b;
} U16Pair;

typedef struct {
    u8 a;
    u8 b;
    u8 c;
    u8 d;
} U8Four;

extern u16 data_ov003_0215092c;
extern u16 data_ov003_02150924;
extern u16 data_ov003_02150928;
extern u16 data_ov003_02150920;
void func_0203d208(s32, U16One);
void func_0203e23c(s32, s32, s32, s32, s32, s32, U16Pair, U8Four, s32);
void func_0205077c(s32, s32, s32, s32, s32);
void func_0203d078(s32);
void func_02051b80(U16One);
void func_0203cc08(s32, s32);

void func_ov003_0214a7c4(u8 *arg0) {
    u16 a14;
    u16 a16;
    u16 a18;
    u16 a1a;
    U16Pair p1c;
    U8Four f20;
    U16Pair p24;
    U8Four f28;
    U16Pair p2c;
    U8Four f30;
    u8 *pb;
    u16 *ph;
    s32 id1;
    s32 id2;
    s32 st;
    s32 flag;

    a14 = data_ov003_0215092c;
    a16 = data_ov003_02150924;
    a18 = data_ov003_02150928;
    a1a = data_ov003_02150920;
    id1 = 0x428;
    id2 = 0x427;
    st  = *(u16 *) (arg0 + 0x74);
    switch (st) {
        case 1:
            id1 = 0x439;
            id2 = 0x438;
            break;
        case 2:
            id1 = 0x444;
            id2 = 0x443;
            break;
        case 3:
            id1 = 0x446;
            id2 = 0x445;
            break;
        case 4:
            id1 = 0x46F;
            id2 = 0x46E;
            break;
        case 5:
            id1 = 0x791;
            id2 = 0x790;
            break;
        case 6:
            id1 = 0x79A;
            id2 = 0x799;
            break;
        case 7:
            id1 = 0xFFFF;
            id2 = 0x486;
            break;
        default:
            break;
    }
    if (arg0[0x80] == 0) {
        func_0203d208(3, *(U16One *) &a14);
        pb    = (u8 *) &f20;
        pb[0] = 0;
        pb[1] = 0;
        pb[2] = 0;
        pb[3] = 0;
        ph    = (u16 *) &p1c;
        ph[0] = 0;
        ph[1] = 0;
        func_0203e23c(3, 0x41A, 1, 0, 0, 0x100, p1c, f20, 0);
        arg0[0x80] = 1;
        func_0205077c(0x20, 0x2E, 0x2E, 0x2E, 0);
    }
    if (id1 != 0xFFFF) {
        func_0203d208(2, *(U16One *) &a16);
        pb    = (u8 *) &f28;
        pb[0] = 0;
        pb[1] = 0;
        pb[2] = 0;
        pb[3] = 0;
        ph    = (u16 *) &p24;
        ph[0] = 0;
        ph[1] = 0;
        func_0203e23c(2, id1, 1, 0, 0, 0x100, p24, f28, 1);
    }
    flag = 1;
    if (*(u16 *) (arg0 + 0x74) == 5) {
        flag = 0;
    } else if (*(u16 *) (arg0 + 0x74) == 6) {
        func_0203d078(3);
    }
    func_0203d208(1, *(U16One *) &a18);
    pb    = (u8 *) &f30;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    ph    = (u16 *) &p2c;
    ph[0] = 0;
    ph[1] = 0;
    func_0203e23c(1, id2, 1, 0, 0, 0x100, p2c, f30, flag);
    func_02051b80(*(U16One *) &a1a);
    func_0203d208(0, *(U16One *) &a1a);
    func_0203cc08(0, 0);
}
