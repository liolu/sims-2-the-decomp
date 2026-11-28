/* compiler: 1.2/sp2p3 */
typedef int s32;
typedef signed char s8;
void func_020c8c24(void *, void *, void *);
void func_020fbdd4(s32);
s32 func_02105ae8(void *);
extern void *data_02135104;
extern char data_021351b4;
extern void *data_02135a6c[];
extern char data_02135e9c;
extern char data_02135eb0;
extern volatile s8 data_02140024;
extern s32 data_02140044;
extern volatile s32 data_02140050;
extern void *data_0214005c;
extern s32 data_0214006c;
extern char func_020c8740;

s32 func_020c85fc(void) {
    void *p;
    s32 r;
    s32 n;
    func_020c8c24(&data_02135eb0, &data_021351b4, data_0214005c);
    data_02140050 = 0x31;
    data_02140024 = 0;
    data_0214006c = 0;
    r             = func_02105ae8(&func_020c8740);
    if (r == 0) {
        return 1;
    }
    if (r != 2) {
        if (r >= 0 && (unsigned) r < 0x17) {
            p = data_02135a6c[r];
        } else {
            p = &data_02135104;
        }
        func_020c8c24(&data_02135e9c, &data_021351b4, p);
        if ((s32) data_0214005c != 9) {
            data_0214006c = r;
        }
        return 0;
    }
    n = data_02140044;
    while (data_02140050 != 0x32 && data_0214006c == 0 && n > 0) {
        func_020fbdd4(0x101D0);
        data_02140050;
        n--;
    }
    return data_0214006c == 0;
}
