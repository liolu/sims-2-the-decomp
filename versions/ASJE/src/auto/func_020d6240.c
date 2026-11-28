/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_021423b8;
extern u8 data_02142708;
extern s32 data_02128688;

void func_0204630c(void *, s32, s32);
void func_020d8f40(void);
void func_020de65c(s32, s32);
void func_020d86ec(s32);
void func_020d8934(void);
void func_020d4bcc(s32);
void func_020d8d64(void);

void func_020d6240(void) {
    u8 r4;

    func_0204630c(&data_021423b8, 0, 0xC);
    ((volatile u8 *) &data_021423b8)[9] = 0x20;
    func_020d8f40();
    func_020de65c(0x20DAE64, 0x40030);
    r4                                    = ((volatile u8 *) &data_021423b8)[9];
    ((volatile u8 *) &data_021423b8)[0xB] = ((volatile u8 *) &data_021423b8)[0xB] | 0x80;
    func_020d86ec(r4);
    if (((volatile u8 *) &data_021423b8)[0xB] & 0x80) {
        if (((volatile u8 *) &data_021423b8)[0xB] & 0x40) {
            if (!(*(volatile s32 *) (&data_02142708 + 0xC) & 0xC)) {
                func_020d8934();
            }
        }
        ((volatile u8 *) &data_021423b8)[0xB] = ((volatile u8 *) &data_021423b8)[0xB] & ~0xC0;
    }
    {
        u8 t;
        u8 *p                                 = &data_021423b8;
        ((volatile u8 *) &data_021423b8)[0xB] = 0;
        t                                     = ((volatile u8 *) &data_021423b8)[0xB];
        p[9]                                  = r4;
        p[0xA]                                = 0xFF;
        p[0xB]                                = t | 0x80;
        func_020d4bcc(data_02128688);
    }
    if (((volatile u8 *) &data_021423b8)[0xB] & 0x80) {
        if (((volatile u8 *) &data_021423b8)[0xB] & 0x40) {
            if (!(*(volatile s32 *) (&data_02142708 + 0xC) & 0xC)) {
                func_020d8934();
            }
        }
        ((volatile u8 *) &data_021423b8)[0xB] = ((volatile u8 *) &data_021423b8)[0xB] & ~0xC0;
    }
    ((volatile u8 *) &data_021423b8)[0] = 1;
    if (((volatile u8 *) &data_021423b8)[0] != 1) {
        return;
    }
    ((volatile u8 *) &data_021423b8)[0xB] = ((volatile u8 *) &data_021423b8)[0xB] | 0x80;
    func_020d8d64();
    ((volatile u8 *) &data_021423b8)[0xB] = ((volatile u8 *) &data_021423b8)[0xB] & ~0xC0;
}
