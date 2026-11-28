/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Part0204a6ec {
    u8 data[0xC0];
} Part0204a6ec;

extern u32 data_0213d1d8;
extern u32 data_0213d1dc;
extern u8 **data_0213d1e8;
void func_020b9428(void *);

void func_0204a700(u8 *obj) {
    u32 i;
    for (i = 0; i < obj[0x1CC]; i++) {
        func_020b9428(&((Part0204a6ec *) (obj + 0x48))[i]);
    }
    for (i = 0; i < data_0213d1d8; i++) {
        if (data_0213d1e8[i] == obj) {
            data_0213d1e8[i] = NULL;
            data_0213d1dc--;
            return;
        }
    }
}
