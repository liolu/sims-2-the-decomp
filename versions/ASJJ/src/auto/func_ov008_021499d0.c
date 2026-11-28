/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213d348;
extern s32 data_02139a84;
extern u8 data_ov008_0214ad20;
extern u8 data_ov008_0214ad24;
extern u8 data_ov008_0214ad28;
extern s32 data_ov008_0214ad2c;
extern u8 data_0213d290[];
extern u8 data_0213d298[];
extern u8 data_0213e238[];
void func_0205890c(s32);
void func_0204df68(u8 *, s32, s32, s32, void (*)(void));
s32 func_0204e378(s32, s32, s32, s32, u8 *, void (*)(void));
void func_0204e214(s32, s32, s32, s32, void (*)(void));
void func_ov008_021499d0(void);

void func_ov008_021499d0(void) {
    u8 *p;
    u8 *p3;
    s32 idx;
    s32 idx2;
    u8 *p2;

    if (data_0213d348[4] == 0) {
        data_ov008_0214ad28 = 1;
        func_0205890c(data_02139a84);
        return;
    }
    if (data_ov008_0214ad20 != 0) {
        data_ov008_0214ad2c = data_ov008_0214ad2c + 1;
        if (data_ov008_0214ad2c < 4) {
            func_0204df68(data_0213d348, data_ov008_0214ad2c, *(s32 *) (data_0213d290 + 0x9C), *(s32 *) (data_0213d290 + 0xA4),
                          func_ov008_021499d0);
            return;
        }
        {
            u8 *q = &data_ov008_0214ad24;
            if (*q != 0) {
                data_ov008_0214ad20 = 0;
                *q                  = 0;
                data_ov008_0214ad2c = 0;
                func_ov008_021499d0();
                return;
            }
        }
        *(s32 *) (data_0213d290 + 0x9C) = *(s32 *) (data_0213d290 + 0xA4);
        *(s32 *) (data_0213d290 + 0x00) = (s32) (data_0213d298 + *(s32 *) (data_0213d290 + 0x9C) * 0x30);
        func_0205890c(data_02139a84);
        return;
    }
    idx = data_ov008_0214ad2c;
    if (idx < 6) {
        p3 = data_0213e238 + idx * 0x302;
        do {
            if (p3[0x300] & 2) {
                p3 = data_0213e238 + idx * 0x302;
                p3[0x300] &= ~2;
                idx2 = data_ov008_0214ad2c;
                p2   = data_0213e238 + idx2 * 0x302;
                if (p2[0x300] & 1) {
                    func_0204e378((s32) * (u8 *volatile *) &data_0213d348, 1, *(s32 *) (data_0213d290 + 0xA4), idx2, p2,
                                  func_ov008_021499d0);
                } else {
                    func_0204e214((s32) * (u8 *volatile *) &data_0213d348, 1, *(s32 *) (data_0213d290 + 0xA4), idx2,
                                  func_ov008_021499d0);
                }
                data_ov008_0214ad2c = data_ov008_0214ad2c + 1;
                return;
            }
            p3                  = p3 + 0x302;
            idx                 = data_ov008_0214ad2c + 1;
            data_ov008_0214ad2c = idx;
        } while (idx < 6);
    }
    *(s32 *) (data_0213d290 + 0x9C) = *(s32 *) (data_0213d290 + 0xA4);
    *(s32 *) (data_0213d290 + 0x00) = (s32) (data_0213d298 + *(s32 *) (data_0213d290 + 0x9C) * 0x30);
    func_0205890c(data_02139a84);
}
