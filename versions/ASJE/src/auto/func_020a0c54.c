/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 pad[0x24];
    s32 x24;
    s32 x28;
} S;
void func_02044480(s32);
void func_020467a4(void *);
void func_020467cc(S *);
void func_020d54c8(s32);
extern u8 *data_0213e2f4;
extern S *data_0213e598;
extern void *data_0213e59c;
extern void *data_0213e5a0;

void func_020a0c54(void) {
    *(s32 *) (data_0213e2f4 + 0x469C) = data_0213e598->x24;
    if (data_0213e598->x28 != -1) {
        func_020d54c8(data_0213e598->x28);
        data_0213e598->x28 = -1;
    }
    func_020467cc(data_0213e598);
    data_0213e598 = NULL;
    func_020467a4(data_0213e59c);
    data_0213e59c = 0;
    func_020467a4(data_0213e5a0);
    data_0213e5a0 = 0;
    func_02044480(0x9B8);
}
