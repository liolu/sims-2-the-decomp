/* compiler: 1.2/sp2p3 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
typedef s32 M2C_UNK;
M2C_UNK func_02007c64();
s32 func_0200864c();
void func_020050d4(void *arg0) {
    s32 temp_lr;
    unsigned int new_var;
    u16 *temp_ip;
    u16 temp_r3;
    u8 var_r5;
    *((s32 *) (((s8 *) arg0) + 0x2DC)) = -1;
    if (func_0200864c(arg0, arg0 + 0x188, 1) != 0) {
        if ((*((s32 *) (((s8 *) arg0) + 0x2DC))) == (-1)) {
            return;
        }
        new_var = 0x14;
        var_r5  = 0;
        do {
            temp_lr = (var_r5 * new_var) + ((s32) arg0);
            temp_ip = *((u16 **) (((s8 *) temp_lr) + 0x188));
            if (temp_ip != ((void *) 0)) {
                temp_r3 = *(*((u16 **) (((s8 *) (((*((s32 *) (((s8 *) arg0) + 0x2DC))) * new_var) + ((s32) arg0))) + 0x188)));
                if ((((u32) temp_r3) <= 7U) && (temp_r3 == (*temp_ip))) {
                    *((s8 *) (((s8 *) temp_lr) + 0x198)) = 1;
                }
            }
            var_r5 += 1;
        } while (((u32) var_r5) < 0xAU);
        func_02007c64(arg0, arg0 + 0x188, (u8) (*((s32 *) (((s8 *) arg0) + 0x2DC))));
        return;
    }
    *((s8 *) (((s8 *) arg0) + 0x2F0)) = 2;
}
