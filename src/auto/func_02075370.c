/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0200fb30(void *, int, int);
void func_02018af8(int, int, void *, int);
void func_020451cc(int);
void func_02048108(void *, int, int, int, int, int);
extern int data_02139e8c;
extern u8 *data_02139fa4;
extern u8 *data_0213d95c;
extern int data_027e0000;

void func_02075370(u8 *arg0) {
    u8 *s;
    void *t;
    u32 r5;
    u32 r4;

    if (*(int *) (arg0 + 0x24) == 0) {
        func_02048108(data_02139fa4, 0xC, 1, 0, 0, 0);
        t = *(void **) (arg0 + 0x28);
        if (t != 0) {
            func_0200fb30(t, 0, 0);
            return;
        }
    }
    s = data_0213d95c;
    if ((((u32) s[0] << 0x1B) >> 0x1F) == 0) {
        return;
    }
    r5 = *(u16 *) (s + 0x2A);
    r4 = *(u16 *) (s + 0x2C);
    if (r5 >= 0x28 && r5 <= 0x50 && r4 >= 0x3C && r4 <= 0x4B && arg0[0x2C] != 0) {
        func_020451cc(data_02139e8c);
        if (*(int *) (arg0 + 0x28) != 0) {
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
            func_0200fb30(*(void **) (arg0 + 0x28), 0, 0);
            func_02018af8(*(int *) (arg0 + 0x24) + 0x128, 0xB, *(void **) (arg0 + 0x28), 2);
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
        }
        if (*(int *) (data_02139fa4 + 0xE10) == 0x32) {
            func_02048108(data_02139fa4, 0xC, 1, 0, 0, 0);
        }
    }
    if (r5 >= 0x28 && r5 <= 0x50 && r4 >= 0x50 && r4 <= 0x5F) {
        func_020451cc(data_02139e8c);
        if (*(int *) (arg0 + 0x28) != 0) {
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
            func_0200fb30(*(void **) (arg0 + 0x28), 0, 0);
            func_02018af8(*(int *) (arg0 + 0x24) + 0x128, 0xA, *(void **) (arg0 + 0x28), 2);
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
        }
        if (*(int *) (data_02139fa4 + 0xE10) != 0x32) {
            return;
        }
        func_02048108(data_02139fa4, 0xC, 1, 0, 0, 0);
        return;
    }
    if (r5 < 0x28) {
        return;
    }
    if (r5 > 0x50) {
        return;
    }
    if (r4 < 0x64) {
        return;
    }
    if (r4 > 0x73) {
        return;
    }
    func_02048108(data_02139fa4, 0xC, 1, 0, 0, 0);
    t = *(void **) (arg0 + 0x28);
    if (t == 0) {
        return;
    }
    func_0200fb30(t, 0, 0);
}
