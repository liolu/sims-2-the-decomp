/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u32 data_0213d5b8;
extern u32 data_0213d5bc;
extern u32 *data_0213d5c8;
void func_0204aa34(u32 arg0) {
    u32 i;
    u32 *tbl;
    u32 n;
    u32 c;
    n = data_0213d5b8;
    c = data_0213d5bc;
    if (c == n) {
        return;
    }
    data_0213d5bc = c + 1;
    i             = 0;
    if (i >= n) {
        return;
    }
    tbl = data_0213d5c8;
    do {
        if (tbl[i] == 0) {
            tbl[i] = arg0;
            return;
        }
        i++;
    } while (i < n);
}
