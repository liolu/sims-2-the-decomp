/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 l;
    u16 r;
} Node;
extern u8 *data_02139964;
extern u32 *data_02139960;
extern Node *data_02139968;

u32 func_02045070(s32 id, u8 *out, u32 max) {
    u8 *src;
    u32 n;
    u32 bitpos;
    u8 cur;
    u32 node;
    u16 code;
    s32 lead;
    u8 *base;
    u8 c;

    code = 0;
    lead = 0;
    base = data_02139964;
    if (base == NULL) {
        return 1;
    }
    n      = 0;
    bitpos = 0;
    src    = base + data_02139960[id];
    cur    = *src++;
    do {
        node = 0x100;
        do {
            if ((cur >> bitpos) & 1) {
                node = data_02139968[node - 0x100].r;
            } else {
                node = data_02139968[node - 0x100].l;
            }
            bitpos++;
            if (bitpos == 8) {
                bitpos = 0;
                cur    = *src++;
            }
        } while (node >= 0x100);
        c      = node;
        out[n] = c;
        n++;
        if (c >= 0xf0 && !lead) {
            code = c << 8;
            lead = 1;
        } else if (lead) {
            code |= (u8) node;
            lead = 0;
        } else if (!lead) {
            code = 0;
            code |= (u8) node;
        }
        if (out[n - 1] != 0 && n == max) {
            return 2;
        }
    } while (code != 0);
    return 0;
}
