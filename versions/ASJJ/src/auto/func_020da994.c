/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

extern unsigned long long func_020fb350();
extern unsigned long long data_021429e0;

unsigned int func_020da994(void) {
    unsigned long long v;
    unsigned long long d;
    unsigned int t;

    v = func_020fb350() << 6;
    if (data_021429e0 == 0) {
        data_021429e0 = v;
    }
    d = v - data_021429e0;
    t = (unsigned int) ((unsigned long long) (unsigned int) (d >> 32) * 0x1F49A);
    d = d - (unsigned long long) t * 0x82EA;
    return (unsigned int) ((unsigned long long) t + ((d * 0x7D269B01ULL) >> 46));
}
