/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02139fa4;
extern u8 data_0213e434;
extern u8 data_0213e580;

void func_02084cf8(s32);
void func_02001944(s32);
void func_02071e44(s32, s32, s32);
void func_02001914(void);

void func_0207cc64(u8 *arg0, s32 arg1) {
    u8 i = 0;
    do {
        u8 *e = arg0 + i * 0x4C;
        if (e[0xA41] != 0 && *(s32 *) (e + 0xA44) == 7 && arg1 == *(u16 *) (e + 0xA3C) &&
            *(u16 *) (e + 0xA3E) == *(s32 *) (*(u8 **) &data_0213e580 + 0xF4)) {
            if (*(u16 *) (e + 0xA48) != 0) {
                *(u16 *) (e + 0xA48) = (u16) (*(u16 *) (e + 0xA48) - 1);
                if (*(u16 *) (e + 0xA48) == 0) {
                    func_02084cf8(*(s32 *) (*(u8 **) &data_0213e580 + 0xFC));
                    e[0xA41]    = 0;
                    arg0[0xD08] = 1;
                    {
                        s32 r10 = *(s32 *) (*(u8 **) &data_02139fa4 + 0xDA8);
                        s32 a0;
                        func_02001944(0);
                        a0 = r10 + 0x24;
                        if (arg1 == 0x20) {
                            func_02071e44(a0, 0x965, 0x973);
                        } else {
                            func_02071e44(a0, 0x971, 0x973);
                        }
                    }
                    {
                        u8 *g                         = *(u8 **) &data_0213e434;
                        u8 *p                         = g + 0x2F60;
                        *(s32 *) (g + 0x2000 + 0xF60) = *(s32 *) (g + 0x2000 + 0xF60) + 0x1C2;
                        if (*(s32 *) (g + 0x2000 + 0xF60) > 0xF423F) {
                            *(s32 *) p = 0xF423F;
                        } else if (*(s32 *) (g + 0x2000 + 0xF60) < 0) {
                            *(s32 *) p = 0;
                        }
                        *(u8 *) (p + 0xC) = 1;
                        *(s32 *) (p + 4)  = *(s32 *) (p + 4) + 0x1C2;
                        if (*(s32 *) (p + 4) > 0xF423F || *(s32 *) (p + 4) < 0) {
                            *(s32 *) (p + 4) = 0xF423F;
                        }
                    }
                    func_02001914();
                }
            }
        }
        i++;
    } while (i < 10);
}
