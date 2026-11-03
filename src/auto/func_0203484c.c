/* compiler: 1.2/sp2p3 */
typedef int s32;
typedef unsigned short u16;
typedef unsigned char u8;

extern s32 *data_0213e434;

void func_0203484c(u8 *arg0, s32 arg1) {
    u16 cur;

    if (arg1 == 0) {
        cur = *(u16 *) (*(u8 **) (arg0 + 4) + 0xA);
        if (cur == 0x39) {
            *(u16 *) (arg0 + 0x78) = 0x3B;
            *data_0213e434 |= 0x20;
        } else if (cur == 0x3B) {
            *(u16 *) (arg0 + 0x78) = 0x39;
            *data_0213e434 &= ~0x20;
        } else if (cur == 0x3A) {
            *(u16 *) (arg0 + 0x78) = 0x3C;
            *data_0213e434 |= 0x20;
        } else if (cur == 0x3C) {
            *(u16 *) (arg0 + 0x78) = 0x3A;
            *data_0213e434 &= ~0x20;
        }
    } else if (arg1 == 1) {
        cur = *(u16 *) (*(u8 **) (arg0 + 4) + 0xA);
        if (cur == 0x39) {
            *(u16 *) (arg0 + 0x78) = 0x3B;
            *data_0213e434 |= 0x20;
        } else if (cur == 0x3A) {
            *(u16 *) (arg0 + 0x78) = 0x3C;
            *data_0213e434 |= 0x20;
        }
    } else if (arg1 == -1) {
        cur = *(u16 *) (*(u8 **) (arg0 + 4) + 0xA);
        if (cur == 0x3B) {
            *(u16 *) (arg0 + 0x78) = 0x39;
            *data_0213e434 &= ~0x20;
        } else if (cur == 0x3C) {
            *(u16 *) (arg0 + 0x78) = 0x3A;
            *data_0213e434 &= ~0x20;
        }
    }

    if (*(u16 *) (arg0 + 0x78) != 0) {
        *data_0213e434 |= 0x80;
    }
}
