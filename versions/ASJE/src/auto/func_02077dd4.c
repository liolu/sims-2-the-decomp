/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 key;
    u8 type;
    u8 pad[3];
} E;
typedef struct {
    u8 pad[0x9E4];
    E e[5];
} O;
extern u8 *data_0213e2f4;
u8 func_02077dd4(O *o, s32 id) {
    u8 r = 0x3F;
    u8 i;
    if (id == 0x14) {
        u8 s = data_0213e2f4[0x2F78];
        if (s == 1) {
            return 6;
        }
        if (s == 2) {
            return 4;
        }
        if (s == 3) {
            return 14;
        }
    }
    for (i = 0; i < 5; i++) {
        if (o->e[i].type != 0x3F && id == o->e[i].key) {
            r = o->e[i].type;
            break;
        }
    }
    return r;
}
