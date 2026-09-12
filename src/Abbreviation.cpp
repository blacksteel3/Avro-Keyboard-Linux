#include "Abbreviation.hpp"

#include <array>
#include <string>
#include <string_view>

namespace avro {
namespace {

using Mapping = std::u32string_view;

constexpr std::array<Mapping, 256> abbreviationMappings = [] {
    std::array<Mapping, 256> mappings{};

    // Letters
    mappings['A'] = U"এ";
    mappings['B'] = U"বি";
    mappings['C'] = U"সি";
    mappings['D'] = U"ডি";
    mappings['E'] = U"ই";
    mappings['F'] = U"এফ";
    mappings['G'] = U"জি";
    mappings['H'] = U"এইচ";
    mappings['I'] = U"আই";
    mappings['J'] = U"জে";
    mappings['K'] = U"কে";
    mappings['L'] = U"এল";
    mappings['M'] = U"এম";
    mappings['N'] = U"এন";
    mappings['O'] = U"ও";
    mappings['P'] = U"পি";
    mappings['Q'] = U"কিউ";
    mappings['R'] = U"আর";
    mappings['S'] = U"এস";
    mappings['T'] = U"টি";
    mappings['U'] = U"ইউ";
    mappings['V'] = U"ভি";
    mappings['W'] = U"ডব্লিউ";
    mappings['X'] = U"এক্স";
    mappings['Y'] = U"ওয়াই";
    mappings['Z'] = U"জেড";

    // Digits
    mappings['0'] = U"০";
    mappings['1'] = U"১";
    mappings['2'] = U"২";
    mappings['3'] = U"৩";
    mappings['4'] = U"৪";
    mappings['5'] = U"৫";
    mappings['6'] = U"৬";
    mappings['7'] = U"৭";
    mappings['8'] = U"৮";
    mappings['9'] = U"৯";

    return mappings;
}();

} // namespace

std::u32string checkConvertAbbreviation(const std::string& english) {
    const auto first = english.find_first_not_of(" \t\n\r\f\v");

    if (first == std::string::npos) {
        return {};
    }

    const auto last = english.find_last_not_of(" \t\n\r\f\v");

    const std::string_view trimmed{
        english.data() + first,
        last - first + 1
    };

    std::u32string result;

    for (unsigned char character : trimmed) {
        if (character >= 'a' && character <= 'z') {
            return {};
        }

        const Mapping mapping = abbreviationMappings[character];

        if (!mapping.empty()) {
            result.append(mapping);
        } else {
            result.push_back(static_cast<char32_t>(character));
        }
    }

    return result;
}

} // namespace avro