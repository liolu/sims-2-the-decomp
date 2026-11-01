/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020525f0(s32, u8);
M2C_UNK func_02052800(s32, u8);
void *func_0208488c(s32);
extern void *data_0213e580;

void func_0209b74c(u8 *arg0) {
    u8 temp_r6;
    u8 temp_r5;
    u8 *temp_r0;
    if (arg0[0x1C] == 0) {
        if (arg0[0x1F] == 1) {
            return;
        }
        arg0[0x1F] = 1;
    }
    temp_r5 = arg0[0x1E];
    temp_r6 = arg0[0x1D];
    temp_r0 = func_0208488c(*(s32 *) ((u8 *) data_0213e580 + 0xFC));
    func_020525f0(*(s32 *) (temp_r0 + 4) + 0x24, temp_r6);
    func_02052800(*(s32 *) (temp_r0 + 4) + 0x24, temp_r5);
}
