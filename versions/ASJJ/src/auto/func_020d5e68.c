/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02142018;
extern u8 data_02142368;
extern s32 data_021282f0;

void func_02046398(void *, s32, s32);
void func_020d8b68(void);
void func_020de284(s32, s32);
void func_020d8314(s32);
void func_020d855c(void);
void func_020d47f4(s32);
void func_020d898c(void);

void func_020d5e68(void) {
    u8 r4;

    func_02046398(&data_02142018, 0, 0xC);
    ((volatile u8 *) &data_02142018)[9] = 0x20;
    func_020d8b68();
    func_020de284(0x20DAA8C, 0x40030);
    r4                                    = ((volatile u8 *) &data_02142018)[9];
    ((volatile u8 *) &data_02142018)[0xB] = ((volatile u8 *) &data_02142018)[0xB] | 0x80;
    func_020d8314(r4);
    if (((volatile u8 *) &data_02142018)[0xB] & 0x80) {
        if (((volatile u8 *) &data_02142018)[0xB] & 0x40) {
            if (!(*(volatile s32 *) (&data_02142368 + 0xC) & 0xC)) {
                func_020d855c();
            }
        }
        ((volatile u8 *) &data_02142018)[0xB] = ((volatile u8 *) &data_02142018)[0xB] & ~0xC0;
    }
    {
        u8 t;
        u8 *p                                 = &data_02142018;
        ((volatile u8 *) &data_02142018)[0xB] = 0;
        t                                     = ((volatile u8 *) &data_02142018)[0xB];
        p[9]                                  = r4;
        p[0xA]                                = 0xFF;
        p[0xB]                                = t | 0x80;
        func_020d47f4(data_021282f0);
    }
    if (((volatile u8 *) &data_02142018)[0xB] & 0x80) {
        if (((volatile u8 *) &data_02142018)[0xB] & 0x40) {
            if (!(*(volatile s32 *) (&data_02142368 + 0xC) & 0xC)) {
                func_020d855c();
            }
        }
        ((volatile u8 *) &data_02142018)[0xB] = ((volatile u8 *) &data_02142018)[0xB] & ~0xC0;
    }
    ((volatile u8 *) &data_02142018)[0] = 1;
    if (((volatile u8 *) &data_02142018)[0] != 1) {
        return;
    }
    ((volatile u8 *) &data_02142018)[0xB] = ((volatile u8 *) &data_02142018)[0xB] | 0x80;
    func_020d898c();
    ((volatile u8 *) &data_02142018)[0xB] = ((volatile u8 *) &data_02142018)[0xB] & ~0xC0;
}
