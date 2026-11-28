/* compiler: 1.2/sp2p3  */
/* func_02107a2c from sims-2-the/src/auto/func_02107a2c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
extern s32 func_0210a27c(void *, s32);
extern void func_02107d24();
extern s32 func_02107b9c(void *, s32, s32);
extern void func_02107c58(s32, void *, s32);
extern s32 func_02107444(void *, s32);
extern void func_021074e0(void *);
typedef struct {
    u32 b0 : 2;
    u32 f2 : 3;
    u32 f5 : 2;
    u32 f7 : 3;
    u32 f10 : 2;
    u32 f12 : 1;
    u32 rest : 19;
} W4;
typedef struct {
    u32 s : 3;
    u32 rest : 29;
} W8;
u32 func_02107518(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3) {
    s32 r11;
    s32 r8;
    u32 r7;
    s32 sp8;
    s32 sp4;
    s32 r5;
    s32 r6;
    s32 r4;
    s32 t;

    if (func_0210a27c(arg3, 0) == 0) {
        func_0210a27c(arg3, -1);
    }
    r8 = arg1 * arg2;
    if (r8 == 0 || arg3[0xD] != 0 || ((t = (*(u32 *) (arg3 + 4) << 0x16) >> 0x1D) == 0)) {
        return 0;
    }
    if (t == 2) {
        func_02107d24();
    }
    r11 = 1;
    if (((W4 *) (arg3 + 4))->f12 != 0) {
        t = ((W4 *) (arg3 + 4))->f5;
        if (t != 2) {
            if (t != 1) {
                r11 = 0;
            }
        }
    }
    if (((W8 *) (arg3 + 8))->s == 0) {
        if ((((W4 *) (arg3 + 4))->f2) & 2) {
            ((W8 *) (arg3 + 8))->s = 1;
            func_021074e0(arg3);
        }
    }
    if (((W8 *) (arg3 + 8))->s != 1) {
        arg3[0xD]              = 1;
        *(s32 *) (arg3 + 0x28) = 0;
        return 0;
    }
    r7 = 0;
    if (r8 != 0) {
        if (!(*(s32 *) (arg3 + 0x24) == *(s32 *) (arg3 + 0x1C) && r11 == 0)) {
            *(s32 *) (arg3 + 0x28) = *(s32 *) (arg3 + 0x20) - (*(s32 *) (arg3 + 0x24) - *(s32 *) (arg3 + 0x1C));
            sp4                    = 10;
            r5                     = 0;
            do {
                r6  = r5;
                sp8 = *(s32 *) (arg3 + 0x28);
                if ((u32) sp8 > (u32) r8) {
                    sp8 = r8;
                }
                if (((W4 *) (arg3 + 4))->f5 == 1) {
                    if (sp8 != 0) {
                        r6 = func_02107b9c(arg0, sp4, sp8);
                        if (r6 != 0) {
                            sp8 = r6 + 1 - (s32) arg0;
                        }
                    }
                }
                if (sp8 != 0) {
                    func_02107c58(*(s32 *) (arg3 + 0x24), arg0, sp8);
                    arg0                   = arg0 + sp8;
                    r8                     = r8 - sp8;
                    *(s32 *) (arg3 + 0x24) = *(s32 *) (arg3 + 0x24) + sp8;
                    *(s32 *) (arg3 + 0x28) = *(s32 *) (arg3 + 0x28) - sp8;
                }
                if (*(s32 *) (arg3 + 0x28) == 0 || r6 != 0 || ((W4 *) (arg3 + 4))->f5 == 0) {
                    if (func_02107444(arg3, 0) != 0) {
                        arg3[0xD]              = 1;
                        r8                     = 0;
                        *(s32 *) (arg3 + 0x28) = 0;
                        break;
                    }
                }
                r7 = r7 + sp8;
                if (r8 == 0) {
                    break;
                }
                if (r11 == 0) {
                    break;
                }
            } while (1);
        }
    }
    if (r8 != 0) {
        if (r11 == 0) {
            r5                     = *(s32 *) (arg3 + 0x1C);
            r4                     = *(s32 *) (arg3 + 0x20);
            *(u8 **) (arg3 + 0x1C) = arg0;
            *(s32 *) (arg3 + 0x20) = r8;
            *(s32 *) (arg3 + 0x24) = (s32) arg0 + r8;
            if (func_02107444(arg3, (s32) &sp8) != 0) {
                arg3[0xD]              = 1;
                *(s32 *) (arg3 + 0x28) = 0;
            } else {
                r7 = r7 + sp8;
            }
            *(s32 *) (arg3 + 0x1C) = r5;
            *(s32 *) (arg3 + 0x20) = r4;
            func_021074e0(arg3);
            *(s32 *) (arg3 + 0x28) = 0;
        }
    }
    if (((W4 *) (arg3 + 4))->f5 != 2) {
        *(s32 *) (arg3 + 0x28) = 0;
    }
    return r7 / (u32) arg1;
}
