/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ad918 from projets/pokemon-dash/src/donor/func_020ad918.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
#pragma cplusplus off
char *func_0210a4ec(char *destination, const char *source, unsigned int length) {
    unsigned char *output      = (unsigned char *) destination;
    const unsigned char *input = (const unsigned char *) source;
    unsigned char *written;

    if (length == 0) {
        return destination;
    }
    do {
        written   = output;
        *output++ = *input++;
        if (*written == 0) {
            while (--length != 0) {
                *output++ = 0;
            }
            return destination;
        }
    } while (--length != 0);
    return destination;
}
