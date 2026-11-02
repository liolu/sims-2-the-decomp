/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213d7b0;
extern u8 data_0213d868;
void func_ov008_02149eb0(void);
void func_0204e3dc(s32, s32, s32, s32, s32, void *);

void func_ov008_0214a428(void *arg0) {
    func_0204e3dc(*(s32 *) &data_0213d868, 0, *(s32 *) ((u8 *) arg0 + 0x70), 0, *(s32 *) (&data_0213d7b0 + 4),
                  (void *) func_ov008_02149eb0);
}
