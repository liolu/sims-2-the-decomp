/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_0203b5b0(s32, s32, s32, s32, s32);
M2C_UNK func_0203b740(s32, s32, s32);
extern u8 data_0211e5e0;
extern u8 data_0213d77c;
extern u8 data_0213d788;
void func_0204e574(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 off;
    u8 *rec;
    s32 *tbl;
    s32 *obj;
    s32 v;
    off = arg1 * 0x18;
    rec = &data_0211e5e0 + off;
    tbl = *(s32 **) (&data_0213d77c + off);
    obj = (s32 *) tbl[*(s32 *) (rec + 8) * arg2 + arg3];
    v   = arg6 + (obj[6] * *(s32 *) (rec + 12) + *(s32 *) (&data_0213d788 + off) + 0x14);
    if (arg7 != 0) {
        func_0203b5b0(v, arg5, arg4, arg7, 0);
        return;
    }
    func_0203b740(v, arg5, arg4);
}
