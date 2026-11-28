/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_020468a0(s32 a, s32 b, s32 c);
void *func_02046894(s32 a, s32 b, s32 c);
void func_02046398(void *a, s32 b, s32 c);
void func_020bb824(s32 a, s32 b, void *c, s32 d, s32 e, s32 f);

extern u8 data_021249e4;
extern u8 *data_0213e20c;
extern void *data_0213e210;

typedef enum {
    ZZ = 0
} EZ;
typedef enum {
    C40 = 0x40,
    C64 = 0x64,
    C80 = 0x80
} EC;

void func_020a293c(s32 arg0) {
    volatile s32 fr[16];
    EZ z;
    EC a, b, c;

    data_0213e20c = (u8 *) func_020468a0(0x54, 3, 4);
    func_02046398(data_0213e20c, 0, 0x54);
    data_0213e210 = func_02046894(0x1000, 3, 4);
    func_02046398(data_0213e210, 0, 0x1000);
    *(s32 *) data_0213e20c = arg0;
    func_020bb824(*(s32 *) data_0213e20c + 0x1A4, 1, &data_021249e4, 8, 0, 0);
    z                               = ZZ;
    fr[0]                           = z;
    fr[8]                           = z;
    *(s32 *) (data_0213e20c + 4)    = z;
    fr[1]                           = z;
    fr[9]                           = z;
    *(s32 *) (data_0213e20c + 8)    = z;
    *(s32 *) (data_0213e20c + 0x2C) = C40;
    *(s32 *) (data_0213e20c + 0x30) = C64;
    *(s32 *) (data_0213e20c + 0x34) = C40;
    *(s32 *) (data_0213e20c + 0x38) = C80;
    *(s32 *) (data_0213e20c + 0x3C) = C64;
    *(s32 *) (data_0213e20c + 0x40) = C80;
    fr[2]                           = 0xA000;
    fr[10]                          = 0xA000;
    *(s32 *) (data_0213e20c + 0xC)  = 0xA000;
    fr[3]                           = 0x64000;
    fr[11]                          = 0x64000;
    *(s32 *) (data_0213e20c + 0x10) = 0x64000;
    fr[4]                           = z;
    fr[12]                          = z;
    *(s32 *) (data_0213e20c + 0x14) = z;
    fr[5]                           = z;
    fr[13]                          = z;
    *(s32 *) (data_0213e20c + 0x18) = z;
    data_0213e20c[0x1C]             = 0;
    fr[6]                           = z;
    fr[14]                          = z;
    *(s32 *) (data_0213e20c + 0x20) = z;
    data_0213e20c[0x28]             = 0;
    data_0213e20c[0x29]             = 1;
    fr[7]                           = z;
    fr[15]                          = z;
    *(s32 *) (data_0213e20c + 0x24) = z;
}
