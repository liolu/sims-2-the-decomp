/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02016c18(u8 *);

void func_ov010_02152718(u8 *arg0) {
    void (*fn)(u8 *) = *(void (**)(u8 *))(arg0 + 0x78);
    if (fn != 0) {
        fn(arg0);
    }
    func_02016c18(arg0);
}
