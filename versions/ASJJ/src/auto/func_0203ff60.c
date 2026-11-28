/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk0203fef8_B {
    u8 unk0[0x28];
    u8 *table;
} Unk0203fef8_B;

typedef struct Unk0203fef8 {
    s32 unk0;
    Unk0203fef8_B *b;
} Unk0203fef8;

extern u8 *data_0213e0a8;
s32 func_020525ec(void *, s32);
void func_02010c28(s32);

void func_0203ff60(Unk0203fef8 *obj, u8 *params) {
    u8 index = params[0];
    u8 arg   = params[1];
    s32 result;
    if (index == 0xFF) {
        result = *(s32 *) (data_0213e0a8 + 0xF8);
    } else {
        result = func_020525ec(obj->b->table + index * 8, arg);
    }
    if (result == 0) {
        return;
    }
    func_02010c28(result);
}
