/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02077168 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02077168.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef volatile u32 vu32;
extern u8 data_02143210[];
extern void func_020fca8c(u32 a, u32 *b, u32 c);
extern void func_01ffdc7c(u32 *p, u32 n);
extern void func_01ffdcf4(u32 *a, u32 *b);
void func_020f0690(u32 *param_1) {
    vu32 z0;
    vu32 z1;
    vu32 z2;
    u32 auStack_194[99];
    if ((param_1[0] & 0x10) == 0x10) {
        z0 = 0;
        func_020fca8c(z0, param_1 + 15, 8);
        z1 = 0;
        func_020fca8c(z1, param_1 + 17, 8);
        z2 = 0;
        func_020fca8c(z2, param_1 + 19, 8);
        if (param_1[2] != 0) {
            func_01ffdc7c(param_1 + 15, param_1[2]);
        }
        if (param_1[4] != 0) {
            func_01ffdc7c(param_1 + 17, param_1[4]);
        }
        if (param_1[6] != 0) {
            func_01ffdc7c(param_1 + 19, param_1[6]);
        }
        param_1[0] = param_1[0] & 0xffffffef;
    }
    if (*(u32 **) data_02143210 != ((void *) 0)) {
        func_01ffdcf4(*(u32 **) data_02143210, param_1);
        return;
    }
    *(u32 **) data_02143210 = auStack_194;
    func_01ffdcf4(auStack_194, param_1);
    *(u32 **) data_02143210 = ((void *) 0);
}
