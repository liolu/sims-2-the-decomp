#include "m2c.h"
typedef struct {
    s32 v;
} Fx;
s32 func_020670f8(s32 *arg0, Fx v) {
    return *arg0 < v.v;
}
