/* compiler: 1.2/sp2p3 */
typedef signed char s8;
typedef long s32;
extern char __exception_table_start__[];
extern char __exception_table_end__[];
s32 __FindExceptionTable(void *arg0) {
    (*(s32 *) ((s8 *) (arg0) + (0xC)))  = (s32) __exception_table_start__;
    (*(s32 *) ((s8 *) (arg0) + (0x10))) = (s32) __exception_table_end__;
    return 1;
}
