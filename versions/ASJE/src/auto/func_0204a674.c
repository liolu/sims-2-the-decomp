/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Part0204a6ec {
    u8 data[0xC0];
} Part0204a6ec;

extern u32 data_0213d5b8;
extern u32 data_0213d5bc;
extern u8 **data_0213d5c8;
void func_020b982c(void *);

void func_0204a674(u8 *obj) {
    u32 i;
    for (i = 0; i < obj[0x1CC]; i++) {
        func_020b982c(&((Part0204a6ec *) (obj + 0x48))[i]);
    }
    for (i = 0; i < data_0213d5b8; i++) {
        if (data_0213d5c8[i] == obj) {
            data_0213d5c8[i] = NULL;
            data_0213d5bc--;
            return;
        }
    }
}
