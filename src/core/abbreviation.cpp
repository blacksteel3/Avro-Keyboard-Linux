#include "abbreviation.hpp"

namespace avro {

std::u32string_view abbreviations(char32_t ch)
{
    switch (ch) {
        case U'A': return U"এ";
        case U'B': return U"বি";
        case U'C': return U"সি";
        case U'D': return U"ডি";
        case U'E': return U"ই";
        case U'F': return U"এফ";
        case U'G': return U"জি";
        case U'H': return U"এইচ";
        case U'I': return U"আই";
        case U'J': return U"জে";
        case U'K': return U"কে";
        case U'L': return U"এল";
        case U'M': return U"এম";
        case U'N': return U"এন";
        case U'O': return U"ও";
        case U'P': return U"পি";
        case U'Q': return U"কিউ";
        case U'R': return U"আর";
        case U'S': return U"এস";
        case U'T': return U"টি";
        case U'U': return U"ইউ";
        case U'V': return U"ভি";
        case U'W': return U"ডব্লিউ";
        case U'X': return U"এক্স";
        case U'Y': return U"ওয়াই";
        case U'Z': return U"জেড";
        case U'0': return U"০";
        case U'1': return U"১";
        case U'2': return U"২";
        case U'3': return U"৩";
        case U'4': return U"৪";
        case U'5': return U"৫";
        case U'6': return U"৬";
        case U'7': return U"৭";
        case U'8': return U"৮";
        case U'9': return U"৯";
        default: return {};
    }
}


bool isCharSpace(char32_t ch) {
    return ch == U' '
        || ch == U'\t'
        || ch == U'\n'
        || ch == U'\r';
}

std::u32string convertAbbreviation(std::u32string_view text) {
    std::size_t begin = 0;
    std::size_t end = text.size();

    while (begin < end && isCharSpace(text[begin])) {
        ++begin;
    }

    while (end > begin && isCharSpace(text[end - 1])) {
        --end;
    }

    if (begin == end) {
        return {};
    }

    const auto trimmed = text.substr(begin, end - begin);
    std::u32string result;
    result.reserve(trimmed.size());

    for (char32_t ch : trimmed) {
        if (ch >= U'a' && ch <= U'z') {
            return {};
        }

        const auto replacement = abbreviations(ch);
        if (replacement.empty()) {
            result.push_back(ch);
        } else {
            result.append(replacement);
        }
    }

    return result;
}
}