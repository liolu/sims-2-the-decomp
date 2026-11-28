/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Mode0208b078 {
    s32 unk0;
    s32 state;
} Mode0208b078;

typedef struct Child0208b078 {
    u8 unk0[0x130];
    s32 unk130;
} Child0208b078;

typedef struct Unk0208b078 {
    void *vtable;
    Child0208b078 *child;
} Unk0208b078;

extern u8 data_0213341c[];
extern u8 *data_02139e64;
void func_02067908(void *, Child0208b078 *);
void func_020467cc(void *);

Unk0208b078 *func_0208b000(Unk0208b078 *obj) {
    u8 *game;
    obj->vtable = data_0213341c;
    game        = data_02139e64;
    if (obj->child != NULL) {
        Mode0208b078 *mode = *(Mode0208b078 **) (game + 0xDAC);
        s32 state;
        if (mode != NULL) {
            state = mode->state;
        } else {
            state = 0x32;
        }
        if (state == 12) {
            func_02067908(mode, obj->child);
        }
    }
    if (obj->child != NULL) {
        obj->child->unk130 = 0;
    }
    func_020467cc(obj);
    return obj;
}
