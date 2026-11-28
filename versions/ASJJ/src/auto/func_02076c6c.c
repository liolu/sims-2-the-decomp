/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Word0213e584 {
    s32 value;
} Word0213e584;

extern u8 *data_0213e0a8;
extern u8 *data_0213df5c;
extern Word0213e584 data_0213e0ac;
void func_0207201c(void *);
void func_02087df8(void *);
void func_0208aa40(void *, s32, Word0213e584);
void func_0208a028(void *);
void func_020d505c(void);

void func_02076c6c(u8 *obj) {
    func_0207201c(obj + 0x24);
    func_02087df8(data_0213e0a8);
    func_0208aa40(data_0213df5c + 0x4650, 1, data_0213e0ac);
    func_0208a028(data_0213df5c + 0x4650);
    func_020d505c();
}
