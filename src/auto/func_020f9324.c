/* compiler: 1.2/sp2p3 */
typedef unsigned int u32;
typedef int s32;

extern s32 data_02138d28;
extern u32 data_02145f70;
void _Z14DMAMemcpyAsyncijjjPFviEi(s32, u32, u32, u32, void *, s32);
void func_020fcaa0(u32, u32, u32);

void func_020f9324(u32 arg0, u32 arg1) {
    u32 v = data_02145f70;
    s32 h = data_02138d28;
    if (h != -1) {
        _Z14DMAMemcpyAsyncijjjPFviEi(h, arg0, v, arg1, 0, 0);
        return;
    }
    func_020fcaa0(arg0, v, arg1);
}
