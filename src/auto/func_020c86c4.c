/* compiler: 1.2/sp2p3 */
typedef int s32;
typedef signed char s8;
void func_020c8cec(void *, void *, void *);
void func_020fbf10(s32);
s32 func_02105c24(void *);
extern void *data_02135244;
extern char data_021352f4;
extern void *data_02135bac[];
extern char data_02135fdc;
extern char data_02135ff0;
extern volatile s8 data_02140164;
extern s32 data_02140184;
extern volatile s32 data_02140190;
extern void *data_0214019c;
extern s32 data_021401ac;
extern char func_020c8808;

s32 func_020c86c4(void) {
    void *p;
    s32 r;
    s32 n;
    func_020c8cec(&data_02135ff0, &data_021352f4, data_0214019c);
    data_02140190 = 0x31;
    data_02140164 = 0;
    data_021401ac = 0;
    r             = func_02105c24(&func_020c8808);
    if (r == 0) {
        return 1;
    }
    if (r != 2) {
        if (r >= 0 && (unsigned) r < 0x17) {
            p = data_02135bac[r];
        } else {
            p = &data_02135244;
        }
        func_020c8cec(&data_02135fdc, &data_021352f4, p);
        if ((s32) data_0214019c != 9) {
            data_021401ac = r;
        }
        return 0;
    }
    n = data_02140184;
    while (data_02140190 != 0x32 && data_021401ac == 0 && n > 0) {
        func_020fbf10(0x101D0);
        data_02140190;
        n--;
    }
    return data_021401ac == 0;
}
