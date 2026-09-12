#pragma once

#include <cstdint>

namespace avro {

using BanglaChar = char32_t;


// -----------------------------------------------------------------------------
// Bangla numbers
// -----------------------------------------------------------------------------

inline constexpr BanglaChar b_0 = U'\u09E6';
inline constexpr BanglaChar b_1 = U'\u09E7';
inline constexpr BanglaChar b_2 = U'\u09E8';
inline constexpr BanglaChar b_3 = U'\u09E9';
inline constexpr BanglaChar b_4 = U'\u09EA';
inline constexpr BanglaChar b_5 = U'\u09EB';
inline constexpr BanglaChar b_6 = U'\u09EC';
inline constexpr BanglaChar b_7 = U'\u09ED';
inline constexpr BanglaChar b_8 = U'\u09EE';
inline constexpr BanglaChar b_9 = U'\u09EF';

// -----------------------------------------------------------------------------
// Bangla vowels and vowel signs
// -----------------------------------------------------------------------------

inline constexpr BanglaChar b_A     = U'\u0985';
inline constexpr BanglaChar b_AA    = U'\u0986';
inline constexpr BanglaChar b_AAkar = U'\u09BE';

inline constexpr BanglaChar b_I     = U'\u0987';
inline constexpr BanglaChar b_II    = U'\u0988';
inline constexpr BanglaChar b_IIkar = U'\u09C0';
inline constexpr BanglaChar b_Ikar  = U'\u09BF';

inline constexpr BanglaChar b_U     = U'\u0989';
inline constexpr BanglaChar b_Ukar  = U'\u09C1';
inline constexpr BanglaChar b_UU    = U'\u098A';
inline constexpr BanglaChar b_UUkar = U'\u09C2';

inline constexpr BanglaChar b_RRI    = U'\u098B';
inline constexpr BanglaChar b_RRIkar = U'\u09C3';

inline constexpr BanglaChar b_E    = U'\u098F';
inline constexpr BanglaChar b_Ekar = U'\u09C7';

inline constexpr BanglaChar b_O   = U'\u0993';
inline constexpr BanglaChar b_OI  = U'\u0990';
inline constexpr BanglaChar b_OIkar = U'\u09C8';

inline constexpr BanglaChar b_Okar = U'\u09CB';

inline constexpr BanglaChar b_OU    = U'\u0994';
inline constexpr BanglaChar b_OUkar = U'\u09CC';

// -----------------------------------------------------------------------------
// Bangla consonants
// -----------------------------------------------------------------------------

inline constexpr BanglaChar b_Anushar = U'\u0982';

inline constexpr BanglaChar b_B  = U'\u09AC';
inline constexpr BanglaChar b_Bh = U'\u09AD';

inline constexpr BanglaChar b_Bisharga = U'\u0983';

inline constexpr BanglaChar b_C  = U'\u099A';
inline constexpr BanglaChar b_CH = U'\u099B';

inline constexpr BanglaChar b_Chandra = U'\u0981';

inline constexpr BanglaChar b_D   = U'\u09A6';
inline constexpr BanglaChar b_Dd  = U'\u09A1';
inline constexpr BanglaChar b_Ddh = U'\u09A2';
inline constexpr BanglaChar b_Dh  = U'\u09A7';

inline constexpr BanglaChar b_G  = U'\u0997';
inline constexpr BanglaChar b_GH = U'\u0998';

inline constexpr BanglaChar b_H = U'\u09B9';

inline constexpr BanglaChar b_J  = U'\u099C';
inline constexpr BanglaChar b_JH = U'\u099D';

inline constexpr BanglaChar b_K  = U'\u0995';
inline constexpr BanglaChar b_KH = U'\u0996';

inline constexpr BanglaChar b_L = U'\u09B2';
inline constexpr BanglaChar b_M = U'\u09AE';
inline constexpr BanglaChar b_N = U'\u09A8';

inline constexpr BanglaChar b_NGA = U'\u0999';
inline constexpr BanglaChar b_Nn  = U'\u09A3';
inline constexpr BanglaChar b_NYA = U'\u099E';

inline constexpr BanglaChar b_P  = U'\u09AA';
inline constexpr BanglaChar b_Ph = U'\u09AB';

inline constexpr BanglaChar b_R = U'\u09B0';

inline constexpr BanglaChar b_Rr  = U'\u09DC';
inline constexpr BanglaChar b_Rrh = U'\u09DD';

inline constexpr BanglaChar b_S  = U'\u09B8';
inline constexpr BanglaChar b_Sh = U'\u09B6';
inline constexpr BanglaChar b_Ss = U'\u09B7';

inline constexpr BanglaChar b_T  = U'\u09A4';
inline constexpr BanglaChar b_Th = U'\u09A5';

inline constexpr BanglaChar b_Tt  = U'\u099F';
inline constexpr BanglaChar b_Tth = U'\u09A0';

inline constexpr BanglaChar b_Y = U'\u09DF';
inline constexpr BanglaChar b_Z = U'\u09AF';

inline constexpr BanglaChar AssamRa = U'\u09F0';
inline constexpr BanglaChar AssamVa = U'\u09F1';

inline constexpr BanglaChar b_Khandatta = U'\u09CE';

// -----------------------------------------------------------------------------
// Other Bangla characters
// -----------------------------------------------------------------------------

inline constexpr BanglaChar b_Dari    = U'\u0964';
inline constexpr BanglaChar b_Hasanta = U'\u09CD';
inline constexpr BanglaChar b_Taka    = U'\u09F3';

inline constexpr BanglaChar ZWJ  = U'\u200D';
inline constexpr BanglaChar ZWNJ = U'\u200C';

// -----------------------------------------------------------------------------
// Character classification
// -----------------------------------------------------------------------------

bool isVowel(BanglaChar ch);
bool isPureConsonant(BanglaChar ch);
bool isKar(BanglaChar ch);

} // namespace avro
