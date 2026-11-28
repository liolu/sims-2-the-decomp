/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_0213e5a4;
extern M2C_UNK data_0213e5a8;
extern u8 data_02124d94;
extern u8 data_02124da4;
void func_0204630c(s32, s32, s32);
void func_020a21b8(void);
void func_020a2360(void);
void func_020a26f8(void);
void func_020a1fa0(s32, s32, void *, s32);
u8 *func_02051d18(s32, void *);
void func_020a1e68(s32, s32, void *, s32);
void func_020a203c(void);
void func_020bbd20(void *, s32, s32, s32, s32);

void func_020a2924(void) {
    volatile s32 tmp[2];
    u8 *s;
    s32 x;
    u8 *p;
    s32 y;
    enum {
        Z0 = 0
    } z;
    s32 c;

    func_0204630c(*(s32 *) &data_0213e5a8, 0, 0x1000);
    func_020a21b8();
    func_020a2360();
    func_020a26f8();
    s = *(u8 **) &data_0213e5a4;
    if (s[0x28] >= 2) {
        z      = Z0;
        tmp[0] = z;
        tmp[1] = z;
        if (*(s32 *) (s + 0x10) > z) {
            func_020a1fa0((*(s32 *) (s + 0xC) >> 12) - (*(s32 *) (s + 0x20) >> 12) & 0xFF, (*(s32 *) (s + 0x10) >> 12) & 0xFF,
                          &data_02124d94, 2);
        }
    }
    s = *(u8 **) &data_0213e5a4;
    p = func_02051d18(*(s32 *) (s + 0xC) >> 12, s + 0x44);
    x = 2;
    if (*p != 0) {
        y = 2;
        do {
            c = *p;
            if (c >= 0x30 && c <= 0x39) {
                func_020a1e68(x, y, &data_02124da4 + (c - 0x30) * 5, 1);
                x = (x + 4) & 0xFF;
            }
            p++;
        } while (*p != 0);
    }
    func_020a203c();
    s = *(u8 **) &data_0213e5a4;
    func_020bbd20(*(u8 **) s + 0x1A4, 1, *(s32 *) &data_0213e5a8, 0x1000, 0);
}
