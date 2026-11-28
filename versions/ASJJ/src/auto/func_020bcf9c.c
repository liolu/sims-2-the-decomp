/* compiler: 1.2/sp2p3 */
/* Initialises a helper object whose +0x14 field points to a sub-object: three lookups,
   optional callbacks through global function pointers, then bookkeeping and a flag byte at +0x10. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;

extern u8 data_02138554;
extern u8 data_02138558;
extern u8 data_0213855c;

void *func_020ee01c(void *p);
void *func_020ee010(void *p);
void *func_020ededc(void *p);
void func_020edffc(void *p, void *a, void *b);
void func_020eded4(void *p, void *a);
void func_020edf20(void *p, s32 f);
void func_020ede68(void *p, s32 f);
void func_020bce88(u8 *obj);

s32 func_020bcf9c(u8 *arg0, s32 arg1) {
    void *r6;
    void *r5;
    void *r4;
    s32 fl;

    if (*(void **) (arg0 + 0x14) != 0) {
        r6 = func_020ee01c(*(void **) (arg0 + 0x14));
        r5 = func_020ee010(*(void **) (arg0 + 0x14));
        r4 = func_020ededc(*(void **) (arg0 + 0x14));
        if (r6 != 0) {
            *(void **) (arg0 + 4) = ((void *(*) (void *, s32, s32)) * (void **) &data_02138554)(r6, 0, 0);
            if (*(void **) (arg0 + 4) == 0) {
                return 0;
            }
        }
        if (r5 != 0) {
            *(void **) (arg0 + 8) = ((void *(*) (void *, s32, s32)) * (void **) &data_02138554)(r5, 1, 0);
            if (*(void **) (arg0 + 8) == 0) {
                if (r6 != 0) {
                    ((void (*)(void *)) * (void **) &data_02138558)(*(void **) (arg0 + 4));
                }
                return 0;
            }
        }
        if (r4 != 0) {
            fl = *(u16 *) (*(u8 **) (arg0 + 0x14) + 0x20);
            fl &= 0x8000;
            fl                      = (u8) fl;
            *(void **) (arg0 + 0xc) = ((void *(*) (void *, s32, s32)) * (void **) &data_0213855c)(r4, fl, 0);
            if (*(void **) (arg0 + 0xc) == 0) {
                if (r6 != 0) {
                    ((void (*)(void *)) * (void **) &data_02138558)(*(void **) (arg0 + 4));
                }
                if (r5 != 0) {
                    ((void (*)(void *)) * (void **) &data_02138558)(*(void **) (arg0 + 8));
                }
                return 0;
            }
        }
        func_020edffc(*(void **) (arg0 + 0x14), *(void **) (arg0 + 4), *(void **) (arg0 + 8));
        func_020eded4(*(void **) (arg0 + 0x14), *(void **) (arg0 + 0xc));
        if (arg1 != 0) {
            func_020edf20(*(void **) (arg0 + 0x14), 1);
            func_020ede68(*(void **) (arg0 + 0x14), 1);
        } else {
            func_020bce88(arg0);
        }
    }
    *(arg0 + 0x10) = 1;
    return 1;
}
