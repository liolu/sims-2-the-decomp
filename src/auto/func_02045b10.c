/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_02045b10(s32 dummy, void *arg1, u32 arg2) {
    void *r = NULL;
    void *q;

    switch (arg2) {
        case 0:
        case 1:
            if (arg1 != NULL) {
                r = arg1;
                q = (arg2 == 0) ? M2C_FIELD(r, void **, 8) : M2C_FIELD(r, void **, 4);
                while (q != NULL) {
                    r = q;
                    q = (arg2 == 0) ? M2C_FIELD(r, void **, 8) : M2C_FIELD(r, void **, 4);
                }
            }
            break;
        case 2:
        case 3:
            if (arg1 != NULL) {
                r = arg1;
                q = (arg2 == 2) ? M2C_FIELD(r, void **, 0x10) : M2C_FIELD(r, void **, 0xC);
                while (q != NULL) {
                    r = q;
                    q = (arg2 == 2) ? M2C_FIELD(r, void **, 0x10) : M2C_FIELD(r, void **, 0xC);
                }
            }
            break;
    }
    return r;
}
