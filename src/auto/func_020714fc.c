#include "m2c.h"
extern s32 data_0213e558;
void func_020714fc(s32 arg0) {
    *(s16 *) 0x04000010 = *(s16 *) (data_0213e558 + (arg0 * 2));
}
