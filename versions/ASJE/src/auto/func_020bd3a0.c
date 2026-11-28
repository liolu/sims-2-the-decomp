/* compiler: 1.2/sp2p3 */
/* Initialises a helper object whose +0x14 field points to a sub-object: three lookups,
   optional callbacks through global function pointers, then bookkeeping and a flag byte at +0x10. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;

extern u8 data_02138928;
extern u8 data_0213892c;
extern u8 data_02138930;

void *func_020ee3f4(void *p);
void *func_020ee3e8(void *p);
void *func_020ee2b4(void *p);
void func_020ee3d4(void *p, void *a, void *b);
void func_020ee2ac(void *p, void *a);
void func_020ee2f8(void *p, s32 f);
void func_020ee240(void *p, s32 f);
void func_020bd28c(u8 *obj);

s32 func_020bd3a0(u8 *arg0, s32 arg1) {
    void *r6;
    void *r5;
    void *r4;
    s32 fl;

    if (*(void **) (arg0 + 0x14) != 0) {
        r6 = func_020ee3f4(*(void **) (arg0 + 0x14));
        r5 = func_020ee3e8(*(void **) (arg0 + 0x14));
        r4 = func_020ee2b4(*(void **) (arg0 + 0x14));
        if (r6 != 0) {
            *(void **) (arg0 + 4) = ((void *(*) (void *, s32, s32)) * (void **) &data_02138928)(r6, 0, 0);
            if (*(void **) (arg0 + 4) == 0) {
                return 0;
            }
        }
        if (r5 != 0) {
            *(void **) (arg0 + 8) = ((void *(*) (void *, s32, s32)) * (void **) &data_02138928)(r5, 1, 0);
            if (*(void **) (arg0 + 8) == 0) {
                if (r6 != 0) {
                    ((void (*)(void *)) * (void **) &data_0213892c)(*(void **) (arg0 + 4));
                }
                return 0;
            }
        }
        if (r4 != 0) {
            fl = *(u16 *) (*(u8 **) (arg0 + 0x14) + 0x20);
            fl &= 0x8000;
            fl                      = (u8) fl;
            *(void **) (arg0 + 0xc) = ((void *(*) (void *, s32, s32)) * (void **) &data_02138930)(r4, fl, 0);
            if (*(void **) (arg0 + 0xc) == 0) {
                if (r6 != 0) {
                    ((void (*)(void *)) * (void **) &data_0213892c)(*(void **) (arg0 + 4));
                }
                if (r5 != 0) {
                    ((void (*)(void *)) * (void **) &data_0213892c)(*(void **) (arg0 + 8));
                }
                return 0;
            }
        }
        func_020ee3d4(*(void **) (arg0 + 0x14), *(void **) (arg0 + 4), *(void **) (arg0 + 8));
        func_020ee2ac(*(void **) (arg0 + 0x14), *(void **) (arg0 + 0xc));
        if (arg1 != 0) {
            func_020ee2f8(*(void **) (arg0 + 0x14), 1);
            func_020ee240(*(void **) (arg0 + 0x14), 1);
        } else {
            func_020bd28c(arg0);
        }
    }
    *(arg0 + 0x10) = 1;
    return 1;
}
