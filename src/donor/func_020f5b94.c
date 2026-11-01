/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MTX_ScaleApply44 from https://github.com/aricloverEXTRA/PartnersInTimeDECOMP src/nitro/math/fx_mtx44.c (license: none),
 * reused by tools/donor_match.py */
typedef signed int s32;
typedef signed long long int s64;
typedef s32 fx32;
typedef s64 fx64;
typedef struct MtxFx44 {
    fx32 _00, _01, _02, _03;
    fx32 _10, _11, _12, _13;
    fx32 _20, _21, _22, _23;
    fx32 _30, _31, _32, _33;
} MtxFx44;
extern void func_020f5b94(const MtxFx44 *source, MtxFx44 *result, fx32 x, fx32 y, fx32 z);
void func_020f5b94(const MtxFx44 *source, MtxFx44 *result, fx32 x, fx32 y, fx32 z) {
    result->_00 = ((fx64) x * source->_00) >> 12;
    result->_01 = ((fx64) x * source->_01) >> 12;
    result->_02 = ((fx64) x * source->_02) >> 12;
    result->_03 = ((fx64) x * source->_03) >> 12;
    result->_10 = ((fx64) y * source->_10) >> 12;
    result->_11 = ((fx64) y * source->_11) >> 12;
    result->_12 = ((fx64) y * source->_12) >> 12;
    result->_13 = ((fx64) y * source->_13) >> 12;
    result->_20 = ((fx64) z * source->_20) >> 12;
    result->_21 = ((fx64) z * source->_21) >> 12;
    result->_22 = ((fx64) z * source->_22) >> 12;
    result->_23 = ((fx64) z * source->_23) >> 12;
    if (source != result) {
        fx32 copy_x = source->_30;
        fx32 copy_y = source->_31;
        result->_30 = copy_x;
        result->_31 = copy_y;
        copy_x      = source->_32;
        copy_y      = source->_33;
        result->_32 = copy_x;
        result->_33 = copy_y;
    }
}
