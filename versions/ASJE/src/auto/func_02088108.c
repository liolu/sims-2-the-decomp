/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void *func_0209b65c(void *);
void func_0204630c(void *, s32, s32);
void func_02085eac(void *);
void *func_02046814(s32, s32, s32);
void *func_02083308(void *);
extern u8 *data_0213e440;
extern void *data_0213e42c;
u8 *func_02088108(u8 *o) {
    void *p;
    func_0209b65c(o);
    o[0xec] = 0;
    func_0204630c(o + 0x6c, 0, 0x80);
    o[0xf0]             = 0;
    *(s32 *) (o + 0xf4) = 0x21;
    *(s32 *) (o + 0xf8) = 0;
    *(s32 *) (o + 0xfc) = 0;
    func_02085eac(o + 0x100);
    data_0213e440 = o;
    p             = func_02046814(8, 3, 4);
    if (p != NULL) {
        p = func_02083308(p);
    }
    data_0213e42c = p;
    return o;
}
