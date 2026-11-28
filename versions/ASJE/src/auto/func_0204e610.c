/* compiler: 1.2/sp2p3 -pragma "opt_propagation off" */
#include "m2c.h"

typedef struct Layout0211e71c {
    u8 unk0[8];
    s32 width;
    s32 recordSize;
    u8 unk10[8];
} Layout0211e71c;

typedef struct Record0204e5ec {
    u8 unk0[0x18];
    s32 page;
} Record0204e5ec;

typedef struct Records0213d8bc {
    Record0204e5ec **records;
    u8 unk4[0x14];
} Records0213d8bc;

typedef struct Base0213d8c8 {
    s32 base;
    u8 unk4[0x14];
} Base0213d8c8;

typedef struct Layout0211e724 {
    s32 value;
    u8 unk4[0x14];
} Layout0211e724;

extern Layout0211e71c data_0211e5e0[];
extern Layout0211e724 data_0211e5ec[];
extern Records0213d8bc data_0213d77c[];
extern Base0213d8c8 data_0213d788[];
void func_0203b5b0(s32, s32, s32, s32, s32);
void func_0203b740(s32, s32, s32);

void func_0204e610(s32 arg0, s32 type, s32 row, s32 col, s32 arg4, s32 async) {
    s32 offset             = 0;
    s32 size               = data_0211e5ec[type].value - 0x14;
    Layout0211e71c *layout = &data_0211e5e0[type];
    s32 base               = data_0213d788[type].base;
    Record0204e5ec *record = data_0213d77c[type].records[layout->width * row + col];
    s32 addr               = offset + (record->page * layout->recordSize + base + 0x14);
    if (async) {
        func_0203b5b0(addr, size, arg4, async, 0);
    } else {
        func_0203b740(addr, size, arg4);
    }
}
