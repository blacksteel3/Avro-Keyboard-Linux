#include "Abbreviation.hpp"
#include "BanglaChars.hpp"

#include <iostream>
#include <string>
#include <string_view>

namespace {

std::string toUtf8(std::u32string_view text)
{
    std::string result;

    for (char32_t character : text) {
        if (character <= 0x7F) {
            result += static_cast<char>(character);
        } else if (character <= 0x7FF) {
            result += static_cast<char>(0xC0 | (character >> 6));
            result += static_cast<char>(0x80 | (character & 0x3F));
        } else if (character <= 0xFFFF) {
            result += static_cast<char>(0xE0 | (character >> 12));
            result += static_cast<char>(0x80 | ((character >> 6) & 0x3F));
            result += static_cast<char>(0x80 | (character & 0x3F));
        } else {
            result += static_cast<char>(0xF0 | (character >> 18));
            result += static_cast<char>(0x80 | ((character >> 12) & 0x3F));
            result += static_cast<char>(0x80 | ((character >> 6) & 0x3F));
            result += static_cast<char>(0x80 | (character & 0x3F));
        }
    }

    return result;
}

char32_t convertCharacter(char character)
{
    switch (character) {
    case 'a':
        return avro::b_A;

    case 'm':
        return avro::b_M;

    case 'i':
        return avro::b_I;

    case 'B':
        return avro::b_B;

    case 'C':
        return avro::b_C;

    case '1':
        return avro::b_1;

    case '2':
        return avro::b_2;

    case '3':
        return avro::b_3;

    case '4':
        return avro::b_4;

    case '5':
        return avro::b_5;

    case '6':
        return avro::b_6;

    case '7':
        return avro::b_7;

    case '8':
        return avro::b_8;

    case '9':
        return avro::b_9;

    case '0':
        return avro::b_0;

    default:
        return static_cast<unsigned char>(character);
    }
}

std::u32string convertEnglish(std::string_view english)
{
    std::u32string result;

    for (char character : english) {
        result.push_back(convertCharacter(character));
    }

    return result;
}

} // namespace

int main()
{
    std::string english;

    while (true) {
        std::cout << "Enter character: ";

        std::string input;

        if (!std::getline(std::cin, input)) {
            break;
        }

        // Empty Enter terminates the program.
        if (input.empty()) {
            break;
        }

        // Temporary Backspace representation.
        if (input == "#") {
            if (!english.empty()) {
                english.pop_back();
            }
        }
        // Space commits/clears the current composition.
        else if (input == " ") {
            english.clear();
        }
        // Normal character input.
        else {
            english += input;
        }

        const std::u32string bangla = convertEnglish(english);
        const std::u32string abbreviation =
            avro::checkConvertAbbreviation(english);

        std::cout << "English: " << english << '\n';
        std::cout << "Bangla: " << toUtf8(bangla) << '\n';

        std::cout << "Suggestions:";

        if (!abbreviation.empty()) {
            std::cout << ' '
                      << toUtf8(bangla)
                      << ", "
                      << toUtf8(abbreviation);
        }

        std::cout << "\n\n";
    }

    std::cout << "Program ran successfully!\n";

    return 0;
}