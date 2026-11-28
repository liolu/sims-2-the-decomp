/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *func_02046814(s32, s32, s32);
extern void *func_02046808(s32, s32, s32);
extern void func_0204630c(void *, s32, s32);
extern void func_020b77c8(void);
extern void func_020bbc28(s32, s32, void *, s32, s32, s32);

typedef struct {
    u8 a, b, c, d, on;
} E;
typedef struct {
    u8 b0;
    u8 pad1[3];
    s32 f4;
    s8 b8;
    u8 b9;
    u8 ba;
    u8 bb;
    u8 bc;
    u8 bd;
    u8 be;
    E e[4];
    s32 f24;
    s32 f28;
    s8 b2c;
    u8 b2d;
    u8 pad2e[0x8c - 0x2e];
    s8 b8c;
    u8 pad8d[3];
} G;
extern G *data_0213f834;
extern void *data_0213f830;
extern u8 data_021264c4;
extern u8 *data_0213e2f4;
void func_020b8770(s32 arg0, s8 arg1) {
    u8 i;
    data_0213f834 = func_02046814(0x90, 3, 4);
    func_0204630c(data_0213f834, 0, 0x90);
    data_0213f830 = func_02046808(0x1000, 3, 4);
    func_0204630c(data_0213f830, 0, 0x1000);
    data_0213f834->b8c = arg1;
    data_0213f834->f4  = arg0;
    func_020bbc28(data_0213f834->f4 + 0x1A4, 1, &data_021264c4, 8, 0, 0);
    data_0213f834->f24 = 0;
    data_0213f834->f28 = *(s32 *) (data_0213e2f4 + 0x4684);
    data_0213f834->b0  = 0;
    data_0213f834->b9  = 0;
    data_0213f834->ba  = 0;
    data_0213f834->bb  = 0x10;
    data_0213f834->bc  = 0x10;
    data_0213f834->bd  = 1;
    data_0213f834->be  = 0;
    data_0213f834->b2c = 10;
    data_0213f834->b8  = 0;
    data_0213f834->b2d = 0;
    for (i = 0; i < 4; i++) {
        data_0213f834->e[i].on = 0;
    }
    func_020b77c8();
}
