/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02044538(void *);                          /* extern */
void func_020bd84c(void *, s32);                    /* extern */
void func_020bd7a0(void *, s32);                    /* extern */
s32 func_020bc4b8(void *, s32);                     /* extern */

u8 func_020bd960(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_r4;
    u16 temp_r1;
    s32 temp_r0;

    temp_r4 = func_02044538(arg1);
    if (temp_r4 != 0) {
        temp_r1                       = (u16) arg3;
        *(u8 *) ((u8 *) arg0 + 0x20)  = 1;
        *(u16 *) ((u8 *) arg0 + 0x14) = temp_r1;
        func_020bd84c(arg0, temp_r1);
        temp_r1                       = (u16) arg4;
        *(u16 *) ((u8 *) arg0 + 0x16) = temp_r1;
        func_020bd7a0(arg0, temp_r1);
        temp_r0                       = arg3 * arg4;
        *(u8 *) ((u8 *) arg0 + 0x1A)  = (u8) arg5;
        *(u8 *) ((u8 *) arg0 + 0x1B)  = 1;
        *(u8 *) ((u8 *) arg0 + 0x1E)  = 0;
        *(u8 *) ((u8 *) arg0 + 0x1F)  = 0;
        *(s32 *) ((u8 *) arg0 + 0x10) = temp_r0;
        if (*(u8 *) ((u8 *) arg0 + 0x1A) == 3) {
            *(u32 *) ((u8 *) arg0 + 0x10) >>= 1;
        } else if (*(u8 *) ((u8 *) arg0 + 0x1A) == 2) {
            *(u32 *) ((u8 *) arg0 + 0x10) >>= 2;
        }
        *(s32 *) arg0 = temp_r4;
        if (arg2 != 0xFFFF) {
            *(u8 *) ((u8 *) arg0 + 0x20) = (u8) func_020bc4b8((u8 *) arg0 + 4, arg2);
        }
        return *(u8 *) ((u8 *) arg0 + 0x20);
    }
    return 0;
}
