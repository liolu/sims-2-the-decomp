/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void *func_0209b534(void *);
void func_02046398(void *, s32, s32);
void func_02085e0c(void *);
void *func_020468a0(s32, s32, s32);
void *func_02083238(void *);
extern u8 *data_0213e0a8;
extern void *data_0213e094;
u8 *func_02088060(u8 *o) {
    void *p;
    func_0209b534(o);
    o[0xec] = 0;
    func_02046398(o + 0x6c, 0, 0x80);
    o[0xf0]             = 0;
    *(s32 *) (o + 0xf4) = 0x21;
    *(s32 *) (o + 0xf8) = 0;
    *(s32 *) (o + 0xfc) = 0;
    func_02085e0c(o + 0x100);
    data_0213e0a8 = o;
    p             = func_020468a0(8, 3, 4);
    if (p != NULL) {
        p = func_02083238(p);
    }
    data_0213e094 = p;
    return o;
}
