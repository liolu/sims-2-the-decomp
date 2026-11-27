/* compiler: 1.2/sp2p3 */
typedef int s32;
typedef short s16;
typedef unsigned short u16;
typedef unsigned char u8;
struct VA {
    virtual void f0();
    virtual void f1();
};
struct Obj {
    VA *vt;
    u8 *in;
};
extern "C" {
void func_020117e8(...);
void func_02018acc(...);
void func_0201d124(...);
void func_020269b4(...);
void func_02026be8(...);
void func_0205871c(...);
void func_02083dc8(...);
extern s32 data_02139fa4;
extern u8 *data_0213e434;
extern u8 *data_0213e580;

s32 func_0208e9d4(u8 *arg0) {
    u8 a[0x1c];
    u8 b[0x3c];
    u8 c[0x4c];
    s32 h;
    s32 z;
    if (*(s32 *) (data_0213e434 + 0x2000 + 0x15c) < 6) {
        h = *(s32 *) (data_0213e580 + 0xf8);
        func_02083dc8(data_0213e434 + 0x18, *(u16 *) (*(u8 **) (arg0 + 4) + 0xa));
        func_02026be8(a);
        func_020117e8(h, 0x26, a, 0);
        func_0201d124(b);
        *(s16 *) (b + 0x30) = 0x51;
        *(s32 *) (b + 0x10) = 0x16d;
        func_020117e8(h, 3, b, 0);
        func_020269b4(c);
        *(s16 *) (c + 0x30) = 0x50;
        *(u8 **) (c + 0x10) = *(u8 **) (arg0 + 4); /*P*/
        *(s16 *) (c + 0x1c) = 0x13; /*P*/
        *(u8 **) (c + 0x18) = *(u8 *volatile *) (arg0 + 4); /*P*/
        *(s32 *) (c + 0x2c) = z = 0; /*P*/
        func_020117e8(h, 8, c, z);
        *(s32 *) (*(u8 **) (arg0 + 4) + 0x130) = 0;
        if (arg0 != 0) {
            ((VA *) arg0)->f1();
        }
        func_02018acc(c);
        func_02018acc(b);
        func_02018acc(a);
        return 6;
    }
    func_0205871c(data_02139fa4, 0x98b, -1, 0, 0, 1);
    return 0;
}
}
