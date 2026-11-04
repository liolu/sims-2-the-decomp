/* compiler: 1.2/sp2p3 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

extern u32 data_027e0000;
extern u8 *data_0213e580;
extern u8 *data_02139fa4;

void func_02018af8(void *a, s32 b, void *c, s32 d);
void func_0208b394(void *p);
void func_0205871c(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
u16 func_020187ec(void *p);
s32 func_01ffaf60(void *a, s32 b, s32 c);
s32 func_01ffabc8(void *a, s32 b, s32 c);
void func_0208b358(void *p);
void func_0208b2dc(void *p);
s32 func_0208b754(void *p, s32 q);

s32 func_02099788(u8 *self, u32 arg1) {
    s32 i;
    u8 *p;
    u8 *src;
    u8 *dst;

    p = self + arg1;
    if (p[0x10] == 0) {
        if (*(u32 *) (*(u8 **) (self + 4) + 0x134) == 0) {
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
            *(u32 *) (*(u8 **) (data_0213e580 + 0xf8) + 0x134) = *(u32 *) (self + 4);
            *(u32 *) (*(u8 **) (self + 4) + 0x134)             = *(u32 *) (data_0213e580 + 0xf8);
            func_02018af8(*(u8 **) (self + 4) + 0x128, 10, *(u8 **) (data_0213e580 + 0xf8), 2);
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
            func_0208b394(self);
            i = *(s32 *) (self + 8);
            if (i > *(s32 *) (self + 0xc)) {
                do {
                    src       = self + (i - 1);
                    dst       = self + i;
                    dst[0x10] = src[0x10];
                    i--;
                } while (i > *(s32 *) (self + 0xc));
            }
            dst                   = self + *(s32 *) (self + 0xc);
            dst[0x10]             = 0xa;
            *(s32 *) (self + 0xc) = *(s32 *) (self + 0xc) + 1;
            *(s32 *) (self + 8)   = *(s32 *) (self + 8) + 1;
            return 5;
        } else {
            func_0205871c(data_02139fa4, 0xa1a, -1, 0, 0, 1);
            return 0;
        }
    }
    if (p[0x10] == 0xa) {
        if (func_01ffaf60(*(u8 **) (data_0213e580 + 0xf8) + 0xe0, 8, 0) == 0) {
            return 0;
        }
        if (data_027e0000 == 0) {
            data_027e0000 = 1;
        } else {
            data_027e0000 = 0;
        }
        func_01ffabc8(*(u8 **) (data_0213e580 + 0xf8) + 0xe0, 8, 0);
        if (data_027e0000 == 0) {
            data_027e0000 = 1;
        } else {
            data_027e0000 = 0;
        }
        func_0208b358(self);
        func_0208b2dc(self);
        return 6;
    }
    if (p[0x10] == 0x53) {
        if (*(u32 *) (*(u8 **) (self + 4) + 0x134) == 0) {
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
            *(u32 *) (*(u8 **) (data_0213e580 + 0xf8) + 0x134) = *(u32 *) (self + 4);
            *(u32 *) (*(u8 **) (self + 4) + 0x134)             = *(u32 *) (data_0213e580 + 0xf8);
            func_02018af8(*(u8 **) (self + 4) + 0x128, 0xf, *(u8 **) (data_0213e580 + 0xf8), 2);
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
            return 6;
        } else {
            func_0205871c(data_02139fa4, 0xa1a, -1, 0, 0, 1);
            return 0;
        }
    }
    return func_0208b754(self, arg1);
}
