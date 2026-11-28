/* compiler: 1.2/sp2p3 */
typedef unsigned int u32;
typedef int s32;
extern s32 data_021460fc;
extern u32 func_020fa800(void);
u32 func_020fae18(s32 id) {
    switch (id) {
        case 0:
            return 0x2152DC0;
        case 2:
            if (data_021460fc == 0 || (func_020fa800() & 3) == 1) {
                return 0;
            }
            return 0x02400000;
        case 3:
            return 0x1FFE460;
        case 4:
            return 0x27E20E0;
        case 5:
            return 0x027FF000;
        case 6:
            return 0x037F8000;
        default:
            return 0;
    }
}
