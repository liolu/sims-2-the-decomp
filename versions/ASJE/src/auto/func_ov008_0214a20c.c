/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213d670;
extern u8 data_0213d728;
void func_ov008_02149f94(void);
void func_0204e610(s32, s32, s32, s32, s32, void *);

void func_ov008_0214a20c(void) {
    func_0204e610(*(s32 *) &data_0213d728, 0, *(s32 *) (&data_0213d670 + 0xA4), 0, *(s32 *) (&data_0213d670 + 4),
                  (void *) func_ov008_02149f94);
}
