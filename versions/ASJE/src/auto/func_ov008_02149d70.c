/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213d728;
extern s32 data_02139e64;
extern u8 data_ov008_0214b0c0;
extern u8 data_ov008_0214b0c4;
extern u8 data_ov008_0214b0c8;
extern s32 data_ov008_0214b0cc;
extern u8 data_0213d670[];
extern u8 data_0213d678[];
extern u8 data_0213e5d0[];
void func_02058684(s32);
void func_0204df54(u8 *, s32, s32, s32, void (*)(void));
s32 func_0204e364(s32, s32, s32, s32, u8 *, void (*)(void));
void func_0204e200(s32, s32, s32, s32, void (*)(void));
void func_ov008_02149d70(void);

void func_ov008_02149d70(void) {
    u8 *p;
    u8 *p3;
    s32 idx;
    s32 idx2;
    u8 *p2;

    if (data_0213d728[4] == 0) {
        data_ov008_0214b0c8 = 1;
        func_02058684(data_02139e64);
        return;
    }
    if (data_ov008_0214b0c0 != 0) {
        data_ov008_0214b0cc = data_ov008_0214b0cc + 1;
        if (data_ov008_0214b0cc < 4) {
            func_0204df54(data_0213d728, data_ov008_0214b0cc, *(s32 *) (data_0213d670 + 0x9C), *(s32 *) (data_0213d670 + 0xA4),
                          func_ov008_02149d70);
            return;
        }
        {
            u8 *q = &data_ov008_0214b0c4;
            if (*q != 0) {
                data_ov008_0214b0c0 = 0;
                *q                  = 0;
                data_ov008_0214b0cc = 0;
                func_ov008_02149d70();
                return;
            }
        }
        *(s32 *) (data_0213d670 + 0x9C) = *(s32 *) (data_0213d670 + 0xA4);
        *(s32 *) (data_0213d670 + 0x00) = (s32) (data_0213d678 + *(s32 *) (data_0213d670 + 0x9C) * 0x30);
        func_02058684(data_02139e64);
        return;
    }
    idx = data_ov008_0214b0cc;
    if (idx < 6) {
        p3 = data_0213e5d0 + idx * 0x302;
        do {
            if (p3[0x300] & 2) {
                p3 = data_0213e5d0 + idx * 0x302;
                p3[0x300] &= ~2;
                idx2 = data_ov008_0214b0cc;
                p2   = data_0213e5d0 + idx2 * 0x302;
                if (p2[0x300] & 1) {
                    func_0204e364((s32) * (u8 *volatile *) &data_0213d728, 1, *(s32 *) (data_0213d670 + 0xA4), idx2, p2,
                                  func_ov008_02149d70);
                } else {
                    func_0204e200((s32) * (u8 *volatile *) &data_0213d728, 1, *(s32 *) (data_0213d670 + 0xA4), idx2,
                                  func_ov008_02149d70);
                }
                data_ov008_0214b0cc = data_ov008_0214b0cc + 1;
                return;
            }
            p3                  = p3 + 0x302;
            idx                 = data_ov008_0214b0cc + 1;
            data_ov008_0214b0cc = idx;
        } while (idx < 6);
    }
    *(s32 *) (data_0213d670 + 0x9C) = *(s32 *) (data_0213d670 + 0xA4);
    *(s32 *) (data_0213d670 + 0x00) = (s32) (data_0213d678 + *(s32 *) (data_0213d670 + 0x9C) * 0x30);
    func_02058684(data_02139e64);
}
