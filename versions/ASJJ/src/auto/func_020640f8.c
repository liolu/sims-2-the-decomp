/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 pad[0xc];
    s32 arr[7];
} Obj;

Obj *func_020640f8(Obj *o) {
    s32 *p = o->arr;
    do {
        *p++ = 0x80000000;
    } while (p != o->arr + 7);
    return o;
}
