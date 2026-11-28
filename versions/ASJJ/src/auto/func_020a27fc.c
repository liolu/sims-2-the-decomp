/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_0213e20c;
extern M2C_UNK data_0213e210;
extern u8 data_021249fc;
extern u8 data_02124a0c;
void func_02046398(s32, s32, s32);
void func_020a2090(void);
void func_020a2238(void);
void func_020a25d0(void);
void func_020a1e78(s32, s32, void *, s32);
u8 *func_02051fe0(s32, void *);
void func_020a1d40(s32, s32, void *, s32);
void func_020a1f14(void);
void func_020bb91c(void *, s32, s32, s32, s32);

void func_020a27fc(void) {
    volatile s32 tmp[2];
    u8 *s;
    s32 x;
    u8 *p;
    s32 y;
    enum {
        Z0 = 0
    } z;
    s32 c;

    func_02046398(*(s32 *) &data_0213e210, 0, 0x1000);
    func_020a2090();
    func_020a2238();
    func_020a25d0();
    s = *(u8 **) &data_0213e20c;
    if (s[0x28] >= 2) {
        z      = Z0;
        tmp[0] = z;
        tmp[1] = z;
        if (*(s32 *) (s + 0x10) > z) {
            func_020a1e78((*(s32 *) (s + 0xC) >> 12) - (*(s32 *) (s + 0x20) >> 12) & 0xFF, (*(s32 *) (s + 0x10) >> 12) & 0xFF,
                          &data_021249fc, 2);
        }
    }
    s = *(u8 **) &data_0213e20c;
    p = func_02051fe0(*(s32 *) (s + 0xC) >> 12, s + 0x44);
    x = 2;
    if (*p != 0) {
        y = 2;
        do {
            c = *p;
            if (c >= 0x30 && c <= 0x39) {
                func_020a1d40(x, y, &data_02124a0c + (c - 0x30) * 5, 1);
                x = (x + 4) & 0xFF;
            }
            p++;
        } while (*p != 0);
    }
    func_020a1f14();
    s = *(u8 **) &data_0213e20c;
    func_020bb91c(*(u8 **) s + 0x1A4, 1, *(s32 *) &data_0213e210, 0x1000, 0);
}
