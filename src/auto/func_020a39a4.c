/* compiler: 1.2/sp2p3 */
typedef int s32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef struct E {
    u8 pad[0xe];
    u8 b;
    u8 pad2[5];
} E;
typedef struct S {
    s32 f0;
    u16 h4;
    u16 h6;
    u16 h8;
    u8 pad[0x62];
    u16 h6c;
    u16 h6e;
    u16 h70;
    u16 pad72;
    s32 f74;
    s32 f78;
    s32 f7c;
    s32 f80;
    s32 f84;
    u8 pad88[0x10];
    u8 b98;
} S;
void *func_0204688c();
void *func_02046880();
void func_02046384();
void func_020bbcf0();
extern S *data_0213e6f0;
extern void *data_0213e6ec;
extern char data_02125064;
extern u8 *data_0213e434;

void func_020a39a4(s32 arg0, u8 arg1) {
    u8 i;
    s32 z;
    data_0213e6f0 = func_0204688c(0x9c, 3, 4);
    func_02046384(data_0213e6f0, 0, 0x9c);
    data_0213e6ec = func_02046880(0x1000, 3, 4);
    func_02046384(data_0213e6ec, 0, 0x1000);
    data_0213e6f0->f0 = arg0;
    func_020bbcf0((u8 *) data_0213e6f0->f0 + 0x1a4, 1, &data_02125064, 8, 0, 0);
    data_0213e6f0->b98 = arg1;
    data_0213e6f0->f84 = *(s32 *) (data_0213e434 + 0x4000 + 0x694);
    z                  = 0;
    data_0213e6f0->f74 = z;
    data_0213e6f0->h70 = 3;
    data_0213e6f0->h6c = 0x40;
    data_0213e6f0->h6e = z;
    data_0213e6f0->f78 = z;
    data_0213e6f0->h6  = z;
    data_0213e6f0->h8  = (data_0213e6f0->f80 + 1) * 5;
    data_0213e6f0->f7c = 0xf;
    for (i = 0; i < 0x10; i++) {
        ((u8 *) data_0213e6f0 + i * 6)[0xe] = z;
    }
    data_0213e6f0->f80 = z;
    data_0213e6f0->f7c = 0x1e;
    data_0213e6f0->h4  = 0x38;
}
