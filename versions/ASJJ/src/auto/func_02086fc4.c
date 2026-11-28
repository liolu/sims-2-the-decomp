/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef enum {
    ONE = 1
} EO;
typedef enum {
    ZERO = 0
} EZ;

extern s32 data_027e0000;
extern u8 data_027e0014;
void *func_02045630(s32);
s32 func_0204cbc0(s32, s32);

void *func_02086fc4(s32 dummy, void *arg1, s32 arg2, s32 arg3) {
    u8 n;
    s32 ok;
    s32 ip;
    u16 t;
    void *node;
    s32 f;
    u16 type;
    u16 sub;
    s32 start;
    EZ zero;
    EO one;
    void *cur;
    n     = (u8) func_0204cbc0(0, 0x14);
    start = n;
    if (arg1 == NULL) {
        return NULL;
    }
    if (func_02045630((s32) ((u8 *) &data_027e0014 + data_027e0000 * 0x34)) != NULL) {
        one  = ONE;
        zero = ZERO;
        do {
            cur = func_02045630(data_027e0000 * 0x34 + (s32) &data_027e0014);
            if (cur != NULL) {
                do {
                    node = M2C_FIELD(cur, void **, 0);
                    type = M2C_FIELD(node, u16 *, 0xC);
                    sub  = M2C_FIELD(node, u16 *, 0xA);
                    ok   = one;
                    if (type != 2 && type != 13) {
                        ip = zero;
                        if (type == 11) {
                            f = one;
                            t = sub + 0xFF06;
                            if (t <= 5) {
                                if ((one << t) & 0x23) {
                                    f = zero;
                                }
                            }
                            if (f != 0) {
                                ip = one;
                            }
                        }
                        if (ip == 0) {
                            ok = zero;
                        }
                    }
                    if ((ok != 0 || type == 1) &&
                        (type != M2C_FIELD(arg1, u16 *, 0xC) || sub != M2C_FIELD(arg1, u16 *, 0xA)) &&
                        (arg2 == -1 || arg2 == type) && (arg3 == -1 || arg3 == sub)) {
                        if (n != 0) {
                            n -= 1;
                        }
                        if (n == 0) {
                            return node;
                        }
                    }
                    cur = M2C_FIELD(cur, void **, 4);
                } while (cur != NULL);
            }
        } while (n != start);
    }
    return NULL;
}
