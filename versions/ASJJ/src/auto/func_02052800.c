/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 *f;
    u8 *g;
} Ent;
typedef struct {
    Ent *list;
    u16 a;
    u16 cnt;
} Grp;

extern s32 (*data_0211e30c[])(u8 *, s32, s32);

void func_02001944(s32);
void func_02001914(void);

void func_02052800(u8 *arg0, u32 arg1) {
    Grp *e;
    u32 idx;
    u16 k;
    u8 *obj;

    if (*(u16 *) (arg0 + 0x18) == 0) {
        return;
    }
    if (arg0[0x23] == 1) {
        if (arg1 <= 1) {
            return;
        }
    }
    idx = (u16) (arg1 - 1);
    if (arg0[0x23] == 0) {
        arg0[0x23] = 1;
        idx        = 0;
    }
    if (idx >= *(u16 *) (arg0 + 0x18)) {
        return;
    }
    e = (Grp *) (*(u8 **) (arg0 + 4) + idx * 8);
    for (k = 0; k < e->cnt; k = (u16) (k + 1)) {
        if (e->list[k].f == 0) {
            obj = e->list[k].g;
            if (data_0211e30c[obj[6]] != 0) {
                func_02001944(0);
                e->list[k].f = (u8 *) data_0211e30c[obj[6]](obj, (u16) (e->a + 1), (u16) (k + 1));
                func_02001914();
                if (e->list[k].f != 0) {
                    e->list[k].f[8] = (u8) e->a;
                    e->list[k].f[9] = (u8) k;
                }
            }
        }
    }
}
