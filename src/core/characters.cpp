#include "characters.hpp"

namespace avro {

bool isVowel(char32_t ch) {
    return (ch == b_o || ch == b_a || ch == b_akar ||
        ch == b_i || ch == b_ikar || ch == b_I || ch == b_Ikar ||
        ch == b_u || ch == b_ukar || ch == b_U || ch == b_Ukar ||
        ch == b_rri || ch == b_rrikar ||
        ch == b_e || ch == b_ekar || ch == b_OI || ch == b_OIkar ||
        ch == b_O || ch == b_Okar || ch == b_OU || ch == b_OUkar
    );
}

bool isConsonant(char32_t ch) {
    return (ch == b_k || ch == b_kh || ch == b_g || ch == b_gh || ch == b_Ng ||
        ch == b_c || ch == b_ch || ch == b_j || ch == b_jh || ch == b_NG ||
        ch == b_T || ch == b_Th || ch == b_D || ch == b_Dh || ch == b_N ||
        ch == b_t || ch == b_th || ch == b_d || ch == b_dh || ch == b_n ||
        ch == b_p || ch == b_ph || ch == b_b || ch == b_bh || ch == b_m ||
        ch == b_z || ch == b_r || ch == b_l || ch == b_sh || ch == b_Sh ||
        ch == b_s || ch == b_h || ch == b_R || ch == b_Rh || ch == b_y
        || ch == b_Khandatta
    );
}

bool isKar(char32_t ch)
{
    return (ch == b_akar || ch == b_ikar || ch == b_Ikar ||
        ch == b_ukar || ch == b_Ukar || ch == b_rrikar ||
        ch == b_ekar || ch == b_OIkar || ch == b_Okar || ch == b_OUkar
    );
}

} // namespace avro