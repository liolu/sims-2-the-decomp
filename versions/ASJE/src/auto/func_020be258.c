/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk020be320 {
    s32 unk0;
    void *a;
    void *b;
    void *c;
    u8 unk10;
    u8 unk11[3];
    s32 unk14;
} Unk020be320;

extern void (*data_0213892c)(void *);
extern void (*data_02138934)(void *);

s32 func_020be258(Unk020be320 *obj) {
    if (obj->a != NULL) {
        data_0213892c(obj->a);
    }
    if (obj->b != NULL) {
        data_0213892c(obj->b);
    }
    if (obj->c != NULL) {
        data_02138934(obj->c);
    }
    obj->unk14 = 0;
    obj->a     = NULL;
    obj->b     = NULL;
    obj->c     = NULL;
    obj->unk10 = 0;
    return 1;
}
