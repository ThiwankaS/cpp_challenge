/**
 * greatest comman divisor
*/

#include <iostream>
#include <sstream>
#include <numeric>


unsigned int gcd(const unsigned int a, const unsigned int b) {
    return (b == 0 ?
        a : gcd(b, a % b)
    );

}

int main(void) {
    unsigned int a = 0, b = 0, result = 0;
    std::cout << "Enter first number  : ";
    std::cin >> a;
    std::cout << "Enter second number : ";
    std::cin >> b;

    result = gcd(a, b);

    std::ostringstream ss;

    ss << "gcd("
        << a
        << ","
        << b
        << ") : "
        << result;

    std::cout << ss.str() << std::endl;

    return (EXIT_SUCCESS);
}
