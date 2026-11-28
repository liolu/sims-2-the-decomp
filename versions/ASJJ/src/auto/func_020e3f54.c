/* compiler: 1.2/sp2p3 -nointerworking */
typedef unsigned char u8;
typedef int s32;
extern void func_020df254(s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_020df044(s32);
extern u8 data_02142b40;
extern void func_020e40d8(void);
extern void func_020e3ff4(void);
extern void func_020e4104(void);

s32 func_020e3f54(s32 arg0) {
    s32 one;

    if (!(arg0 & 0xF)) {
        func_020df254(0, 0, 3, 6, 0, 5, 5, 6);
    } else {
        return 0;
    }
    one                                = 1;
    *(s32 *) (&data_02142b40 + 0x80)   = one;
    *(void **) (&data_02142b40 + 0x70) = (void *) func_020e40d8;
    *(void **) (&data_02142b40 + 0x74) = (void *) func_020e3ff4;
    *(s32 *) (&data_02142b40 + 0x88)   = 0;
    *(s32 *) (&data_02142b40 + 0x84)   = 0;
    *(void **) (&data_02142b40 + 0x78) = (void *) func_020e4104;
    func_020df044(arg0 & 0x70000000);
    return one;
}
