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
s32 func_01ffaf60(void *a, s32 b, s32 c);
s32 func_01ffabc8(void *a, s32 b, s32 c);
void func_0208b358(void *p);
void func_02067a04(void *a, void *b);
void func_0208b3d4(void *p, s32 q);
s32 func_0208b4fc(void *p, s32 q);

s32 func_0208e2e4(u8 *self, u32 arg1) {
    s32 ret;
    s32 i;
    u8 *p;

    p = self + arg1;
    switch (p[0x10]) {
        case 0xb:
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
                        u8 *src   = self + (i - 1);
                        u8 *dst   = self + i;
                        dst[0x10] = src[0x10];
                        i--;
                    } while (i > *(s32 *) (self + 0xc));
                }
                p                     = self + *(s32 *) (self + 0xc);
                p[0x10]               = 0xa;
                *(s32 *) (self + 0xc) = *(s32 *) (self + 0xc) + 1;
                *(s32 *) (self + 8)   = *(s32 *) (self + 8) + 1;
                ret                   = 5;
            } else {
                func_0205871c(data_02139fa4, 0xa1a, -1, 0, 0, 1);
                ret = 0;
            }
            break;
        case 0xa:
            if (func_01ffaf60(*(u8 **) (data_0213e580 + 0xf8) + 0xe0, 8, 0) == 0) {
                ret = 0;
                break;
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
            func_02067a04(*(u8 **) (data_02139fa4 + 0xdac), *(u8 **) (self + 4));
            ret = 6;
            break;
        case 0x12:
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
            func_02018af8(*(u8 **) (self + 4) + 0x128, 0xf, *(u8 **) (data_0213e580 + 0xf8), 2);
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
            func_0208b3d4(self, 0x12);
            ret = 6;
            break;
        default:
            ret = func_0208b4fc(self, arg1);
            break;
    }
    return ret;
}
