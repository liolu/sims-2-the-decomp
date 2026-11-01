/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020bec40 from https://github.com/banatic/acww-decomp src/main/func_020bec40.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
struct UnkStruct_020bec40 {
    unsigned short pad_00[4];
    unsigned short unk_08;
};
int func_020c4330(struct UnkStruct_020bec40 *p, int bit) {
    return (p->unk_08 & (1 << bit)) ? 1 : 0;
}
