/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_0204561c(s32);                           /* extern */
u8 func_020c48e4();                                 /* extern */
extern void *data_0213d95c;
extern void *data_0213e434;
extern s32 data_027e0000;
extern M2C_UNK data_027e0014;
extern u8 data_ov010_02152ee0;

void func_ov010_0214f618(void *arg0) {
    u8 temp_r6;
    void *var_r5;
    void *temp_r4_2;
    s16 var_r1;
    s16 var_r1_2;
    s16 var_r2;
    s16 var_r2_2;
    s32 temp_r10;
    s32 temp_r10_10;
    s32 temp_r10_11;
    s32 temp_r10_12;
    s32 temp_r10_2;
    s32 temp_r10_3;
    s32 temp_r10_4;
    s32 temp_r10_5;
    s32 temp_r10_6;
    s32 temp_r10_7;
    s32 temp_r10_8;
    s32 temp_r10_9;
    s32 temp_r4;
    u8 temp_r1;
    u8 var_r0;
    u8 var_r0_10;
    u8 var_r0_11;
    u8 var_r0_12;
    u8 var_r0_13;
    u8 var_r0_14;
    u8 var_r0_2;
    u8 var_r0_3;
    u8 var_r0_4;
    u8 var_r0_5;
    u8 var_r0_6;
    u8 var_r0_7;
    u8 var_r0_8;
    u8 var_r0_9;

    temp_r6 = M2C_FIELD(arg0, u8 *, 0x1E6);
    if (data_ov010_02152ee0 == 0) {
        temp_r1 = M2C_FIELD(data_0213d95c, u8 *, 0);
        if (((u32) (temp_r1 << 0x1B) >> 0x1F) != 0) {
            var_r0 = 1;
        } else if (((u32) (temp_r1 << 0x1D) >> 0x1F) != 0) {
            var_r0 = 2;
        } else if (((u32) (temp_r1 << 0x1A) >> 0x1F) != 0) {
            var_r0 = 3;
        } else {
            goto block_11;
        }
    } else if (data_ov010_02152ee0 != 0) {
        var_r0_2 = temp_r6;
        temp_r4  = M2C_FIELD(data_0213e434, s32 *, 0x479C);
        if ((s32) temp_r6 < 0) {
            var_r0_2 = func_020c48e4();
        }
        var_r0 = M2C_FIELD(((var_r0_2 * 0x44) + temp_r4), u8 *, 0x232);
    } else {
    block_11:
        var_r0 = 0;
    }
    if (var_r0 != 1) {
        return;
    }
    var_r5 = func_0204561c((data_027e0000 * 0x34) + (s32) &data_027e0014);
    if (var_r5 == NULL) {
        return;
    }
    do {
        temp_r4_2 = M2C_FIELD(var_r5, void **, 0);
        if ((M2C_FIELD(temp_r4_2, u16 *, 0xC) == 0x12) && (M2C_FIELD(temp_r4_2, M2C_UNK(**)(void *), 0x7C) != NULL)) {
            if (data_ov010_02152ee0 == 0) {
                if (((u32) (M2C_FIELD(data_0213d95c, u8 *, 0) << 0x1D) >> 0x1F) != 0) {
                    var_r1 = M2C_FIELD(data_0213d95c, s16 *, 0x2A);
                } else {
                    goto block_32;
                }
            } else if (data_ov010_02152ee0 != 0) {
                var_r0_3 = temp_r6;
                temp_r10 = M2C_FIELD(data_0213e434, s32 *, 0x479C);
                if ((s32) temp_r6 < 0) {
                    var_r0_3 = func_020c48e4();
                }
                if (M2C_FIELD(((var_r0_3 * 0x44) + temp_r10), s8 *, 0x232) != 0) {
                    var_r0_4   = temp_r6;
                    temp_r10_2 = M2C_FIELD(data_0213e434, s32 *, 0x479C);
                    if ((s32) temp_r6 < 0) {
                        var_r0_4 = func_020c48e4();
                    }
                    if (M2C_FIELD(((var_r0_4 * 0x44) + temp_r10_2), s8 *, 0x232) != 3) {
                        var_r0_5   = temp_r6;
                        temp_r10_3 = M2C_FIELD(data_0213e434, s32 *, 0x479C);
                        if ((s32) temp_r6 < 0) {
                            var_r0_5 = func_020c48e4();
                        }
                        var_r1 = M2C_FIELD(((var_r0_5 * 0x44) + temp_r10_3), s16 *, 0x22E);
                    } else {
                        goto block_32;
                    }
                } else {
                    goto block_32;
                }
            } else {
            block_32:
                var_r1 = -1;
            }
            if ((s32) var_r1 >= (s32) M2C_FIELD(temp_r4_2, s16 *, 0x94)) {
                if (data_ov010_02152ee0 == 0) {
                    if (((u32) (M2C_FIELD(data_0213d95c, u8 *, 0) << 0x1D) >> 0x1F) != 0) {
                        var_r2 = M2C_FIELD(data_0213d95c, s16 *, 0x2A);
                    } else {
                        goto block_47;
                    }
                } else if (data_ov010_02152ee0 != 0) {
                    var_r0_6   = temp_r6;
                    temp_r10_4 = M2C_FIELD(data_0213e434, s32 *, 0x479C);
                    if ((s32) temp_r6 < 0) {
                        var_r0_6 = func_020c48e4();
                    }
                    if (M2C_FIELD(((var_r0_6 * 0x44) + temp_r10_4), s8 *, 0x232) != 0) {
                        var_r0_7   = temp_r6;
                        temp_r10_5 = M2C_FIELD(data_0213e434, s32 *, 0x479C);
                        if ((s32) temp_r6 < 0) {
                            var_r0_7 = func_020c48e4();
                        }
                        if (M2C_FIELD(((var_r0_7 * 0x44) + temp_r10_5), s8 *, 0x232) != 3) {
                            var_r0_8   = temp_r6;
                            temp_r10_6 = M2C_FIELD(data_0213e434, s32 *, 0x479C);
                            if ((s32) temp_r6 < 0) {
                                var_r0_8 = func_020c48e4();
                            }
                            var_r2 = M2C_FIELD(((var_r0_8 * 0x44) + temp_r10_6), s16 *, 0x22E);
                        } else {
                            goto block_47;
                        }
                    } else {
                        goto block_47;
                    }
                } else {
                block_47:
                    var_r2 = -1;
                }
                if ((s32) var_r2 <= (s32) (M2C_FIELD(temp_r4_2, s16 *, 0x94) + M2C_FIELD(temp_r4_2, s16 *, 0x98))) {
                    if (data_ov010_02152ee0 == 0) {
                        if (((u32) (M2C_FIELD(data_0213d95c, u8 *, 0) << 0x1D) >> 0x1F) != 0) {
                            var_r1_2 = M2C_FIELD(data_0213d95c, s16 *, 0x2C);
                        } else {
                            goto block_62;
                        }
                    } else if (data_ov010_02152ee0 != 0) {
                        var_r0_9   = temp_r6;
                        temp_r10_7 = M2C_FIELD(data_0213e434, s32 *, 0x479C);
                        if ((s32) temp_r6 < 0) {
                            var_r0_9 = func_020c48e4();
                        }
                        if (M2C_FIELD(((var_r0_9 * 0x44) + temp_r10_7), s8 *, 0x232) != 0) {
                            var_r0_10  = temp_r6;
                            temp_r10_8 = M2C_FIELD(data_0213e434, s32 *, 0x479C);
                            if ((s32) temp_r6 < 0) {
                                var_r0_10 = func_020c48e4();
                            }
                            if (M2C_FIELD(((var_r0_10 * 0x44) + temp_r10_8), s8 *, 0x232) != 3) {
                                var_r0_11  = temp_r6;
                                temp_r10_9 = M2C_FIELD(data_0213e434, s32 *, 0x479C);
                                if ((s32) temp_r6 < 0) {
                                    var_r0_11 = func_020c48e4();
                                }
                                var_r1_2 = M2C_FIELD(((var_r0_11 * 0x44) + temp_r10_9), s16 *, 0x230);
                            } else {
                                goto block_62;
                            }
                        } else {
                            goto block_62;
                        }
                    } else {
                    block_62:
                        var_r1_2 = -1;
                    }
                    if ((s32) var_r1_2 >= (s32) M2C_FIELD(temp_r4_2, s16 *, 0x96)) {
                        if (data_ov010_02152ee0 == 0) {
                            if (((u32) (M2C_FIELD(data_0213d95c, u8 *, 0) << 0x1D) >> 0x1F) != 0) {
                                var_r2_2 = M2C_FIELD(data_0213d95c, s16 *, 0x2C);
                            } else {
                                goto block_77;
                            }
                        } else if (data_ov010_02152ee0 != 0) {
                            var_r0_12   = temp_r6;
                            temp_r10_10 = M2C_FIELD(data_0213e434, s32 *, 0x479C);
                            if ((s32) temp_r6 < 0) {
                                var_r0_12 = func_020c48e4();
                            }
                            if (M2C_FIELD(((var_r0_12 * 0x44) + temp_r10_10), s8 *, 0x232) != 0) {
                                var_r0_13   = temp_r6;
                                temp_r10_11 = M2C_FIELD(data_0213e434, s32 *, 0x479C);
                                if ((s32) temp_r6 < 0) {
                                    var_r0_13 = func_020c48e4();
                                }
                                if (M2C_FIELD(((var_r0_13 * 0x44) + temp_r10_11), s8 *, 0x232) != 3) {
                                    var_r0_14   = temp_r6;
                                    temp_r10_12 = M2C_FIELD(data_0213e434, s32 *, 0x479C);
                                    if ((s32) temp_r6 < 0) {
                                        var_r0_14 = func_020c48e4();
                                    }
                                    var_r2_2 = M2C_FIELD(((var_r0_14 * 0x44) + temp_r10_12), s16 *, 0x230);
                                } else {
                                    goto block_77;
                                }
                            } else {
                                goto block_77;
                            }
                        } else {
                        block_77:
                            var_r2_2 = -1;
                        }
                        if ((s32) var_r2_2 <= (s32) (M2C_FIELD(temp_r4_2, s16 *, 0x96) + M2C_FIELD(temp_r4_2, s16 *, 0x9A))) {
                            M2C_FIELD(temp_r4_2, M2C_UNK(**)(void *), 0x7C)(temp_r4_2);
                        }
                    }
                }
            }
        }
        var_r5 = M2C_FIELD(var_r5, void **, 4);
    } while (var_r5 != NULL);
}
