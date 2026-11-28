/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020c87d4(s32, s32, s32);

extern u8 data_0213fcc4;
extern u8 data_02135b04;
extern u8 data_02134e44;
extern u8 data_02135698;
extern u8 data_02134d30;
extern u8 data_02135af0;
extern u8 data_0213fcd4;
extern u8 data_02135670;
extern u8 data_02135758;
extern u8 data_02135760;
extern u8 data_0213fcb8;

typedef enum {
    ONE = 1
} E1;

void func_020c82f0(u8 *arg0) {
    s32 r1;
    s32 r2;
    E1 one;

    func_020c87d4((s32) &data_02135b04, (s32) &data_02134e44, *(s32 *) &data_0213fcc4);
    r1 = *(u16 *) (arg0 + 2);
    if (r1 != 0) {
        if (r1 >= 0 && (u32) r1 < 0x17) {
            r2 = ((s32 *) &data_02135698)[r1];
        } else {
            r2 = (s32) &data_02134d30;
        }
        func_020c87d4((s32) &data_02135af0, (s32) ((u8 *) &data_02134e44 + 0), r2);
        r1 = *(u16 *) (arg0 + 2);
        if (*(s32 *) &data_0213fcc4 != 9) {
            *(s32 *) &data_0213fcd4 = r1;
        }
        return;
    }
    func_020c87d4((s32) &data_02135758, ((s32 *) &data_02135670)[*(s32 *) &data_0213fcc4], *(s32 *) &data_0213fcc4);
    one                     = ONE;
    *(s32 *) &data_0213fcc4 = one;
    func_020c87d4((s32) &data_02135760, ((s32 *) &data_02135670)[one], (s32) &data_0213fcc4);
    *(s32 *) &data_0213fcb8 = 0x32;
}
