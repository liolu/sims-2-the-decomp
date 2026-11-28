/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov010_02152ab4;
extern u8 data_ov010_02152abc;
extern u8 data_ov010_02152ac4;
extern u8 data_ov010_02152acc;
extern u8 data_ov010_02152b38;

void func_020497cc(void *);
void func_02049a88(void *, s32);
void func_02016708(void *, void *);
void func_020165bc(void *, u8);

void func_ov010_0214b264(void *unused, u8 *obj, s32 code) {
    func_020497cc(obj);
    func_020497cc(*(void **) (obj + 0x74));
    if (code == 0xFF) {
        *(s32 *) (obj + 4) &= ~1;
        *(s32 *) (*(u8 **) (obj + 0x74) + 4) &= ~1;
        return;
    }
    if (code < 0x30) {
        s32 r6 = code / 8;
        s32 r5 = r6 + 1;
        func_02049a88(obj, r5);
        func_02016708(obj, &data_ov010_02152ab4);
        func_020165bc(obj, (u8) (code % 8));
        func_02049a88(*(void **) (obj + 0x74), r5);
        func_02016708(*(void **) (obj + 0x74), *(void **) (&data_ov010_02152b38 + r6 * 8));
        *(s32 *) (*(u8 **) (obj + 0x74) + 4) |= 1;
    } else {
        if (code < 0x32) {
            func_02016708(obj, &data_ov010_02152abc);
        } else if (code < 0x34) {
            func_02016708(obj, &data_ov010_02152ac4);
        } else {
            func_02016708(obj, &data_ov010_02152acc);
        }
        func_02049a88(obj, ((code - 0x30) / 2) + 9);
        *(s32 *) (*(u8 **) (obj + 0x74) + 4) &= ~1;
    }
    *(s32 *) (obj + 4) |= 1;
    *(s32 *) (obj + 4) &= ~0x10;
}
