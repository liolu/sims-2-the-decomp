#include "m2c.h"
typedef struct {
    s32 v;
} Fx;
void func_02067108(s32 *arg0, s32 *arg1, Fx v) {
    *arg0 = *arg1 - v.v;
}
