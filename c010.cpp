/**
 * gray code
*/

#include <iostream>
#include <string>
#include <bitset>

uint32_t gray_encode(const uint32_t num) {
    // num xor (num logocally right shifted 1 time)
    return (num ^ (num >> 1));
}

uint32_t gray_decode(uint32_t gray) {
    for(uint32_t bit = 1U << 31; bit > 1; bit >>= 1) {
        if(gray && bit) {
            gray ^= bit >> 1;
        }
    }
    return (gray);
}

std::string to_binay(uint32_t value, const uint32_t digits) {
    return (
        std::bitset<32>(value).to_string().substr(32 - digits, digits)
    );
}

int main(void) {
    std::cout << "Number\tBinary\tGray\tDecoded\n";
    std::cout << "------\t------\t------\t------\n";

    for(uint32_t i = 0; i < 32; i++) {
        auto encg = gray_encode(i);
        auto decg = gray_decode(encg);
        std::cout
            << i << "\t"
            << to_binay(i, 5) << "\t"
            << to_binay(encg, 5) << "\t"
            << decg << "\n";
    }
    return (EXIT_SUCCESS);
}
