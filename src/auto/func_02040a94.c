/* compiler: 1.2/sp2p3 */

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
typedef s32 M2C_UNK;
typedef struct Time {
    s32 h;
    s32 m;
    s32 s;
} Time;
extern u8 *data_0213e434;
void func_020525f0(void *, u8);
void func_02052800(void *, u8);
void func_02040a94(u8 *o, u8 *k) {
    Time t;
    u8 a = k[6];
    u8 b = k[7];
    s32 now;
    s32 start;
    s32 end;
    s32 new_var;
    t       = *((Time *) (data_0213e434 + 0x4800));
    start   = (k[1] * 60) + (k[0] * 3600);
    now     = (t.m * 60) + (t.h * 3600);
    end     = (k[3] * 60) + (k[2] * 3600);
    new_var = (s32) (end + 0x80000000);
    if ((((s32) (now + 0x80000000)) >= ((s32) (start + 0x80000000))) && (((s32) (now + 0x80000000)) <= new_var)) {
        a = k[4];
        b = k[5];
    }
    func_020525f0((*((u8 **) (o + 4))) + 0x24, a);
    func_02052800((*((u8 **) (o + 4))) + 0x24, b);
}
