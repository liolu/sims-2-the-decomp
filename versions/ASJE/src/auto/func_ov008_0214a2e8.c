/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213d670;
extern u8 data_0213d728;
void func_ov008_02149d70(void);
void func_0204e364(s32, s32, s32, s32, s32, void *);

void func_ov008_0214a2e8(void *arg0) {
    func_0204e364(*(s32 *) &data_0213d728, 0, *(s32 *) ((u8 *) arg0 + 0x70), 0, *(s32 *) (&data_0213d670 + 4),
                  (void *) func_ov008_02149d70);
}
