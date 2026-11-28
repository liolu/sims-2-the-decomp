/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* __num2dec_internal from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/msl/num2dec_internal.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed short s16;
extern double func_0210c00c(double x, int *exponent);
extern double func_0210c0cc(double x, int n);
static inline int __fpclassifyd(double x) {
    switch (((int *) &x)[1] & 0x7FF00000) {
        case 0x7FF00000:
            if ((((int *) &x)[1] & 0x000FFFFF) || ((int *) &x)[0]) {
                return 1;
            }
            return 2;
        case 0:
            if ((((int *) &x)[1] & 0x000FFFFF) || ((int *) &x)[0]) {
                return 5;
            }
            return 3;
    }
    return 4;
}
typedef struct Decimal {
    u8 sign;
    u8 unk_01;
    s16 exp;
    u8 length;
    u8 digits[32];
    u8 pad_25;
} Decimal;
extern void func_0210c5ec(Decimal *dec, double x);
extern void func_0210c844(Decimal *dec, long exponent);
extern void func_0210cce8(Decimal *result, const Decimal *x, const Decimal *y);
extern void func_0210ce90(Decimal *dec, u64 value);
extern int func_0210d084(u32 value);
extern double _dsub(double a, double b);
extern u64 func_0210d568(double x);
static inline int CountTrailingZeros(double x) {
    u32 *words = (u32 *) &x;

    if (words[0] != 0) {
        return func_0210d084(words[0]);
    }
    return 32 + func_0210d084(words[1] | 0x00100000);
}
void func_0210c5ec(Decimal *dec, double x) {
    u8 sign = (((int *) &x)[1] & 0x80000000) != 0;

    if (x == 0.0) {
        dec->sign      = sign;
        dec->exp       = 0;
        dec->length    = 1;
        dec->digits[0] = 0;
        return;
    }
    if (__fpclassifyd(x) <= 2) {
        dec->sign      = sign;
        dec->exp       = 0;
        dec->length    = 1;
        dec->digits[0] = __fpclassifyd(x) == 1 ? 'N' : 'I';
        return;
    }
    if (sign) {
        x = _dsub(0.0, x);
    }

    {
        int exponent;
        double fraction = func_0210c00c(x, &exponent);
        int bits        = 53 - CountTrailingZeros(fraction);
        Decimal mantissa;
        Decimal power;

        func_0210c844(&power, exponent - bits);
        func_0210ce90(&mantissa, func_0210d568(func_0210c0cc(fraction, bits)));
        func_0210cce8(dec, &mantissa, &power);
        dec->sign = sign;
    }
}
