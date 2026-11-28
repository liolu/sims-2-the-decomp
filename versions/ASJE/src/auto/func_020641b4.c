/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 *data_02139e64;
extern u8 *data_0213e440;
extern u32 data_027e0004;
s32 func_02048078(void *);
s32 func_020187ec(s32);
s32 func_0204ec2c(void);
s32 func_020641b4(u8 *arg0) {
    u8 *p;
    u8 *q;
    s32 t;

    if (func_02048078(data_02139e64) == 0) {
        p = data_02139e64;
        if (*(s32 *) (p + 8) == 0) {
            q = *(u8 **) (p + 0xDAC);
            if ((q != 0 ? *(s32 *) (q + 4) : 0x32) == 0xC) {
                if (*(s32 *) (p + 0xDF0) == 0x32) {
                    if (*(s32 *) (p + 0xE10) == 0x32) {
                        t = *(s32 *) (data_0213e440 + 0xF8);
                        if (t != 0) {
                            if (func_020187ec(t + 0xE0) == 7) {
                                if (*(u8 *) (arg0 + 0x21D8) == 0 || *(s32 *) (arg0 + 0x21B4) == -1) {
                                    if (func_0204ec2c() == 0) {
                                        if ((data_027e0004 & 0x60) == 0) {
                                            return 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
