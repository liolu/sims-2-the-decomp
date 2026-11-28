/* compiler: 1.2/sp2p3 */
typedef unsigned int u32;
typedef int s32;

extern s32 data_02138814;
extern u32 data_02145a90;
void func_020fbe60(s32, u32, u32, u32, void *, s32);
void func_020fc58c(u32, u32, u32);

void func_020f8e10(u32 arg0, u32 arg1) {
    u32 v = data_02145a90;
    s32 h = data_02138814;
    if (h != -1) {
        func_020fbe60(h, arg0, v, arg1, 0, 0);
        return;
    }
    func_020fc58c(arg0, v, arg1);
}
