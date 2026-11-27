/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_0213e434;
extern M2C_UNK data_0213e580;
void func_02074c98(u8 *);
void func_020730dc(u8 *);
void func_02075b54(u8 *);
void func_0200e9d0(void *, u16, s32);
void func_020d59bc(s32);
void func_02088610(void *, void *, s32, s32, s32);

void func_020659cc(u8 *arg0) {
    void *p;
    s32 d;

    func_02074c98(arg0 + 0x2164);
    *(u8 *) (arg0 + 0x21D9) = 0;
    func_020730dc(arg0 + 0x41F8);
    func_02075b54(arg0 + 0x41E4);
    if (*(u16 *) (arg0 + 0x47C0) != 0xFFFF) {
        d = (s32) ((s64) * (s32 *) (arg0 + 0x480C) - *(s32 *) (arg0 + 0x47C4));
        if (d >= 0xE10) {
            p = *(void **) (*(u8 **) &data_0213e580 + 0xF8);
            func_0200e9d0(p, *(u16 *) (arg0 + 0x47BE), 1);
            *(u16 *) (arg0 + 0x47C0) = 0xFFFF;
        }
    }
    if (*(u8 *) (*(u8 **) &data_0213e434 + 0x2000 + 0xF6C) == 0) {
        return;
    }
    func_020d59bc(0x172);
    p = *(void **) (*(u8 **) &data_0213e580 + 0xF8);
    func_02088610((u8 *) p + 0x214, p, 3, 2, 0x24);
    *(u8 *) (*(u8 **) &data_0213e434 + 0x2000 + 0xF6C) = 0;
}
