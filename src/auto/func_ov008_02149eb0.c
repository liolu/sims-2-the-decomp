/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213d868;
extern s32 data_02139fa4;
extern u8 data_ov008_0214b200;
extern u8 data_ov008_0214b204;
extern u8 data_ov008_0214b208;
extern s32 data_ov008_0214b20c;
extern u8 data_0213d7b0[];
extern u8 data_0213d7b8[];
extern u8 data_0213e710[];
void func_020586fc(s32);
void func_0204dfcc(u8 *, s32, s32, s32, void (*)(void));
s32 func_0204e3dc(s32, s32, s32, s32, u8 *, void (*)(void));
void func_0204e278(s32, s32, s32, s32, void (*)(void));
void func_ov008_02149eb0(void);

void func_ov008_02149eb0(void) {
    u8 *p;
    u8 *p3;
    s32 idx;
    s32 idx2;
    u8 *p2;

    if (data_0213d868[4] == 0) {
        data_ov008_0214b208 = 1;
        func_020586fc(data_02139fa4);
        return;
    }
    if (data_ov008_0214b200 != 0) {
        data_ov008_0214b20c = data_ov008_0214b20c + 1;
        if (data_ov008_0214b20c < 4) {
            func_0204dfcc(data_0213d868, data_ov008_0214b20c, *(s32 *) (data_0213d7b0 + 0x9C), *(s32 *) (data_0213d7b0 + 0xA4),
                          func_ov008_02149eb0);
            return;
        }
        {
            u8 *q = &data_ov008_0214b204;
            if (*q != 0) {
                data_ov008_0214b200 = 0;
                *q                  = 0;
                data_ov008_0214b20c = 0;
                func_ov008_02149eb0();
                return;
            }
        }
        *(s32 *) (data_0213d7b0 + 0x9C) = *(s32 *) (data_0213d7b0 + 0xA4);
        *(s32 *) (data_0213d7b0 + 0x00) = (s32) (data_0213d7b8 + *(s32 *) (data_0213d7b0 + 0x9C) * 0x30);
        func_020586fc(data_02139fa4);
        return;
    }
    idx = data_ov008_0214b20c;
    if (idx < 6) {
        p3 = data_0213e710 + idx * 0x302;
        do {
            if (p3[0x300] & 2) {
                p3 = data_0213e710 + idx * 0x302;
                p3[0x300] &= ~2;
                idx2 = data_ov008_0214b20c;
                p2   = data_0213e710 + idx2 * 0x302;
                if (p2[0x300] & 1) {
                    func_0204e3dc((s32) * (u8 *volatile *) &data_0213d868, 1, *(s32 *) (data_0213d7b0 + 0xA4), idx2, p2,
                                  func_ov008_02149eb0);
                } else {
                    func_0204e278((s32) * (u8 *volatile *) &data_0213d868, 1, *(s32 *) (data_0213d7b0 + 0xA4), idx2,
                                  func_ov008_02149eb0);
                }
                data_ov008_0214b20c = data_ov008_0214b20c + 1;
                return;
            }
            p3                  = p3 + 0x302;
            idx                 = data_ov008_0214b20c + 1;
            data_ov008_0214b20c = idx;
        } while (idx < 6);
    }
    *(s32 *) (data_0213d7b0 + 0x9C) = *(s32 *) (data_0213d7b0 + 0xA4);
    *(s32 *) (data_0213d7b0 + 0x00) = (s32) (data_0213d7b8 + *(s32 *) (data_0213d7b0 + 0x9C) * 0x30);
    func_020586fc(data_02139fa4);
}
