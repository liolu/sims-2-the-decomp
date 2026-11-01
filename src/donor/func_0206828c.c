/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_ov094_0229a328 from https://github.com/banatic/acww-decomp src/ov094/func_ov094_0229a328.c (license: CC0-1.0), reused
 * by tools/donor_match.py */
int func_0206828c(int *arr, int bit) {
    return (arr[bit >> 5] & (1 << (bit & 31))) ? 1 : 0;
}
