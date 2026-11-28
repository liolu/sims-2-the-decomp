/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 b[16];
} B16;
typedef struct {
    u8 a;
    u8 b;
} B2;

M2C_UNK func_0204d29c();
M2C_UNK func_020586a4(void *, s32, s32, s32, s32, s32);
M2C_UNK func_0206462c(s32);
extern u8 *data_02139e64;
extern u8 data_0213d670[];
extern u8 data_0213d678[];
extern u8 data_0213d708[];
extern s32 data_0213e2f4;
extern s32 data_027e0004;
extern s8 data_ov008_0214b0c0;
extern s8 data_ov008_0214b0c4;
extern s32 data_ov008_0214b0cc;

void func_ov008_0214a338(u8 *arg0) {
    volatile s32 tmp[2];
    u8 *p;
    u8 *src;
    s32 cur;

    p = arg0;
    if (arg0 != NULL) {
        p = arg0 + 0x24;
    }
    *(u8 **) (data_02139e64 + 0x28) = p;
    func_020586a4(data_02139e64, 0x97B, 0x97A, 3, 1, 1);
    data_027e0004 |= 0x200000;
    cur                    = *(s32 *) (data_0213d670 + 0xA4);
    data_ov008_0214b0c0    = (cur != *(s32 *) (arg0 + 0x70));
    data_ov008_0214b0c4    = (cur == -1);
    *(u8 *) (arg0 + 0x6C)  = data_0213d708[*(s32 *) (arg0 + 0x70)];
    src                    = data_0213d678 + *(s32 *) (arg0 + 0x70) * 0x30;
    *(s32 *) (arg0 + 0x38) = *(s32 *) src;
    tmp[0]                 = *(s32 *) (src + 4);
    *(s32 *) (arg0 + 0x3C) = *(s32 *) (src + 4);
    tmp[1]                 = *(s32 *) (src + 8);
    *(s32 *) (arg0 + 0x40) = *(s32 *) (src + 8);
    *(u16 *) (arg0 + 0x44) = *(u16 *) (src + 0xC);
    *(u8 *) (arg0 + 0x46)  = *(u8 *) (src + 0xE);
    *(u8 *) (arg0 + 0x47)  = *(u8 *) (src + 0xF);
    *(s32 *) (arg0 + 0x48) = *(s32 *) (src + 0x10);
    *(s32 *) (arg0 + 0x4C) = *(s32 *) (src + 0x14);
    *(s32 *) (arg0 + 0x50) = *(s32 *) (src + 0x18);
    *(B16 *) (arg0 + 0x54) = *(B16 *) (src + 0x1C);
    *(u8 *) (arg0 + 0x64)  = *(u8 *) (src + 0x2C);
    *(B2 *) (arg0 + 0x65)  = *(B2 *) (src + 0x2D);
    *(u8 *) (arg0 + 0x67)  = *(u8 *) (src + 0x2F);
    *(s32 *) (arg0 + 0x68) = *(s32 *) (data_0213d670 + 0xA4);
    func_0204d29c();
    *(s32 *) (data_0213d670 + 0xA4) = *(s32 *) (arg0 + 0x70);
    data_ov008_0214b0cc             = 0;
    func_0206462c(data_0213e2f4);
    data_0213d708[*(s32 *) (arg0 + 0x70)] = 1;
}
