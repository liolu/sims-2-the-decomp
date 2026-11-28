/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020c8c24(s32, s32, s32);

extern u8 data_0214005c;
extern u8 data_02135ed8;
extern u8 data_02135218;
extern u8 data_02135a6c;
extern u8 data_02135104;
extern u8 data_02135ec4;
extern u8 data_0214006c;
extern u8 data_02135a44;
extern u8 data_02135b2c;
extern u8 data_02135b34;
extern u8 data_02140050;

typedef enum {
    ONE = 1
} E1;

void func_020c8740(u8 *arg0) {
    s32 r1;
    s32 r2;
    E1 one;

    func_020c8c24((s32) &data_02135ed8, (s32) &data_02135218, *(s32 *) &data_0214005c);
    r1 = *(u16 *) (arg0 + 2);
    if (r1 != 0) {
        if (r1 >= 0 && (u32) r1 < 0x17) {
            r2 = ((s32 *) &data_02135a6c)[r1];
        } else {
            r2 = (s32) &data_02135104;
        }
        func_020c8c24((s32) &data_02135ec4, (s32) ((u8 *) &data_02135218 + 0), r2);
        r1 = *(u16 *) (arg0 + 2);
        if (*(s32 *) &data_0214005c != 9) {
            *(s32 *) &data_0214006c = r1;
        }
        return;
    }
    func_020c8c24((s32) &data_02135b2c, ((s32 *) &data_02135a44)[*(s32 *) &data_0214005c], *(s32 *) &data_0214005c);
    one                     = ONE;
    *(s32 *) &data_0214005c = one;
    func_020c8c24((s32) &data_02135b34, ((s32 *) &data_02135a44)[one], (s32) &data_0214005c);
    *(s32 *) &data_02140050 = 0x32;
}
