/* compiler: 1.2/sp2p3 */
typedef void (*cb)(void);
extern cb ARM9_CTOR_START[];
void func_02111c40(void) {
    cb *callbacks = ARM9_CTOR_START;
    while (callbacks != 0 && *callbacks != 0) {
        (*callbacks)();
        callbacks++;
    }
}
