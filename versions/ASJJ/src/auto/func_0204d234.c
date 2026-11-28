/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk0213d7b0 {
    u8 unk0[0xA8];
    u8 *cursor;
    s32 bitPos;
} Unk0213d7b0;

extern Unk0213d7b0 data_0213d290;
void *func_020462e0(void *, void *, u32);

void func_0204d234(void *src, u32 size) {
    if (data_0213d290.bitPos > 0) {
        *data_0213d290.cursor &= 0xFF >> (8 - data_0213d290.bitPos);
        data_0213d290.cursor++;
        data_0213d290.bitPos = 0;
    }
    func_020462e0(data_0213d290.cursor, src, size);
    data_0213d290.cursor += size;
}
