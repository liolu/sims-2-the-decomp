/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 data_0213d278;
extern u32 *data_0213d27c;
extern u32 *data_0213d280;
extern u32 data_0213d28c;
void func_0204cc74(u32 seed) {
    u32 x = seed | 1, *s = data_0213d280;
    int j;
    data_0213d28c = seed;
    for (data_0213d278 = 0, *s++ = x, j = 0x270; --j; *s++ = (x *= 69069))
        ;
    data_0213d278 = 0x26f;
    data_0213d27c = data_0213d280 + 1;
}
