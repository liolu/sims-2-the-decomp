/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_0204688c(s32, s32, s32);
void *func_020170c4(void *, s32);
void func_02049b00(void *, s32);
void func_02049c08(s32, s32);
void func_ov003_0214c4b8(u8 *);

void func_ov003_0214c6f8(u8 *arg0) {
    volatile s32 tmp[12];
    s32 cnt;
    s32 i;
    s32 t;
    u8 *o;
    void *obj;

    cnt = 3;
    i   = 0;
    do {
        obj = func_0204688c(0x74, 0, 4);
        if (obj != NULL) {
            obj = func_020170c4(obj, 0);
        }
        ((u8 **) arg0)[4 + i] = obj;
        if ((i & 1) != 0) {
            *(s32 *) (((u8 **) arg0)[4 + i] + 0x14) &= ~0xC00;
            func_02049b00(((u8 **) arg0)[4 + i], cnt);
            cnt++;
            *(s32 *) (((u8 **) arg0)[4 + i] + 4) &= ~1;
        } else {
            o                   = ((u8 **) arg0)[4 + i];
            *(s32 *) (o + 0x14) = (*(s32 *) (o + 0x14) & ~0xC00) | 0x400;
            func_02049b00(((u8 **) arg0)[4 + i], 2);
        }
        if (i < 4) {
            tmp[0]                                  = 0x3A000;
            tmp[6]                                  = 0x3A000;
            *(s32 *) (((u8 **) arg0)[4 + i] + 0x54) = 0x3A000;
            if (i < 2) {
                tmp[1]                                  = 0x5A000;
                tmp[7]                                  = 0x5A000;
                *(s32 *) (((u8 **) arg0)[4 + i] + 0x50) = 0x5A000;
            } else {
                tmp[2]                                  = 0x96000;
                tmp[8]                                  = 0x96000;
                *(s32 *) (((u8 **) arg0)[4 + i] + 0x50) = 0x96000;
            }
        } else {
            tmp[3]                                  = 0x7A000;
            tmp[9]                                  = 0x7A000;
            *(s32 *) (((u8 **) arg0)[4 + i] + 0x54) = 0x7A000;
            if (i < 6) {
                tmp[4]                                  = 0x5A000;
                tmp[10]                                 = 0x5A000;
                *(s32 *) (((u8 **) arg0)[4 + i] + 0x50) = 0x5A000;
            } else {
                tmp[5]                                  = 0x96000;
                tmp[11]                                 = 0x96000;
                *(s32 *) (((u8 **) arg0)[4 + i] + 0x50) = 0x96000;
            }
        }
        i++;
    } while (i < 8);
    func_02049c08(2, *(s32 *) (arg0 + 0x34));
    func_ov003_0214c4b8(arg0);
}
