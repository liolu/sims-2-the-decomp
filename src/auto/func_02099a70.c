/* compiler: 1.2/sp2p3 */
typedef unsigned char u8;
typedef short s16;
typedef int s32;

extern u8 data_02133600;
extern u8 data_02134a40;
extern u8 data_02134a6c;

void func_0208bb98(u8 *p, s32 a, s32 b, s32 c);
u8 *func_0208afd0(s32 v);

u8 *func_02099a70(u8 *arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 temp_r1;
    u8 *temp_r0;

    func_0208bb98(arg0, arg1, 1, 1);
    *(void **) (arg0 + 0x4C) = &data_02133600;
    *(s32 *) (arg0 + 0x50)   = arg2;
    *(s32 *) (arg0 + 0x54)   = *(s16 *) (func_0208afd0(arg2) + 0xE);
    *(u8 *) (arg0 + 0x58)    = 0;
    *(u8 *) (arg0 + 0x59)    = 1;
    *(void **) arg0          = &data_02134a40;
    *(void **) (arg0 + 0x4C) = &data_02134a6c;
    if ((arg2 >= 0xD1) && (arg2 <= 0xE8) && ((arg2 - 0xD1) & 1)) {
        var_r2 = *(s32 *) (arg0 + 8);
        if (var_r2 > *(s32 *) (arg0 + 0xC)) {
            do {
                temp_r0 = arg0 + (var_r2 - 1);
                temp_r1 = temp_r0[0x10];
                temp_r0 = arg0 + var_r2;
                var_r2 -= 1;
                temp_r0[0x10] = temp_r1;
            } while (var_r2 > *(s32 *) (arg0 + 0xC));
        }
        *(u8 *) (arg0 + *(s32 *) (arg0 + 0xC) + 0x10) = 0x53;
        *(s32 *) (arg0 + 0xC) += 1;
        *(s32 *) (arg0 + 8) += 1;
    } else {
        var_r2 = *(s32 *) (arg0 + 8);
        if (var_r2 > *(s32 *) (arg0 + 0xC)) {
            do {
                temp_r0 = arg0 + (var_r2 - 1);
                temp_r1 = temp_r0[0x10];
                temp_r0 = arg0 + var_r2;
                var_r2 -= 1;
                temp_r0[0x10] = temp_r1;
            } while (var_r2 > *(s32 *) (arg0 + 0xC));
        }
        *(u8 *) (arg0 + *(s32 *) (arg0 + 0xC) + 0x10) = 0;
        *(s32 *) (arg0 + 0xC) += 1;
        *(s32 *) (arg0 + 8) += 1;
    }
    return arg0;
}
