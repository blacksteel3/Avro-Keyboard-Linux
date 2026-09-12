#pragma once
#include <cstdint>

namespace avro {

// Numbers
inline constexpr char32_t b_1 = U'\u09E7';
inline constexpr char32_t b_2 = U'\u09E8';
inline constexpr char32_t b_3 = U'\u09E9';
inline constexpr char32_t b_4 = U'\u09EA';
inline constexpr char32_t b_5 = U'\u09EB';
inline constexpr char32_t b_6 = U'\u09EC';
inline constexpr char32_t b_7 = U'\u09ED';
inline constexpr char32_t b_8 = U'\u09EE';
inline constexpr char32_t b_9 = U'\u09EF';

// Vowels and signs
inline constexpr char32_t b_o     = U'\u0985';
inline constexpr char32_t b_a    = U'\u0986';
inline constexpr char32_t b_akar = U'\u09BE';

inline constexpr char32_t b_i     = U'\u0987';
inline constexpr char32_t b_ikar  = U'\u09BF';
inline constexpr char32_t b_I    = U'\u0988';
inline constexpr char32_t b_Ikar = U'\u09C0';

inline constexpr char32_t b_u     = U'\u0989';
inline constexpr char32_t b_ukar  = U'\u09C1';
inline constexpr char32_t b_U    = U'\u098A';
inline constexpr char32_t b_Ukar = U'\u09C2';

inline constexpr char32_t b_rri    = U'\u098B';
inline constexpr char32_t b_rrikar = U'\u09C3';

inline constexpr char32_t b_e    = U'\u098F';
inline constexpr char32_t b_ekar = U'\u09C7';
inline constexpr char32_t b_OI  = U'\u0990';
inline constexpr char32_t b_OIkar = U'\u09C8';

inline constexpr char32_t b_O   = U'\u0993';
inline constexpr char32_t b_Okar = U'\u09CB';
inline constexpr char32_t b_OU    = U'\u0994';
inline constexpr char32_t b_OUkar = U'\u09CC';

// constonants
inline constexpr char32_t b_k  = U'\u0995';
inline constexpr char32_t b_kh = U'\u0996';
inline constexpr char32_t b_g  = U'\u0997';
inline constexpr char32_t b_gh = U'\u0998';
inline constexpr char32_t b_Ng = U'\u0999';

inline constexpr char32_t b_c  = U'\u099A';
inline constexpr char32_t b_ch = U'\u099B';
inline constexpr char32_t b_j  = U'\u099C';
inline constexpr char32_t b_jh = U'\u099D';
inline constexpr char32_t b_NG = U'\u099E';

inline constexpr char32_t b_T  = U'\u099F';
inline constexpr char32_t b_Th = U'\u09A0';
inline constexpr char32_t b_D  = U'\u09A1';
inline constexpr char32_t b_Dh = U'\u09A2';
inline constexpr char32_t b_N  = U'\u09A3';

inline constexpr char32_t b_t  = U'\u09A4';
inline constexpr char32_t b_th = U'\u09A5';
inline constexpr char32_t b_d   = U'\u09A6';
inline constexpr char32_t b_dh  = U'\u09A7';
inline constexpr char32_t b_n = U'\u09A8';

inline constexpr char32_t b_p  = U'\u09AA';
inline constexpr char32_t b_ph = U'\u09AB';  // f
inline constexpr char32_t b_b  = U'\u09AC';
inline constexpr char32_t b_bh = U'\u09AD';  // v
inline constexpr char32_t b_m = U'\u09AE';

inline constexpr char32_t b_z = U'\u09AF';
inline constexpr char32_t b_r = U'\u09B0';
inline constexpr char32_t b_l = U'\u09B2';
inline constexpr char32_t b_sh = U'\u09B6';  // S
inline constexpr char32_t b_Sh = U'\u09B7';

inline constexpr char32_t b_s  = U'\u09B8';
inline constexpr char32_t b_h = U'\u09B9';
inline constexpr char32_t b_R  = U'\u09DC';
inline constexpr char32_t b_Rh = U'\u09DD';
inline constexpr char32_t b_y = U'\u09DF';  // Y

inline constexpr char32_t b_Khandatta = U'\u09CE';
inline constexpr char32_t b_Anushar = U'\u0982';
inline constexpr char32_t b_Bisharga = U'\u0983';
inline constexpr char32_t b_Chandra = U'\u0981';

// Symbols
inline constexpr char32_t b_Dari    = U'\u0964';
inline constexpr char32_t b_Hasanta = U'\u09CD';
inline constexpr char32_t b_Taka    = U'\u09F3';

// Special
inline constexpr char32_t ZWJ  = U'\u200D';
inline constexpr char32_t ZWNJ = U'\u200C';


// Methods
bool isVowel(char32_t ch);
bool isConsonant(char32_t ch);
bool isKar(char32_t ch);

} // namespace avro