/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Word0213e584 {
    s32 value;
} Word0213e584;

extern u8 *data_0213e440;
extern u8 *data_0213e2f4;
extern Word0213e584 data_0213e444;
void func_02071fb4(void *);
void func_02087ea0(void *);
void func_0208aadc(void *, s32, Word0213e584);
void func_0208a0c4(void *);
void func_020d5434(void);

void func_02076c18(u8 *obj) {
    func_02071fb4(obj + 0x24);
    func_02087ea0(data_0213e440);
    func_0208aadc(data_0213e2f4 + 0x4648, 1, data_0213e444);
    func_0208a0c4(data_0213e2f4 + 0x4648);
    func_020d5434();
}
