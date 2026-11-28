/* compiler: 2.0/sp1p5  */
/* func_0203ba58 from battle-of-giants-dinosaurs/src/auto/func_0203ba58.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void *data_021499e8;
void func_02111d4c(s32 arg0, s32 arg1, void *arg2) {
    (*(void **) ((s8 *) (arg2) + (0))) = (void *) data_021499e8;
    (*(s32 *) ((s8 *) (arg2) + (4)))   = arg1;
    (*(s32 *) ((s8 *) (arg2) + (8)))   = arg0;
    data_021499e8                      = arg2;
}
