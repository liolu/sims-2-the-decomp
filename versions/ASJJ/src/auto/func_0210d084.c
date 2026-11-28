/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207c884 from projets/club-house-games/src/donor/func_0207c884.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern int func_0210d084(u32 value);
int func_0210d084(u32 value) {
    u8 *byte;
    int zeros;

    if (value != 0) {
        byte  = (u8 *) &value;
        zeros = 0;
        while (*byte == 0) {
            byte++;
            zeros += 8;
        }
        *byte = ~*byte;
        while (*byte & 1) {
            zeros++;
            *byte >>= 1;
        }
        return zeros;
    }
    return 32;
}
