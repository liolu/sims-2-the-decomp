/* compiler: 1.2/sp2p3 */
typedef int s32;
typedef signed char s8;
void func_020c87d4(void *, void *, void *);
void func_020fb9fc(s32);
s32 func_02105710(void *);
extern void *data_02134d30;
extern char data_02134de0;
extern void *data_02135698[];
extern char data_02135ac8;
extern char data_02135adc;
extern volatile s8 data_0213fc8c;
extern s32 data_0213fcac;
extern volatile s32 data_0213fcb8;
extern void *data_0213fcc4;
extern s32 data_0213fcd4;
extern char func_020c82f0;

s32 func_020c81ac(void) {
    void *p;
    s32 r;
    s32 n;
    func_020c87d4(&data_02135adc, &data_02134de0, data_0213fcc4);
    data_0213fcb8 = 0x31;
    data_0213fc8c = 0;
    data_0213fcd4 = 0;
    r             = func_02105710(&func_020c82f0);
    if (r == 0) {
        return 1;
    }
    if (r != 2) {
        if (r >= 0 && (unsigned) r < 0x17) {
            p = data_02135698[r];
        } else {
            p = &data_02134d30;
        }
        func_020c87d4(&data_02135ac8, &data_02134de0, p);
        if ((s32) data_0213fcc4 != 9) {
            data_0213fcd4 = r;
        }
        return 0;
    }
    n = data_0213fcac;
    while (data_0213fcb8 != 0x32 && data_0213fcd4 == 0 && n > 0) {
        func_020fb9fc(0x101D0);
        data_0213fcb8;
        n--;
    }
    return data_0213fcd4 == 0;
}
