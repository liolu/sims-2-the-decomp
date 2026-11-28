#include "m2c.h"

typedef struct Unk02045010 {
    u8 unk0[0x10];
    u8 unk10;
    u8 unk11;
    u8 unk12;
    u8 unk13;
    s32 unk14;
} Unk02045010;

static inline u16 ReadU16(u8 **cursor) {
    u16 *p    = (u16 *) *cursor;
    u16 value = *p++;
    *cursor   = (u8 *) p;
    return value;
}

static inline s32 ReadS32(u8 **cursor) {
    s32 *p    = (s32 *) *cursor;
    s32 value = *p++;
    *cursor   = (u8 *) p;
    return value;
}

s32 func_02044f98(Unk02045010 *obj, u8 **cursor) {
    obj->unk10 = ReadU16(cursor);
    obj->unk11 = ReadU16(cursor);
    obj->unk12 = ReadS32(cursor);
    obj->unk14 = ReadS32(cursor) >> 12;
    return 1;
}
