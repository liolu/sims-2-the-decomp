/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov010_02152714;
extern u8 data_ov010_0215271c;
extern u8 data_ov010_02152724;
extern u8 data_ov010_0215272c;
extern u8 data_ov010_02152798;

void func_02049858(void *);
void func_02049b14(void *, s32);
void func_02016700(void *, void *);
void func_020165b4(void *, u8);

void func_ov010_0214aec4(void *unused, u8 *obj, s32 code) {
    func_02049858(obj);
    func_02049858(*(void **) (obj + 0x74));
    if (code == 0xFF) {
        *(s32 *) (obj + 4) &= ~1;
        *(s32 *) (*(u8 **) (obj + 0x74) + 4) &= ~1;
        return;
    }
    if (code < 0x30) {
        s32 r6 = code / 8;
        s32 r5 = r6 + 1;
        func_02049b14(obj, r5);
        func_02016700(obj, &data_ov010_02152714);
        func_020165b4(obj, (u8) (code % 8));
        func_02049b14(*(void **) (obj + 0x74), r5);
        func_02016700(*(void **) (obj + 0x74), *(void **) (&data_ov010_02152798 + r6 * 8));
        *(s32 *) (*(u8 **) (obj + 0x74) + 4) |= 1;
    } else {
        if (code < 0x32) {
            func_02016700(obj, &data_ov010_0215271c);
        } else if (code < 0x34) {
            func_02016700(obj, &data_ov010_02152724);
        } else {
            func_02016700(obj, &data_ov010_0215272c);
        }
        func_02049b14(obj, ((code - 0x30) / 2) + 9);
        *(s32 *) (*(u8 **) (obj + 0x74) + 4) &= ~1;
    }
    *(s32 *) (obj + 4) |= 1;
    *(s32 *) (obj + 4) &= ~0x10;
}
