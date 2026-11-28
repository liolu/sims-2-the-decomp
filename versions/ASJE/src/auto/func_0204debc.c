/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Layout0211e724 {
    s32 value;
    u8 unk4[0x14];
} Layout0211e724;

typedef struct Record0204df34 {
    u8 unk0[0x10];
    u16 checksum;
} Record0204df34;

typedef struct Records0213d8bc {
    Record0204df34 **records;
    u8 unk4[0x14];
} Records0213d8bc;

extern Layout0211e724 data_0211e5e8[];
extern Layout0211e724 data_0211e5ec[];
extern Records0213d8bc data_0213d77c[];

s32 func_0204debc(s32 arg0, s32 type, s32 row, s32 col, u16 *data) {
    s32 count;
    u16 sum;
    s32 width = data_0211e5e8[type].value;
    col += width * row;
    count = (data_0211e5ec[type].value - 0x14) >> 1;
    sum   = 0;
    while (count--) {
        sum += *data++;
    }
    sum = -sum;
    return sum - data_0213d77c[type].records[col]->checksum == 0;
}
