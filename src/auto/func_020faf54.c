/* compiler: 1.2/sp2p3 */
typedef unsigned int u32;
typedef int s32;
extern s32 data_0214623c;
extern u32 func_020fa93c(void);
u32 func_020faf54(s32 id) {
    switch (id) {
        case 0:
            return 0x02152F00;
        case 2:
            if (data_0214623c == 0 || (func_020fa93c() & 3) == 1) {
                return 0;
            }
            return 0x02400000;
        case 3:
            return 0x01FFE460;
        case 4:
            return 0x027E20E0;
        case 5:
            return 0x027FF000;
        case 6:
            return 0x037F8000;
        default:
            return 0;
    }
}
