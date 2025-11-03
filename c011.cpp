/**
 * converting a positive integer in to roman number literals
 * no error handling
*/

#include <iostream>
#include <vector>
#include <utility>
#include <string>

std::string to_roman(uint16_t number) {

    std::string result;

    std::vector<std::pair<uint16_t, const char *>>roman {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };

    for(auto const& kvp : roman){
        while(number >= kvp.first){
            result += kvp.second;
            number -= kvp.first;
        }
    }
    return (result);
}

int main(void) {
    int number = 0;
    std::cout << "Enter number : ";
    std::cin >> number;
    std::cout << number << " in roman number format : " << to_roman(number) << "\n";
    return (EXIT_SUCCESS);
}
