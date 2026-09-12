#include "BanglaChars.hpp"

#include <array>
#include <cstddef>

namespace avro {

namespace {

template <std::size_t N>

constexpr bool contains(
    const std::array<BanglaChar, 
    N>& values, 
    BanglaChar character)
{
    for (BanglaChar value : values) {
        if (value == character) {
            return true;
        }
    }

    return false;
}


// vowels
constexpr std::array vowelCharacters{
    b_A,
    b_AA,
    b_AAkar,
    b_I,
    b_II,
    b_IIkar,
    b_Ikar,
    b_U,
    b_Ukar,
    b_UU,
    b_UUkar,
    b_RRI,
    b_RRIkar,
    b_E,
    b_Ekar,
    b_OI,
    b_OIkar,
    b_O,
    b_Okar,
    b_OU,
    b_OUkar
};


// consonants
constexpr std::array pureConsonantCharacters{
    b_B,
    b_Bh,
    b_C,
    b_CH,
    b_D,
    b_Dd,
    b_Ddh,
    b_Dh,
    b_G,
    b_GH,
    b_H,
    b_J,
    b_JH,
    b_K,
    b_KH,
    b_L,
    b_M,
    b_N,
    b_NGA,
    b_Nn,
    b_NYA,
    b_P,
    b_Ph,
    b_R,
    b_Rr,
    b_Rrh,
    b_S,
    b_Sh,
    b_Ss,
    b_T,
    b_Th,
    b_Tt,
    b_Tth,
    b_Z,
    b_Y,
    b_Khandatta,
    AssamRa,
    AssamVa
};


constexpr std::array karCharacters{
    b_AAkar,
    b_IIkar,
    b_Ikar,
    b_Ukar,
    b_UUkar,
    b_RRIkar,
    b_Ekar,
    b_OIkar,
    b_OUkar
};

} // namespace


bool isVowel(BanglaChar character) {
    return contains(vowelCharacters, character);
}


bool isPureConsonant(BanglaChar character) {
    return contains(pureConsonantCharacters, character);
}


bool isKar(BanglaChar character) {
    return contains(karCharacters, character);
}

} // namespace avro