/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213d7b0;
extern u8 data_0213d868;
void func_ov008_0214a0d4(void);
void func_0204e688(s32, s32, s32, s32, s32, void *);

void func_ov008_0214a34c(void) {
    func_0204e688(*(s32 *) &data_0213d868, 0, *(s32 *) (&data_0213d7b0 + 0xA4), 0, *(s32 *) (&data_0213d7b0 + 4),
                  (void *) func_ov008_0214a0d4);
}
