/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020c8cec(s32, s32, s32);

extern u8 data_0214019c;
extern u8 data_02136018;
extern u8 data_02135358;
extern u8 data_02135bac;
extern u8 data_02135244;
extern u8 data_02136004;
extern u8 data_021401ac;
extern u8 data_02135b84;
extern u8 data_02135c6c;
extern u8 data_02135c74;
extern u8 data_02140190;

typedef enum {
    ONE = 1
} E1;

void func_020c8808(u8 *arg0) {
    s32 r1;
    s32 r2;
    E1 one;

    func_020c8cec((s32) &data_02136018, (s32) &data_02135358, *(s32 *) &data_0214019c);
    r1 = *(u16 *) (arg0 + 2);
    if (r1 != 0) {
        if (r1 >= 0 && (u32) r1 < 0x17) {
            r2 = ((s32 *) &data_02135bac)[r1];
        } else {
            r2 = (s32) &data_02135244;
        }
        func_020c8cec((s32) &data_02136004, (s32) ((u8 *) &data_02135358 + 0), r2);
        r1 = *(u16 *) (arg0 + 2);
        if (*(s32 *) &data_0214019c != 9) {
            *(s32 *) &data_021401ac = r1;
        }
        return;
    }
    func_020c8cec((s32) &data_02135c6c, ((s32 *) &data_02135b84)[*(s32 *) &data_0214019c], *(s32 *) &data_0214019c);
    one                     = ONE;
    *(s32 *) &data_0214019c = one;
    func_020c8cec((s32) &data_02135c74, ((s32 *) &data_02135b84)[one], (s32) &data_0214019c);
    *(s32 *) &data_02140190 = 0x32;
}
