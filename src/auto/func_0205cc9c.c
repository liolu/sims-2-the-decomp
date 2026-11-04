/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02051a50(s32, s32, s32);
void func_020509e8(u32, s32);
s32 func_02051338(s32, s32, s32, void *, s32);
void *func_02052258(s32);
void func_020d5268(s32);
void func_020a7e8c(u8);
extern u8 *data_0213e434;

void func_0205cc9c(u8 *arg0, s32 *arg1) {
    s32 sp4;
    u8 var_r8;
    u8 *ent;

    if (*(u8 *) (arg0 + 0x861) != 0) {
        var_r8 = (u8) * (s8 *) (arg0 + 0x8A);
        if ((s32) var_r8 < (s32) * (s8 *) (arg0 + 0x8A) + 4) {
            sp4 = 5;
        loop_3:
            if (*(s8 *) (arg0 + 0x8A) < 8) {
                if (var_r8 == *(s8 *) (arg0 + 0x89)) {
                    func_02051a50(6, 0, -1);
                } else {
                    func_02051a50(sp4, 0, -1);
                }
                if ((u32) var_r8 < 4U) {
                    func_020509e8((u32) var_r8, 0);
                    *arg1 =
                        func_02051338(*arg1, 0x80, ((var_r8 - *(s8 *) (arg0 + 0x8A)) * 0x14) + 0x2E, func_02052258(0x817), 1);
                } else if ((u32) var_r8 < 7U) {
                    ent = data_0213e434 + ((var_r8 - 4) << 6) + 0x46DC;
                    if (ent[0xF] != 0) {
                        *arg1 = func_02051338(*arg1, 0x80, ((var_r8 - *(s8 *) (arg0 + 0x8A)) * 0x14) + 0x2E, ent, 1);
                    } else {
                        *arg1 = func_02051338(*arg1, 0x80, ((var_r8 - *(s8 *) (arg0 + 0x8A)) * 0x14) + 0x2E,
                                              func_02052258(0x818), 1);
                    }
                } else {
                    *arg1 =
                        func_02051338(*arg1, 0x80, ((var_r8 - *(s8 *) (arg0 + 0x8A)) * 0x14) + 0x2E, func_02052258(0x816), 1);
                }
                var_r8 += 1;
                if ((s32) var_r8 < (s32) * (s8 *) (arg0 + 0x8A) + 4) {
                    goto loop_3;
                }
            }
        }
        if (*(s8 *) (arg0 + 0x89) == 0) {
            *(u8 *) (arg0 + 0x27) = 1;
            *(u8 *) (arg0 + 0x26) = 0;
        } else if (*(s8 *) (arg0 + 0x89) < 7) {
            *(u8 *) (arg0 + 0x27) = 1;
            *(u8 *) (arg0 + 0x26) = 1;
        } else {
            *(u8 *) (arg0 + 0x27) = 0;
            *(u8 *) (arg0 + 0x26) = 1;
        }
    }
    if (*(u8 *) (arg0 + 0x8E) != 0) {
        *(s8 *) (arg0 + 0x89) += 1;
        if (*(s8 *) (arg0 + 0x89) >= 8) {
            *(s8 *) (arg0 + 0x89) = 7;
        }
        if (*(s8 *) (arg0 + 0x89) > *(s8 *) (arg0 + 0x8A) + 3) {
            *(s8 *) (arg0 + 0x8A) += 1;
        }
        return;
    }
    if (*(u8 *) (arg0 + 0x8F) != 0) {
        *(s8 *) (arg0 + 0x89) -= 1;
        if (*(s8 *) (arg0 + 0x89) >= 8 || *(s8 *) (arg0 + 0x89) < 0) {
            *(s8 *) (arg0 + 0x89) = 0;
        }
        if (*(s8 *) (arg0 + 0x89) < *(s8 *) (arg0 + 0x8A)) {
            *(s8 *) (arg0 + 0x8A) -= 1;
        }
        return;
    }
    if (*(u8 *) (arg0 + 0x90) == 0) {
        return;
    }
    if (*(s8 *) (arg0 + 0x89) < 4) {
        func_020d5268(*(s8 *) (arg0 + 0x89) + 0x19);
        *(s8 *) (data_0213e434 + 0x3000 + 0x1C5) = *(s8 *) (arg0 + 0x89);
        return;
    }
    if (*(s8 *) (arg0 + 0x89) < 7) {
        if (*(u8 *) (data_0213e434 + ((((u8) (*(s8 *) (arg0 + 0x89) - 4)) << 6)) + 0x4000 + 0x6EB) == 0) {
            return;
        }
        func_020a7e8c((u8) (*(s8 *) (arg0 + 0x89) - 4));
        *(s8 *) (data_0213e434 + 0x3000 + 0x1C5) = *(s8 *) (arg0 + 0x89);
        return;
    }
    *(u8 *) (arg0 + 0x88) = 0;
}
