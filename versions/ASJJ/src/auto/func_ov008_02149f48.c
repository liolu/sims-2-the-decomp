/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213d290;
extern u8 data_0213d348;
void func_ov008_021499d0(void);
void func_0204e378(s32, s32, s32, s32, s32, void *);

void func_ov008_02149f48(void *arg0) {
    func_0204e378(*(s32 *) &data_0213d348, 0, *(s32 *) ((u8 *) arg0 + 0x70), 0, *(s32 *) (&data_0213d290 + 4),
                  (void *) func_ov008_021499d0);
}
