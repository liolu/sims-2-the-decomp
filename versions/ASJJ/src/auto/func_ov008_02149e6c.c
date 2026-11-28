/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213d290;
extern u8 data_0213d348;
void func_ov008_02149bf4(void);
void func_0204e624(s32, s32, s32, s32, s32, void *);

void func_ov008_02149e6c(void) {
    func_0204e624(*(s32 *) &data_0213d348, 0, *(s32 *) (&data_0213d290 + 0xA4), 0, *(s32 *) (&data_0213d290 + 4),
                  (void *) func_ov008_02149bf4);
}
