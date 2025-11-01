/**
 * Least common multiple
*/

#include <iostream>
#include <numeric>
#include <vector>

int lcm(const unsigned int a, const unsigned int b) {
    unsigned int h = std::gcd(a, b);
    return (h ? (a * (b/h)) : (0));
}

template<typename Input>
int lcmr(Input first, Input last){
    return (std::accumulate(first, last, 1, lcm));
}

int add(const unsigned int a, const unsigned int b) {
    return (a + b);
}

template<typename Input>
int totalr(Input first, Input last){
    return (std::accumulate(first, last, 0, add));
}

int main (void) {

    unsigned int x = 0, y = 0, result = 0;
    std::vector<int> data = {2, 3, 4, 6};

    std::cout << "Enter first number  : ";
    std::cin >> x;
    std::cout << "Enter second number : ";
    std::cin >> y;
    result = lcm(x, y);
    std::cout << "Least common multiple : " << result << "\n";

    result = lcmr(data.begin(), data.end());
    std::cout << "Least common multiple for the range: " << result << "\n";

    result = totalr(data.begin(), data.end());
    std::cout << "Total for the range: " << result << "\n";
}
