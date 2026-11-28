/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 data_0213d658;
extern u32 *data_0213d65c;
extern u32 *data_0213d660;
extern u32 data_0213d66c;
void func_0204cbf0(u32 seed) {
    u32 x = seed | 1, *s = data_0213d660;
    int j;
    data_0213d66c = seed;
    for (data_0213d658 = 0, *s++ = x, j = 0x270; --j; *s++ = (x *= 69069))
        ;
    data_0213d658 = 0x26f;
    data_0213d65c = data_0213d660 + 1;
}
