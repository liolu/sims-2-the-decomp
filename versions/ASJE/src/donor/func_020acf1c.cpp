/* compiler: 1.2/sp2p3  */
/* func_020acfe4 from sims-2-the/src/auto/func_020acfe4.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
typedef struct {
    u8 pad[0x19];
    u8 f19;
} A;
typedef struct {
    u8 pad[0x8c];
    u8 f8c;
} B;
typedef struct {
    u8 pad[0xfc];
    B **list;
    u32 *arr;
    s32 f104;
} O;
extern "C" {
extern s32 data_027e0000;
extern u32 data_027e0004;
extern A *data_02139e64;
extern u8 data_0212593c[];
extern void func_02048090(A *, s32, s32, s32, s32, s32);
extern void func_020d5880(s32);
extern void func_020accb0(O *, s32);
extern s32 func_02089484(void *);
extern void func_02016708(u32, void *);
extern void func_02049a88(u32, s32);
void func_020acf1c(O *arg0) {
    s32 k;
    s32 r;
    if (data_027e0004 & (0x20 << data_027e0000)) {
        return;
    }
    k                  = 0;
    r                  = data_02139e64->f19;
    data_02139e64->f19 = k;
    if (r != 0) {
        func_02048090(data_02139e64, 0x12, 1, 2, arg0->f104, k);
        return;
    }
    r                  = arg0->list[0]->f8c;
    arg0->list[0]->f8c = k;
    if (r != 0) {
        func_020d5880(0x159);
        func_020accb0(arg0, 0);
        return;
    }
    r                  = arg0->list[1]->f8c;
    arg0->list[1]->f8c = k;
    if (r != 0) {
        func_020d5880(0x159);
        func_020accb0(arg0, 1);
        return;
    }
    r                  = arg0->list[2]->f8c;
    arg0->list[2]->f8c = k;
    if (r != 0) {
        func_020d5880(0x159);
        func_020accb0(arg0, 2);
        return;
    }
    r                  = arg0->list[3]->f8c;
    arg0->list[3]->f8c = k;
    if (r != 0) {
        func_020d5880(0x160);
        func_02048090(data_02139e64, 0x12, 1, 2, arg0->f104, 0);
        return;
    }
    s32 ret = func_02089484((u8 *) arg0 + 0x2c);
    switch (ret) {
        case 0xc37:
        case 0xc38:
        case 0xc39: {
            s32 i = 0;
            u8 *p = data_0212593c;
            do {
                if (i == ret + (s32) 0xfffff3c9) {
                    func_02016708(arg0->arr[i], p + 8);
                    func_02049a88(arg0->arr[i], 2);
                } else {
                    func_02016708(arg0->arr[i], p);
                    func_02049a88(arg0->arr[i], 1);
                }
                i++;
                p += 0x10;
            } while (i < 3);
            break;
        }
        case 0xc3a:
        case 0xc3b:
        default:
            break;
    }
}
}
