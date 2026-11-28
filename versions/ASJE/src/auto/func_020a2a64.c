/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_02046814(s32 a, s32 b, s32 c);
void *func_02046808(s32 a, s32 b, s32 c);
void func_0204630c(void *a, s32 b, s32 c);
void func_020bbc28(s32 a, s32 b, void *c, s32 d, s32 e, s32 f);

extern u8 data_02124d7c;
extern u8 *data_0213e5a4;
extern void *data_0213e5a8;

typedef enum {
    ZZ = 0
} EZ;
typedef enum {
    C40 = 0x40,
    C64 = 0x64,
    C80 = 0x80
} EC;

void func_020a2a64(s32 arg0) {
    volatile s32 fr[16];
    EZ z;
    EC a, b, c;

    data_0213e5a4 = (u8 *) func_02046814(0x54, 3, 4);
    func_0204630c(data_0213e5a4, 0, 0x54);
    data_0213e5a8 = func_02046808(0x1000, 3, 4);
    func_0204630c(data_0213e5a8, 0, 0x1000);
    *(s32 *) data_0213e5a4 = arg0;
    func_020bbc28(*(s32 *) data_0213e5a4 + 0x1A4, 1, &data_02124d7c, 8, 0, 0);
    z                               = ZZ;
    fr[0]                           = z;
    fr[8]                           = z;
    *(s32 *) (data_0213e5a4 + 4)    = z;
    fr[1]                           = z;
    fr[9]                           = z;
    *(s32 *) (data_0213e5a4 + 8)    = z;
    *(s32 *) (data_0213e5a4 + 0x2C) = C40;
    *(s32 *) (data_0213e5a4 + 0x30) = C64;
    *(s32 *) (data_0213e5a4 + 0x34) = C40;
    *(s32 *) (data_0213e5a4 + 0x38) = C80;
    *(s32 *) (data_0213e5a4 + 0x3C) = C64;
    *(s32 *) (data_0213e5a4 + 0x40) = C80;
    fr[2]                           = 0xA000;
    fr[10]                          = 0xA000;
    *(s32 *) (data_0213e5a4 + 0xC)  = 0xA000;
    fr[3]                           = 0x64000;
    fr[11]                          = 0x64000;
    *(s32 *) (data_0213e5a4 + 0x10) = 0x64000;
    fr[4]                           = z;
    fr[12]                          = z;
    *(s32 *) (data_0213e5a4 + 0x14) = z;
    fr[5]                           = z;
    fr[13]                          = z;
    *(s32 *) (data_0213e5a4 + 0x18) = z;
    data_0213e5a4[0x1C]             = 0;
    fr[6]                           = z;
    fr[14]                          = z;
    *(s32 *) (data_0213e5a4 + 0x20) = z;
    data_0213e5a4[0x28]             = 0;
    data_0213e5a4[0x29]             = 1;
    fr[7]                           = z;
    fr[15]                          = z;
    *(s32 *) (data_0213e5a4 + 0x24) = z;
}
