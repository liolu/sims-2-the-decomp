#include "m2c.h"
extern s32 data_0213e418;
void func_02071484(s32 arg0) {
    *(s16 *) 0x04000010 = *(s16 *) (data_0213e418 + (arg0 * 2));
}
